---
title: _fpreset
ms.date: 04/05/2018
apiname:
- _fpreset
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
- _fpreset
- fpreset
helpviewer_keywords:
- fpreset function
- floating-point numbers, resetting math package
- _fpreset function
ms.assetid: f31c6a04-b464-4f07-a7c4-42133360e328
ms.openlocfilehash: 0b3ea4289cd0ff031fd2828e3c4183911459297c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50592611"
---
# <a name="fpreset"></a>_fpreset

Reimposta il pacchetto a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
void _fpreset( void );
```

## <a name="remarks"></a>Note

Il **fpreset** funzione reinizializza il pacchetto matematica a virgola mobile. **fpreset** viene in genere usato con **segnale**, **system**, o il **Exec** oppure **spawn** funzioni. Se un programma intercetta segnali di errore a virgola mobile (**SIGFPE**) con **segnale**, è possibile in modo sicuro un ripristino da errori a virgola mobile richiamando **fpreset** e l'utilizzo **longjmp**.

Questa funzione è deprecata durante la compilazione con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime supporta solamente la precisione a virgola mobile predefinita.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fpreset**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="example"></a>Esempio

```C
// crt_fpreset.c
// This program uses signal to set up a
// routine for handling floating-point errors.

#include <stdio.h>
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include <string.h>

jmp_buf mark;              // Address for long jump to jump to
int     fperr;             // Global error number

void __cdecl fphandler( int sig, int num );   // Prototypes
void fpcheck( void );

int main( void )
{
   double n1 = 5.0;
   double n2 = 0.0;
   double r;
   int jmpret;

   // Unmask all floating-point exceptions.
    _control87( 0, _MCW_EM );
   // Set up floating-point error handler. The compiler
   // will generate a warning because it expects
   // signal-handling functions to take only one argument.
   if( signal( SIGFPE, (void (__cdecl *)(int)) fphandler ) == SIG_ERR )
    {
       fprintf( stderr, "Couldn't set SIGFPE\n" );
       abort();
    }

   // Save stack environment for return in case of error. First
   // time through, jmpret is 0, so true conditional is executed.
   // If an error occurs, jmpret will be set to -1 and false
   // conditional will be executed.
   jmpret = setjmp( mark );
   if( jmpret == 0 )
   {
      printf( "Dividing %4.3g by %4.3g...\n", n1, n2 );
      r = n1 / n2;
      // This won't be reached if error occurs.
      printf( "\n\n%4.3g / %4.3g = %4.3g\n", n1, n2, r );

      r = n1 * n2;
      // This won't be reached if error occurs.
      printf( "\n\n%4.3g * %4.3g = %4.3g\n", n1, n2, r );
   }
   else
      fpcheck();
}
// fphandler handles SIGFPE (floating-point error) interrupt. Note
// that this prototype accepts two arguments and that the
// prototype for signal in the run-time library expects a signal
// handler to have only one argument.
//
// The second argument in this signal handler allows processing of
// _FPE_INVALID, _FPE_OVERFLOW, _FPE_UNDERFLOW, and
// _FPE_ZERODIVIDE, all of which are Microsoft-specific symbols
// that augment the information provided by SIGFPE. The compiler
// will generate a warning, which is harmless and expected.

void fphandler( int sig, int num )
{
   // Set global for outside check since we don't want
   // to do I/O in the handler.
   fperr = num;

   // Initialize floating-point package. */
   _fpreset();

   // Restore calling environment and jump back to setjmp. Return
   // -1 so that setjmp will return false for conditional test.
   longjmp( mark, -1 );
}

void fpcheck( void )
{
   char fpstr[30];
   switch( fperr )
   {
   case _FPE_INVALID:
       strcpy_s( fpstr, sizeof(fpstr), "Invalid number" );
       break;
   case _FPE_OVERFLOW:
       strcpy_s( fpstr, sizeof(fpstr), "Overflow" );

       break;
   case _FPE_UNDERFLOW:
       strcpy_s( fpstr, sizeof(fpstr), "Underflow" );
       break;
   case _FPE_ZERODIVIDE:
       strcpy_s( fpstr, sizeof(fpstr), "Divide by zero" );
       break;
   default:
       strcpy_s( fpstr, sizeof(fpstr), "Other floating point error" );
       break;
   }
   printf( "Error %d: %s\n", fperr, fpstr );
}
```

```Output
Dividing    5 by    0...
Error 131: Divide by zero
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)<br/>
[signal](signal.md)<br/>
[Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
