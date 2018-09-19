---
title: Errore del compilatore C2255 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2255
dev_langs:
- C++
helpviewer_keywords:
- C2255
ms.assetid: 67dc4cb0-de6b-4405-bd64-d47736367a93
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ba6a5a2d2237373fb1321dc6d3059f20a9ddb159
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112252"
---
# <a name="compiler-error-c2255"></a>Errore del compilatore C2255

'element': non consentito all'esterno di una definizione di classe

Ad esempio, una funzione non membro viene dichiarata come `friend`.

L'esempio seguente genera l'errore C2255:

```
// C2255.cpp
// compile with: /c
class A {
private:
   void func1();
   friend void func2();
};

friend void func1() {}   // C2255
void func2(){}
```