---
description: 'Altre informazioni su: errore del compilatore C3266'
title: Errore del compilatore C3266
ms.date: 11/04/2016
f1_keywords:
- C3266
helpviewer_keywords:
- C3266
ms.assetid: 7375c099-acb7-42f6-898d-57cfefa010b8
ms.openlocfilehash: 8522d893b6998be92a2b6241936481a7becb0c2a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283640"
---
# <a name="compiler-error-c3266"></a>Errore del compilatore C3266

'class': il costruttore di una classe deve avere un elenco di parametri 'void'

I costruttori di classe in una classe che usa la programmazione /clr non possono accettare parametri.

L'esempio seguente genera l'errore C3266:

```cpp
// C3266.cpp
// compile with: /clr

ref class X {
   static X(int i) { // C3266
   // try the following line instead
   // static X() {
   }
};

int main() {
}
```
