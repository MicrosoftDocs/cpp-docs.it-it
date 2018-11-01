---
title: Parole chiave sensibili al contesto (C + c++ /CLI e c++ /CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- internal_CPP
helpviewer_keywords:
- context-sensitive keywords
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
ms.openlocfilehash: 78b61e77da8ed45a43b3830b7eaa9588c1860928
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50652751"
---
# <a name="context-sensitive-keywords--ccli-and-ccx"></a>Parole chiave sensibili al contesto (C + c++ /CLI e c++ /CX)

*Parole chiave sensibili al contesto* sono elementi del linguaggio riconosciuti solo in contesti specifici. All'esterno del contesto specifico, una parola chiave sensibile al contesto può essere un simbolo definito dall'utente.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Note

Di seguito è riportato un elenco di parole chiave sensibili al contesto:

- [abstract](../windows/abstract-cpp-component-extensions.md)

- [delegate](../windows/delegate-cpp-component-extensions.md)

- [event](../windows/event-cpp-component-extensions.md)

- [finally](../dotnet/finally.md)

- [for each, in](../dotnet/for-each-in.md)

- [initonly](../dotnet/initonly-cpp-cli.md)

- `internal`

- [literal](../windows/literal-cpp-component-extensions.md)

- [override](../windows/override-cpp-component-extensions.md)

- [proprietà](../windows/property-cpp-component-extensions.md)

- [sealed](../windows/sealed-cpp-component-extensions.md)

- `where` (in parte [Generics](../windows/generics-cpp-component-extensions.md))

Per scopi di leggibilità, è possibile limitare l'utilizzo delle parole chiave sensibili al contesto come simboli definiti dall'utente.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Note

Non esistono commenti specifici della piattaforma per questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Note

Non esistono commenti specifici della piattaforma per questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Esempio di codice seguente viene illustrato che nel contesto appropriato, il **proprietà** parola chiave sensibile al contesto può essere utilizzato per definire una proprietà e una variabile.

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

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)