api = 2
core = 7.x

defaults[projects][subdir] = contrib

; amazon_ses contrib module.
projects[amazon_ses][version] = 1.0-rc1
; Allow Developer to set the AWS Region for SES.
; @see https://www.drupal.org/node/2705929
projects[amazon_ses][patch][2705929] = https://www.drupal.org/files/issues/allow_developer_set_aws_region-2705929-4.patch
; Add support for CC and BCC addresses.
; @see https://www.drupal.org/node/2804755
projects[amazon_ses][patch][2804755] = https://www.drupal.org/files/issues/support_cc_bcc-2804755-4.patch
; Allow to send email to multiple recipients in one email.
; @see https://www.drupal.org/node/2806799
projects[amazon_ses][patch][2806799] = https://www.drupal.org/files/issues/amazon_ses-allow-send-multiple-recipients-2806799-3-D7.patch

; awssdk contrib module
projects[awssdk][version] = 5.4
; Drush make doesn't check out libraries in awssdk.make.
; @see https://www.drupal.org/node/2654126
projects[awssdk][patch][2654126] = https://www.drupal.org/files/issues/awssdk-drush_make-2654126-4.patch

; awssdk library.
libraries[awssdk][download][type] = git
libraries[awssdk][download][url] = https://github.com/amazonwebservices/aws-sdk-for-php.git
libraries[awssdk][download][tag] = 1.5.10
; Remove deprecated curlopt from awssdk library.
libraries[awssdk][patch][] = https://bitbucket.org/!api/2.0/snippets/ua_drupal/kkxnnM/4e8166cff41550cbc0081315a17e679dd5ecc315/files/awssdk-curlopt-patch
