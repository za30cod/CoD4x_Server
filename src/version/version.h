#pragma once
// Wrap constants in functions in order to faster rebuild
//   module "version.c" each time.

// Returns server version as float num.
float Sys_GetCommonVersion();

// Returns server version as string.
const char* Sys_GetCommonVersionString();

// Returns server build number - count of commits to SCM branch.
int Sys_GetBuild();
