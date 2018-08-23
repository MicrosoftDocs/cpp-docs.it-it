---
title: Rilevamento di operatore di riferimento (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- '%'
dev_langs:
- C++
helpviewer_keywords:
- tracking references
- '% tracking reference [C++]'
ms.assetid: 142a7269-ab69-4b54-a6d7-833bef06228f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: da01a2dd7e871bb555b2b5711a59dbb5e65424a8
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42604076"
---
# <a name="tracking-reference-operator-c-component-extensions"></a>Operatore di riferimento di rilevamento (Estensioni del componente C++)

Oggetto *riferimento di rilevamento* (`%`) si comporta come un riferimento ordinario C++ (`&`) ad eccezione del fatto che quando un oggetto viene assegnato a un riferimento di traccia, conteggio dei riferimenti dell'oggetto viene incrementato.

## <a name="all-platforms"></a>Tutte le piattaforme

Un riferimento di traccia presenta le caratteristiche descritte di seguito.

- L'assegnazione di un oggetto a un riferimento di traccia causa l'incremento del conteggio dei riferimenti dell'oggetto.

- Un riferimento nativo (`&`) è il risultato quando si dereferenzia un `*`. Un riferimento di traccia (`%`) è il risultato quando si dereferenzia un `^`. Fino a quando è necessario un `%` a un oggetto, l'oggetto rimane attivo in memoria.

- L'operatore punto (`.`) di accesso ai membri viene utilizzato per accedere a un membro dell'oggetto.

- I riferimenti di traccia sono validi per gli handle e i tipi di valore (ad esempio `String^`).

- Un riferimento di traccia non può essere assegnato un valore null oppure **nullptr** valore. Può essere riassegnato a un altro oggetto valido quando necessario.

- Un riferimento di traccia non può essere utilizzato come operatore unario di acquisizione indirizzo.

## <a name="windows-runtime"></a>Windows Runtime

Un riferimento di traccia si comporta come un riferimento standard C++, eccetto che % è un riferimento con conteggio dei riferimenti. Il frammento di codice riportato di seguito illustra come eseguire la conversione tra i tipi % e ^:

```cpp
Foo^ spFoo = ref new Foo();
Foo% srFoo = *spFoo;
Foo^ spFoo2 = %srFoo;
```

L'esempio seguente mostra come passare ^ a una funzione che accetta un valore %.

```cpp
ref class Foo sealed {};

    // internal or private
    void UseFooHelper(Foo% f)  
    {
        auto x = %f;
    }

    // public method on ABI boundary
    void UseFoo(Foo^ f)  
    {
        if (f != nullptr) { UseFooHelper(*f); }
    }
```

## <a name="common-language-runtime"></a>Common Language Runtime

In C++/CLI è possibile usare un riferimento di traccia a un handle quando si esegue l'associazione a un oggetto di un tipo CLR nell'heap sottoposto a Garbage Collection.

In CLR, il valore di una variabile di riferimento di traccia viene aggiornato automaticamente ogni volta che il Garbage Collector sposta l'oggetto a cui si fa riferimento.

Un riferimento di traccia può essere dichiarato solo sullo stack e non può essere membro di una classe.

Non è possibile avere un riferimento C++ nativo a un oggetto nell'heap sottoposto a Garbage Collection.

Per ulteriori informazioni sui riferimenti di traccia in C++/CLI, vedere:

- [Procedura: Usare riferimenti di rilevamento in C++/CLI](../dotnet/how-to-use-tracking-references-in-cpp-cli.md)

### <a name="examples"></a>Esempi

Nel seguente esempio per C++/CLI viene illustrato come usare un riferimento di traccia con tipi gestiti e nativi.

```cpp
// tracking_reference_1.cpp
// compile with: /clr
ref class MyClass {
public:
   int i;
};

value struct MyStruct {
   int k;
};

int main() {
   MyClass ^ x = ref new MyClass;
   MyClass ^% y = x;   // tracking reference handle to reference object

   int %ti = x->i;   // tracking reference to member of reference type

   int j = 0;
   int %tj = j;   // tracking reference to object on the stack

   int * pi = new int[2];
   int % ti2 = pi[0];   // tracking reference to object on native heap

   int *% tpi = pi;   // tracking reference to native pointer

   MyStruct ^ x2 = ref new MyStruct;
   MyStruct ^% y2 = x2;   // tracking reference to value object

   MyStruct z;
   int %tk = z.k;   // tracking reference to member of value type

   delete[] pi;
}
```

Nel seguente esempio per C++/CLI viene illustrato come associare un riferimento di traccia a una matrice.

```cpp
// tracking_reference_2.cpp
// compile with: /clr
using namespace System;

int main() {
   array<int> ^ a = ref new array<Int32>(5);
   a[0] = 21;
   Console::WriteLine(a[0]);
   array<int> ^% arr = a;
   arr[0] = 222;
   Console::WriteLine(a[0]);
}
```

```Output
21
222
```