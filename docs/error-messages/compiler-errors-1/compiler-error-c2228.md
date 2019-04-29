---
title: Errore del compilatore C2228
ms.date: 11/04/2016
f1_keywords:
- C2228
helpviewer_keywords:
- C2228
ms.assetid: 901cadb1-ce90-4ae0-a360-547a9ba2ca18
ms.openlocfilehash: 20e295d09e39a12ed8163ec980fa304cd4167218
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62404338"
---
# <a name="compiler-error-c2228"></a>Errore del compilatore C2228

l'elemento a sinistra di '.identifier' deve avere una classe, struttura o unione

L'operando a sinistra del punto (.) non è una classe, struttura o unione.

L'esempio seguente genera l'errore C2228:

```
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