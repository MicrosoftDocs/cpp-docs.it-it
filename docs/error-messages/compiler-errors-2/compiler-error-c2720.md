---
title: Errore del compilatore C2720
ms.date: 11/04/2016
f1_keywords:
- C2720
helpviewer_keywords:
- C2720
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
ms.openlocfilehash: c6499fd3f279099ea7c5b31860e70bdaa285e3f9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50638594"
---
# <a name="compiler-error-c2720"></a>Errore del compilatore C2720

> '*identifier*': '*identificatore*' identificatore classe di archiviazione non valido per i membri

La classe di archiviazione non può essere usata per i membri della classe esterni alla dichiarazione. Per correggere questo errore, rimuovere il superflue [classe di archiviazione](../../cpp/storage-classes-cpp.md) identificatore dalla definizione del membro all'esterno della dichiarazione di classe.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2720 e mostra come risolverlo:

```cpp
// C2720.cpp
struct S {
   static int i;
};
static S::i;   // C2720 - remove the unneeded 'static' to fix it
```