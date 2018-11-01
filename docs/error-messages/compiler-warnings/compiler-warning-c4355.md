---
title: Avviso del compilatore C4355
ms.date: 11/04/2016
f1_keywords:
- C4355
helpviewer_keywords:
- C4355
ms.assetid: b819ecab-8a07-42d7-8fa4-1180d51626c0
ms.openlocfilehash: 6b74c8dd5ce9860cb218d21790f12ba05e9be22f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554172"
---
# <a name="compiler-warning-c4355"></a>Avviso del compilatore C4355

"this": utilizzato nell'elenco degli inizializzatori dei membri di base

Il **ciò** puntatore è valido solo all'interno di funzioni membro non statiche. Non è utilizzabile nell'elenco di inizializzatori per una classe di base.

I costruttori di classe di base e dei membri di classe vengono chiamati prima **ciò** costruttore. In effetti, è stato passato un puntatore a un oggetto senza costrutto a un altro costruttore. Se tali altri costruttori accedere a qualsiasi membro o chiamano le funzioni membro su questo, il risultato sarà indefinito. È consigliabile non usare la **ciò** puntatore fino a quando non sono state completate tutte le costruzioni.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4355:

```
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