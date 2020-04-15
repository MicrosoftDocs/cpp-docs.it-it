---
title: rand
ms.date: 4/2/2020
api_name:
- rand
- _o_rand
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
- api-ms-win-crt-utility-l1-1-0.dll
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- rand
helpviewer_keywords:
- generating pseudorandom numbers
- random numbers, generating
- numbers, pseudorandom
- rand function
- pseudorandom numbers
- numbers, generating pseudorandom
ms.openlocfilehash: 944c512d0102b459afc2924ef7515311e46cd43c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338155"
---
# <a name="rand"></a>rand

Genera un numero pseudocasuale utilizzando un algoritmo noto e completamente riproducibile. È disponibile una versione più sicura a livello di codice di questa funzione. vedere [rand_s](rand-s.md). I numeri generati da **rand** non sono crittograficamente sicuri. Per una generazione di numeri casuali più crittograficamente sicura, utilizzare [rand_s](rand-s.md) o le funzioni dichiarate nella libreria standard di C, in [ \<>casuale. ](../../standard-library/random.md)

## <a name="syntax"></a>Sintassi

```C
int rand( void );
```

## <a name="return-value"></a>Valore restituito

**rand** restituisce un numero pseudocasuale, come descritto sopra. Non vi è restituzione di errori.

## <a name="remarks"></a>Osservazioni

La funzione **rand** restituisce un numero intero pseudocasuale compreso nell'intervallo da 0 a **RAND_MAX** (32767). Utilizzare la funzione [srand](srand.md) per inizializzare il generatore di numeri pseudocasuali prima di chiamare **rand**.

La funzione **rand** genera una sequenza nota e non è appropriata per l'utilizzo come funzione crittografica. Per una generazione di numeri casuali più crittograficamente sicura, utilizzare [rand_s](rand-s.md) o le funzioni dichiarate nella libreria standard di C, in [ \<>casuale. ](../../standard-library/random.md) Per informazioni su cosa non va \<in **rand** e su come> casuale risolve queste carenze, vedere questo video intitolato [rand Considerato dannoso](https://channel9.msdn.com/Events/GoingNative/2013/rand-Considered-Harmful).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**Rand**|\<stdlib.h>|

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

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[srand](srand.md)<br/>
[rand_s](rand-s.md)<br/>
