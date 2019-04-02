---
title: Errore del compilatore C2144
ms.date: 11/04/2016
f1_keywords:
- C2144
helpviewer_keywords:
- C2144
ms.assetid: 49f3959b-324f-4c06-9588-c0ecef5dc5b3
ms.openlocfilehash: a75330d26b0924e60f7e46d10d617341709d7e23
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58778286"
---
# <a name="compiler-error-c2144"></a>Errore del compilatore C2144

> Errore di sintassi: '*tipo*'deve essere preceduto da'*token*'

Il compilatore prevedeva *token* e trovare *tipo* invece.

Questo errore può essere causato da una parentesi graffa di chiusura mancanti, parentesi di chiusura o punti e virgola.

C2144 può verificarsi anche quando si tenta di creare una macro da una parola chiave CLR che contiene un carattere di spazio vuoto.

È inoltre possibile visualizzare C2144 se si sta tentando di inoltro del tipo. Vedere [l'inoltro di tipi (C + + CLI)](../../extensions/type-forwarding-cpp-cli.md) per altre informazioni.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'errore C2144 e viene illustrato un modo per risolvere il problema:

```cpp
// C2144.cpp
// compile with: /clr /c
#define REF ref
REF struct MyStruct0;   // C2144

// OK
#define REF1 ref struct
REF1 MyStruct1;
```

L'esempio seguente genera l'errore C2144 e viene illustrato un modo per risolvere il problema:

```cpp
// C2144_2.cpp
// compile with: /clr /c
ref struct X {

   property double MultiDimProp[,,] {   // C2144
   // try the following line instead
   // property double MultiDimProp[int , int, int] {
      double get(int, int, int) { return 1; }
      void set(int i, int j, int k, double l) {}
   }

   property double MultiDimProp2[] {   // C2144
   // try the following line instead
   // property double MultiDimProp2[int] {
      double get(int) { return 1; }
      void set(int i, double l) {}
   }
};
```