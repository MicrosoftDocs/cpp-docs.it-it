---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4094'
title: Avviso del compilatore (livello 2) C4094
ms.date: 11/04/2016
f1_keywords:
- C4094
helpviewer_keywords:
- C4094
ms.assetid: e68929fb-3a1c-4be7-920b-d5f79f534f99
ms.openlocfilehash: 63c554703c1eb6f7ecb831d1046641a0cde2094a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326531"
---
# <a name="compiler-warning-level-2-c4094"></a>Avviso del compilatore (livello 2) C4094

' token ' senza tag non ha dichiarato alcun simbolo

Il compilatore ha rilevato una dichiarazione vuota utilizzando una struttura, un'Unione o una classe senza tag. La dichiarazione viene ignorata.

## <a name="example"></a>Esempio

```cpp
// C4094.cpp
// compile with: /W2
struct
{
};   // C4094

int main()
{
}
```

Questa condizione genera un errore in compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)).
