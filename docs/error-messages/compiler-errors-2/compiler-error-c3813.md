---
description: 'Altre informazioni su: errore del compilatore C3813'
title: Errore del compilatore C3813
ms.date: 11/04/2016
f1_keywords:
- C3813
helpviewer_keywords:
- C3813
ms.assetid: ffdbc489-71bf-4cd6-988c-f824c9ab3ceb
ms.openlocfilehash: ae7157166083a4a86d9a5b170cbff3e127c87abb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180994"
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
