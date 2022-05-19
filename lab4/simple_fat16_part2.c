#include <string.h>
#include <errno.h>

#include "fat16.h"

/*** BEGIN ***/
/*** END ***/

// ------------------TASK3: 创建/删除文件夹-----------------------------------
/**
 * @brief 创建path对应的文件夹
 * 
 * @param path 创建的文件夹路径
 * @param mode 文件模式，本次实验可忽略，默认都为普通文件夹
 * @return int 成功:0， 失败: POSIX错误代码的负值
 */
int fat16_mkdir(const char *path, mode_t mode) {
  /*** BEGIN ***/
  /*** END ***/
  return 0;
}

/**
 * @brief 删除path对应的文件夹
 * 
 * @param path 要删除的文件夹路径
 * @return int 成功:0， 失败: POSIX错误代码的负值
 */
int fat16_rmdir(const char *path) {
  /*** BEGIN ***/
  /*** END ***/
  return 0;
}

// ------------------TASK4: 写文件-----------------------------------

/*** BEGIN ***/
/*** END ***/

//[TATODO][TASK4]
/**
 * @brief write size bytes data to path file, with the offset set
 * @return int: the write size
 */
int fat16_write(const char *path, const char *data, size_t size, off_t offset,
                struct fuse_file_info *fi)
{
  /*** BEGIN ***/
  /*** END ***/
  return 0;
}

//[TATODO][TASK4]
/**
 * @brief truncate path file size to size bytes
 */
int fat16_truncate(const char *path, off_t size)
{
  /*** BEGIN ***/
  /*** END ***/
  return 0;
}
