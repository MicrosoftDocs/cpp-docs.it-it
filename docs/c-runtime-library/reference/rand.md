---
title: rand | Microsoft Docs
ms.custom: ''
ms.date: 1/02/2018
ms.technology:
- cpp-standard-libraries
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
ms.workload:
- cplusplus
ms.openlocfilehash: 081e380dc639ed6a814913dd42c6fc1b55041b01
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43681135"
---
# <a name="rand"></a>rand

Genera un numero pseudocasuale usando un algoritmo completamente riproducibile e noto. Una versione più a livello di programmazione sicura di questa funzione è disponibile. visualizzare [rand_s](rand-s.md). I numeri generati dal **rand** non sono protetti da crittografia. Per informazioni crittograficamente sicuri generazione di numeri casuali, usare [rand_s](rand-s.md) o le funzioni dichiarate nella libreria Standard C++ nelle [ \<casuale >](../../standard-library/random.md).

## <a name="syntax"></a>Sintassi

```C
int rand( void );
```

## <a name="return-value"></a>Valore restituito

**la funzione RAND** restituisce un numero pseudocasuale, come descritto in precedenza. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Il **rand** funzione restituisce un integer pseudocasuale nell'intervallo da 0 a **RAND_MAX** (32767). Usare la [srand](srand.md) funzione per inizializzare il generatore di numeri pseudocasuali prima di chiamare **rand**.

Il **rand** funzione genera una sequenza nota e non è appropriato per l'uso come funzione di crittografia. Per informazioni crittograficamente sicuri generazione di numeri casuali, usare [rand_s](rand-s.md) o le funzioni dichiarate nella libreria Standard C++ nelle [ \<casuale >](../../standard-library/random.md). Per informazioni sui problemi con relativi **rand** e in che modo \<random > li gestisce, vedere questo video intitolato [rand considerato dannoso](https://channel9.msdn.com/Events/GoingNative/2013/rand-Considered-Harmful).

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
