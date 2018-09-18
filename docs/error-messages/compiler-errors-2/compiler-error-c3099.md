---
title: Errore del compilatore C3099 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3099
dev_langs:
- C++
helpviewer_keywords:
- C3099
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5f11e049965fb7374a2294e813502d1279f9f26
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46067415"
---
# <a name="compiler-error-c3099"></a>Errore del compilatore C3099

'keyword': usare [System::AttributeUsageAttribute] per gli attributi gestiti; usare [Windows::Foundation::Metadata::AttributeUsageAttribute] per gli attributi WinRT

Uso <xref:System.AttributeUsageAttribute> dichiarare **/clr** attributi. Usare `Windows::Foundation::Metadata::AttributeUsageAttribute` per dichiarare gli attributi Windows Runtime.

Per altre informazioni sugli attributi /CLR, vedere [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md). Per gli attributi supportati in Windows Runtime, vedere [spazio dei nomi](https://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.aspx)

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