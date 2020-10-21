---
title: valore letterale (C++/CLI)
description: La parola chiave Literal è una parola chiave sensibile al contesto di Microsoft C++/CLI per una costante in fase di compilazione.
ms.date: 10/20/2020
ms.topic: reference
f1_keywords:
- literal
- literal_cpp
helpviewer_keywords:
- literal keyword [C++]
ms.openlocfilehash: 2d71a535252ba51f89407670b474a34b407eaffc
ms.sourcegitcommit: 59b7c18703d1ffd66827db0e2eeece490d3d8789
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2020
ms.locfileid: "92337213"
---
# <a name="literal-ccli"></a>`literal` (C++/CLI)

Una variabile (membro dati) contrassegnata come **`literal`** in una **`/clr`** compilazione è una costante in fase di compilazione. Si tratta dell'equivalente nativo di una [`const`](/dotnet/csharp/language-reference/keywords/const) variabile C#.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="remarks"></a>Commenti

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Commenti

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

## <a name="common-language-runtime"></a>Common Language Runtime

## <a name="remarks"></a>Commenti

Un membro dati contrassegnato come **`literal`** deve essere inizializzato quando viene dichiarato. Il valore deve essere un tipo integrale, enum o String costante. La conversione dal tipo dell'espressione di inizializzazione al tipo del **`literal`** membro dati non può richiedere una conversione definita dall'utente.

Non è stata allocata alcuna memoria per il campo in fase **`literal`** di esecuzione. il compilatore inserisce solo il relativo valore nei metadati per la classe. Il **`literal`** valore viene considerato come una costante in fase di compilazione. L'equivalente più vicino in C++ standard è **`constexpr`** , ma un membro dati non può essere **`constexpr`** in c++/CLI.

Una variabile contrassegnata come **`literal`** differisce da un oggetto contrassegnato **`static const`** . Un **`static const`** membro dati non viene reso disponibile nei metadati ad altri compilatori. Per altre informazioni, vedere [`static`](../cpp/storage-classes-cpp.md) e [`const`](../cpp/const-cpp.md).

**`literal`** è una parola chiave sensibile al contesto. Per altre informazioni, vedere [parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

## <a name="examples"></a>Esempi

Questo esempio mostra che una **`literal`** variabile implica **`static`** .

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

Nell'esempio seguente viene illustrato l'effetto di **`literal`** nei metadati:

```cpp
// mcppv2_literal2.cpp
// compile with: /clr /LD
public ref struct A {
   literal int lit = 0;
   static const int sc = 1;
};
```

Si noti la differenza nei metadati per `sc` e `lit`: la direttiva `modopt` viene applicata a `sc`, cioè può essere ignorata dagli altri compilatori.

```MSIL
.field public static int32 modopt([mscorlib]System.Runtime.CompilerServices.IsConst) sc = int32(0x00000001)
```

```MSIL
.field public static literal int32 lit = int32(0x00000000)
```

L'esempio seguente, creato in C#, fa riferimento ai metadati creati nell'esempio precedente e Mostra l'effetto delle **`literal`** variabili e **`static const`** :

```csharp
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

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
