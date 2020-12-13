---
description: 'Altre informazioni su: errore del compilatore C3286'
title: Errore del compilatore C3286
ms.date: 11/04/2016
f1_keywords:
- C3286
helpviewer_keywords:
- C3286
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
ms.openlocfilehash: 38e3b405f9093baa266cf56e5bfc7f44c7566206
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339229"
---
# <a name="compiler-error-c3286"></a>Errore del compilatore C3286

> '*specifier*': una variabile di iterazione non può avere identificatori di classe di archiviazione

Una classe di archiviazione non può essere specificata in una variabile di iterazione. Per ulteriori informazioni, vedere [classi di archiviazione (C++)](../../cpp/storage-classes-cpp.md) e [per ciascuna, in](../../dotnet/for-each-in.md).

## <a name="example"></a>Esempio

L'esempio seguente genera C3286 e Mostra anche l'uso corretto.

```cpp
// C3286.cpp
// compile with: /clr
int main() {
   array<int> ^p = { 1, 2, 3 };
   for each (static int i in p) {}   // C3286
   for each (int j in p) {}   // OK
}
```
