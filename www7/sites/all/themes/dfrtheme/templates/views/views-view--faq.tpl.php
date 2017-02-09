<?php
  /**
   * Created by PhpStorm.
   * User: floris
   * Date: 23/10/16
   * Time: 14:28
   */
  
?>

<section class="cd-faq">
  <ul class="cd-faq-categories">
    <?php $i = 0;?>
    <?php foreach($faq as $key => $faq_cat) : ?>
      
      <?php
        $class = "";
        if($i == 0) {
          $class="selected first";
        }
        elseif($i == count($faq)-1 ) {
          $class = "last";
        }
        
      ?>
      <li><a href="<?= '#'.$key ?>" class="<?= $class ?>" ><?= $faq_cat['category_name'] ?></a></li>
      <?php $i++; ?>
      
    <?php endforeach; ?>
  </ul>
  
  <div class="cd-faq-items">
    <?php foreach($faq as $key => $faq_cat) : ?>
      <ul id="<?= $key ?>" class="cd-faq-group">
        <li class="cd-faq-title"><h2><?= $faq_cat['category_name'] ?></h2></li>
        
        <?php foreach($faq_cat['results'] as $faq_item) : ?>
          <li>
            <a class="cd-faq-trigger" href="#0"><?= $faq_item['title']?></a>
            <div class="cd-faq-content">
              <?= $faq_item['body']?>
            </div>
          </li>
        <?php endforeach; ?>
        
      </ul>
    <?php endforeach; ?>
  </div>
  
  <a href="#0" class="cd-close-panel">Close</a>
</section>
