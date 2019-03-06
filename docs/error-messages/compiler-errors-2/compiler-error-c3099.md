---
title: Errore del compilatore C3099
ms.date: 11/04/2016
f1_keywords:
- C3099
helpviewer_keywords:
- C3099
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
ms.openlocfilehash: beaa34bb9bed4824383cdad32c6bfd0aea19f6b7
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418576"
---
# <a name="compiler-error-c3099"></a>Errore del compilatore C3099

'keyword': usare [System::AttributeUsageAttribute] per gli attributi gestiti; usare [Windows::Foundation::Metadata::AttributeUsageAttribute] per gli attributi WinRT

Uso <xref:System.AttributeUsageAttribute> dichiarare **/clr** attributi. Usare `Windows::Foundation::Metadata::AttributeUsageAttribute` per dichiarare gli attributi Windows Runtime.

Per altre informazioni sugli attributi /CLR, vedere [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md). Per gli attributi supportati in Windows Runtime, vedere [spazio dei nomi](/uwp/api/windows.foundation.metadata)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3099 e mostra come risolverlo.

```
// C3099.cpp
// compile with: /clr /c
using namespace System;
[usage(10)]   // C3099
// try the following line instead
// [AttributeUsageAttribute(AttributeTargets::All)]
ref class A : Attribute {};
```