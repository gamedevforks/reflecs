/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef OPTIONALCOMPONENT_BAKE_CONFIG_H
#define OPTIONALCOMPONENT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <reflecs>

/* Headers of private dependencies */
#ifdef OPTIONALCOMPONENT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if OPTIONALCOMPONENT_IMPL && defined _MSC_VER
#define OPTIONALCOMPONENT_EXPORT __declspec(dllexport)
#elif OPTIONALCOMPONENT_IMPL
#define OPTIONALCOMPONENT_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define OPTIONALCOMPONENT_EXPORT __declspec(dllimport)
#else
#define OPTIONALCOMPONENT_EXPORT
#endif

#endif

