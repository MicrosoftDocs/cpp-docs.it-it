---
title: Errore del compilatore C3650
ms.date: 11/04/2016
f1_keywords:
- C3650
helpviewer_keywords:
- C3650
ms.assetid: ca4d8de4-b027-4d13-9b9f-03ca62905c33
ms.openlocfilehash: 54543225144ed0187f6c1e68e7236d886c026860
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58777116"
---
# <a name="compiler-error-c3650"></a>Errore del compilatore C3650

'metodo_interfaccia': non è utilizzabile come override esplicito, deve essere una funzione membro virtuale di una classe di base

È stato effettuato il tentativo di eseguire l'override esplicito su un membro non virtuale.

Per altre informazioni, vedere [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3650:

```
// C3650.cpp
// compile with: /clr
public interface struct I {
   void a();
};

public ref class S {
public:
   static int f() { return 0; }
   static int g() { return 0; }
};

public ref struct T1 : public S, I {
   virtual int f() new sealed = S::f;   // C3650
   virtual int g() { return 0; }   // OK does not override S::g
   virtual void a() new sealed = I::a {}   // OK
};
```