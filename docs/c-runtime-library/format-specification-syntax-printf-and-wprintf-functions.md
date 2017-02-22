---
title: "Sintassi per la specifica del formato: funzioni printf wprintf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wprintf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione printf per le direttive dei flag"
  - "campi per la specifica di formato per la funzione printf"
  - "campi di precisione"
  - "direttive dei flag di stampa"
  - "printf (funzione), campi di specifica di formato"
  - "printf (funzione), precisione"
  - "campi di tipo"
  - "campi di tipo, printf (funzione)"
ms.assetid: 664b1717-2760-4c61-bd9c-22eee618d825
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Sintassi per la specifica del formato: funzioni printf wprintf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive la sintassi per gli argomenti stringa di formato a `printf`, `wprintf` e funzioni correlate.  Sono disponibili più versioni sicure di queste funzioni; per altre informazioni, vedere [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md).  Per informazioni sulle singole funzioni, vedere la documentazione per tali funzioni specifiche.  Per un elenco di queste funzioni, vedere [I\/O di flusso](../c-runtime-library/stream-i-o.md).  
  
 Una specifica di formato, costituita da campi obbligatori e facoltativi, presenta il seguente formato:  
  
 `%`\[[flag](../c-runtime-library/flag-directives.md)\] \[[larghezza](../c-runtime-library/printf-width-specification.md)\] \[**.**[precisione](../c-runtime-library/precision-specification.md)\] \[{`h` &#124; `l` &#124; `ll` &#124; `w` &#124; `I` &#124; `I32` &#124; `I64`}\] [tipo](../c-runtime-library/printf-type-field-characters.md)  
  
 Ciascun campo della specifica di formato è un carattere o un numero che indica un particolare identificatore di conversione o opzione di formato.  Il carattere `type` obbligatorio specifica il tipo di conversione da applicare a un argomento.  I campi `flags`, `width` e `precision` facoltativi controllano gli aspetti di formato aggiuntivi.  Una specifica di formato di base contiene solo il segno di percentuale e un carattere `type`, ad esempio `%s` che specifica una conversione delle stringhe.  Se nelle versioni sicure delle funzioni un segno di percentuale è seguito da un carattere che non ha alcun significato come campo di formato, viene richiamato il gestore di parametro non valido.  Per altre informazioni, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).  Nelle versioni non sicure, il carattere viene copiato nell'output non modificato.  Per stampare un carattere di segno di percentuale, usare `%%`.  
  
 I campi della specifica di formato controllano i seguenti aspetti di conversione e di formattazione dell'argomento:  
  
 `type`  
 Carattere dell'identificatore di conversione obbligatorio che determina se l'`argument` associato verrà interpretato come un carattere, una stringa, un intero o numero a virgola mobile.  Per altre informazioni, vedere [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md).  
  
 `flags`  
 Carattere o caratteri facoltativi che controllano la giustificazione dell'output e l'output dei segni, gli spazi vuoti, gli zeri iniziali, i separatori decimali e i prefissi esadecimali e ottali.  Per altre informazioni vedere [Direttive flag](../c-runtime-library/flag-directives.md).  Più flag possono essere visualizzati in una specifica di formato e i flag possono essere visualizzati in qualsiasi ordine.  
  
 `width`  
 Numero decimale facoltativo che specifica il numero minimo di caratteri che vengono restituiti.  Per altre informazioni, vedere [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md).  
  
 `precision`  
 Numero decimale facoltativo che specifica il numero massimo di caratteri che vengono stampati per le stringhe, il numero di cifre significative o il numero di cifre dopo il carattere del separatore decimale per i valori a virgola mobile o il numero minimo di cifre che vengono stampate per gli interi.  Per altre informazioni, vedere "Come i valori di precisione interessano il tipo" in [Specifica precisione](../c-runtime-library/precision-specification.md).  
  
 `h` &#124; `l` &#124; `ll` &#124; `w` &#124; `I` &#124; `I32` &#124; `I64`  
 Prefissi facoltativi per `type` che specificano la dimensione dell'argomento corrispondente.  Per altre informazioni, vedere "Prefissi di dimensione" in [Specifiche di dimensione](../c-runtime-library/size-specification.md).  
  
> [!IMPORTANT]
>  Assicurarsi che le stringhe di specifica di formato non siano definite dall'utente.  Ad esempio, si consideri un programma che richiede all'utente di inserire un nome e archivia l'input in una variabile di stringa denominata `name`.  Per stampare `name`, non eseguire questa operazione:  
>   
>  `printf( name ); /* Danger!  If name contains "%s", program will crash */`  
>   
>  Al contrario, eseguire questa operazione:  
>   
>  `printf( "%s", name );`  
  
## Vedere anche  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [Parametri posizionali printf\_p](../c-runtime-library/printf-p-positional-parameters.md)   
 [Direttive flag](../c-runtime-library/flag-directives.md)   
 [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md)   
 [Specifica precisione](../c-runtime-library/precision-specification.md)   
 [Specifiche di dimensione](../c-runtime-library/size-specification.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)