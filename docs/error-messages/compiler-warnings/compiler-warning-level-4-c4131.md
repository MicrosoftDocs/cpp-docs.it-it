---
title: Avviso del compilatore (livello 4) C4131
ms.date: 11/04/2016
f1_keywords:
- C4131
helpviewer_keywords:
- C4131
ms.assetid: 7903b3e1-454f-4be2-aa9b-230992f96a2d
ms.openlocfilehash: 24872bb0b42de77dde358dc29f99826b41638628
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50516055"
---
# <a name="compiler-warning-level-4-c4131"></a>Avviso del compilatore (livello 4) C4131

'function': utilizza un dichiaratore obsoleto

La dichiarazione di funzione specificata non è nella forma prototipo.

Le dichiarazioni di funzione obsolete devono essere convertite nella forma prototipo.

L'esempio seguente illustra una dichiarazione di funzione obsoleta:

```
// C4131.c
// compile with: /W4 /c
void addrec( name, id ) // C4131 expected
char *name;
int id;
{ }
```

L'esempio seguente illustra un formato prototipo:

```
void addrec( char *name, int id )
{ }
```