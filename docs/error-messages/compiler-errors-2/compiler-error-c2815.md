---
description: 'Altre informazioni su: errore del compilatore C2815'
title: Errore del compilatore C2815
ms.date: 11/04/2016
f1_keywords:
- C2815
helpviewer_keywords:
- C2815
ms.assetid: d0256fd6-0721-4c99-b03c-52d96e77a613
ms.openlocfilehash: fd0ee162c10acd89e4746ea906d64ea8ef069271
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194839"
---
# <a name="compiler-error-c2815"></a>Errore del compilatore C2815

' operator delete ': il primo parametro formale deve essere ' void *', ma è stato usato ' param '

Qualsiasi funzione di [operatore delete](../../standard-library/new-operators.md#op_delete) definita dall'utente deve assumere un primo parametro formale di tipo `void *` .

L'esempio seguente genera l'C2815:

```cpp
// C2815.cpp
// compile with: /c
class CMyClass {
public:
   void mf1(int *a);
   void operator delete(CMyClass *);   // C2815
   void operator delete(void *);
};
```
