---
description: 'Altre informazioni su: errore del compilatore C3846'
title: Errore del compilatore C3846
ms.date: 11/04/2016
f1_keywords:
- C3846
helpviewer_keywords:
- C3846
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
ms.openlocfilehash: 13c9cb7a9dde3710cac31d8ee79fb148f8ff67bb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255392"
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
