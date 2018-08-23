---
title: eseguire l'override (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- overriding, override keyword [C++]
- override keyword [C++]
ms.assetid: 34d19257-1686-4fcd-96f5-af07c70ba914
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 708b69bc63e59d8ba6ba882d894d6f17b59d8237
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592369"
---
# <a name="override--c-component-extensions"></a>override (Estensioni del componente C++)

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

[Identificatore override](../cpp/override-specifier.md)  
[Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)