---
title: "Tipi di dati SBCS e MBCS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MBCS"
  - "SBCS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di dati SBCS e MBCS"
  - "tipi di dati [C], MBCS e SBCS"
ms.assetid: 4c3ef9da-e397-48d4-800e-49dba36db171
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Tipi di dati SBCS e MBCS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Qualsiasi routine di libreria di runtime di Microsoft `MBCS` che gestisce un solo carattere multibyte o un byte di un carattere multibyte accetta un argomento `unsigned` `int` \(dove 0x00 \<\= valore del carattere \<\= 0xFFFF e 0x00 \<\= valore del byte \<\= 0xFF\).  Una routine `MBCS` che gestisce i byte multibyte o i caratteri in un contesto di stringa prevede una stringa con caratteri multibyte da rappresentare come puntatore `unsigned` `char`.  
  
> [!CAUTION]
>  Ogni byte di un carattere multibyte può essere rappresentato in un `char` a 8 bit .  Tuttavia, un carattere a byte singolo `SBCS` o `MBCS` di tipo `char` con un valore maggiore di 0x7F è negativo.  Quando tale carattere viene convertito direttamente in `int` o in `long`, il risultato viene esteso dal compilatore e può pertanto generare risultati imprevisti.  
  
 Pertanto è consigliabile rappresentare un byte di un carattere multibyte come un `unsigned char` ad 8 bit.  In alternativa, per evitare un risultato negativo, convertire semplicemente un carattere a byte singolo di tipo `char` in `unsigned char` prima di convertirlo in un `int` o in un `long`.  
  
 Poiché alcune funzioni di gestione delle stringhe `SBCS` utilizzano parametri \(con segno\), quando viene definito `char*`, verrà visualizzato un messaggio di avviso del compilatore per segnalare un tipo non corrispondente quando `_MBCS` è definito.  Esistono tre modi per evitare questo problema, elencato in ordine di efficienza:  
  
1.  Utilizzare le funzioni inline indipendenti dai tipi in TCHAR.H.  Questo è il comportamento predefinito.  
  
2.  Utilizzare le macro "dirette" in TCHAR.H definendo `_MB_MAP_DIRECT` nella riga di comando.  Se si esegue questa operazione, è necessario abbinare i tipi in modo manuale.  È il metodo più veloce, ma non è indipendente dai tipi.  
  
3.  Utilizzare le funzioni della libreria collegata staticamente indipendente dai tipi in TCHAR.H.  A tale scopo, definire costante `_NO_INLINING` sulla riga di comando.  Si tratta del metodo meno veloce, ma è anche quello che garantisce una maggiore indipendenza dai tipi.  
  
## Vedere anche  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)