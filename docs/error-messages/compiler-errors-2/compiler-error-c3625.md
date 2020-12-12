---
description: 'Altre informazioni su: errore del compilatore C3625'
title: Errore del compilatore C3625
ms.date: 11/04/2016
f1_keywords:
- C3625
helpviewer_keywords:
- C3625
ms.assetid: fdf49f21-d6b1-42f4-9eec-23b04ae8b4aa
ms.openlocfilehash: ee28175eac35e05ca2a4620dffa84cf995e053a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144495"
---
# <a name="compiler-error-c3625"></a>Errore del compilatore C3625

'native type': un tipo nativo non può derivare da un tipo gestito o WinRT 'type'

Una classe nativa non può ereditare da una classe gestita o WinRT. Per altre informazioni, vedere [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) (Classi e struct).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3625:

```cpp
// C3625.cpp
// compile with: /clr /c
ref class B {};
class D : public B {};   // C3625 cannot inherit from a managed class
```
