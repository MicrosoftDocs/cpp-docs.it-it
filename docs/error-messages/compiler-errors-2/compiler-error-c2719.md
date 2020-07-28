---
title: Errore del compilatore C2719
ms.date: 11/04/2016
f1_keywords:
- C2719
helpviewer_keywords:
- C2719
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
ms.openlocfilehash: a0a993069a0bd232154cf6c1b365c0828d9bede8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220249"
---
# <a name="compiler-error-c2719"></a>Errore del compilatore C2719

'parameter': il parametro formale con __declspec(align('#')) non verrà allineato

Il [align](../../cpp/align-cpp.md) **`__declspec`** modificatore align non è consentito nei parametri della funzione. L'allineamento dei parametri di funzione è controllato dalla convenzione di chiamata usata. Per ulteriori informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

L'esempio seguente genera l'errore C2719 e mostra come risolverlo:

```cpp
// C2719.cpp
void func(int __declspec(align(32)) i);   // C2719
// try the following line instead
// void func(int i);
```
