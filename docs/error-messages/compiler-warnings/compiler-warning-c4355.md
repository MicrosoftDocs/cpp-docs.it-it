---
title: Avviso del compilatore C4355
ms.date: 11/04/2016
f1_keywords:
- C4355
helpviewer_keywords:
- C4355
ms.assetid: b819ecab-8a07-42d7-8fa4-1180d51626c0
ms.openlocfilehash: ddc0d1968ae373ff1e81c98a513e6f84fdb885e1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165327"
---
# <a name="compiler-warning-c4355"></a>Avviso del compilatore C4355

"this": utilizzato nell'elenco degli inizializzatori dei membri di base

Il puntatore **this** è valido solo all'interno di funzioni membro non statiche. Non può essere utilizzato nell'elenco di inizializzatori per una classe base.

I costruttori della classe base e i costruttori di membri di classe vengono chiamati prima di **questo** costruttore. In effetti, è stato passato un puntatore a un oggetto non costruito a un altro costruttore. Se gli altri costruttori accedono a tutti i membri o chiamano funzioni membro su questo oggetto, il risultato sarà indefinito. Non usare il puntatore **this** fino al completamento di tutte le costruzioni.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4355:

```cpp
// C4355.cpp
// compile with: /w14355 /c
#include <tchar.h>

class CDerived;
class CBase {
public:
   CBase(CDerived *derived): m_pDerived(derived) {};
   ~CBase();
   virtual void function() = 0;

   CDerived * m_pDerived;
};

class CDerived : public CBase {
public:
   CDerived() : CBase(this) {};   // C4355 "this" used in derived c'tor
   virtual void function() {};
};

CBase::~CBase() {
   m_pDerived -> function();
}

int main() {
   CDerived myDerived;
}
```
