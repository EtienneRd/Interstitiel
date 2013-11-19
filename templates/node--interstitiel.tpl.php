<?php
/**
 * @file node.tpl.php
 * See http://api.drupal.org/api/drupal/modules!node!node.tpl.php/7
 * 
 * Theme suggestions:
 * - node.tpl.php
 * - node--TYPE.tpl.php
 * - node--ID.tpl.php
 * - node--VIEW_MODE.tpl.php
 * - node--TYPE--VIEW_MODE.tpl.php
 * 
 * See http://drupal.org/node/1089656#node-suggestion
 * 
 * Differences with default node.tpl.php
 * - $title is always printed out in node.tpl, and not in page.tpl (on node-full pages)
 * - We remove $user_picture.
 * - $submitted is already with good markup, empty if disallowed.
 */

// Hide the comments and links, and render them in footer.
hide($content['comments']);
hide($content['links']);
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print render($content);
    ?>
  </div>
</article>
