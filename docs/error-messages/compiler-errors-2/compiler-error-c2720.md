---
title: Errore del compilatore C2720 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2720
dev_langs:
- C++
helpviewer_keywords:
- C2720
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c2d75c9847016102d4ae8609fb0a0a78726e4c67
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084016"
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