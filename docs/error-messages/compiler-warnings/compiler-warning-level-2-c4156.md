---
title: Compilatore avviso (livello 2) C4156 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4156
dev_langs:
- C++
helpviewer_keywords:
- C4156
ms.assetid: 9adf3acb-c0fe-42a8-a4db-5822b1493f77
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eddce0944152fe95aa4ef2fd98ec30a793a90978
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084497"
---
# <a name="compiler-warning-level-2-c4156"></a>Compilatore avviso (livello 2) C4156

eliminazione di un'espressione di matrice senza utilizzare la forma di matrice di 'delete'. forma di matrice sostituita

Non-matrice costituiti **eliminare** non è possibile eliminare una matrice. Il compilatore tradotto **eliminare** forma per le matrici.

Questo avviso viene visualizzato solo in estensioni Microsoft (/Ze).

## <a name="example"></a>Esempio

```
// C4156.cpp
// compile with: /W2
int main()
{
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];
   delete array; // C4156, changed by compiler to "delete [] array;"
}
```