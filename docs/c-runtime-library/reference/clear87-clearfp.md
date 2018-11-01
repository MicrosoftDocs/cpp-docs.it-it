---
title: _clear87, _clearfp
ms.date: 04/05/2018
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
helpviewer_keywords:
- clearing floating point status word
- clearfp function
- _clear87 function
- _clearfp function
- clear87 function
ms.assetid: 72d24a70-7688-4793-ae09-c96d33fcca52
ms.openlocfilehash: 4148f85d82a4210033686455c73046081832e3c4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50477259"
---
# <a name="clear87-clearfp"></a>_clear87, _clearfp

Ottiene e cancella la parola di stato a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
unsigned int _clear87( void );
unsigned int _clearfp( void );
```

## <a name="return-value"></a>Valore restituito

I bit nel valore restituito indicano lo stato a virgola mobile prima della chiamata a **_clear87** oppure **clearfp**. Per una definizione completa dei bit restituiti da **_clear87**, vedere float. h. Molte funzioni della libreria matematica modificano la parola di stato 8087/80287, con risultati imprevisti. I valori restituiti da **_clear87** e **_status87** diventano più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato a virgola mobile.

## <a name="remarks"></a>Note

Il **_clear87** funzione Cancella i flag di eccezione della parola di stato a virgola mobile, imposta il bit impegnato su 0 e restituisce la parola di stato. La parola di stato a virgola mobile è una combinazione della parola di stato 8087/80287 e di altre condizioni rilevate dal gestore eccezioni 8087/80287, come ad esempio l'overflow e underflow di stack a virgola mobile.

**clearfp** è una versione indipendente dalla piattaforma e portabile del **_clear87** routine. È identico a **_clear87** sulle piattaforme Intel (x86) e viene supportata anche dalle piattaforme ARM e x64. Per assicurarsi che il codice a virgola mobile sia portabile su x64 e ARM, usare **clearfp**. Se la destinazione è x86 solo le piattaforme, è possibile usare **_clear87** oppure **clearfp**.

Queste funzioni sono deprecate durante la compilazione con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime supporta solamente la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_clear87**|\<float.h>|
|**_clearfp**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="example"></a>Esempio

```C
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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
