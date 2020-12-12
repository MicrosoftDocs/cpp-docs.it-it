---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4156'
title: Avviso del compilatore (livello 2) C4156
ms.date: 11/04/2016
f1_keywords:
- C4156
helpviewer_keywords:
- C4156
ms.assetid: 9adf3acb-c0fe-42a8-a4db-5822b1493f77
ms.openlocfilehash: 243652ec191e315d7ad06a571c78a1dedce0f032
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326491"
---
# <a name="compiler-warning-level-2-c4156"></a>Avviso del compilatore (livello 2) C4156

eliminazione di un'espressione di matrice senza utilizzare il formato di matrice ' Delete '; form di matrice sostituito

Il formato non di matrice di **`delete`** non può eliminare una matrice. Compilatore convertito nel **`delete`** formato della matrice.

Questo avviso viene visualizzato solo in Microsoft Extensions (/Ze).

## <a name="example"></a>Esempio

```cpp
// C4156.cpp
// compile with: /W2
int main()
{
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];
   delete array; // C4156, changed by compiler to "delete [] array;"
}
```
