---
title: literal (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- literal
- literal_cpp
helpviewer_keywords:
- literal keyword [C++]
ms.assetid: 6b1a1f36-2e1d-4a23-8eb6-172f4f3c477f
ms.openlocfilehash: c0de82d0d1d102f02ea79a4245f2e393439f2e0b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515676"
---
# <a name="literal-ccli-and-ccx"></a>literal (C++/CLI e C++/CX)

Una variabile (membro dati) contrassegnata come **literal** in una compilazione **/clr** è l'equivalente nativo di una variabile **static const**.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="remarks"></a>Osservazioni

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Osservazioni

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

## <a name="remarks"></a>Osservazioni

Un membro dati contrassegnato come **literal** deve essere inizializzato quando dichiarato e il valore deve essere un tipo integrale, enumerazione o stringa. Per la conversione dal tipo dell'espressione di inizializzazione al tipo del membro dati const statico non deve essere richiesta una conversione definita dall'utente.

In fase di esecuzione non viene allocata nessuna memoria per il campo letterale; tramite il compilatore viene inserito solo il relativo valore nei metadati per la classe.

Una variabile contrassegnata come **static const** non sarà disponibile nei metadati di altri compilatori.

Per altre informazioni, vedere [static](../cpp/storage-classes-cpp.md) e [const](../cpp/const-cpp.md).

**literal** è una parola chiave sensibile al contesto. Per altre informazioni, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

## <a name="example"></a>Esempio

Questo esempio mostra che una variabile **literal** implica **static**.

```cpp
// mcppv2_literal.cpp
// compile with: /clr
ref struct X {
   literal int i = 4;
};

int main() {
   int value = X::i;
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'effetto di literal nei metadati:

```cpp
// mcppv2_literal2.cpp
// compile with: /clr /LD
public ref struct A {
   literal int lit = 0;
   static const int sc = 1;
};
```

Si noti la differenza nei metadati per `sc` e `lit`: la direttiva `modopt` viene applicata a `sc`, cioè può essere ignorata dagli altri compilatori.

```
.field public static int32 modopt([mscorlib]System.Runtime.CompilerServices.IsConst) sc = int32(0x0000000A)
```

```
.field public static literal int32 lit = int32(0x0000000A)
```

## <a name="example"></a>Esempio

L'esempio seguente, creato in C#, fa riferimento ai metadati creati nell'esempio precedente e mostra l'effetto delle variabili **literal** e **static const**:

```cs
// mcppv2_literal3.cs
// compile with: /reference:mcppv2_literal2.dll
// A C# program
class B {
   public static void Main() {
      // OK
      System.Console.WriteLine(A.lit);
      System.Console.WriteLine(A.sc);

      // C# does not enforce C++ const
      A.sc = 9;
      System.Console.WriteLine(A.sc);

      // C# enforces const for a literal
      A.lit = 9;   // CS0131

      // you can assign a C++ literal variable to a C# const variable
      const int i = A.lit;
      System.Console.WriteLine(i);

      // but you cannot assign a C++ static const variable
      // to a C# const variable
      const int j = A.sc;   // CS0133
      System.Console.WriteLine(j);
   }
}
```

## <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)