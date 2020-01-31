---
title: Override espliciti (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- overriding, override [C++]
ms.assetid: 4ec3eaf5-163b-4df8-8f16-7a2ec04c3d0f
ms.openlocfilehash: b80e49489c0b0d26469ba9f8b77e80a962668e35
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821637"
---
# <a name="explicit-overrides--ccli-and-ccx"></a>Override espliciti (C++/CLI e C++/CX)

Questo argomento descrive come eseguire l'override esplicito di un membro di una classe base o di un'interfaccia di base. Un override denominato (esplicito) deve essere usato solo per eseguire l'override di un metodo con un metodo derivato che ha un nome diverso.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="syntax"></a>Sintassi

```cpp
overriding-function-declarator = type::function [,type::function] { overriding-function-definition }
overriding-function-declarator = function { overriding-function-definition }
```

### <a name="parameters"></a>Parametri

*overriding-function-declarator*<br/>
Elenco di tipi, nomi e argomenti restituiti della funzione di override.  Si noti che la funzione di override non deve avere lo stesso nome della funzione sottoposta a override.

*type*<br/>
Tipo di base che contiene una funzione di cui eseguire l'override.

*funzione*<br/>
Elenco delimitato da virgole di uno o più nomi di funzione di cui eseguire l'override.

*overriding-function-definition*<br/>
Istruzioni del corpo della funzione che definiscono la funzione di override.

### <a name="remarks"></a>Note

Utilizzare override espliciti per creare un alias per una firma del metodo o per fornire implementazioni diverse per i metodi con la stessa firma.

Per informazioni sulla modifica del comportamento di tipi ereditati e membri di tipi ereditati, vedere [Identificatori di override](override-specifiers-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

### <a name="requirements"></a>Requisiti di

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Note

Per informazioni sugli override espliciti in codice nativo o codice compilato con `/clr:oldSyntax`, vedere [Override espliciti](../cpp/explicit-overrides-cpp.md).

### <a name="requirements"></a>Requisiti di

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

L'esempio di codice seguente mostra un semplice override implicito e l'implementazione di un membro in un'interfaccia di base, senza usare override espliciti.

```cpp
// explicit_override_1.cpp
// compile with: /clr
interface struct I1 {
   virtual void f();
};

ref class X : public I1 {
public:
   virtual void f() {
      System::Console::WriteLine("X::f override of I1::f");
   }
};

int main() {
   I1 ^ MyI = gcnew X;
   MyI -> f();
}
```

```Output
X::f override of I1::f
```

L'esempio di codice seguente mostra come implementare tutti i membri di interfaccia con una firma comune, usando la sintassi degli override espliciti.

```cpp
// explicit_override_2.cpp
// compile with: /clr
interface struct I1 {
   virtual void f();
};

interface struct I2 {
   virtual void f();
};

ref struct X : public I1, I2 {
   virtual void f() = I1::f, I2::f {
      System::Console::WriteLine("X::f override of I1::f and I2::f");
   }
};

int main() {
   I1 ^ MyI = gcnew X;
   I2 ^ MyI2 = gcnew X;
   MyI -> f();
   MyI2 -> f();
}
```

```Output
X::f override of I1::f and I2::f
X::f override of I1::f and I2::f
```

L'esempio di codice seguente mostra in che modo l'override di una funzione può avere un nome diverso dalla funzione implementata.

```cpp
// explicit_override_3.cpp
// compile with: /clr
interface struct I1 {
   virtual void f();
};

ref class X : public I1 {
public:
   virtual void g() = I1::f {
      System::Console::WriteLine("X::g");
   }
};

int main() {
   I1 ^ a = gcnew X;
   a->f();
}
```

```Output
X::g
```

L'esempio di codice seguente mostra un'implementazione esplicita dell'interfaccia che implementa una raccolta indipendente dai tipi.

```cpp
// explicit_override_4.cpp
// compile with: /clr /LD
using namespace System;
ref class R : ICloneable {
   int X;

   virtual Object^ C() sealed = ICloneable::Clone {
      return this->Clone();
   }

public:
   R() : X(0) {}
   R(int x) : X(x) {}

   virtual R^ Clone() {
      R^ r = gcnew R;
      r->X = this->X;
      return r;
   }
};
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)