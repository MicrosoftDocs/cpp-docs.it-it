---
title: rand | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
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
apitype: DLLExport
f1_keywords:
- rand
dev_langs:
- C++
helpviewer_keywords:
- generating pseudorandom numbers
- random numbers, generating
- numbers, pseudorandom
- rand function
- pseudorandom numbers
- numbers, generating pseudorandom
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5fecd9079de1ae846d83847eb299890d62c29d17
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="rand"></a>rand

Genera un numero pseudocasuale utilizzando un algoritmo noto e riproducibile completamente. Una versione più a livello di programmazione sicura di questa funzione è disponibile. vedere [rand_s](../../c-runtime-library/reference/rand-s.md). Numeri generati da `rand` non sono protetti da crittografia. Per ulteriori crittograficamente sicuri generazione di numeri casuali, usare `rand_s` o le funzioni dichiarate nella libreria C++ Standard in [ \<casuale >](../../standard-library/random.md).

## <a name="syntax"></a>Sintassi

```C
int rand( void );
```

## <a name="return-value"></a>Valore restituito

`rand` restituisce un numero pseudocasuale, come descritto in precedenza. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

La funzione `rand` restituisce un Integer pseudocasuale nell'intervallo compreso tra 0 e `RAND_MAX` (32767). Usare la funzione [srand](../../c-runtime-library/reference/srand.md) per inizializzare il generatore di numeri pseudocasuali prima di chiamare `rand`.

Il `rand` funzione genera una sequenza nota e non è appropriato per l'utilizzo come una funzione di crittografia. Per ulteriori crittograficamente sicuri generazione di numeri casuali, usare `rand_s` o le funzioni dichiarate nella libreria C++ Standard in [ \<casuale >](../../standard-library/random.md). Per informazioni sui problemi relativi a `rand()` e sul modo in cui `<random>` li gestisce, vedere [questo video](http://go.microsoft.com/fwlink/?LinkId=397615).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`rand`|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)  
[srand](../../c-runtime-library/reference/srand.md)  
[rand_s](../../c-runtime-library/reference/rand-s.md)  