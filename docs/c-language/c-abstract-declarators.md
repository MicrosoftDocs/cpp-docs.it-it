---
title: Dichiaratori astratti C
ms.date: 11/04/2016
helpviewer_keywords:
- declarators, abstract
- abstract declarations
ms.assetid: 6a556ad7-0555-421a-aa02-294d77cda8b5
ms.openlocfilehash: 5dc58b71c8b2032342b6604112673086dc94649b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429822"
---
# <a name="c-abstract-declarators"></a>Dichiaratori astratti C

Un dichiaratore astratto è un dichiaratore senza un identificatore, composto da uno o più puntatori, matrici o modificatori di funzione. Il modificatore del puntatore (<strong>\*</strong>) precede sempre l'identificatore contenuto in un dichiaratore; i modificatori di matrice (**[ ]**) e funzione (**( )**) seguono l'identificatore. Partendo da questo presupposto, è possibile determinare se l'identificatore dovrà apparire in un dichiaratore astratto e interpretare il dichiaratore di conseguenza. Per altre informazioni ed esempi di dichiaratori complessi, vedere [Interpretazione di più dichiaratori complessi](../c-language/interpreting-more-complex-declarators.md). `typedef` può essere in genere utilizzato per semplificare i dichiaratori. Vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md).

I dichiaratori astratti possono essere complessi. Le parentesi in un dichiaratore astratto complesso specificano un'interpretazione speciale, così come fanno per i dichiaratori complessi all'interno delle dichiarazioni.

In questi esempi vengono illustrati i dichiaratori astratti:

```
int *         // The type name for a pointer to type int:

int *[3]      // An array of three pointers to int

int (*) [5]   // A pointer to an array of five int

int *()       // A function with no parameter specification
              // returning a pointer to int

// A pointer to a function taking no arguments and
// returning an int

int (*) ( void )

// An array of an unspecified number of constant pointers to
// functions each with one parameter that has type unsigned int
// and an unspecified number of other parameters returning an int

int (*const []) ( unsigned int, ... )
```

> [!NOTE]
>  Il dichiaratore astratto composto da un set di parentesi vuote **( )** non è consentito perché è ambiguo. È impossibile determinare se l'identificatore implicito appartiene all'interno delle parentesi (in questo caso è un tipo non modificato) oppure le precede (in questo caso è un tipo di funzione).

## <a name="see-also"></a>Vedere anche

[Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)