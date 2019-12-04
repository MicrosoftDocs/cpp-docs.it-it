---
title: Errore del compilatore C3099
ms.date: 11/04/2016
f1_keywords:
- C3099
helpviewer_keywords:
- C3099
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
ms.openlocfilehash: 81f508c47c678d86f8f95303861b42f8a70daa57
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74750052"
---
# <a name="compiler-error-c3099"></a>Errore del compilatore C3099

'keyword': usare [System::AttributeUsageAttribute] per gli attributi gestiti; usare [Windows::Foundation::Metadata::AttributeUsageAttribute] per gli attributi WinRT

Usare <xref:System.AttributeUsageAttribute> per dichiarare gli attributi **/CLR** . Usare `Windows::Foundation::Metadata::AttributeUsageAttribute` per dichiarare gli attributi Windows Runtime.

Per ulteriori informazioni sugli attributi/CLR, vedere [attributi definiti dall'utente](../../extensions/user-defined-attributes-cpp-component-extensions.md). Per gli attributi supportati in Windows Runtime, vedere [spazio dei nomi Windows. Foundation. Metadata](/uwp/api/windows.foundation.metadata)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3099 e mostra come risolverlo.

```cpp
// C3099.cpp
// compile with: /clr /c
using namespace System;
[usage(10)]   // C3099
// try the following line instead
// [AttributeUsageAttribute(AttributeTargets::All)]
ref class A : Attribute {};
```
