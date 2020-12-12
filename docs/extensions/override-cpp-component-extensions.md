---
description: 'Altre informazioni su: override (C++/CLI e C++/CX)'
title: override (C++/CLI e C++/CX)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- overriding, override keyword [C++]
- override keyword [C++]
ms.assetid: 34d19257-1686-4fcd-96f5-af07c70ba914
ms.openlocfilehash: 1be49ac9b9e2d0f2eb3342855a42e9707f883078
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335940"
---
# <a name="override--ccli-and-ccx"></a>override (C++/CLI e C++/CX)

La parola chiave sensibile al contesto **override** indica che un membro di un tipo esegue l'override di una classe di base o di un membro di un'interfaccia di base.

## <a name="remarks"></a>Commenti

La parola chiave **override** è valida quando si esegue la compilazione per destinazioni native (opzione del compilatore predefinita), destinazioni Windows Runtime (opzione del compilatore `/ZW`) o destinazioni Common Language Runtime (opzione del compilatore `/clr`).

Per altre informazioni sugli identificatori di override, vedere [Identificatore override](../cpp/override-specifier.md) e [Identificatori di override e compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

Per altre informazioni sulle parole chiave sensibili al contesto, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md).

## <a name="examples"></a>Esempio

L'esempio di codice seguente mostra che è anche possibile usare **override** nelle compilazioni native.

```cpp
// override_keyword_1.cpp
// compile with: /c
struct I1 {
   virtual void f();
};

struct X : public I1 {
   virtual void f() override {}
};
```

### <a name="example"></a>Esempio

L'esempio di codice seguente mostra che è possibile usare **override** nelle compilazioni Windows Runtime.

```cpp
// override_keyword_2.cpp
// compile with: /ZW /c
ref struct I1 {
   virtual void f();
};

ref struct X : public I1 {
   virtual void f() override {}
};
```

#### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

### <a name="example"></a>Esempio

L'esempio di codice seguente mostra che è possibile usare **override** nelle compilazioni Common Language Runtime.

```cpp
// override_keyword_3.cpp
// compile with: /clr /c
ref struct I1 {
   virtual void f();
};

ref struct X : public I1 {
   virtual void f() override {}
};
```

#### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedi anche

[Identificatore di override](../cpp/override-specifier.md)<br/>
[Identificatori di override](override-specifiers-cpp-component-extensions.md)
