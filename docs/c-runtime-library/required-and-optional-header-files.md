---
title: "File di intestazione obbligatori e facoltativi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.headers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di intestazione, richiesti al runtime"
  - "file di inclusione, richiesti al runtime"
ms.assetid: f64d0bf5-e2c3-4b42-97d0-443b3d901d9f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# File di intestazione obbligatori e facoltativi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La descrizione di ogni routine di runtime fornisce un elenco di file di inclusione, o di intestazione \(.H\), obbligatori o opzionali.  I file di intestazione obbligatori devono essere inclusi per ottenere la dichiarazione di funzione per la routine o una definizione utilizzata da un'altra routine chiamata internamente.  I file di intestazione opzionali in genere vengono importati per sfruttare le costanti predefinite, le definizioni dei tipi, o le macro inline.  Nella tabella seguente sono elencati alcuni esempi del contenuto di file di intestazione opzionali:  
  
|Definizione|Esempio|  
|-----------------|-------------|  
|Definizione macro|Se una routine della libreria viene implementata come macro, la definizione della macro può trovarsi in un file di intestazione diverso dal file di intestazione per la routine originale.  Ad esempio, la macro `_toupper` viene definita nel file di intestazione CTYPE.H, mentre la funzione `toupper` viene dichiarata in STDLIB.H.|  
|Costante predefinita|Molte routine di libreria fanno riferimento alle costanti definite in file di intestazione.  Ad esempio, le routine di `_open` utilizzano costanti come ad esempio `_O_CREAT`, definito nel file di intestazione FCNTL.H.|  
|Definizione dei tipi|Alcune routine di libreria restituiscono una struttura o accettano una struttura come argomento.  Ad esempio, le routine del flusso di input\/output utilizzano una struttura di tipo `FILE`, definita in STDIO.H.|  
  
 I file di intestazione della libreria di runtime forniscono dichiarazioni di funzione nello stile standard raccomandato dall'ANSI\/ISO C.  Il compilatore esegue il controllo dei tipi in qualsiasi riferimento della routine che occorre dopo la dichiarazione della funzione associata.  Le dichiarazioni di funzione sono particolarmente importanti per le routine che restituiscono un valore di un certo tipo diverso da `int`, che è l'impostazione predefinita.  Le routine che non specificano il valore restituito appropriato nella dichiarazione vengono considerate dal compilatore come funzioni che restituiscono `int`, il che può causare risultati imprevisti.  Vedere [Controllo dei tipi](../c-runtime-library/type-checking-crt.md) per ulteriori informazioni.  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)