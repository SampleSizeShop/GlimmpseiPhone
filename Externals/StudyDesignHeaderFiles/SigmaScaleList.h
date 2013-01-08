/*
 * Communication Domain layer for iPhone applications which
 * interacts with Glimmpse Software Subsystems.
 *
 * Copyright (C) 2010 Regents of the University of Colorado.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */


#import <Foundation/Foundation.h>

/**
 * List of Sigma Scale objects to work around Jackson serializaiton issues.
 *
 * @author Aarti Munjal
 *
 */

@interface SigmaScaleList : NSObject

{
    /** The uuid. */
    NSMutableData const* uuid;
    
    /** The sigma scale list. */
    NSMutableArray const* sigmaScaleList;
}

@property (strong, nonatomic) NSMutableData *uuid;
@property (strong, nonatomic) NSMutableArray *sigmaScaleList;

-(id) initWithUuid:(NSMutableData const*)theUuid;
-(id) initWithUuid:(NSMutableData const*)theUuid andList:(NSMutableArray const*)theList;
-(id) initWithListSize:(int const)theSize;
-(id) initWithList:(NSMutableArray const*)theList;

@end
