---
title: Compilatore avviso (livello 1) C4600 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4600
dev_langs:
- C++
helpviewer_keywords:
- C4600
ms.assetid: f023a2a1-7fc4-463f-a434-dc93fcd3f4e9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 27b020fdd87e35633b6a6da74d8c51c63fc1604e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079362"
---
# <a name="compiler-warning-level-1-c4600"></a>Avviso del compilatore (livello 1) C4600

\#pragma 'macro name': prevista una stringa vuota non valida

Non è possibile specificare una stringa vuota quando si inserisce o si estrae un nome di macro con la [pop_macro](../../preprocessor/pop-macro.md) oppure [push_macro](../../preprocessor/push-macro.md).

L'esempio seguente genera l'errore C4600:

```
// C4600.cpp
// compile with: /W1
int main()
{
   #pragma push_macro("")   // C4600 passing an empty string
}
```