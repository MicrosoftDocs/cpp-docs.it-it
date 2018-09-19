---
title: Errore del compilatore C2101 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2101
dev_langs:
- C++
helpviewer_keywords:
- C2101
ms.assetid: 42f0136f-8cc1-4f2b-be1c-721ec9278e66
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 247bd168e1ea82d4533c794ae5c14d34a49064d0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46041363"
---
# <a name="compiler-error-c2101"></a>Errore del compilatore C2101

'&' in costante

L'operatore address-of ( `&` ) deve avere un valore l-value come operando.

L'esempio seguente genera l'errore C2101:

```
// C2101.cpp
int main() {
   char test;
   test = &'a';   // C2101
   test = 'a';   // OK
}
```