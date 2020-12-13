---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4309'
title: Avviso del compilatore (livello 2) C4309
ms.date: 11/04/2016
f1_keywords:
- C4309
helpviewer_keywords:
- C4309
ms.assetid: cb3f41ef-fd8a-4def-baa1-924e751fca68
ms.openlocfilehash: 8ae49967078f8569a7830c2a2e2ce61f9d25e20d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339182"
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
