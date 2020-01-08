---
title: Errore del compilatore C2085
ms.date: 11/04/2016
f1_keywords:
- C2085
helpviewer_keywords:
- C2085
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
ms.openlocfilehash: 7dbf7266a6330a1fdb46d7f2df90e7684f026d9a
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301964"
---
# <a name="compiler-error-c2085"></a>Errore del compilatore C2085

' Identifier ': non nell'elenco di parametri formali

L'identificatore è stato dichiarato in una definizione di funzione ma non nell'elenco di parametri formali. (Solo ANSI C)

L'esempio seguente genera l'C2085:

```c
// C2085.c
void func1( void )
int main( void ) {}   // C2085
```

Possibile soluzione:

```c
// C2085b.c
void func1( void );
int main( void ) {}
```

Con il punto e virgola mancante, `func1()` ha un aspetto simile a una definizione di funzione, non a un prototipo, quindi `main` viene definito all'interno `func1()`, generando l'errore C2085 per identificatore `main`.
