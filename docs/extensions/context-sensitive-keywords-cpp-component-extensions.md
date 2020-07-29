---
title: Parole chiave sensibili al contesto (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- internal_CPP
helpviewer_keywords:
- context-sensitive keywords
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
ms.openlocfilehash: 82bf4c3f0deed788b7b1e50f1d8d82e63dc27f6f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219742"
---
# <a name="context-sensitive-keywords--ccli-and-ccx"></a>Parole chiave sensibili al contesto (C++/CLI e C++/CX)

Le *parole chiave sensibili al contesto* sono elementi del linguaggio riconosciuti solo in contesti specifici. All'esterno del contesto specifico, una parola chiave sensibile al contesto può essere un simbolo definito dall'utente.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Osservazioni

Di seguito è riportato un elenco di parole chiave sensibili al contesto:

- [astratta](abstract-cpp-component-extensions.md)

- [delegate](delegate-cpp-component-extensions.md)

- [event](event-cpp-component-extensions.md)

- [Infine](../dotnet/finally.md)

- [for each, in](../dotnet/for-each-in.md)

- [initonly](../dotnet/initonly-cpp-cli.md)

- `internal`

- [valore letterale](literal-cpp-component-extensions.md)

- [override](override-cpp-component-extensions.md)

- [property](property-cpp-component-extensions.md)

- [sealed](sealed-cpp-component-extensions.md)

- `where` (parte di [Generics](generics-cpp-component-extensions.md))

Per scopi di leggibilità, può essere necessario limitare l'uso di parole chiave sensibili al contesto come simboli definiti dall'utente.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Osservazioni

Non esistono commenti specifici della piattaforma per questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Osservazioni

Non esistono commenti specifici della piattaforma per questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Nell'esempio di codice seguente viene illustrato che nel contesto appropriato **`property`** è possibile utilizzare la parola chiave sensibile al contesto per definire una proprietà e una variabile.

```cpp
// context_sensitive_keywords.cpp
// compile with: /clr
public ref class C {
   int MyInt;
public:
   C() : MyInt(99) {}

   property int Property_Block {   // context-sensitive keyword
      int get() { return MyInt; }
   }
};

int main() {
   int property = 0;               // variable name
   C ^ MyC = gcnew C();
   property = MyC->Property_Block;
   System::Console::WriteLine(++property);
}
```

```Output
100
```

## <a name="see-also"></a>Vedere anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
