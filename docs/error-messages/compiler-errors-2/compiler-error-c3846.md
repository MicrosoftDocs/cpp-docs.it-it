---
title: Errore del compilatore C3846
ms.date: 11/04/2016
f1_keywords:
- C3846
helpviewer_keywords:
- C3846
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
ms.openlocfilehash: 788f03e4364404ad5c30b7edcba8b743c7f201ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50651217"
---
# <a name="compiler-error-c3846"></a>Errore del compilatore C3846

'symbol': non è possibile importare il simbolo da 'assembly2': come 'symbol' è già stato importato da un altro assembly «assembly1»

Un simbolo non è stato possibile importare da un assembly di riferimento perché è stato importato in precedenza da un assembly di riferimento.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3846:

```
// C3846a.cpp
// compile with: /LD /clr
public ref struct G
{
};
```

E quindi compilare questo:

```
// C3846b.cpp
// compile with: /clr
#using "c3846a.dll"
#using "c3846a.obj"   // C3846

int main()
{
}
```
