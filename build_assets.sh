#!/usr/bin/env bash

cd static
gulp build

cp -R site/assets ../exercise/themes/exercise_theme/