<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<?php
global $user;
$quantity = 0;
$order = commerce_cart_order_load($user->uid);
if ($order) {
  $wrapper = entity_metadata_wrapper('commerce_order', $order);
  $line_items = $wrapper->commerce_line_items;
  $quantity = commerce_line_items_quantity($line_items, commerce_product_line_item_types());
  $order_total = commerce_line_items_total($line_items);
}
$user_url = url('user');
if($user->uid) {
  $user_url = url('user/' . $user->uid);
}
?>
<div class="cart-form-simple">
  <ul class="list-unstyled list-inline">
    
    <li>
      <a href="<?php print $user_url; ?>"><i class="fa fa-user"></i> My Account</a>
    </li>
    <li>
      <a href="<?php print url('cart'); ?>" alt="View cart"  class="dtooltip" data-toggle="tooltip" data-placement="bottom" data-original-title="<?php print $quantity; ?> item in your cart">
       <span>
          <i class="fa fa-shopping-cart"></i>
       </span> 
       <span><?php print $quantity; ?> Items - <?php print isset($order_total) ? commerce_currency_format($order_total['amount'], $order_total['currency_code']) : "$0.00"; ?></span>
      </a>
    </li>
  </ul>
</div>