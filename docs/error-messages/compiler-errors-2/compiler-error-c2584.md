---
description: 'Altre informazioni su: errore del compilatore C2584'
title: Errore del compilatore C2584
ms.date: 11/04/2016
f1_keywords:
- C2584
helpviewer_keywords:
- C2584
ms.assetid: 836e2c0a-86c0-4742-b432-beb0191ad20e
ms.openlocfilehash: 7820019c3ec49928f59980adbd9ec814d67c3499
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177679"
---
# <a name="compiler-error-c2584"></a>Errore del compilatore C2584

' Class ': la base diretta ' base2' non è accessibile; già una base di ' base1'

`Class` deriva già direttamente da `Base1` . `Base2` deriva anche da `Base1` . `Class` non può derivare da `Base2` perché questo significherebbe ereditare (indirettamente) da `Base1` nuovo, che non è valido perché `Base1` è già una classe di base diretta.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2584.

```cpp
// C2584.cpp
// compile with: /c
struct A1 {
   virtual int MyFunction();
};

struct A2 {
    virtual int MyFunction();
};

struct B1: public virtual A1, virtual A2 {
    virtual int MyFunction();
};

struct B2: public virtual A2, virtual A1 {
    virtual int MyFunction();
};

struct C: virtual B1, B2 {
    virtual int MyFunction();
};

struct Z : virtual B2, virtual C {   // C2584
// try the following line insted
// struct Z : virtual C {
    virtual int MyFunction();
};
```
