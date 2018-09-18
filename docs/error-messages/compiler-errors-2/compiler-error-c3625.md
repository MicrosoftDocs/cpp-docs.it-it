---
title: Errore del compilatore C3625 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3625
dev_langs:
- C++
helpviewer_keywords:
- C3625
ms.assetid: fdf49f21-d6b1-42f4-9eec-23b04ae8b4aa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7ebb7a94e807dbd8bbb9e5614f15d03e9b577858
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022606"
---
# <a name="compiler-error-c3625"></a>Errore del compilatore C3625

'native type': un tipo nativo non può derivare da un tipo gestito o WinRT 'type'

Una classe nativa non può ereditare da una classe gestita o WinRT. Per altre informazioni, vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3625:

```
// C3625.cpp
// compile with: /clr /c
ref class B {};
class D : public B {};   // C3625 cannot inherit from a managed class
```
