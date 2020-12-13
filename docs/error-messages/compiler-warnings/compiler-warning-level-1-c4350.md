---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4350'
title: Avviso del compilatore (livello 1) C4350
ms.date: 11/04/2016
f1_keywords:
- C4350
helpviewer_keywords:
- C4350
ms.assetid: 4cc8ed67-64c4-4da5-a7a5-a639232baa23
ms.openlocfilehash: 0626c9c8d0196396c0d13a0697df2dfc64061db0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339995"
---
# <a name="compiler-warning-level-1-c4350"></a>Avviso del compilatore (livello 1) C4350

modifica del comportamento: viene chiamato 'membro1' anziché 'membro2'

Un rvalue non può essere associato a un riferimento non const. Nelle versioni di Visual C++ precedenti a Visual Studio 2003, era possibile associare un rvalue a un riferimento non const in un'inizializzazione diretta. Questo codice genera ora un avviso.

Per compatibilità con le versioni precedenti, è comunque possibile associare RValues a riferimenti non const, ma le conversioni standard sono preferite laddove possibile.

Questo avviso rappresenta una modifica del comportamento del compilatore Visual C++ .NET 2002. Se abilitata, è possibile che questo avviso venga fornito per il codice corretto. Ad esempio, può essere specificato quando si usa il modello di classe **std:: auto_ptr** .

Se viene visualizzato questo avviso, esaminare il codice per verificare se dipende dall'associazione di RValues a riferimenti non const. Per risolvere il problema, è possibile aggiungere un const al riferimento o fornire un ulteriore overload const-reference.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

L'esempio seguente genera l'C4350:

```cpp
// C4350.cpp
// compile with: /W1
#pragma warning (default : 4350)
class A {};

class B
{
public:
   B(B&){}
   // try the following instead:
   // B(const B&){}

   B(A){}
   operator A(){ return A();}
};

B source() { return A(); }

int main()
{
   B ap(source());   // C4350
}
```
