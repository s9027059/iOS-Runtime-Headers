/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPerformanceTest : NSObject {
    double  mGoalTime;
    NSString * mName;
    BOOL  mPassed;
    double  mPrecision;
    BOOL  mQuiet;
    SEL  mSelector;
    id  mTarget;
    struct TSUOpstat_s { 
        BOOL running; 
        unsigned long long count; 
        struct timeval { 
            int tv_sec; 
            int tv_usec; 
        } min_time; 
        struct timeval { 
            int tv_sec; 
            int tv_usec; 
        } max_time; 
        struct timeval { 
            int tv_sec; 
            int tv_usec; 
        } total_time; 
        struct timeval { 
            int tv_sec; 
            int tv_usec; 
        } last_time; 
    }  mTiming;
}

@property (nonatomic) double goalTime;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL passed;
@property (nonatomic) double precision;
@property (nonatomic) BOOL quiet;
@property (nonatomic) struct TSUOpstat_s { BOOL x1; unsigned long long x2; struct timeval { int x_3_1_1; int x_3_1_2; } x3; struct timeval { int x_4_1_1; int x_4_1_2; } x4; struct timeval { int x_5_1_1; int x_5_1_2; } x5; struct timeval { int x_6_1_1; int x_6_1_2; } x6; } timing;

+ (id)csvHeader;

- (id)csvString;
- (void)dealloc;
- (double)goalTime;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4;
- (id)name;
- (BOOL)passed;
- (double)precision;
- (BOOL)quiet;
- (void)report;
- (void)run;
- (void)setGoalTime:(double)arg1;
- (void)setPrecision:(double)arg1;
- (void)setQuiet:(BOOL)arg1;
- (void)setTiming:(struct TSUOpstat_s { BOOL x1; unsigned long long x2; struct timeval { int x_3_1_1; int x_3_1_2; } x3; struct timeval { int x_4_1_1; int x_4_1_2; } x4; struct timeval { int x_5_1_1; int x_5_1_2; } x5; struct timeval { int x_6_1_1; int x_6_1_2; } x6; })arg1;
- (struct TSUOpstat_s { BOOL x1; unsigned long long x2; struct timeval { int x_3_1_1; int x_3_1_2; } x3; struct timeval { int x_4_1_1; int x_4_1_2; } x4; struct timeval { int x_5_1_1; int x_5_1_2; } x5; struct timeval { int x_6_1_1; int x_6_1_2; } x6; })timing;

@end
