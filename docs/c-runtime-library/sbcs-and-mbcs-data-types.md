---
title: Tipi di dati SBCS e MBCS | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- MBCS
- SBCS
dev_langs: C++
helpviewer_keywords:
- SBCS and MBCS data types
- data types [C], MBCS and SBCS
ms.assetid: 4c3ef9da-e397-48d4-800e-49dba36db171
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d32c9e792971b20da99377ad36f3872f5824dcc7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sbcs-and-mbcs-data-types"></a>Tipi di dati SBCS e MBCS
Qualsiasi routine della libreria di runtime Microsoft `MBCS` che gestisce un solo carattere multibyte o un byte di un carattere multibyte prevede un argomento `unsigned int` (dove 0x00 <= valore del carattere <= 0xFFFF e 0x00 <= valore del byte <= 0xFF). Una routine `MBCS` che gestisce i byte o i caratteri multibyte in un contesto di stringa prevede una stringa di caratteri multibyte da rappresentare come puntatore `unsigned char`.  
  
> [!CAUTION]
>  Ogni byte di un carattere multibyte può essere rappresentato in un `char` a 8 bit. Tuttavia, un carattere a byte singolo `SBCS` o `MBCS` di tipo `char` con un valore maggiore di 0x7F è negativo. Quando tale carattere viene convertito direttamente in `int` o in `long`, il risultato viene esteso con segno dal compilatore e può pertanto generare risultati imprevisti.  
  
 Pertanto è consigliabile rappresentare un byte di un carattere multibyte come un `unsigned char` a 8 bit. In alternativa, per evitare un risultato negativo, convertire semplicemente un carattere a byte singolo di tipo `char` in un `unsigned char` prima di convertirlo in un `int` o in un `long`.  
  
 Poiché alcune funzioni `SBCS` di gestione delle stringhe utilizzano parametri `char*` (con segno), verrà visualizzato un messaggio di avviso del compilatore per segnalare un tipo non corrispondente quando `_MBCS` viene definito. Esistono tre modi per evitare questo problema, elencati in ordine di efficienza:  
  
1.  Utilizzare le funzioni inline indipendenti dai tipi in TCHAR.H. Comportamento predefinito.  
  
2.  Utilizzare le macro dirette in TCHAR.H definendo `_MB_MAP_DIRECT` nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. È il metodo più veloce, ma non è indipendente dai tipi.  
  
3.  Utilizzare le funzioni della libreria collegata staticamente indipendente dai tipi in TCHAR.H. A tale scopo, definire la costante `_NO_INLINING` nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.  
  
## <a name="see-also"></a>Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)