---
title: "Direttive flag | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "c.flags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione printf per le direttive dei flag"
  - "campi per la specifica di formato per la funzione printf"
  - "direttive dei flag di stampa"
  - "printf (funzione), campi di specifica di formato"
ms.assetid: b00cbdc9-1e5c-4b30-9f56-c1ef8d383767
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Direttive flag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In una specifica di formato, il primo campo facoltativo è `flags`.  Una direttiva del flag è un carattere che specifica il motivo dell'output e l'output dei segni, dei zeri iniziali, dei separatori decimali e dei prefissi esadecimali e ottali.  Più flag diretti possono essere visualizzati in una specifica di formato e i flag possono essere utilizzati in qualsiasi ordine.  
  
### Caratteri di flag  
  
|Flag|Significato|Valore|  
|----------|-----------------|------------|  
|`–`|Allinea a sinistra il risultato in base alla larghezza del campo specificato.|Allinea a destra.|  
|`+`|Utilizzare un segno \(\+ o \-\) da anteporre al valore di output se si tratta di un tipo con segno.|Il segno viene visualizzata solo per i valori con segno negativo \(\-\).|  
|`0`|Se `width` è preceduto da `0`, zeri iniziali vengono aggiunti fino a raggiungere la larghezza minima.  Se vengono visualizzati `0` e `–`, `0` viene ignorato.  Se `0` viene specificato come formato Integer \(`i`, `u`, `x`, `X`, `o`, `d`\) e una specifica di precisione è inoltre presente, ad esempio `%04.d`, `0` viene ignorato.|Nessun padding.|  
|blank \(' '\)|Utilizzare uno spazio vuoto per anteporre al valore di output se è stato firmato ed è positivo.  Il vuoto viene ignorato se appaiono sia lo spazio vuoto che il flag \+.|Non appaiono spazi vuoti.|  
|`#`|Quando viene utilizzato con `o`, `x`, o il formato di `X`, il flag di `#` utilizza rispettivamente 0, 0x, o 0X per aggiungere qualsiasi valore di output diverso da zero.|Non appaiono spazi vuoti.|  
||Quando utilizzato con `e`, `E`, `f`, `a` o il formato di `A`, il flag di `#` forza il valore di output per contenere il separatore decimale.|Il separatore decimale viene visualizzato solo se le cifre lo seguono.|  
||Quando utilizza il formato di `G` o di `g`, il flag di `#` forza il valore di output per contenere un separatore decimale e impedisce il troncamento degli zeri finali.<br /><br /> Ignorato se utilizzato con `c`, `d`, `i`, `u`, o `s`.|Il separatore decimale viene visualizzato solo se le cifre lo seguono.  Gli zeri finali vengono troncati.|  
  
## Vedere anche  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md)   
 [Specifica precisione](../c-runtime-library/precision-specification.md)   
 [Specifiche di dimensione](../c-runtime-library/size-specification.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)