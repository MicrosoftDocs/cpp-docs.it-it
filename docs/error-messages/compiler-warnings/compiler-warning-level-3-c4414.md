---
title: Avviso del compilatore (livello 3) C4414
ms.date: 11/04/2016
f1_keywords:
- C4414
helpviewer_keywords:
- C4414
ms.assetid: bc81d3ad-55dc-4a6b-a6f2-ec0ef38347df
ms.openlocfilehash: 0a9ceb332888e306b8cb3bcbe1832f773d02d63d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401943"
---
# <a name="compiler-warning-level-3-c4414"></a>Avviso del compilatore (livello 3) C4414

'function': salto short a funzione convertito in near

Breve salti generano un'istruzione compatta quali branch a un indirizzo all'interno di un intervallo limitato dall'istruzione. L'istruzione include un breve offset che rappresenta la distanza tra il salto e l'indirizzo di destinazione, la definizione di funzione. Durante il collegamento di una funzione può essere spostate o soggette a ottimizzazioni in fase di collegamento che causano la funzione da spostare compreso nell'intervallo raggiungibile da un offset di breve. Il compilatore deve generare un record speciale per il passaggio, che richiede l'istruzione jmp sia a breve o a questo momento. Il compilatore reso la conversione.

Ad esempio, il codice seguente genera l'errore C4414:

```
// C4414.cpp
// compile with: /W3 /c
// processor: x86
int DoParityEven();
int DoParityOdd();
unsigned char global;
int __declspec(naked) DoParityEither()
{
   __asm
   {
      test global,0
      jpe SHORT DoParityEven  // C4414
      jmp SHORT DoParityOdd   // C4414
   }
}
```