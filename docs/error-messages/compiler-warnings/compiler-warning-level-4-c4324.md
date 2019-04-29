---
title: Avviso del compilatore (livello 4) C4324
ms.date: 11/04/2016
f1_keywords:
- C4324
helpviewer_keywords:
- C4324
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
ms.openlocfilehash: 696f53dff6398555355ca3a58e25d2c6d64eaaab
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400864"
---
# <a name="compiler-warning-level-4-c4324"></a>Avviso del compilatore (livello 4) C4324

'nome_struttura': è stato applicato un riempimento struttura Align

Spaziatura interna è stata aggiunta alla fine di una struttura, poiché è stata specificata una [__declspec(align)](../../cpp/align-cpp.md) valore.

Ad esempio, il codice seguente genera l'errore C4324:

```
// C4324.cpp
// compile with: /W4
struct __declspec(align(32)) A
{
   char a;
};   // C4324

int main()
{
}
```