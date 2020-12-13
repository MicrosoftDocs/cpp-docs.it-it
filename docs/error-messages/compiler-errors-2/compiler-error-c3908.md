---
description: 'Altre informazioni su: errore del compilatore C3908'
title: Errore del compilatore C3908
ms.date: 11/04/2016
f1_keywords:
- C3908
helpviewer_keywords:
- C3908
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
ms.openlocfilehash: 67258f9f5946d180af9a270b931f88f263238856
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144170"
---
# <a name="compiler-error-c3908"></a>Errore del compilatore C3908

livello di accesso meno restrittivo rispetto a' construct '

Un metodo della funzione di accesso alle proprietà (Get o set) non può avere un accesso meno restrittivo rispetto a quello specificato nella proprietà stessa.  Analogamente, per i metodi della funzione di accesso eventi.

Per ulteriori informazioni, vedere [Proprietà](../../extensions/property-cpp-component-extensions.md) ed [evento](../../extensions/event-cpp-component-extensions.md).

L'esempio seguente genera l'C3908:

```cpp
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
