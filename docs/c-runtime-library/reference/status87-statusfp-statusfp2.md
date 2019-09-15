---
title: _status87, _statusfp, _statusfp2
ms.date: 04/05/2018
api_name:
- _statusfp2
- _statusfp
- _status87
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
ms.openlocfilehash: 54faf70296ef41f2682f88a8edaa82ee0d2071d4
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70958085"
---
# <a name="_status87-_statusfp-_statusfp2"></a>_status87, _statusfp, _statusfp2

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

Per **_status87** e **_statusfp**, i bit nel valore restituito indicano lo stato a virgola mobile. Vedere FLOAT. File di inclusione H per una definizione dei bit restituiti da **_statusfp**. Molte funzioni della libreria matematica modificano la parola di stato nelle operazioni a virgola mobile, con risultati imprevisti. L'ottimizzazione consente di riordinare, combinare ed eliminare operazioni a virgola mobile in base alle chiamate a **_status87**, **_statusfp**e alle funzioni correlate. Usare l'opzione del compilatore [/Od (Disabilita (Debug))](../../build/reference/od-disable-debug.md) o la direttiva pragma [fenv_access](../../preprocessor/fenv-access.md) per impedire alle ottimizzazioni di riordinare le operazioni a virgola mobile. I valori restituiti da **_clearfp** e **_statusfp**e anche i parametri restituiti di **_statusfp2**sono più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato a virgola mobile.

## <a name="remarks"></a>Note

La funzione **_statusfp** ottiene la parola di stato a virgola mobile. La parola di stato è una combinazione dello stato del processore a virgola mobile e di altre condizioni rilevate dal gestore delle eccezioni a virgola mobile, come ad esempio l'overflow e underflow di stack a virgola mobile. Le eccezioni non mascherate vengono controllate prima della restituzione del contenuto della parola di stato. Questo significa che il chiamante è informato delle eccezioni in sospeso. Sulle piattaforme x86, **_statusfp** restituisce una combinazione dello stato della virgola mobile x87 e SSE2. Nelle piattaforme x64 lo stato restituito si basa sullo stato MXCSR di SSE. Sulle piattaforme ARM, **_statusfp** restituisce lo stato dal registro di registro FPSCR.

**_statusfp** è una versione portatile e indipendente dalla piattaforma di **_status87**. È identica a **_status87** sulle piattaforme Intel (x86) ed è supportata anche dalle piattaforme x64 e ARM. Per assicurarsi che il codice a virgola mobile sia portabile in tutte le architetture, usare **_statusfp**. Se si fa riferimento solo a piattaforme x86, è possibile usare **_status87** o **_statusfp**.

Si consiglia di usare **_statusfp2** per i chip (ad esempio Pentium IV) che dispongono sia di un processore x87 che di un processore SSE2 a virgola mobile. Per **_statusfp2**, gli indirizzi vengono compilati usando la parola di stato a virgola mobile per il processore a virgola mobile x87 o SSE2. Per un chip che supporta i processori a virgola mobile x87 e SSE2, EM_AMBIGUOUS è impostato su 1 se viene usato **_statusfp** o **_controlfp** e l'azione è ambigua perché può fare riferimento alla parola di stato a virgola mobile SSE2 e x87. La funzione **_statusfp2** è supportata solo su piattaforme x86.

Queste funzioni non sono utili per [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) perché il Common Language Runtime (CLR) supporta solo la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_status87**, **_statusfp**, **_statusfp2**|\<float.h>|

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
