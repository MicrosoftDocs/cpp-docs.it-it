---
title: for each, in
description: C++/CLI per ogni, nella descrizione dell'istruzione ed esempi.
ms.date: 09/25/2020
ms.topic: reference
f1_keywords:
- cliext::foreach
- for
- each
- in
helpviewer_keywords:
- for each keyword [C++]
ms.assetid: 0c3a364b-2747-43f3-bb8d-b7d3b7023f79
ms.openlocfilehash: 7f228a773dfcbe791e26ea3e1bd8cfba7f3ab028
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91413919"
---
# <a name="for-each-in"></a>for each, in

Scorre una matrice o una raccolta. Questa parola chiave non standard è disponibile sia nei progetti C++/CLI sia nei progetti C++ nativi. Tuttavia, il suo utilizzo non è consigliato. Si consiglia di utilizzare un' [istruzione for standard basata sull'intervallo (C++)](../cpp/range-based-for-statement-cpp.md) .

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="syntax"></a>Sintassi

> **per ogni (** *type* *identificatore* **di tipo nell'** *espressione* **) {**\
> &nbsp;&nbsp;&nbsp;&nbsp;*istruzioni*\
> **}**

### <a name="parameters"></a>Parametri

*type*<br/>
Tipo di `identifier`.

*identificatore*<br/>
Variabile di iterazione che rappresenta l'elemento della raccolta.  Quando `identifier` è un [operatore di riferimento di rilevamento](../extensions/tracking-reference-operator-cpp-component-extensions.md), è possibile modificare l'elemento.

*expression*<br/>
Raccolta o espressione di matrice. L'elemento della raccolta deve poter essere convertito dal compilatore nel tipo `identifier`.

*istruzioni*<br/>
Una o più istruzioni da eseguire.

### <a name="remarks"></a>Osservazioni

L'istruzione `for each` viene utilizzata per scorrere una raccolta. È possibile modificare gli elementi di una raccolta, ma non è possibile aggiungere o eliminare elementi.

Le *istruzioni* vengono eseguite per ogni elemento nella matrice o nella raccolta. Dopo che l'iterazione è stata completata per tutti gli elementi della raccolta, il controllo viene trasferito all'istruzione che segue il blocco `for each`.

`for each` e `in` sono [parole chiave sensibili al contesto](../extensions/context-sensitive-keywords-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

### <a name="example"></a>Esempio

In questo esempio viene illustrato come utilizzare `for each` per scorrere una stringa.

```cpp
// for_each_string1.cpp
// compile with: /ZW
#include <stdio.h>
using namespace Platform;

ref struct MyClass {
   property String^ MyStringProperty;
};

int main() {
   String^ MyString = ref new String("abcd");

   for each ( char c in MyString )
      wprintf("%c", c);

   wprintf("/n");

   MyClass^ x = ref new MyClass();
   x->MyStringProperty = "Testing";

   for each( char c in x->MyStringProperty )
      wprintf("%c", c);
}
```

```Output
abcd

Testing
```

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Osservazioni

La sintassi CLR è la stessa della sintassi di **tutti i runtime** , ad eccezione di quanto segue.

*expression*<br/>
Raccolta o espressione di matrice gestita. L'elemento della raccolta deve essere tale che il compilatore possa convertirlo da <xref:System.Object> nel tipo di *identificatore* .

l' *espressione* restituisce un tipo che implementa <xref:System.Collections.IEnumerable> , <xref:System.Collections.Generic.IEnumerable%601> o un tipo che definisce un `GetEnumerator` metodo che restituisce un tipo che implementa <xref:System.Collections.IEnumerator> o dichiara tutti i metodi definiti in `IEnumerator` .

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/clr**

### <a name="example"></a>Esempio

In questo esempio viene illustrato come utilizzare `for each` per scorrere una stringa.

```cpp
// for_each_string2.cpp
// compile with: /clr
using namespace System;

ref struct MyClass {
   property String ^ MyStringProperty;
};

int main() {
   String ^ MyString = gcnew String("abcd");

   for each ( Char c in MyString )
      Console::Write(c);

   Console::WriteLine();

   MyClass ^ x = gcnew MyClass();
   x->MyStringProperty = "Testing";

   for each( Char c in x->MyStringProperty )
      Console::Write(c);
}
```

```Output
abcd

Testing
```

## <a name="see-also"></a>Vedere anche

[Estensioni del componente per le piattaforme di runtime](../extensions/component-extensions-for-runtime-platforms.md)\
[Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)
