function [ticks_to_count, reset, counter_mode, count_enable,...
          counter_mode_values_run1, counter_mode_values_run2, ...
          count_enable_values_run1, count_enable_values_run2] = ...
    SILTopModelData(T)
% Data for SILTopModel.mdl
%
% Copyright 2007-2022 The MathWorks, Inc.
    
ticks_to_count.time = (0:100)'*T;
ticks_to_count.signals.values = boolean((floor( (0:100)/2)==(0:100)/2)');
ticks_to_count.signals.dimensions = 1;
reset.time = (0:100)'*T;
reset_values = boolean(zeros(101,1)); reset_values(90)=true;
reset.signals.values = reset_values;
reset.signals.dimensions = 1;

counter_mode_values_run1 = false(101,1);
counter_mode_values_run2 = counter_mode_values_run1;
counter_mode_values_run2(2:99) = true(1,98);

counter_mode.time = (0:100)'*T;
counter_mode.signals.dimensions = 1;
counter_mode.signals.values = counter_mode_values_run1;

count_enable_values_run1 = true(101,1);
count_enable_values_run2 = count_enable_values_run1;
count_enable_values_run2(1:50) = false(1,50);

count_enable.time = (0:100)'*T;
count_enable.signals.values = count_enable_values_run1;
count_enable.signals.dimensions = 1;
