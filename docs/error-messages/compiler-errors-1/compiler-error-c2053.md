---
title: Errore del compilatore C2053
ms.date: 11/04/2016
f1_keywords:
- C2053
helpviewer_keywords:
- C2053
ms.assetid: 13324c85-13a8-4996-bd42-a31bfe7ff80f
ms.openlocfilehash: be5517ce77872fe395a52c5b1e0070612e205a3d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408797"
---
# <a name="compiler-error-c2053"></a>Errore del compilatore C2053

'identifier': mancata corrispondenza di stringa a caratteri wide

La stringa "wide" è assegnata a un tipo incompatibile.

L'esempio seguente genera l'errore C2053:

```
// C2053.c
int main() {
   char array[] = L"Rika";   // C2053
}
```