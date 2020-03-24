---
title: Avviso del compilatore (livello 2) C4309
ms.date: 11/04/2016
f1_keywords:
- C4309
helpviewer_keywords:
- C4309
ms.assetid: cb3f41ef-fd8a-4def-baa1-924e751fca68
ms.openlocfilehash: a307d941f6225c9e431ad71a6385229bd01957f9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161867"
---
# <a name="compiler-warning-level-2-c4309"></a>Avviso del compilatore (livello 2) C4309

' Conversion ': troncamento del valore costante

La conversione del tipo comporta il superamento dello spazio allocato da una costante. Potrebbe essere necessario usare un tipo più grande per la costante.

L'esempio seguente genera l'C4309:

```cpp
// C4309.cpp
// compile with: /W2
int main()
{
   char c = 128;   // C4309
}
```
