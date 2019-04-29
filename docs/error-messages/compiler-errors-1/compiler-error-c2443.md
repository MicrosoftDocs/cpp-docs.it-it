---
title: Errore del compilatore C2443
ms.date: 11/04/2016
f1_keywords:
- C2443
helpviewer_keywords:
- C2443
ms.assetid: 315330d5-24bc-4193-a531-0642095be58f
ms.openlocfilehash: 41ae2c430362f96f5863819e2bf49124bdfb0a4d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383243"
---
# <a name="compiler-error-c2443"></a>Errore del compilatore C2443

conflitto di dimensione dell'operando

L'istruzione è necessario che gli operandi siano le stesse dimensioni.

L'esempio seguente genera l'errore C2443:

```
// C2443.cpp
// processor: x86
short var;
int main() {
   __asm xchg ax,bl   // C2443
   __asm mov al,red   // C2443
   __asm mov al,BYTE PTR var   // OK
}
```