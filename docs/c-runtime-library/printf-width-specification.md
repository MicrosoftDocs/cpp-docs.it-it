---
title: "Specifica della larghezza per printf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "printf (funzione), campi di specifica di formato"
  - "printf (funzione), specifica della larghezza"
ms.assetid: 8b4a1b1e-bf6e-414f-a1b6-a9b6f1b6ce92
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Specifica della larghezza per printf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In una specifica di formato, il secondo campo facoltativo è la specifica della dimensione.  L'argomento `width` è un intero decimale non negativo che controlla il numero minimo di caratteri che vengono restituiti.  Se il numero di caratteri nel valore di output è minore della larghezza specificata, vengono aggiunti caratteri vuoti a sinistra o a destra dei valori—a seconda che sia specificata o meno la flag di allineamento a sinistra \(`-`\)—fino a che non vengano raggiunte le dimensioni minime.  Se `width` è preceduto da 0, vengono aggiunti degli zeri iniziali alle conversioni intere o a virgola mobile fino a quando non venga raggiunta la grandezza minima, salvo quando la conversione è di un numero infinito o NAN.  
  
 La specifica della dimensione non provoca mai il troncamento di un valore.  Se il numero di caratteri nel valore di output è maggiore della dimensione specificata, o se `width` non viene fornito, vengono restituiti tutti i caratteri del valore, soggetti alla specifica di [precisione](../c-runtime-library/precision-specification.md).  
  
 Se la specifica della dimensione è un asterisco \(`*`\), il valore è fornito da un argomento `int` dall'elenco degli argomenti.  L'argomento `width` deve precedere il valore da formattare nell'elenco degli argomenti, come illustrato nel seguente esempio:  
  
 `printf("%0*f", 5, 3);  /* 00003 is output */`  
  
 Un valore `width` mancante o di piccole dimensioni in una specifica di formato non causa il troncamento della restituzione di un valore.  Se il risultato di una conversione è più grande del valore di `width`, il campo viene espanso per contenere il risultato della conversione.  
  
## Vedere anche  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Direttive flag](../c-runtime-library/flag-directives.md)   
 [Specifica precisione](../c-runtime-library/precision-specification.md)   
 [Specifiche di dimensione](../c-runtime-library/size-specification.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)