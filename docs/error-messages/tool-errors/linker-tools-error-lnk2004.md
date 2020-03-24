---
title: Errore degli strumenti del linker LNK2004
ms.date: 11/04/2016
f1_keywords:
- LNK2004
helpviewer_keywords:
- LNK2004
ms.assetid: 07645371-e67b-4a2c-b0e0-dde24c94ef7e
ms.openlocfilehash: 0d26ab12c5b82d52b7dcbb176d9bfa033d7ddfee
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194837"
---
# <a name="linker-tools-error-lnk2004"></a>Errore degli strumenti del linker LNK2004

overflow della correzione relativa a GP in ' target '; la sezione breve ' section ' è troppo grande o non compresa nell'intervallo.

La sezione è troppo grande.

Per correggere l'errore, ridurre le dimensioni della sezione breve, inserendo in modo esplicito i dati nelle sezioni lunghe tramite #pragma sezione (". SectionName", Read, Write, Long) e utilizzando `__declspec(allocate(".sectionname"))` per le definizioni e le dichiarazioni di dati.  Ad esempio,

```
#pragma section(".data$mylong", read, write, long)
__declspec(allocate(".data$mylong"))
char    rg0[1] = { 1 };
char    rg1[2] = { 1 };
char    rg2[4] = { 1 };
char    rg3[8] = { 1 };
char    rg4[16] = { 1 };
char    rg5[32] = { 1 };
```

È anche possibile spostare dati raggruppati logicamente in una propria struttura che costituirà una raccolta di dati di dimensioni maggiori di 8 byte, che verranno allocati dal compilatore in una sezione di dati di lunga durata.  Ad esempio,

```
// from this...
int     w1  = 23;
int     w2 = 46;
int     w3 = 23*3;
int     w4 = 23*4;

// to this...
struct X {
    int     w1;
    int     w2;
    int     w3;
    int     w4;
} x  = { 23, 23*2, 23*3, 23*4 };
```

Questo errore è seguito da un errore irreversibile `LNK1165`.
