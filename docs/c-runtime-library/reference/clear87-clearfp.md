---
description: 'Altre informazioni su: _clear87, _clearfp'
title: _clear87, _clearfp
ms.date: 04/05/2018
api_name:
- _clearfp
- _clear87
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: c15dd66f9a6598f351a54f0269619d9768eaa152
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124956"
---
# <a name="_clear87-_clearfp"></a>_clear87, _clearfp

Ottiene e cancella la parola di stato a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
unsigned int _clear87( void );
unsigned int _clearfp( void );
```

## <a name="return-value"></a>Valore restituito

I bit nel valore restituito indicano lo stato a virgola mobile prima della chiamata a **_clear87** o **_clearfp**. Per una definizione completa dei bit restituiti da **_clear87**, vedere float. h. Molte funzioni della libreria matematica modificano la parola di stato 8087/80287, con risultati imprevisti. I valori restituiti da **_clear87** e **_status87** diventano più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato a virgola mobile.

## <a name="remarks"></a>Commenti

La funzione **_clear87** Cancella i flag di eccezione nella parola di stato a virgola mobile, imposta il bit occupato su 0 e restituisce la parola di stato. La parola di stato a virgola mobile è una combinazione della parola di stato 8087/80287 e di altre condizioni rilevate dal gestore eccezioni 8087/80287, come ad esempio l'overflow e underflow di stack a virgola mobile.

**_clearfp** è una versione portatile indipendente dalla piattaforma della **_clear87** routine. È identica a **_clear87** sulle piattaforme Intel (x86) ed è supportata anche dalle piattaforme x64 e ARM. Per assicurarsi che il codice a virgola mobile sia portabile a x64 e ARM, usare **_clearfp**. Se si fa riferimento solo a piattaforme x86, è possibile usare **_clear87** o **_clearfp**.

Queste funzioni sono deprecate quando si esegue la compilazione con [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) perché il Common Language Runtime supporta solo la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_clear87**|\<float.h>|
|**_clearfp**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_control87, _controlfp, \_ _control87_2](control87-controlfp-control87-2.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
