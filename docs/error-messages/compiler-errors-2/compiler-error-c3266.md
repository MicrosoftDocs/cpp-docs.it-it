---
title: Errore del compilatore C3266
ms.date: 11/04/2016
f1_keywords:
- C3266
helpviewer_keywords:
- C3266
ms.assetid: 7375c099-acb7-42f6-898d-57cfefa010b8
ms.openlocfilehash: d93056116ebf2f4646dc34f848b073fe6401b9db
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475154"
---
# <a name="compiler-error-c3266"></a>Errore del compilatore C3266

'class': il costruttore di una classe deve avere un elenco di parametri 'void'

I costruttori di classe in una classe che usa la programmazione /clr non possono accettare parametri.

L'esempio seguente genera l'errore C3266:

```
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
