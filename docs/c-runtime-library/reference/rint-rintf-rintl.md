---
title: rint, rintf, rintl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- rintf
- rintl
- rint
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- rintf
- rintl
- rint
dev_langs:
- C++
helpviewer_keywords:
- rintf function
- rint function
- rintl function
ms.assetid: 312ae3e6-278c-459a-9393-11b8f87d9184
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6a67e17487486bd6a48c3a1829aeae342e0e56b2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="rint-rintf-rintl"></a>rint, rintf, rintl
Arrotonda un valore a virgola mobile all'intero più vicino nel formato a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double rint( double x );  
float rint( float x );  // C++ only  
long double rint( long double x );  // C++ only  
float rintf( float x );   
long double rintl( long double x );  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile da arrotondare.  
  
## <a name="return-value"></a>Valore restituito  
 Le funzioni `rint` restituiscono un valore a virgola mobile che rappresenta l'intero più vicino a `x`. I valori a metà vengono arrotondati in base alle attuali impostazioni per la modalità di arrotondamento a virgola mobile, come accade con le funzioni `nearbyint`. A differenza delle funzioni `nearbyint`, le funzioni `rint` possono generare l'eccezione di virgola mobile `FE_INEXACT` se il risultato è diverso dall'argomento in termini di valore. Non vi è restituzione di errori.  
  
|Input|Eccezione SEH|Eccezione `_matherr`|  
|-----------|-------------------|--------------------------|  
|± ∞, QNAN, IND|none|nessuno|  
|Valori denormalizzati|EXCEPTION_FLT_UNDERFLOW|none|  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare degli overload di `rint` che accettino e restituiscano valori `float` e `long double`. In un programma C `rint` accetta e restituisce sempre un valore `double`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`rint`, `rintf`, `rintl`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_rint.c  
// Build with: cl /W3 /Tc crt_rint.c  
// This example displays the rounded results of  
// the floating-point values 2.499999, -2.499999,   
// 2.8, -2.8, 2.5 and -2.5.  
  
#include <math.h>  
#include <stdio.h>  
  
int main( void )  
{  
   double x = 2.499999;  
   float y = 2.8f;  
   long double z = 2.5;  
  
   printf("rint(%f) is %.0f\n", x, rint (x));  
   printf("rint(%f) is %.0f\n", -x, rint (-x));  
   printf("rintf(%f) is %.0f\n", y, rintf(y));  
   printf("rintf(%f) is %.0f\n", -y, rintf(-y));  
   printf("rintl(%Lf) is %.0Lf\n", z, rintl(z));  
   printf("rintl(%Lf) is %.0Lf\n", -z, rintl(-z));  
}  
```  
  
```Output  
rint(2.499999) is 2  
rint(-2.499999) is -2  
rintf(2.800000) is 3  
rintf(-2.800000) is -3  
rintl(2.500000) is 3  
rintl(-2.500000) is -3  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [ceil, ceilf, ceill](../../c-runtime-library/reference/ceil-ceilf-ceill.md)   
 [floor, floorf, floorl](../../c-runtime-library/reference/floor-floorf-floorl.md)   
 [fmod, fmodf](../../c-runtime-library/reference/fmod-fmodf.md)   
 [lrint, lrintf, lrintl, llrint, llrintf, llrintl](lrint-lrintf-lrintl-llrint-llrintf-llrintl.md)   
 [lround, lroundf, lroundl, llround, llroundf, llroundl](../../c-runtime-library/reference/lround-lroundf-lroundl-llround-llroundf-llroundl.md)   
 [nearbyint, nearbyintf, nearbyintl](nearbyint-nearbyintf-nearbyintl1.md)   
 [rint](../../c-runtime-library/reference/rint-rintf-rintl.md)