---
description: 'Altre informazioni su: errore del compilatore C3852'
title: Errore del compilatore C3852
ms.date: 11/04/2016
f1_keywords:
- C3852
helpviewer_keywords:
- C3852
ms.assetid: 194e5c5e-0dfb-414e-86db-791c11eb610c
ms.openlocfilehash: f5bfeb5507943dc4f860b81912bfb6880621f290
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255236"
---
# <a name="compiler-error-c3852"></a>Errore del compilatore C3852

' member ' con tipo ' type ': l'inizializzazione aggregata non è riuscita a inizializzare il membro

È stato effettuato un tentativo di assegnare un'inizializzazione predefinita come parte di un'inizializzazione aggregata a un membro dati che non può ricevere un'inizializzazione predefinita in un'inizializzazione aggregata.

Gli esempi seguenti generano C3852:

```cpp
// C3852.cpp
struct S
{
   short s;
};

struct S1
{
   int i;
   const S s;
};

struct S2
{
   int i;
   char & rc;
};

int main()
{
   S1 s1 = { 1 };   // C3852 const member
   // try the following line instead
   // S1 s1 = { 1, 2 };

   S2 s2 = { 2 };   // C3852 reference member
   // try the following line instead
   // char c = 'a';
   S2 s2 = { 2, c };
}
```
