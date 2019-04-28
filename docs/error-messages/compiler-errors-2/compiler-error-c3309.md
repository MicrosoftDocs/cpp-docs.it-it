---
title: Errore del compilatore C3309
ms.date: 11/04/2016
f1_keywords:
- C3309
helpviewer_keywords:
- C3309
ms.assetid: 75ee16e3-7d4e-4c41-b3cb-64e9849c3aab
ms.openlocfilehash: e66aa31982b018670684c8f12b05ba6f7347cd87
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222397"
---
# <a name="compiler-error-c3309"></a>Errore del compilatore C3309

'macro_name': il nome del modulo non può essere una macro o una parola chiave

Il valore passato alla proprietà del nome dell'attributo del modulo non può essere un simbolo che viene espanso dal preprocessore, ma deve essere un valore letterale stringa.

L'esempio seguente genera l'errore C3309:

```
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