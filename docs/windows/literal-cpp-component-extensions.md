---
title: valore letterale (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- literal
- literal_cpp
dev_langs:
- C++
helpviewer_keywords:
- literal keyword [C++]
ms.assetid: 6b1a1f36-2e1d-4a23-8eb6-172f4f3c477f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 76a57261b28679c4f05b677dc7b49008535c921b
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42596446"
---
# <a name="literal-c-component-extensions"></a>valore letterale (Estensioni del componente C++)

Una variabile (membro dati) contrassegnata come **letterale** in un **/clr** compilazione è l'equivalente nativo di un **const statico** variabile.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="remarks"></a>Note

Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Note

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

## <a name="remarks"></a>Note

Un membro dati contrassegnato come **letterale** deve essere inizializzato quando dichiarato e il valore deve essere una costante integrale, enumerazione o tipo stringa. Per la conversione dal tipo dell'espressione di inizializzazione al tipo del membro dati const statico non deve essere richiesta una conversione definita dall'utente.

In fase di esecuzione non viene allocata nessuna memoria per il campo letterale; tramite il compilatore viene inserito solo il relativo valore nei metadati per la classe.

Una variabile contrassegnata **const statico** non sarà disponibile nei metadati di altri compilatori.

Per altre informazioni, vedere [statici](../cpp/storage-classes-cpp.md) e [const](../cpp/const-cpp.md).

**valore letterale** è una parola chiave sensibile al contesto. Visualizzare [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per altre informazioni.

## <a name="example"></a>Esempio

In questo esempio mostra che un **letterale** variabile implica **statico**.

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

Nell'esempio seguente, creato in c#, fa riferimento a metadati creati nell'esempio precedente e viene illustrato l'effetto della **letterale** e **static const** variabili:

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

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)