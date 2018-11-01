---
title: Errore del compilatore C2584
ms.date: 11/04/2016
f1_keywords:
- C2584
helpviewer_keywords:
- C2584
ms.assetid: 836e2c0a-86c0-4742-b432-beb0191ad20e
ms.openlocfilehash: b61ad65555b5d5232468206f6170223c5f160a34
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556689"
---
# <a name="compiler-error-c2584"></a>Errore del compilatore C2584

'Class': indirizzare base 'Base2' non è accessibile. già una base di 'Base1'

`Class` già deriva direttamente dalla `Base1`. `Base2` deriva anche da `Base1`. `Class` non può derivare da `Base2` perché ciò significa che eredita (indirettamente) da `Base1` anche in questo caso, che non è consentito perché `Base1` è già una classe base diretta.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2584.

```
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