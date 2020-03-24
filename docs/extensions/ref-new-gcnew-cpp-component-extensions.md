---
title: ref new, gcnew (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- gcnew
- ref new
- gcnew_cpp
helpviewer_keywords:
- ref new keyword (C++)
- gcnew keyword [C++]
ms.assetid: 388a62da-c2df-4a94-a9a2-205b53e577da
ms.openlocfilehash: f7269a62d7899df4eb89f6dd9487310c0fda0b4d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181811"
---
# <a name="ref-new-gcnew--ccli-and-ccx"></a>ref new, gcnew (C++/CLI e C++/CX)

La parola chiave aggregata **ref new** alloca un'istanza di un tipo sottoposto a Garbage Collection quando l'oggetto diventa inaccessibile e restituisce un handle ([^](handle-to-object-operator-hat-cpp-component-extensions.md)) all'oggetto allocato.

## <a name="all-runtimes"></a>Tutti i runtime

La memoria per un'istanza di un tipo allocata da **ref new** viene deallocata automaticamente.

Un'operazione **ref new**  genera un'eccezione `OutOfMemoryException` se non è in grado di allocare memoria.

Per altre informazioni su come viene allocata e deallocata la memoria per i tipi C++ nativi, vedere gli [operatori new e delete](../cpp/new-and-delete-operators.md).

## <a name="windows-runtime"></a>Windows Runtime

Usare **ref new** per allocare memoria per oggetti Windows Runtime di cui si vuole amministrare automaticamente la durata. L'oggetto viene automaticamente deallocato quando il conteggio dei riferimenti scende a zero. Questo si verifica dopo che l'ultima copia del riferimento esce dall'ambito. Per altre informazioni, vedere [Classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

La memoria per un tipo gestito (tipo riferimento o tipo valore) viene allocata da **gcnew** e deallocata tramite Garbage Collection.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio seguente usa **gcnew** per allocare un oggetto Message.

```cpp
// mcppv2_gcnew_1.cpp
// compile with: /clr
ref struct Message {
   System::String^ sender;
   System::String^ receiver;
   System::String^ data;
};

int main() {
   Message^ h_Message  = gcnew Message;
  //...
}
```

L'esempio seguente usa **gcnew** per creare un tipo valore boxed da usare come tipo riferimento.

```cpp
// example2.cpp : main project file.
// compile with /clr
using namespace System;
value class Boxed {
    public:
        int i;
};
int main()
{
    Boxed^ y = gcnew Boxed;
    y->i = 32;
    Console::WriteLine(y->i);
    return 0;
}
```

```Output
32
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
