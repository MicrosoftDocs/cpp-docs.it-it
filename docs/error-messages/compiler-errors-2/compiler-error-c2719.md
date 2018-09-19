---
title: Errore del compilatore C2719 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2719
dev_langs:
- C++
helpviewer_keywords:
- C2719
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4423352bad520d66920a01542f592ed8022482d6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054187"
---
# <a name="compiler-error-c2719"></a>Errore del compilatore C2719

'parameter': il parametro formale con __declspec(align('#')) non verrà allineato

Il [allineare](../../cpp/align-cpp.md) `__declspec` modificatore non è consentito nei parametri di funzione. L'allineamento dei parametri di funzione è controllato dalla convenzione di chiamata usata. Per altre informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md).

L'esempio seguente genera l'errore C2719 e mostra come risolverlo:

```
// C2719.cpp
void func(int __declspec(align(32)) i);   // C2719
// try the following line instead
// void func(int i);
```