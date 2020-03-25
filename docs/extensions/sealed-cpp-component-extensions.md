---
title: sealed (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- sealed_cpp
- sealed
helpviewer_keywords:
- sealed keyword [C++]
ms.assetid: 3d0d688a-41aa-45f5-a25a-65c44206521e
ms.openlocfilehash: ab5d5b32ceb87a3b1ccf08d170889dd4825f6c17
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181798"
---
# <a name="sealed--ccli-and-ccx"></a>sealed (C++/CLI e C++/CX)

**sealed** è una parola chiave sensibile al contesto per le classi di riferimento che indica che non è possibile eseguire l'override di un membro virtuale o che non è possibile usare un tipo come tipo di base.

> [!NOTE]
> Il linguaggio standard ISO C++11 ha introdotto la parola chiave [final](../cpp/final-specifier.md). Usare **final** nelle classi standard e **sealed** nelle classi di riferimento.

## <a name="all-runtimes"></a>Tutti i runtime

## <a name="syntax"></a>Sintassi

```cpp
ref class identifier sealed {...};
virtual return-type identifier() sealed {...};
```

### <a name="parameters"></a>Parametri

*identifier*<br/>
Nome della funzione o della classe.

*return-type*<br/>
Tipo restituito da una funzione.

## <a name="remarks"></a>Osservazioni

Nel primo esempio di sintassi, la classe è sealed. Nel secondo esempio una funzione virtuale è sealed.

Usare la parola chiave **sealed** per le classi di riferimento e le relative funzioni di membri virtuali. Per altre informazioni, vedere [Identificatori di override e compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

È possibile rilevare in fase di compilazione se un tipo è sealed usando la caratteristica del tipo `__is_sealed(type)`. Per altre informazioni, vedere [Supporto del compilatore per caratteristiche di tipo](compiler-support-for-type-traits-cpp-component-extensions.md).

**sealed** è una parola chiave sensibile al contesto.  Per altre informazioni, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

Vedere [Classi e struct di riferimento](../cppcx/ref-classes-and-structs-c-cx.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio di codice seguente mostra l'effetto di **sealed** su un membro virtuale.

```cpp
// sealed_keyword.cpp
// compile with: /clr
interface struct I1 {
   virtual void f();
   virtual void g();
};

ref class X : I1 {
public:
   virtual void f() {
      System::Console::WriteLine("X::f override of I1::f");
   }

   virtual void g() sealed {
      System::Console::WriteLine("X::f override of I1::g");
   }
};

ref class Y : public X {
public:
   virtual void f() override {
      System::Console::WriteLine("Y::f override of I1::f");
   }

   /*
   // the following override generates a compiler error
   virtual void g() override {
      System::Console::WriteLine("Y::g override of I1::g");
   }
   */
};

int main() {
   I1 ^ MyI = gcnew X;
   MyI -> f();
   MyI -> g();

   I1 ^ MyI2 = gcnew Y;
   MyI2 -> f();
}
```

```Output
X::f override of I1::f
X::f override of I1::g
Y::f override of I1::f
```

L'esempio di codice successivo mostra come contrassegnare una classe come sealed.

```cpp
// sealed_keyword_2.cpp
// compile with: /clr
interface struct I1 {
   virtual void f();
};

ref class X sealed : I1 {
public:
   virtual void f() override {}
};

ref class Y : public X {   // C3246 base class X is sealed
public:
   virtual void f() override {}
};
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)
