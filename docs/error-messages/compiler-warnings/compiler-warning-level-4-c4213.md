---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4213'
title: Avviso del compilatore (livello 4) C4213
ms.date: 11/04/2016
f1_keywords:
- C4213
helpviewer_keywords:
- C4213
ms.assetid: 59fc3f61-ebd2-499e-99d7-f57bec11eda1
ms.openlocfilehash: 400cd650542bfd7a71640947467e8340f63bb3df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97297343"
---
# <a name="compiler-warning-level-4-c4213"></a>Avviso del compilatore (livello 4) C4213

utilizzata estensione non standard: cast su l-value

Con le estensioni Microsoft predefinite (/Ze), è possibile utilizzare i cast sul lato sinistro di un'istruzione di assegnazione.

## <a name="example"></a>Esempio

```c
// C4213.c
// compile with: /W4
void *a;
void f()
{
   int   i[3];
   a = &i;
   *(( int * )a )++ = 3;  // C4213
}

int main()
{
}
```

I cast di questo tipo non sono validi in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).
