---
title: Errore del compilatore C2144
ms.date: 11/04/2016
f1_keywords:
- C2144
helpviewer_keywords:
- C2144
ms.assetid: 49f3959b-324f-4c06-9588-c0ecef5dc5b3
ms.openlocfilehash: b917c0a2c15aeb70222c948bce9a6fb275c91068
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80207246"
---
# <a name="compiler-error-c2144"></a>Errore del compilatore C2144

> errore di sintassi:'*Type*' deve essere preceduto da'*token*'

Il *token* previsto del compilatore e il *tipo* trovato.

Questo errore può essere causato da una parentesi graffa di chiusura mancante, da una parentesi destra o da un punto e virgola.

C2144 può verificarsi anche quando si tenta di creare una macro da una parola chiave CLR che contiene uno spazio vuoto.

È anche possibile visualizzare C2144 se si sta provando a eseguire l'invio del tipo. Per ulteriori informazioni, vedere [tipo di inoltriC++(/CLI)](../../extensions/type-forwarding-cpp-cli.md) .

## <a name="examples"></a>Esempi

Nell'esempio seguente viene generato C2144 e viene illustrato come risolverlo:

```cpp
// C2144.cpp
// compile with: /clr /c
#define REF ref
REF struct MyStruct0;   // C2144

// OK
#define REF1 ref struct
REF1 MyStruct1;
```

Nell'esempio seguente viene generato C2144 e viene illustrato come risolverlo:

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
