---
title: _status87, _statusfp, _statusfp2
ms.date: 04/05/2018
apiname:
- _statusfp2
- _statusfp
- _status87
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
- _statusfp2
- _statusfp
- statusfp2
- _status87
- status87
- statusfp
helpviewer_keywords:
- floating-point functions, getting status word
- floating-point numbers, status word
- status87 function
- status word, getting floating point
- statusfp function
- _statusfp function
- _statusfp2 function
- statusfp2 function
- _status87 function
- floating-point functions
- status word
ms.assetid: 7ef963fa-b1fb-429d-94d6-fbf282ab7432
ms.openlocfilehash: 271c28dd4e267e5b3b702858cc398689e3e35d6f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50597521"
---
# <a name="status87-statusfp-statusfp2"></a>_status87, _statusfp, _statusfp2

Ottiene la parola di stato nelle operazioni a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
unsigned int _status87( void );
unsigned int _statusfp( void );
void _statusfp2(unsigned int *px86, unsigned int *pSSE2)
```

### <a name="parameters"></a>Parametri

*px86*<br/>
Questo indirizzo viene compilato con la parola di stato per l'unità di calcolo in virgola mobile x87.

*pSSE2*<br/>
Questo indirizzo viene compilato con la parola di stato per l'unità di calcolo in virgola mobile SSE2.

## <a name="return-value"></a>Valore restituito

Per la **_status87** e **statusfp**, i bit nel valore restituito indicano lo stato a virgola mobile. Vedere FLOAT. H Includi file per una definizione dei bit restituiti da **statusfp**. Molte funzioni della libreria matematica modificano la parola di stato nelle operazioni a virgola mobile, con risultati imprevisti. Ottimizzazione possa riordinare, combinare ed eliminare operazioni a virgola mobile per le chiamate a **_status87**, **statusfp**e le funzioni correlate. Usare l'opzione del compilatore [/Od (Disabilita (Debug))](../../build/reference/od-disable-debug.md) o la direttiva pragma [fenv_access](../../preprocessor/fenv-access.md) per impedire alle ottimizzazioni di riordinare le operazioni a virgola mobile. I valori restituiti da **clearfp** e **statusfp**e anche i parametri restituiti **_statusfp2**, sono più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato a virgola mobile.

## <a name="remarks"></a>Note

Il **statusfp** funzione Ottiene la parola di stato a virgola mobile. La parola di stato è una combinazione dello stato del processore a virgola mobile e di altre condizioni rilevate dal gestore delle eccezioni a virgola mobile, come ad esempio l'overflow e underflow di stack a virgola mobile. Le eccezioni non mascherate vengono controllate prima della restituzione del contenuto della parola di stato. Questo significa che il chiamante è informato delle eccezioni in sospeso. Su x86, piattaforme **statusfp** restituisce una combinazione di x87 e SSE2 stato a virgola mobile. Nelle piattaforme x64 lo stato restituito si basa sullo stato MXCSR di SSE. Sulle piattaforme ARM **statusfp** restituisce lo stato dal registro fpscr.

**statusfp** è una versione indipendente dalla piattaforma e portabile della **_status87**. È identico a **_status87** sulle piattaforme Intel (x86) e viene supportata anche dalle piattaforme ARM e x64. Per assicurarsi che il codice a virgola mobile sia portabile su tutte le architetture, usare **statusfp**. Se la destinazione è x86 solo le piattaforme, è possibile usare **_status87** oppure **statusfp**.

È consigliabile **_statusfp2** per chip (ad esempio Pentium IV) che dispone di un x87 e un processore a virgola mobile SSE2. Per la **_statusfp2**, gli indirizzi vengono compilati usando la parola di stato a virgola mobile sia x87 o il processore a virgola mobile SSE2. Per un chip che supporta x87 e processori a virgola mobile SSE2, EM_AMBIGUOUS viene impostato su 1 se **statusfp** oppure **controlfp** viene usata e l'azione è ambiguo poiché potrebbe fare riferimento a x87 o SSE2 parola di stato a virgola mobile. Il **_statusfp2** funzione è supportata solo su x86 piattaforme.

Queste funzioni non sono utili per [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime (CLR) supporta solamente la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_status87**, **statusfp**, **_statusfp2**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_statusfp.c
// Build by using: cl /W4 /Ox /nologo crt_statusfp.c
// This program creates various floating-point errors and
// then uses _statusfp to display messages that indicate these problems.

#include <stdio.h>
#include <float.h>
#pragma fenv_access(on)

double test( void )
{
   double a = 1e-40;
   float b;
   double c;

   printf("Status = 0x%.8x - clear\n", _statusfp());

   // Assignment into b is inexact & underflows:
   b = (float)(a + 1e-40);
   printf("Status = 0x%.8x - inexact, underflow\n", _statusfp());

   // c is denormal:
   c = b / 2.0;
   printf("Status = 0x%.8x - inexact, underflow, denormal\n",
            _statusfp());

   // Clear floating point status:
   _clearfp();
   return c;
}

int main(void)
{
   return (int)test();
}
```

```Output
Status = 0x00000000 - clear
Status = 0x00000003 - inexact, underflow
Status = 0x00080003 - inexact, underflow, denormal
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md)<br/>
