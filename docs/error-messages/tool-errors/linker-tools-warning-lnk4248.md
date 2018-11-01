---
title: Avviso degli strumenti del linker LNK4248
ms.date: 11/04/2016
f1_keywords:
- LNK4248
helpviewer_keywords:
- LNK4248
ms.assetid: e40523ff-e3cb-4ba6-ab79-23f0f339f6cf
ms.openlocfilehash: db9432c505b7348c9bef5ed34aac1cb4edecb17b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50461230"
---
# <a name="linker-tools-warning-lnk4248"></a>Avviso degli strumenti del linker LNK4248

token typeref non risolto (token) per 'type'; immagine non venga eseguita

Un tipo non ha una definizione nei metadati MSIL.

LNK4248 può verificarsi quando è presente solo una dichiarazione con prototipo per un tipo in un modulo MSIL (compilati con **/clr**), dove il tipo fa riferimento al modulo MSIL, nonché il modulo MSIL viene collegato a un modulo nativo che contiene una definizione del il tipo.

In questo caso, il linker fornirà la definizione di tipo nativo nei metadati del codice MSIL e questo può fornire per il corretto funzionamento.

Tuttavia, se una dichiarazione di tipo inoltro è un tipo CLR, quindi definizione di tipo nativo del linker potrebbe non essere corretta

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Fornire la definizione di tipo nel modulo MSIL.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK4248. Definire la struttura di risolvere.

```
// LNK4248.cpp
// compile with: /clr /W1
// LNK4248 expected
struct A;
void Test(A*){}

int main() {
   Test(0);
}
```

## <a name="example"></a>Esempio

L'esempio seguente è una definizione in avanti di un tipo.

```
// LNK4248_2.cpp
// compile with: /clr /c
class A;   // provide a definition for A here to resolve
A * newA();
int valueA(A * a);

int main() {
   A * a = newA();
   return valueA(a);
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK4248.

```
// LNK4248_3.cpp
// compile with: /c
// post-build command: link LNK4248_2.obj LNK4248_3.obj
class A {
public:
   int b;
};

A* newA() {
   return new A;
}

int valueA(A * a) {
   return (int)a;
}
```