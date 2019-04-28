---
title: Errore del compilatore C3834
ms.date: 11/04/2016
f1_keywords:
- C3834
helpviewer_keywords:
- C3834
ms.assetid: 059e0dc4-300b-4e74-b6c2-41a57831fe2a
ms.openlocfilehash: 9f2bb96beaac8ede75863084c8ebf8345c940f53
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62327509"
---
# <a name="compiler-error-c3834"></a>Errore del compilatore C3834

cast a un puntatore di blocco; esplicito non valido In alternativa, usare una variabile locale bloccata

Non sono consentiti cast espliciti per un puntatore bloccato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3834.

```
// C3834.cpp
// compile with: /clr
int main() {
   int x = 33;

   pin_ptr<int> p = safe_cast<pin_ptr<int> >(&x);   // C3834
   pin_ptr<int> p2 = &x;   // OK
}
```
