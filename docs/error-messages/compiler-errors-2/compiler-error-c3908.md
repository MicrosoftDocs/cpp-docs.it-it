---
title: Errore del compilatore C3908
ms.date: 11/04/2016
f1_keywords:
- C3908
helpviewer_keywords:
- C3908
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
ms.openlocfilehash: e11d830c3d662ea424caadeb50df669700f8c78f
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59778475"
---
# <a name="compiler-error-c3908"></a>Errore del compilatore C3908

livello di accesso meno restrittivo di 'construct'

Un metodo della funzione di accesso di proprietà (get o set) non può avere accesso meno restrittivo rispetto all'accesso specificato nella proprietà stessa.  Analogamente, per i metodi della funzione di accesso eventi.

Per altre informazioni, vedere [proprietà](../../extensions/property-cpp-component-extensions.md) e [evento](../../extensions/event-cpp-component-extensions.md).

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