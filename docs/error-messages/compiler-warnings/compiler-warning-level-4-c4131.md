---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4131'
title: Avviso del compilatore (livello 4) C4131
ms.date: 11/04/2016
f1_keywords:
- C4131
helpviewer_keywords:
- C4131
ms.assetid: 7903b3e1-454f-4be2-aa9b-230992f96a2d
ms.openlocfilehash: b4b54a38ad634b1cc0d444b0b6d5136b6a208626
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261788"
---
# <a name="compiler-warning-level-4-c4131"></a>Avviso del compilatore (livello 4) C4131

'function': utilizza un dichiaratore obsoleto

La dichiarazione di funzione specificata non è nella forma prototipo.

Le dichiarazioni di funzione obsolete devono essere convertite nella forma prototipo.

L'esempio seguente illustra una dichiarazione di funzione obsoleta:

```c
// C4131.c
// compile with: /W4 /c
void addrec( name, id ) // C4131 expected
char *name;
int id;
{ }
```

L'esempio seguente illustra un formato prototipo:

```c
void addrec( char *name, int id )
{ }
```
