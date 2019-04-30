---
title: Errore del compilatore C2085
ms.date: 11/04/2016
f1_keywords:
- C2085
helpviewer_keywords:
- C2085
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
ms.openlocfilehash: a65e3c0ea622950b99b9ba83fc168b4718d13e46
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345713"
---
# <a name="compiler-error-c2085"></a>Errore del compilatore C2085

'identifier': non in elenco parametri formale

L'identificatore è stato dichiarato in una definizione di funzione ma non in elenco di parametri formali. (Solo in ANSI C)

L'esempio seguente genera l'errore C2085:

```
// C2085.c
void func1( void )
int main( void ) {}   // C2085
```

Possibile soluzione:

```
// C2085b.c
void func1( void );
int main( void ) {}
```

Con il punto e virgola, `func1()` è simile a una definizione di funzione, non un prototipo, pertanto `main` è definito all'interno `func1()`, errore C2085 per identificatore `main`.