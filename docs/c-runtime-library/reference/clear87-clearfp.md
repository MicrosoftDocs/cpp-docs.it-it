---
title: _clear87, _clearfp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _clearfp
- _clear87
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- clearfp
- _clearfp
- _clear87
- clear87
dev_langs:
- C++
helpviewer_keywords:
- clearing floating point status word
- clearfp function
- _clear87 function
- _clearfp function
- clear87 function
ms.assetid: 72d24a70-7688-4793-ae09-c96d33fcca52
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 4d7a7b05896bac9e1b3f4ac29ee24a6ad7d61a82
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="clear87-clearfp"></a>_clear87, _clearfp
Ottiene e cancella la parola di stato a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned int _clear87( void );  
unsigned int _clearfp( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 I bit nel valore restituito indicano lo stato a virgola mobile prima della chiamata a `_clear87` o a `_clearfp`. Per una definizione completa dei bit restituiti da `_clear87`, vedere Float.h. Molte funzioni della libreria matematica modificano la parola di stato 8087/80287, con risultati imprevisti. I valori restituiti da `_clear87` e `_status87` diventano più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato a virgola mobile.  
  
## <a name="remarks"></a>Note  
 La funzione `_clear87` cancella i flag di eccezione nella parola di stato a virgola mobile, imposta il bit impegnato su 0 e restituisce la parola di stato. La parola di stato a virgola mobile è una combinazione della parola di stato 8087/80287 e di altre condizioni rilevate dal gestore eccezioni 8087/80287, come ad esempio l'overflow e underflow di stack a virgola mobile.  
  
 `_clearfp` è una versione indipendente dalla piattaforma e portabile della routine `_clear87`. È identica a `_clear87` su piattaforme Intel (x86) e viene supportata anche dalle piattaforme x64 e ARM. Per assicurarsi che il codice a virgola mobile sia portabile su piattaforme x64 e ARM, usare `_clearfp`. Se si fa riferimento solo a piattaforme x86, è possibile usare `_clear87` o `_clearfp`.  
  
 Queste funzioni sono deprecate durante la compilazione con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime supporta solo la precisione a virgola mobile predefinita.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_clear87`|\<float.h>|  
|`_clearfp`|\<float.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_clear87.c  
// compile with: /Od  
  
// This program creates various floating-point   
// problems, then uses _clear87 to report on these problems.  
// Compile this program with Optimizations disabled (/Od).   
// Otherwise the optimizer will remove the code associated with   
// the unused floating-point values.  
//  
  
#include <stdio.h>  
#include <float.h>  
  
int main( void )  
{  
   double a = 1e-40, b;  
   float x, y;  
  
   printf( "Status: %.4x - clear\n", _clear87()  );  
  
   // Store into y is inexact and underflows:  
   y = a;  
   printf( "Status: %.4x - inexact, underflow\n", _clear87() );  
  
   // y is denormal:   
   b = y;  
   printf( "Status: %.4x - denormal\n", _clear87() );  
}  
```  
  
```Output  
Status: 0000 - clear  
Status: 0003 - inexact, underflow  
Status: 80000 - denormal  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)   
 [_status87, _statusfp, _statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)
