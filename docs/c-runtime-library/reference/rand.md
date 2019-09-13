---
title: rand
ms.date: 01/02/2018
apiname:
- rand
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
- api-ms-win-crt-utility-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- rand
helpviewer_keywords:
- generating pseudorandom numbers
- random numbers, generating
- numbers, pseudorandom
- rand function
- pseudorandom numbers
- numbers, generating pseudorandom
ms.openlocfilehash: 407640c5f00ae54c43450abcbbe8c2e3ba0fcf95
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70927519"
---
# <a name="rand"></a>rand

Genera un numero pseudocasuale usando un algoritmo noto e completamente riproducibile. È disponibile una versione più sicura di questa funzione a livello di codice. vedere [rand_s](rand-s.md). I numeri generati da **Rand** non sono crittograficamente sicuri. Per la generazione di numeri casuali più crittograficamente sicuri, usare [rand_s](rand-s.md) o le C++ funzioni dichiarate nella libreria standard in [ \<Random >](../../standard-library/random.md).

## <a name="syntax"></a>Sintassi

```C
int rand( void );
```

## <a name="return-value"></a>Valore restituito

**Rand** restituisce un numero pseudocasuale, come descritto in precedenza. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

La funzione **Rand** restituisce un Integer pseudocasuale nell'intervallo compreso tra 0 e **RAND_MAX** (32767). Usare la funzione [srand](srand.md) per inizializzare il generatore di numeri di pseudocasuale prima di chiamare **Rand**.

La funzione **Rand** genera una sequenza nota e non è appropriata per l'uso come funzione di crittografia. Per la generazione di numeri casuali più crittograficamente sicuri, usare [rand_s](rand-s.md) o le C++ funzioni dichiarate nella libreria standard in [ \<Random >](../../standard-library/random.md). Per informazioni sui problemi relativi a **Rand** e sul modo \<in cui Random > risolve questi difetti, vedere il video intitolato [Rand considerato dannoso](https://channel9.msdn.com/Events/GoingNative/2013/rand-Considered-Harmful).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**rand**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_rand.c
// This program seeds the random-number generator
// with the time, then exercises the rand function.
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void SimpleRandDemo( int n )
{
   // Print n random numbers.
   int i;
   for( i = 0; i < n; i++ )
      printf( "  %6d\n", rand() );
}

void RangedRandDemo( int range_min, int range_max, int n )
{
   // Generate random numbers in the half-closed interval
   // [range_min, range_max). In other words,
   // range_min <= random number < range_max
   int i;
   for ( i = 0; i < n; i++ )
   {
      int u = (double)rand() / (RAND_MAX + 1) * (range_max - range_min)
            + range_min;
      printf( "  %6d\n", u);
   }
}

int main( void )
{
   // Seed the random-number generator with the current time so that
   // the numbers will be different every time we run.
   srand( (unsigned)time( NULL ) );

   SimpleRandDemo( 10 );
   printf("\n");
   RangedRandDemo( -100, 100, 10 );
}
```

```Output
22036
18330
11651
27464
18093
3284
11785
14686
11447
11285

   74
   48
   27
   65
   96
   64
   -5
  -42
  -55
   66
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[srand](srand.md)<br/>
[rand_s](rand-s.md)<br/>
