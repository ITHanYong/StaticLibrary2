//
//  ViewController.m
//  RadarMap
//
//  Created by HanYong on 2018/1/16.
//  Copyright © 2018年 com.hanyong. All rights reserved.
//

#import "ViewController.h"
#import "RadarMapView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    ElementItem *item1 = [[ElementItem alloc]init];
    item1.itemPercent = @[@"0.85",@"0.8",@"0.95",@"0.9",@"1.0"];
    item1.itemColor = [UIColor greenColor];
    
    NSArray *titles = @[@"输出",@"KDA",@"发育",@"团战",@"生存"];
    
    RadarMapView *radar = [[RadarMapView alloc]initWithRadarElements:titles lengthColor:[UIColor colorWithRed:168.0/255.0 green:168.0/255.0 blue:168.0/255.0 alpha:1]];
    
    
    [radar addAbilitysWithElements:@[item1]];
    
    radar.backgroundColor = [UIColor whiteColor];
    
    [self.view addSubview:radar];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
