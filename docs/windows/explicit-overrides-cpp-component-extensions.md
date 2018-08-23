---
title: Override espliciti (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- overriding, override [C++]
ms.assetid: 4ec3eaf5-163b-4df8-8f16-7a2ec04c3d0f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3ce2f65fd740fd2bf133d65b25cbb52838c53dd2
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42601212"
---
# <a name="explicit-overrides--c-component-extensions"></a>Override esplicito (Estensioni del componente C++)

In questo argomento viene illustrato come eseguire l'override esplicito di un membro di una classe di base o interfaccia. Override (esplicito) denominato deve essere utilizzato solo per eseguire l'override di un metodo con un metodo derivato ha un nome diverso.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="syntax"></a>Sintassi

```cpp
overriding-function-declarator = type::function [,type::function] { overriding-function-definition }
overriding-function-declarator = function { overriding-function-definition }
```

### <a name="parameters"></a>Parametri

*dichiaratore di funzione viene sottoposto a override*  
L'elenco di argomenti, nome e tipo restituito della funzione esegue l'override.  Si noti che la funzione esegue l'override non deve avere lo stesso nome della funzione da sottoporre a override.

*type*  
Il tipo di base che contiene una funzione per eseguire l'override.

*function*  
Elenco delimitato da virgole di uno o più nomi di funzione per eseguire l'override.

*override-function-definition*  
Le istruzioni del corpo di funzione che definiscono la funzione esegue l'override.

### <a name="remarks"></a>Note

Utilizzare esplicite le sostituzioni per creare un alias per una firma del metodo o per fornire implementazioni diverse per i metodi con la stessa firma.

Per informazioni sulla modifica del comportamento di tipi ereditati e i membri ereditati, vedere [gli identificatori di Override](../windows/override-specifiers-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Note

Per informazioni su explicit esegue l'override in codice nativo o codice compilato con `/clr:oldSyntax`, vedere [override espliciti](../cpp/explicit-overrides-cpp.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Esempio di codice seguente mostra un'implementazione di un membro e di sostituzione semplice, implicita in un'interfaccia di base, non tramite override espliciti.

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

Esempio di codice seguente viene illustrato come implementare tutti i membri di interfaccia con una firma comune, usando la sintassi di override esplicito.

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

Esempio di codice seguente viene illustrato come un override di funzioni può avere un nome diverso dalla funzione che sta implementando.

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

Esempio di codice seguente illustra un'implementazione esplicita dell'interfaccia che implementa una raccolta di tipi sicuri.

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

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)