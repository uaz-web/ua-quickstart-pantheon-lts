# UAQS News #

## Overview ##
The UA QuickStart component for a short news article. This repository contains a module made with [Features](https://www.drupal.org/project/features) that provides a UAQS News content type.

## End of life (2023-11-15)

As of November 15, 2023, UA Quickstart (Quickstart 1) and all of its associated repositories will no longer supported by the Arizona Digital team.  Any website still using Quickstart 1 after the end-of-life date should be migrated to Quickstart 2 as soon as possible.

See the [main UA Quickstart repository](https://bitbucket.org/ua_drupal/ua_quickstart/src/7.x-1.x/README.md) for more information.

## Requirements ##
- In order to use this feature, you must first download and enable the [Features](https://www.drupal.org/project/features) module.
- Place the feature from this repository into your site's module folder and enable it as you would any other module.
- Dependencies:
  - Drupal Core modules
    - File
    - Image
    - List
    - Options
    - Text
  - Contributed modules
    - [Date](https://www.drupal.org/project/date) used for the article's publishing date and expiration date
    - [Email](https://www.drupal.org/project/email) used for the contact email
    - [Field Collection](https://www.drupal.org/project/field_collection) used for the contact persons (includes fields Name, Email, and Phone)
    - [Field Group](https://www.drupal.org/project/field_group) used for adding style to display modes.
    - [Field Multiple Limit](https://www.drupal.org/project/field_multiple_limit) used to limit the amount of images displayed in display modes.
    - [Image Class](https://www.drupal.org/project/image_class) used to set UA Bootstrap classes on images in media lists.
    - [Link](https://www.drupal.org/project/link) used to link to publication.
    - [Strongarm](https://www.drupal.org/project/strongarm) used maintain content type settings
    - [Title](https://www.drupal.org/project/title) used for making the title adjustable as a field in display modes.
    - [Views](https://www.drupal.org/project/views) provides views.
  - UAQS modules
    - [UAQS Fields](...) Provides base fields for the uaqs_news content type

Handy Drush dl/en command:

```
#!

drush en date date_api email field_collection link strongarm
```
## Views ##

There are two views: a spotlight block with a list of 3 news items and a full page view.

### Structure ###

Included fields:

- News Photo (block and page)
- News title (block and page)
- News published date (block and page - several different formats used)
- News summary (page only)

### Styling ###
To facilitate styling, the view displays have classes added to them via the Views UI and the display modes for the uaqs_news content type.

#### Styling classes are as follows: ####

- **Row class:** *uaqs-news-row*
