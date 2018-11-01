---
title: Errore del compilatore C3813
ms.date: 11/04/2016
f1_keywords:
- C3813
helpviewer_keywords:
- C3813
ms.assetid: ffdbc489-71bf-4cd6-988c-f824c9ab3ceb
ms.openlocfilehash: 302b21d709424cda50abd0247f7b82048511cd73
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50470590"
---
# <a name="compiler-error-c3813"></a>Errore del compilatore C3813

una dichiarazione di proprietà può apparire solo all'interno della definizione di un tipo gestito o WinRT

Oggetto [proprietà](../../dotnet/how-to-use-properties-in-cpp-cli.md) possono essere dichiarati solo all'interno di un oggetto gestito o Windows Runtime tipo. I tipi nativi non supportano la parola chiave `property`.

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