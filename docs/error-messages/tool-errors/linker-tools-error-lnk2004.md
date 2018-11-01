---
title: Errore degli strumenti del linker LNK2004
ms.date: 11/04/2016
f1_keywords:
- LNK2004
helpviewer_keywords:
- LNK2004
ms.assetid: 07645371-e67b-4a2c-b0e0-dde24c94ef7e
ms.openlocfilehash: 37eb01b5dd8266bce34e1a932271d5d9a9d15c52
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529324"
---
# <a name="linker-tools-error-lnk2004"></a>Errore degli strumenti del linker LNK2004

criteri di gruppo overflow della correzione relativa a 'target'; la sezione breve 'section' è troppo grande o non compreso nell'intervallo.

La sezione è troppo grande.

Per risolvere questo errore, ridurre le dimensioni della sezione brevi, in modo esplicito l'inserimento dei dati nelle sezioni riportate di tempo tramite sezione #pragma ("nomesezione", lettura, scrittura, long) e utilizzando `__declspec(allocate(".sectionname"))` su dichiarazioni e definizioni dei dati.  Ad esempio,

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

È inoltre possibile spostare i dati raggruppati logicamente in un proprio struttura che sarà una raccolta di dati superiori a 8 byte, che verrà allocato in una sezione di dati di tipo long.  Ad esempio,

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

Questo errore è seguito dall'errore irreversibile `LNK1165`.