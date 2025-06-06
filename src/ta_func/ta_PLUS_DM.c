/* TA-LIB Copyright (c) 1999-2025, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *  CF       Christo Fogelberg
 *
 * Change history:
 *
 *  MMDDYY BY     Description
 *  -------------------------------------------------------------------
 *  010802 MF     Template creation.
 *  052603 MF     Adapt code to compile with .NET Managed C++
 *  122104 MF,CF  Fix#1089506 for when optInTimePeriod is 1.
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #elif defined( _RUST )
/* Generated */    #include "ta_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */    impl core {
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::PlusDMLookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int plusDMLookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _RUST )
/* Generated */ fn plus_dm_lookback( /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_PLUS_DM_Lookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   if( optInTimePeriod > 1 )
      return optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_PLUS_DM,PlusDM) - 1;
   else
      return 1;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_PLUS_DM - Plus Directional Movement
 * 
 * Input  = High, Low
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::PlusDM( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        SubArray<double>^ inHigh,
/* Generated */                                        SubArray<double>^ inLow,
/* Generated */                                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::PlusDM( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        cli::array<double>^ inHigh,
/* Generated */                                        cli::array<double>^ inLow,
/* Generated */                                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode plusDM( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        double       inHigh[],
/* Generated */                        double       inLow[],
/* Generated */                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                        MInteger     outBegIdx,
/* Generated */                        MInteger     outNBElement,
/* Generated */                        double        outReal[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn plus_dm( int    startIdx,
/* Generated */ 
/* Generated */                              int    endIdx,
 inPriceHL[],
 optInTimePeriod[],
mut outBegIdx,
mut outNBElement,
double outReal[],
)
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_PLUS_DM( int    startIdx,
/* Generated */                                   int    endIdx,
/* Generated */                                              const double inHigh[],
/* Generated */                                              const double inLow[],
/* Generated */                                              int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                              int          *outBegIdx,
/* Generated */                                              int          *outNBElement,
/* Generated */                                              double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   int today, lookbackTotal, outIdx;
   double prevHigh, prevLow, tempReal;
   double prevPlusDM;
   double diffP, diffM;
   int i;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */ #if defined( _RUST )
/* Generated */ 
/* Generated */ #else
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /*
    * The DM1 (one period) is base on the largest part of
    * today's range that is outside of yesterdays range.
    *
    * The following 7 cases explain how the +DM and -DM are
    * calculated on one period:
    *
    * Case 1:                       Case 2:
    *    C|                        A|
    *     |                         | C|
    *     | +DM1 = (C-A)           B|  | +DM1 = 0
    *     | -DM1 = 0                   | -DM1 = (B-D)
    * A|  |                           D|
    *  | D|
    * B|
    *
    * Case 3:                       Case 4:
    *    C|                           C|
    *     |                        A|  |
    *     | +DM1 = (C-A)            |  | +DM1 = 0
    *     | -DM1 = 0               B|  | -DM1 = (B-D)
    * A|  |                            |
    *  |  |                           D|
    * B|  |
    *    D|
    *
    * Case 5:                      Case 6:
    * A|                           A| C|
    *  | C| +DM1 = 0                |  |  +DM1 = 0
    *  |  | -DM1 = 0                |  |  -DM1 = 0
    *  | D|                         |  |
    * B|                           B| D|
    *
    *
    * Case 7:
    *
    *    C|
    * A|  |
    *  |  | +DM=0
    * B|  | -DM=0
    *    D|
    *
    * In case 3 and 4, the rule is that the smallest delta between
    * (C-A) and (B-D) determine which of +DM or -DM is zero.
    *
    * In case 7, (C-A) and (B-D) are equal, so both +DM and -DM are
    * zero.
    *
    * The rules remain the same when A=B and C=D (when the highs
    * equal the lows).
    *
    * When calculating the DM over a period > 1, the one-period DM
    * for the desired period are initialy sum. In other word,
    * for a +DM14, sum the +DM1 for the first 14 days (that's
    * 13 values because there is no DM for the first day!)
    * Subsequent DM are calculated using the Wilder's
    * smoothing approach:
    *
    *                                    Previous +DM14
    *  Today's +DM14 = Previous +DM14 -  -------------- + Today's +DM1
    *                                         14
    *
    * Reference:
    *    New Concepts In Technical Trading Systems, J. Welles Wilder Jr
    */

   if( optInTimePeriod > 1 )
      lookbackTotal = optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_PLUS_DM,PlusDM) - 1;
   else
      lookbackTotal = 1;

   /* Adjust startIdx to account for the lookback period. */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Indicate where the next output should be put
    * in the outReal.
    */
   outIdx = 0;

   /* Trap the case where no smoothing is needed. */
   if( optInTimePeriod <= 1 )
   {
      /* No smoothing needed. Just do a simple DM1
       * for each price bar.
       */
      VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
      today = startIdx-1;
      prevHigh = inHigh[today];
      prevLow  = inLow[today];
      while( today < endIdx )
      {
         today++;
         tempReal = inHigh[today];
         diffP    = tempReal-prevHigh; /* Plus Delta */
         prevHigh = tempReal;
         tempReal = inLow[today];
         diffM    = prevLow-tempReal;   /* Minus Delta */
         prevLow  = tempReal;
         if( (diffP > 0) && (diffP > diffM) )
         {
            /* Case 1 and 3: +DM=diffP,-DM=0 */
            outReal[outIdx++] = diffP;
         }
         else
            outReal[outIdx++] = 0;
      }

      VALUE_HANDLE_DEREF(outNBElement) = outIdx;
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Process the initial DM */
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;

   prevPlusDM  = 0.0;
   today       = startIdx - lookbackTotal;
   prevHigh    = inHigh[today];
   prevLow     = inLow[today];
   i           = optInTimePeriod-1;
   while( i-- > 0 )
   {
      today++;
      tempReal = inHigh[today];
      diffP    = tempReal-prevHigh; /* Plus Delta */
      prevHigh = tempReal;
      tempReal = inLow[today];
      diffM    = prevLow-tempReal;   /* Minus Delta */
      prevLow  = tempReal;

      if( (diffP > 0) && (diffP > diffM) )
      {
         /* Case 1 and 3: +DM=diffP,-DM=0 */
         prevPlusDM += diffP;
      }
   }

   /* Process subsequent DM */

   /* Skip the unstable period. */
   i = TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_PLUS_DM,PlusDM);
   while( i-- != 0 )
   {
      today++;
      tempReal = inHigh[today];
      diffP    = tempReal-prevHigh; /* Plus Delta */
      prevHigh = tempReal;
      tempReal = inLow[today];
      diffM    = prevLow-tempReal;   /* Minus Delta */
      prevLow  = tempReal;
      if( (diffP > 0) && (diffP > diffM) )
      {
         /* Case 1 and 3: +DM=diffP,-DM=0 */
         prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod) + diffP;
      }
      else
      {
         /* Case 2,4,5 and 7 */
         prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod);
      }
   }

   /* Now start to write the output in
    * the caller provided outReal.
    */
   outReal[0] = prevPlusDM;
   outIdx = 1;

   while( today < endIdx )
   {
      today++;
      tempReal = inHigh[today];
      diffP    = tempReal-prevHigh; /* Plus Delta */
      prevHigh = tempReal;
      tempReal = inLow[today];
      diffM    = prevLow-tempReal;   /* Minus Delta */
      prevLow  = tempReal;

      if( (diffP > 0) && (diffP > diffM) )
      {
         /* Case 1 and 3: +DM=diffP,-DM=0 */
         prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod) + diffP;
      }
      else
      {
         /* Case 2,4,5 and 7 */
         prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod);
      }

      outReal[outIdx++] = prevPlusDM;
   }

   VALUE_HANDLE_DEREF(outNBElement) = outIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::PlusDM( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        SubArray<float>^ inHigh,
/* Generated */                                        SubArray<float>^ inLow,
/* Generated */                                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::PlusDM( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        cli::array<float>^ inHigh,
/* Generated */                                        cli::array<float>^ inLow,
/* Generated */                                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNBElement,
/* Generated */                                        cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode plusDM( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        float        inHigh[],
/* Generated */                        float        inLow[],
/* Generated */                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                        MInteger     outBegIdx,
/* Generated */                        MInteger     outNBElement,
/* Generated */                        double        outReal[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn plus_dm_s( int    startIdx,
/* Generated */ 
/* Generated */                                int    endIdx,
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_PLUS_DM( int    startIdx,
/* Generated */                          int    endIdx,
/* Generated */                          const float  inHigh[],
/* Generated */                          const float  inLow[],
/* Generated */                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                          int          *outBegIdx,
/* Generated */                          int          *outNBElement,
/* Generated */                          double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    int today, lookbackTotal, outIdx;
/* Generated */    double prevHigh, prevLow, tempReal;
/* Generated */    double prevPlusDM;
/* Generated */    double diffP, diffM;
/* Generated */    int i;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */  #if defined( _RUST )
/* Generated */  #else
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 14;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif
/* Generated */  #endif 
/* Generated */    if( optInTimePeriod > 1 )
/* Generated */       lookbackTotal = optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_PLUS_DM,PlusDM) - 1;
/* Generated */    else
/* Generated */       lookbackTotal = 1;
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    outIdx = 0;
/* Generated */    if( optInTimePeriod <= 1 )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */       today = startIdx-1;
/* Generated */       prevHigh = inHigh[today];
/* Generated */       prevLow  = inLow[today];
/* Generated */       while( today < endIdx )
/* Generated */       {
/* Generated */          today++;
/* Generated */          tempReal = inHigh[today];
/* Generated */          diffP    = tempReal-prevHigh; 
/* Generated */          prevHigh = tempReal;
/* Generated */          tempReal = inLow[today];
/* Generated */          diffM    = prevLow-tempReal;   
/* Generated */          prevLow  = tempReal;
/* Generated */          if( (diffP > 0) && (diffP > diffM) )
/* Generated */          {
/* Generated */             outReal[outIdx++] = diffP;
/* Generated */          }
/* Generated */          else
/* Generated */             outReal[outIdx++] = 0;
/* Generated */       }
/* Generated */       VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    prevPlusDM  = 0.0;
/* Generated */    today       = startIdx - lookbackTotal;
/* Generated */    prevHigh    = inHigh[today];
/* Generated */    prevLow     = inLow[today];
/* Generated */    i           = optInTimePeriod-1;
/* Generated */    while( i-- > 0 )
/* Generated */    {
/* Generated */       today++;
/* Generated */       tempReal = inHigh[today];
/* Generated */       diffP    = tempReal-prevHigh; 
/* Generated */       prevHigh = tempReal;
/* Generated */       tempReal = inLow[today];
/* Generated */       diffM    = prevLow-tempReal;   
/* Generated */       prevLow  = tempReal;
/* Generated */       if( (diffP > 0) && (diffP > diffM) )
/* Generated */       {
/* Generated */          prevPlusDM += diffP;
/* Generated */       }
/* Generated */    }
/* Generated */    i = TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_PLUS_DM,PlusDM);
/* Generated */    while( i-- != 0 )
/* Generated */    {
/* Generated */       today++;
/* Generated */       tempReal = inHigh[today];
/* Generated */       diffP    = tempReal-prevHigh; 
/* Generated */       prevHigh = tempReal;
/* Generated */       tempReal = inLow[today];
/* Generated */       diffM    = prevLow-tempReal;   
/* Generated */       prevLow  = tempReal;
/* Generated */       if( (diffP > 0) && (diffP > diffM) )
/* Generated */       {
/* Generated */          prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod) + diffP;
/* Generated */       }
/* Generated */       else
/* Generated */       {
/* Generated */          prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod);
/* Generated */       }
/* Generated */    }
/* Generated */    outReal[0] = prevPlusDM;
/* Generated */    outIdx = 1;
/* Generated */    while( today < endIdx )
/* Generated */    {
/* Generated */       today++;
/* Generated */       tempReal = inHigh[today];
/* Generated */       diffP    = tempReal-prevHigh; 
/* Generated */       prevHigh = tempReal;
/* Generated */       tempReal = inLow[today];
/* Generated */       diffM    = prevLow-tempReal;   
/* Generated */       prevLow  = tempReal;
/* Generated */       if( (diffP > 0) && (diffP > diffM) )
/* Generated */       {
/* Generated */          prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod) + diffP;
/* Generated */       }
/* Generated */       else
/* Generated */       {
/* Generated */          prevPlusDM = prevPlusDM - (prevPlusDM/optInTimePeriod);
/* Generated */       }
/* Generated */       outReal[outIdx++] = prevPlusDM;
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #elif defined( _RUST )
/* Generated */ } // Close impl core
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

