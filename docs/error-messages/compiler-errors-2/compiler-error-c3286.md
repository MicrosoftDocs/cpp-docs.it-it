---
title: Errore del compilatore C3286
ms.date: 11/04/2016
f1_keywords:
- C3286
helpviewer_keywords:
- C3286
ms.assetid: 554328c8-cf44-4f7d-a8d2-def74d28ecdd
ms.openlocfilehash: 4c87e98f11a560d0d92be8ea7bc624edd4e09ad2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201396"
---
# <a name="compiler-error-c3286"></a>Errore del compilatore C3286

> '*specifier*': una variabile di iterazione non può avere identificatori di classe di archiviazione

Una classe di archiviazione non può essere specificata in una variabile di iterazione. Per ulteriori informazioni, vedere [classi di archiviazioneC++()](../../cpp/storage-classes-cpp.md) e [per ciascuna, in](../../dotnet/for-each-in.md).

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
