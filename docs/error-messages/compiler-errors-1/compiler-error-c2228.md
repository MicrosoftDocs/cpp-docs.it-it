---
description: 'Altre informazioni su: errore del compilatore C2228'
title: Errore del compilatore C2228
ms.date: 11/04/2016
f1_keywords:
- C2228
helpviewer_keywords:
- C2228
ms.assetid: 901cadb1-ce90-4ae0-a360-547a9ba2ca18
ms.openlocfilehash: 8bf5c4af88f77237699baae5e7a458fca971f126
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195060"
---
# <a name="compiler-error-c2228"></a>Errore del compilatore C2228

l'elemento a sinistra di '.identifier' deve avere una classe, struttura o unione

L'operando a sinistra del punto (.) non è una classe, una struttura o un'Unione.

L'esempio seguente genera l'errore C2228:

```cpp
// C2228.cpp
int i;
struct S {
public:
    int member;
} s, *ps = &s;

int main() {
   i.member = 0;   // C2228 i is not a class type
   ps.member = 0;  // C2228 ps is a pointer to a structure

   s.member = 0;   // s is a structure type
   ps->member = 0; // ps points to a structure S
}
```

Questo errore si verifica anche se si usa una sintassi non corretta quando si usano le estensioni gestite. Mentre in altri linguaggi di Visual Studio è possibile usare l'operatore punto per accedere a un membro di una classe gestita, un puntatore a un oggetto in C++ comporta la necessità di usare l'operatore -> per accedere al membro:

Errato: `String * myString = checkedListBox1->CheckedItems->Item[0].ToString();`

Corretto: `String * myString = checkedListBox1->CheckedItems->Item[0]->ToString();`
