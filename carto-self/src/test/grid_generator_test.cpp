/*
 * @Author: Liu Weilong
 * @Date: 2020-09-29 07:08:04
 * @LastEditors: Liu Weilong
 * @LastEditTime: 2020-09-29 07:18:53
 * @Description: 用于girdmap_generator 进行测试
 */

#pragma once
#include <gtest/gtest.h>
#include <glog/logging.h>
#include <iostream>
#include <vector>
#include "tools/submap_generator/2d_gridmap_generator.hpp"
/**
 * 1. 准备LaserScan数据集
*/
class GridMapGeneratorTest:public ::testing::Test
{
    public:
    static void SetUpTestCase(){}
    static void TearDownTestCase(){}

    private:
    static void GetLaserScan(){}
    std::vector<sensor_msgs::LaserScan> LaserScanArray_;
};

TEST_F(GridMapGeneratorTest,MapGenerator)
{
    
}

TEST_F(GridMapGeneratorTest,MapGrow)
{

}

TEST_F(GridMapGeneratorTest,MapComplete)
{
    
}