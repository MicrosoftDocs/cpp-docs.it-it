---
title: eseguire l'override (C + c++ /CLI e c++ /CX)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- overriding, override keyword [C++]
- override keyword [C++]
ms.assetid: 34d19257-1686-4fcd-96f5-af07c70ba914
ms.openlocfilehash: be7a347e4ddc700acaf4c5a968af648195445485
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647369"
---
# <a name="override--ccli-and-ccx"></a>eseguire l'override (C + c++ /CLI e c++ /CX)

Il **eseguire l'override** parola chiave sensibile al contesto indica che un membro di un tipo di override in una classe di base o un membro di interfaccia di base.

## <a name="remarks"></a>Note

Il **eseguire l'override** parola chiave è valido durante la compilazione per le piattaforme native (opzione del compilatore predefinita), le destinazioni di Windows Runtime (`/ZW` l'opzione del compilatore), o le destinazioni di common language runtime (`/clr` opzione del compilatore).

Per altre informazioni sugli identificatori di override, vedere [identificatore di override](../cpp/override-specifier.md) e [gli identificatori di Override e compilazioni Native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

Per altre informazioni sulle parole chiave sensibili al contesto, vedere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md).

## <a name="examples"></a>Esempi

Esempio di codice seguente mostra che **eseguire l'override** utilizzabili nelle compilazioni native.

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

Esempio di codice seguente mostra che **eseguire l'override** può essere usato nelle compilazioni di Windows Runtime.

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

Esempio di codice seguente mostra che **eseguire l'override** può essere usato nelle compilazioni a common language runtime.

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

## <a name="see-also"></a>Vedere anche

[Identificatore override](../cpp/override-specifier.md)<br/>
[Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)