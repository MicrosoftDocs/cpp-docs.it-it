---
title: Avviso del compilatore (livello 1) C4377
ms.date: 11/04/2016
f1_keywords:
- C4377
helpviewer_keywords:
- C4377
ms.assetid: a1c797b8-cd5e-4a56-b430-d07932e811cf
ms.openlocfilehash: d8c89967e0dc900e098ca03d22932451f26a6a0a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410425"
---
# <a name="compiler-warning-level-1-c4377"></a>Avviso del compilatore (livello 1) C4377

i tipi nativi sono privati per impostazione predefinita. -d1PrivateNativeTypes è deprecato

Nelle versioni precedenti, i tipi nativi negli assembly fosse pubblici per impostazione predefinita e un'opzione del compilatore interna non documentata (**/d1PrivateNativeTypes**) è stato usato per renderle private.

Tutti i tipi nativi e CLR, sono ora privati per impostazione predefinita in un assembly, in modo **/d1PrivateNativeTypes** non è più necessario.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4377.

```
// C4377.cpp
// compile with: /clr /d1PrivateNativeTypes /W1
// C4377 warning expected
int main() {}
```