---
title: Errore del compilatore C2326
ms.date: 11/04/2016
f1_keywords:
- C2326
helpviewer_keywords:
- C2326
ms.assetid: 01a5ea40-de83-4e6f-a4e8-469f441258e0
ms.openlocfilehash: 36df63ce1ac5bcdb444721be3aa10f9867ae7c58
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50626864"
---
# <a name="compiler-error-c2326"></a>Errore del compilatore C2326

'declarator': la funzione non può accedere a 'name'

Il codice tenta di modificare una variabile membro, ma questa operazione non è consentita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2326:

```
// C2326.cpp
void MyFunc() {
   int i;

   class MyClass  {
   public:
      void mf() {
         i = 4;   // C2326 i is inaccessible
      }
   };
}
```