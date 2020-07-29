---
title: __identifier (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- __identifier
- __identifier_cpp
helpviewer_keywords:
- __identifier keyword [C++]
ms.assetid: 348428af-afa7-4ff3-b571-acf874301cf2
ms.openlocfilehash: 5f95e9fc55acd33705b855c7c4f0ef268d4776a0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219690"
---
# <a name="__identifier-ccli"></a>__identifier (C++/CLI)

Consente di usare parole chiave C++ come identificatori.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="syntax"></a>Sintassi

```cpp
__identifier(C++_keyword)
```

### <a name="remarks"></a>Osservazioni

L'uso della parola chiave **__identifier** per gli identificatori che non sono parole chiave è consentito, ma è sconsigliato per una questione di stile.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

### <a name="examples"></a>Esempi

**Esempio**

Nell'esempio seguente viene creata una classe denominata `template` in C# e distribuita come dll. Nel programma C++/CLI che usa la `template` classe, la **`__identifier`** parola chiave nasconde il fatto che `template` è una parola chiave C++ standard.

```csharp
// identifier_template.cs
// compile with: /target:library
public class template {
   public void Run() { }
}
```

```cpp
// keyword__identifier.cpp
// compile with: /ZW
#using <identifier_template.dll>
int main() {
   __identifier(template)^ pTemplate = ref new __identifier(template)();
   pTemplate->Run();
}
```

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="remarks"></a>Osservazioni

La parola chiave **__identifier** è valida con l'opzione del compilatore `/clr`.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Nell'esempio seguente viene creata una classe denominata `template` in C# e distribuita come dll. Nel programma C++/CLI che usa la `template` classe, la **`__identifier`** parola chiave nasconde il fatto che `template` è una parola chiave C++ standard.

```csharp
// identifier_template.cs
// compile with: /target:library
public class template {
   public void Run() { }
}
```

```cpp
// keyword__identifier.cpp
// compile with: /clr
#using <identifier_template.dll>

int main() {
   __identifier(template) ^pTemplate = gcnew __identifier(template)();
   pTemplate->Run();
}
```

## <a name="see-also"></a>Vedere anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)<br/>
[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)
