---
title: Errore del compilatore C3846
ms.date: 11/04/2016
f1_keywords:
- C3846
helpviewer_keywords:
- C3846
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
ms.openlocfilehash: a4c51ccfc724cf8309044812b287677f0f1a2ff0
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754901"
---
# <a name="compiler-error-c3846"></a>Errore del compilatore C3846

' symbol ': non è possibile importare il simbolo da' assembly2': perché' symbol ' è già stato importato da un altro assembly ' assembly1'

Non è stato possibile importare un simbolo da un assembly a cui si fa riferimento perché è stato importato in precedenza da un assembly a cui si fa riferimento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3846:

```cpp
// C3846a.cpp
// compile with: /LD /clr
public ref struct G
{
};
```

Quindi compilare:

```cpp
// C3846b.cpp
// compile with: /clr
#using "c3846a.dll"
#using "c3846a.obj"   // C3846

int main()
{
}
```
