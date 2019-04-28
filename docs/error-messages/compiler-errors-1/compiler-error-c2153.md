---
title: Errore del compilatore C2153
ms.date: 11/04/2016
f1_keywords:
- C2153
helpviewer_keywords:
- C2153
ms.assetid: cfc50cb7-9a0f-4b5b-879a-d419c99f7be1
ms.openlocfilehash: eeb7da509ffb1b8c408763c79d471586eb94f383
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175160"
---
# <a name="compiler-error-c2153"></a>Errore del compilatore C2153

le costanti esadecimali devono avere almeno una cifra esadecimale

Le costanti esadecimali 0x, 0x e \x nejsou platné. Almeno una cifra esadecimale deve seguire x o X.

L'esempio seguente genera l'errore C2153:

```
// C2153.cpp
int main() {
   int a= 0x;    // C2153
   int b= 0xA;   // OK
}
```