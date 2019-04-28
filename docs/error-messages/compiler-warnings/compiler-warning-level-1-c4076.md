---
title: Avviso del compilatore (livello 1) C4076
ms.date: 11/04/2016
f1_keywords:
- C4076
helpviewer_keywords:
- C4076
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
ms.openlocfilehash: 3a56e58d9bec1034a55f4e588dbddd0dba03f348
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208027"
---
# <a name="compiler-warning-level-1-c4076"></a>Avviso del compilatore (livello 1) C4076

> «*modificatore di tipo*': non può essere utilizzato con il tipo '*nomeTipo*»

## <a name="remarks"></a>Note

Un modificatore di tipo, se si tratta **firmato** oppure **unsigned**, non può essere usato con un tipo non integer. *modificatore di tipo* viene ignorato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4076; Per risolvere il problema, rimuovere il **unsigned** modificatore di tipo:

```cpp
// C4076.cpp
// compile with: /W1 /LD
unsigned double x;   // C4076
```