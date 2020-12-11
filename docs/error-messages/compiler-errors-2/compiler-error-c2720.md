---
description: 'Altre informazioni su: errore del compilatore C2720'
title: Errore del compilatore C2720
ms.date: 11/04/2016
f1_keywords:
- C2720
helpviewer_keywords:
- C2720
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
ms.openlocfilehash: 187142af02289374235725340a206f35b6a42493
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155657"
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
