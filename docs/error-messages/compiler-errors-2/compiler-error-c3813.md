---
title: Errore del compilatore C3813
ms.date: 11/04/2016
f1_keywords:
- C3813
helpviewer_keywords:
- C3813
ms.assetid: ffdbc489-71bf-4cd6-988c-f824c9ab3ceb
ms.openlocfilehash: 88aca16363af22a6671832264889b1a26e43d460
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223369"
---
# <a name="compiler-error-c3813"></a>Errore del compilatore C3813

una dichiarazione di proprietà può apparire solo all'interno della definizione di un tipo gestito o WinRT

Una [Proprietà](../../dotnet/how-to-use-properties-in-cpp-cli.md) può essere dichiarata solo all'interno di un tipo gestito o Windows Runtime. I tipi nativi non supportano la **`property`** parola chiave.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3813 e mostra come risolverlo:

```cpp
// C3813.cpp
// compile by using: cl /c /clr C3813.cpp
class A
{
   property int Int; // C3813
};

ref class B
{
   property int Int; // OK - declared within managed type
};
```
