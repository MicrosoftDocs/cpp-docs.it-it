---
title: Errore del compilatore C2720
ms.date: 11/04/2016
f1_keywords:
- C2720
helpviewer_keywords:
- C2720
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
ms.openlocfilehash: 24f4329ee631eafc7c2670d9ebf28609c22e7592
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202134"
---
# <a name="compiler-error-c2720"></a>Errore del compilatore C2720

> '*Identifier*': identificatore classe di archiviazione '*specifier*' non valido nei membri

La classe di archiviazione non può essere usata per i membri della classe esterni alla dichiarazione. Per correggere l'errore, rimuovere l'identificatore di [classe di archiviazione](../../cpp/storage-classes-cpp.md) non necessario dalla definizione del membro all'esterno della dichiarazione di classe.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2720 e mostra come risolverlo:

```cpp
// C2720.cpp
struct S {
   static int i;
};
static S::i;   // C2720 - remove the unneeded 'static' to fix it
```
