---
description: 'Altre informazioni su: errore del compilatore C3309'
title: Errore del compilatore C3309
ms.date: 11/04/2016
f1_keywords:
- C3309
helpviewer_keywords:
- C3309
ms.assetid: 75ee16e3-7d4e-4c41-b3cb-64e9849c3aab
ms.openlocfilehash: e18f306b58cf4c5480d32305f6dcc8c9070a8768
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337386"
---
# <a name="compiler-error-c3309"></a>Errore del compilatore C3309

'macro_name': il nome del modulo non può essere una macro o una parola chiave

Il valore passato alla proprietà del nome dell'attributo del modulo non può essere un simbolo che viene espanso dal preprocessore, ma deve essere un valore letterale stringa.

L'esempio seguente genera l'errore C3309:

```cpp
// C3309.cpp
#define NAME MyModule
[module(name="NAME")];   // C3309
// Try the following line instead
// [module(name="MyModule")];
[coclass]
class MyClass {
public:
   void MyFunc();
};

int main() {
}
```
