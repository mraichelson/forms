# Custom forms for drupal node submission

This is the accompanying code for a series of blog posts published on our company blog. 

## What's in this package?

* A Features module for providing a content type, view and permissions around an example content type (modules/custom/feature_kittens).
* The required contrib modules for the Features module (everything in modules/contrib).
* A custom module for providing a FormsAPI form that captures data into new nodes (modules/custom/forms_kittens).
* The "Forms" install profile which will set up a basic Drupal install with just the modules used in this demonstration package (root folder).

## How to use this? 

As an install profile:

* Download a copy of Drupal 7.x as normal for creating a new instance.
* Clone this repository (or download and decompress it) to the profiles directory of your Drupal install. 
* Install Drupal using the Forms install profile. 

As individual modules in an existing install (this is untested and may have repercussions, see notes below.):

* Copy the contents of the modules directory to sites/all/modules in your Drupal installation. 
* As a user with module administration privileges navigate to the Module management screen at admin/modules.
* Enable the "Kittens Setup" and "Custom Kitten Forms" modules. (Both should be in the "Kittens" module group.)

> **WARNING:** If you're going to add this as modules to an existing Drupal installation please be aware that Content Types added via Features modules require additional poking around in the database by hand to remove even after you disable the Features module that created them. 
> 
> **TL;DR:** "If you add these modules on in an existing install you will get a 'Kittens' content type that you won't be able to delete without going directly into the database itself."

