---
title: Errore del compilatore C3908
ms.date: 11/04/2016
f1_keywords:
- C3908
helpviewer_keywords:
- C3908
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
ms.openlocfilehash: 84b21f20cbc8203a9cd70e487738c34c6ad3a89b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598927"
---
# <a name="compiler-error-c3908"></a>Errore del compilatore C3908

livello di accesso meno restrittivo di 'construct'

Un metodo della funzione di accesso di proprietà (get o set) non può avere accesso meno restrittivo rispetto all'accesso specificato nella proprietà stessa.  Analogamente, per i metodi della funzione di accesso eventi.

Per altre informazioni, vedere [proprietà](../../windows/property-cpp-component-extensions.md) e [evento](../../windows/event-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3908:

```
// C3908.cpp
// compile with: /clr
ref class X {
protected:
   property int i {
   public:   // C3908 property i is protected
      int get();
   private:
      void set(int);   // OK more restrictive
   };
};
```