---
title: Avviso del compilatore (livello 1) C4350
ms.date: 11/04/2016
f1_keywords:
- C4350
helpviewer_keywords:
- C4350
ms.assetid: 4cc8ed67-64c4-4da5-a7a5-a639232baa23
ms.openlocfilehash: 8f23751151d8d83c68608d926ef422d56dde41a6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384205"
---
# <a name="compiler-warning-level-1-c4350"></a>Avviso del compilatore (livello 1) C4350

modifica del comportamento: viene chiamato 'membro1' anziché 'membro2'

Un rvalue non può essere associato a un riferimento non const. Nelle versioni di Visual C++ precedenti Visual Studio 2003, era possibile associare un rvalue a un riferimento non const in un'inizializzazione diretta. Questo codice ora genera un avviso.

Per garantire la compatibilità con le versioni precedenti, è comunque possibile associare un rvalue a riferimenti non const, ma le conversioni standard sono preferibili laddove possibile.

Questo avviso rappresenta una modifica del comportamento dal compilatore Visual C++ .NET 2002. Se abilitata, questo avviso è stato possibile assegnare possibilmente per codice corretto. Ad esempio, potrebbe essere generato quando si utilizza il **std:: auto_ptr** modello di classe.

Se viene visualizzato questo avviso, esaminare il codice per vedere se dipende rvalue di associazione a riferimenti non const. L'aggiunta del riferimento const o fornire un overload aggiuntivo riferimento const può risolvere il problema.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

L'esempio seguente genera l'errore C4350:

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