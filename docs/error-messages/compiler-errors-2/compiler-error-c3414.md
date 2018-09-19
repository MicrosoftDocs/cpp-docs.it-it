---
title: Errore del compilatore C3414 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3414
dev_langs:
- C++
helpviewer_keywords:
- C3414
ms.assetid: 715f5432-b509-4f8f-84f5-e1463bac490f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c07033489538011889ef939599b30b88664c08ee
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46135759"
---
# <a name="compiler-error-c3414"></a>Errore del compilatore C3414

'member': non è possibile definire la funzione membro importata

Un membro è stato definito nel codice che è definito in un assembly di riferimento.

L'esempio seguente genera l'errore C3414:

```
// C3414a2.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

e quindi:

```
// C3414b2.cpp
// compile with: /clr
#using <C3414a2.dll>

void MyClass::Test() {    // C3414
}

System::Object::Object() {    // C3414
}
```
