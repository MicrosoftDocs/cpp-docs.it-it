---
title: Errore del compilatore C3286
ms.date: 11/04/2016
f1_keywords:
- C3286
helpviewer_keywords:
- C3286
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
ms.openlocfilehash: 8c09ea34c7dabf2cadecad7c76d766c9496f5a5a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62381354"
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