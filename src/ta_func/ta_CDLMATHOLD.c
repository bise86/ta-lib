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
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  022005 AC   Creation
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
/* Generated */ int Core::CdlMatHoldLookback( double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlMatHoldLookback( double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _RUST )
/* Generated */ fn cdlmathold_lookback( /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLMATHOLD_Lookback( double        optInPenetration )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */       optInPenetration = 5.000000e-1;
/* Generated */    else if( (optInPenetration < 0.000000e+0) ||/* Generated */  (optInPenetration > 3.000000e+37) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   UNUSED_VARIABLE(optInPenetration);
   return max( TA_CANDLEAVGPERIOD(BodyShort), TA_CANDLEAVGPERIOD(BodyLong) ) + 4;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLMATHOLD - Mat Hold
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlMatHold( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            SubArray<double>^ inOpen,
/* Generated */                                            SubArray<double>^ inHigh,
/* Generated */                                            SubArray<double>^ inLow,
/* Generated */                                            SubArray<double>^ inClose,
/* Generated */                                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlMatHold( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            cli::array<double>^ inOpen,
/* Generated */                                            cli::array<double>^ inHigh,
/* Generated */                                            cli::array<double>^ inLow,
/* Generated */                                            cli::array<double>^ inClose,
/* Generated */                                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlMatHold( int    startIdx,
/* Generated */                            int    endIdx,
/* Generated */                            double       inOpen[],
/* Generated */                            double       inHigh[],
/* Generated */                            double       inLow[],
/* Generated */                            double       inClose[],
/* Generated */                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                            MInteger     outBegIdx,
/* Generated */                            MInteger     outNBElement,
/* Generated */                            int           outInteger[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn cdlmathold( int    startIdx,
/* Generated */ 
/* Generated */                                 int    endIdx,
 inPriceOHLC[],
double optInPenetration[],
mut outBegIdx,
mut outNBElement,
 outInteger[],
)
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLMATHOLD( int    startIdx,
/* Generated */                                      int    endIdx,
/* Generated */                                                 const double inOpen[],
/* Generated */                                                 const double inHigh[],
/* Generated */                                                 const double inLow[],
/* Generated */                                                 const double inClose[],
/* Generated */                                                 double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                                 int          *outBegIdx,
/* Generated */                                                 int          *outNBElement,
/* Generated */                                                 int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    ARRAY_LOCAL(BodyPeriodTotal,5);
    int i, outIdx, totIdx, BodyShortTrailingIdx, BodyLongTrailingIdx, lookbackTotal;

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
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */       optInPenetration = 5.000000e-1;
/* Generated */    else if( (optInPenetration < 0.000000e+0) ||/* Generated */  (optInPenetration > 3.000000e+37) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLMATHOLD)(optInPenetration);

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   BodyPeriodTotal[4] = 0;
   BodyPeriodTotal[3] = 0;
   BodyPeriodTotal[2] = 0;
   BodyPeriodTotal[1] = 0;
   BodyPeriodTotal[0] = 0;
   BodyShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyShort);
   BodyLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyLong);

   i = BodyShortTrailingIdx;
   while( i < startIdx ) {
        BodyPeriodTotal[3] += TA_CANDLERANGE( BodyShort, i-3 );
        BodyPeriodTotal[2] += TA_CANDLERANGE( BodyShort, i-2 );
        BodyPeriodTotal[1] += TA_CANDLERANGE( BodyShort, i-1 );
        i++;
   }
   i = BodyLongTrailingIdx;
   while( i < startIdx ) {
        BodyPeriodTotal[4] += TA_CANDLERANGE( BodyLong, i-4 );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - first candle: long white candle
    * - upside gap between the first and the second bodies
    * - second candle: small black candle
    * - third and fourth candles: falling small real body candlesticks (commonly black) that hold within the long
    *   white candle's body and are higher than the reaction days of the rising three methods
    * - fifth candle: white candle that opens above the previous small candle's close and closes higher than the
    *   high of the highest reaction day
    * The meaning of "short" and "long" is specified with TA_SetCandleSettings;
    * "hold within" means "a part of the real body must be within";
    * optInPenetration is the maximum percentage of the first white body the reaction days can penetrate (it is
    * to specify how much the reaction days should be "higher than the reaction days of the rising three methods")
    * outInteger is positive (1 to 100): mat hold is always bullish
    */
   outIdx = 0;
   do
   {
        if( // 1st long, then 3 small
            TA_REALBODY(i-4) > TA_CANDLEAVERAGE( BodyLong, BodyPeriodTotal[4], i-4 ) &&
            TA_REALBODY(i-3) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal[3], i-3 ) &&
            TA_REALBODY(i-2) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal[2], i-2 ) &&
            TA_REALBODY(i-1) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal[1], i-1 ) &&
            // white, black, 2 black or white, white
            TA_CANDLECOLOR(i-4) == 1 &&
            TA_CANDLECOLOR(i-3) == -1 &&
            TA_CANDLECOLOR(i) == 1 &&
            // upside gap 1st to 2nd
            TA_REALBODYGAPUP(i-3,i-4) &&
            // 3rd to 4th hold within 1st: a part of the real body must be within 1st real body
            min(inOpen[i-2], inClose[i-2]) < inClose[i-4] &&
            min(inOpen[i-1], inClose[i-1]) < inClose[i-4] &&
            // reaction days penetrate first body less than optInPenetration percent
            min(inOpen[i-2], inClose[i-2]) > inClose[i-4] - TA_REALBODY(i-4) * optInPenetration &&
            min(inOpen[i-1], inClose[i-1]) > inClose[i-4] - TA_REALBODY(i-4) * optInPenetration &&
            // 2nd to 4th are falling
            max(inClose[i-2], inOpen[i-2]) < inOpen[i-3] &&
            max(inClose[i-1], inOpen[i-1]) < max(inClose[i-2], inOpen[i-2]) &&
            // 5th opens above the prior close
            inOpen[i] > inClose[i-1] &&
            // 5th closes above the highest high of the reaction days
            inClose[i] > max(max(inHigh[i-3], inHigh[i-2]), inHigh[i-1])
          )
            outInteger[outIdx++] = 100;
        else
            outInteger[outIdx++] = 0;

        /* add the current range and subtract the first range: this is done after the pattern recognition
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        BodyPeriodTotal[4] += TA_CANDLERANGE( BodyLong, i-4 ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx-4 );
        for (totIdx = 3; totIdx >= 1; --totIdx)
            BodyPeriodTotal[totIdx] += TA_CANDLERANGE( BodyShort, i-totIdx )
                                     - TA_CANDLERANGE( BodyShort, BodyShortTrailingIdx-totIdx );
        i++;
        BodyShortTrailingIdx++;
        BodyLongTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

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
/* Generated */ enum class Core::RetCode Core::CdlMatHold( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            SubArray<float>^ inOpen,
/* Generated */                                            SubArray<float>^ inHigh,
/* Generated */                                            SubArray<float>^ inLow,
/* Generated */                                            SubArray<float>^ inClose,
/* Generated */                                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlMatHold( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */                                            cli::array<float>^ inOpen,
/* Generated */                                            cli::array<float>^ inHigh,
/* Generated */                                            cli::array<float>^ inLow,
/* Generated */                                            cli::array<float>^ inClose,
/* Generated */                                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                                            [Out]int%    outBegIdx,
/* Generated */                                            [Out]int%    outNBElement,
/* Generated */                                            cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlMatHold( int    startIdx,
/* Generated */                            int    endIdx,
/* Generated */                            float        inOpen[],
/* Generated */                            float        inHigh[],
/* Generated */                            float        inLow[],
/* Generated */                            float        inClose[],
/* Generated */                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                            MInteger     outBegIdx,
/* Generated */                            MInteger     outNBElement,
/* Generated */                            int           outInteger[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn cdlmathold_s( int    startIdx,
/* Generated */ 
/* Generated */                                   int    endIdx,
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLMATHOLD( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             const float  inOpen[],
/* Generated */                             const float  inHigh[],
/* Generated */                             const float  inLow[],
/* Generated */                             const float  inClose[],
/* Generated */                             double        optInPenetration, /* From 0 to TA_REAL_MAX */
/* Generated */                             int          *outBegIdx,
/* Generated */                             int          *outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     ARRAY_LOCAL(BodyPeriodTotal,5);
/* Generated */     int i, outIdx, totIdx, BodyShortTrailingIdx, BodyLongTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */  #if defined( _RUST )
/* Generated */  #else
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( optInPenetration == TA_REAL_DEFAULT )
/* Generated */        optInPenetration = 5.000000e-1;
/* Generated */     else if( (optInPenetration < 0.000000e+0) ||  (optInPenetration > 3.000000e+37) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLMATHOLD)(optInPenetration);
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    BodyPeriodTotal[4] = 0;
/* Generated */    BodyPeriodTotal[3] = 0;
/* Generated */    BodyPeriodTotal[2] = 0;
/* Generated */    BodyPeriodTotal[1] = 0;
/* Generated */    BodyPeriodTotal[0] = 0;
/* Generated */    BodyShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyShort);
/* Generated */    BodyLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyLong);
/* Generated */    i = BodyShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyPeriodTotal[3] += TA_CANDLERANGE( BodyShort, i-3 );
/* Generated */         BodyPeriodTotal[2] += TA_CANDLERANGE( BodyShort, i-2 );
/* Generated */         BodyPeriodTotal[1] += TA_CANDLERANGE( BodyShort, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = BodyLongTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyPeriodTotal[4] += TA_CANDLERANGE( BodyLong, i-4 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( // 1st long, then 3 small
/* Generated */             TA_REALBODY(i-4) > TA_CANDLEAVERAGE( BodyLong, BodyPeriodTotal[4], i-4 ) &&
/* Generated */             TA_REALBODY(i-3) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal[3], i-3 ) &&
/* Generated */             TA_REALBODY(i-2) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal[2], i-2 ) &&
/* Generated */             TA_REALBODY(i-1) < TA_CANDLEAVERAGE( BodyShort, BodyPeriodTotal[1], i-1 ) &&
/* Generated */             // white, black, 2 black or white, white
/* Generated */             TA_CANDLECOLOR(i-4) == 1 &&
/* Generated */             TA_CANDLECOLOR(i-3) == -1 &&
/* Generated */             TA_CANDLECOLOR(i) == 1 &&
/* Generated */             // upside gap 1st to 2nd
/* Generated */             TA_REALBODYGAPUP(i-3,i-4) &&
/* Generated */             // 3rd to 4th hold within 1st: a part of the real body must be within 1st real body
/* Generated */             min(inOpen[i-2], inClose[i-2]) < inClose[i-4] &&
/* Generated */             min(inOpen[i-1], inClose[i-1]) < inClose[i-4] &&
/* Generated */             // reaction days penetrate first body less than optInPenetration percent
/* Generated */             min(inOpen[i-2], inClose[i-2]) > inClose[i-4] - TA_REALBODY(i-4) * optInPenetration &&
/* Generated */             min(inOpen[i-1], inClose[i-1]) > inClose[i-4] - TA_REALBODY(i-4) * optInPenetration &&
/* Generated */             // 2nd to 4th are falling
/* Generated */             max(inClose[i-2], inOpen[i-2]) < inOpen[i-3] &&
/* Generated */             max(inClose[i-1], inOpen[i-1]) < max(inClose[i-2], inOpen[i-2]) &&
/* Generated */             // 5th opens above the prior close
/* Generated */             inOpen[i] > inClose[i-1] &&
/* Generated */             // 5th closes above the highest high of the reaction days
/* Generated */             inClose[i] > max(max(inHigh[i-3], inHigh[i-2]), inHigh[i-1])
/* Generated */           )
/* Generated */             outInteger[outIdx++] = 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         BodyPeriodTotal[4] += TA_CANDLERANGE( BodyLong, i-4 ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx-4 );
/* Generated */         for (totIdx = 3; totIdx >= 1; --totIdx)
/* Generated */             BodyPeriodTotal[totIdx] += TA_CANDLERANGE( BodyShort, i-totIdx )
/* Generated */                                      - TA_CANDLERANGE( BodyShort, BodyShortTrailingIdx-totIdx );
/* Generated */         i++;
/* Generated */         BodyShortTrailingIdx++;
/* Generated */         BodyLongTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #elif defined( _RUST )
/* Generated */ } // Close impl core
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

