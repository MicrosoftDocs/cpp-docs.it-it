---
title: Avviso degli strumenti del linker LNK4248
ms.date: 11/04/2016
f1_keywords:
- LNK4248
helpviewer_keywords:
- LNK4248
ms.assetid: e40523ff-e3cb-4ba6-ab79-23f0f339f6cf
ms.openlocfilehash: 4ba05ef067c539dc9c0aca6dc2a395748fd217a2
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988107"
---
# <a name="linker-tools-warning-lnk4248"></a>Avviso degli strumenti del linker LNK4248

token TypeRef non risolto (token) per ' type '; l'immagine potrebbe non essere eseguita

Un tipo non ha una definizione nei metadati MSIL.

LNK4248 può verificarsi quando è presente una sola dichiarazione con esecuzione per un tipo in un modulo MSIL (compilata con **/CLR**), in cui al tipo viene fatto riferimento nel modulo MSIL e dove il modulo MSIL è collegato a un modulo nativo con una definizione per il tipo.

In questa situazione, il linker fornirà la definizione di tipo nativo nei metadati MSIL e questo potrebbe fornire il comportamento corretto.

Tuttavia, se una dichiarazione di tipo in diretta è un tipo CLR, la definizione del tipo nativo del linker potrebbe non essere corretta.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Fornire la definizione del tipo nel modulo MSIL.

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK4248. Definire struct a da risolvere.

```cpp
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

Nell'esempio seguente viene illustrata una definizione di tipo.

```cpp
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

L'esempio seguente genera l'LNK4248.

```cpp
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
