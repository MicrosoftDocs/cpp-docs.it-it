---
title: Errore del compilatore C3286 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3286
dev_langs:
- C++
helpviewer_keywords:
- C3286
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9ea2a6dcccd6de6d4fc3081106123f4ab37f71a2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052913"
---
# <a name="compiler-error-c3286"></a>Errore del compilatore C3286

> «*identificatore*': una variabile di iterazione non può avere identificatori di classi di archiviazione

Una classe di archiviazione non è possibile specificare in una variabile di iterazione. Per altre informazioni, vedere [classi di archiviazione (C++)](../../cpp/storage-classes-cpp.md) e [per ognuna, in](../../dotnet/for-each-in.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3286 e anche illustrato l'utilizzo corretto.

```cpp
// C3286.cpp
// compile with: /clr
int main() {
   array<int> ^p = { 1, 2, 3 };
   for each (static int i in p) {}   // C3286
   for each (int j in p) {}   // OK
}
```