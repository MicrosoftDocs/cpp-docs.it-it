---
description: 'Altre informazioni su: errore del compilatore C2326'
title: Errore del compilatore C2326
ms.date: 11/04/2016
f1_keywords:
- C2326
helpviewer_keywords:
- C2326
ms.assetid: 01a5ea40-de83-4e6f-a4e8-469f441258e0
ms.openlocfilehash: 968426bfc8752ebf1c33ed37a25923a3bd48bc29
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234956"
---
# <a name="compiler-error-c2326"></a>Errore del compilatore C2326

'declarator': la funzione non può accedere a 'name'

Il codice tenta di modificare una variabile membro, ma questa operazione non è consentita.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2326:

```cpp
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
