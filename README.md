# Sundara Adaptive Energy Framework (NASA Space to Soil)

## Overview
This repository contains a prototype implementation of Sundara, an adaptive energy-aware control system designed for solar-powered embedded systems and SmallSat onboard processing.

Sundara enables satellites to dynamically allocate power, compute, and data transmission resources based on real-time environmental conditions and solar energy availability.

## Key Features
- Adaptive energy management based on solar input  
- Onboard decision-making for sensing and processing  
- Data prioritization logic for efficient transmission  
- Scalable architecture for SmallSat systems  

## NASA Dataset Integration
This solution leverages NASA’s Soil Moisture Active Passive (SMAP) dataset:

DOI: 10.5067/M20OXIZHY3RJ

SMAP provides global soil moisture data, which is used to:
- Detect drought conditions  
- Identify regions of environmental stress  
- Inform adaptive sensing priorities  

## Adaptive Sensing & Onboard Processing
Sundara introduces an adaptive sensing approach where satellites:

- Adjust sensing resolution based on energy availability  
- Prioritize high-value environmental data  
- Perform onboard processing to reduce unnecessary transmission  
- Optimize bandwidth usage through selective data downlink  

This transforms traditional satellites into intelligent, resource-aware systems.

## Technology Stack
- Arduino (Embedded C/C++)  
- Microcontroller-based system design  
- Analog voltage sensing  
- Energy-aware control logic  

## Repository Structure
- sundara_solar_controller.ino → Embedded system prototype  
- sundara_smallsat_pseudocode.txt → SmallSat adaptation logic  

## How It Works
The embedded prototype monitors solar input voltage and dynamically enables or disables charging based on a defined threshold.

This demonstrates the core principle behind Sundara: energy-aware decision-making under constrained resources.

## Relevance to NASA Space to Soil Challenge
Sundara aligns with NASA’s focus on adaptive sensing and onboard processing by:

- Reducing unnecessary data collection  
- Optimizing limited satellite power and compute resources  
- Enabling real-time environmental responsiveness  
- Supporting regenerative agriculture through targeted data insights  

## Setup Instructions
1. Upload `.ino` file to Arduino IDE  
2. Connect solar input to analog pin  
3. Configure charge enable pin  
4. Open Serial Monitor to view system behavior  
