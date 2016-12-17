---
title: "Routines _ismbc | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_ismbc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbc (routine)"
  - "ismbc (routine)"
ms.assetid: b8995391-7857-4ac3-9a1e-de946eb4464d
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Routines _ismbc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni test della routine **\_ismbc** verifica un carattere multibyte `c` per un determinato stato.  
  
|||  
|-|-|  
|[\_ismbcalnum, \_ismbcalnum\_l, \_ismbcalpha, \_ismbcalpha\_l, \_ismbcdigit, \_ismbcdigit\_l](../c-runtime-library/reference/ismbcalnum-functions.md)|[\_ismbcl0, \_ismbcl0\_l, \_ismbcl1, \_ismbcl1\_l, \_ismbcl2, \_ismbcl2\_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|  
|[\_ismbcgraph, \_ismbcgraph\_l, \_ismbcprint, \_ismbcprint\_l, \_ismbcpunct, \_ismbcpunct\_l, \_ismbcblank, \_ismbcblank\_l, \_ismbcspace, \_ismbcspace\_l](../c-runtime-library/reference/ismbcgraph-functions.md)|[\_ismbclegal, \_ismbclegal\_l, \_ismbcsymbol, \_ismbcsymbol\_l](../c-runtime-library/reference/ismbclegal-ismbclegal-l-ismbcsymbol-ismbcsymbol-l.md)|  
|[\_ismbchira, \_ismbchira\_l, \_ismbckata, \_ismbckata\_l](../c-runtime-library/reference/ismbchira-ismbchira-l-ismbckata-ismbckata-l.md)|[\_ismbclower, \_ismbclower\_l, \_ismbcupper, \_ismbcupper\_l](../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|  
  
## Note  
 Il risultato del test di ciascuna routine **\_ismbc** dipende dalla tabella codici multibyte attiva.  Le tabelle codici multibyte dispongono di caratteri alfabetici a byte singolo.  Per impostazione predefinita, la tabella codici multibyte viene impostata dalla tabella codici ANSI predefinita del sistema ottenuta dal sistema operativo all'avvio del programma.  È possibile eseguire una query o modificare la tabella codici multibyte in uso, rispettivamente con [\_getmbcp](../c-runtime-library/reference/getmbcp.md) o [\_setmbcp](../c-runtime-library/reference/setmbcp.md).  
  
 Il valore di output è interessato dall'impostazione della categoria `LC_CTYPE` delle impostazioni locali; Vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso **\_l** utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso **\_l** sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  
  
|Routine|Condizione di test|Esempio di tabella di codici 932|  
|-------------|------------------------|--------------------------------------|  
|[\_ismbcalnum, \_ismbcalnum\_l](../c-runtime-library/reference/ismbcalnum-functions.md)|Alfanumerico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di un carattere ASCII inglese: Vedere gli esempi per `_ismbcdigit` e `_ismbcalpha`.|  
|[\_ismbcalpha, \_ismbcalpha\_](../c-runtime-library/reference/ismbcalnum-functions.md)|Carattere alfabetico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di un carattere ASCII inglese: Vedere gli esempi per `_ismbcupper` e `_ismbclower`; oppure una lettera katakana : 0xA6\<\=`c`\<\=0xDF.|  
|[\_ismbcdigit, \_ismbcdigit\_l](../c-runtime-library/reference/ismbcalnum-functions.md)|Cifra|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di una cifra ASCII: 0x30\<\=`c`\<\=0x39.|  
|[\_ismbcgraph, \_ismbcgraph\_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Grafico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di qualsiasi carattere ASCII o di un carattere katakana stampabile ad eccezione uno spazio vuoto \( \).  Vedere gli esempi per `_ismbcdigit`, `_ismbcalpha`, e `_ismbcpunct`.|  
|[\_ismbclegal, \_ismbclegal\_l](../c-runtime-library/reference/ismbclegal-ismbclegal-l-ismbcsymbol-ismbcsymbol-l.md)|Carattere multibyte valido|Restituisce un valore diverso da zero se e solo se il primo byte `c` è negli intervalli 0x81 – 0x9F o 0xE0 – 0xFC, mentre il secondo byte è negli intervalli 0x40 – 0x7E o 0x80 \- FC.|  
|[\_ismbclower, \_ismbclower\_l](../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|Alfabetico minuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a singolo byte di una lettera minuscola ASCII inglese: 0x61\<\=`c`\<\=0x7A.|  
|[\_ismbcprint, \_ismbcprint\_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Stampabile|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a singolo byte di qualsiasi carattere ASCII o un carattere katakana stampabile incluso uno spazio vuoto \( \): Vedere gli esempi per `_ismbcspace`, `_ismbcdigit`, `_ismbcalpha` e `_ismbcpunct`.|  
|[\_ismbcpunct, \_ismbcpunct\_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Punteggiatura|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a singolo byte di qualsiasi carattere ASCII o di un carattere di punteggiatura katakana.|  
|[\_ismbcblank, \_ismbcblank\_l,](../c-runtime-library/reference/ismbcgraph-functions.md)|Spazio o tabulazione orizzontale|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a singolo byte di un carattere di spazio o un carattere di tabulazione orizzontale: `c`\=0x20 o `c`\=0x09.|  
|[\_ismbcspace, \_ismbcspace\_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Whitespace|Restituisce un valore diverso da zero se e solo se `c` è uno spazio: `c`\=0x20 o 0x09\=\<`c`\<\=0x0D.|  
|[\_ismbcsymbol, \_ismbcsymbol\_l](../c-runtime-library/reference/ismbclegal-ismbclegal-l-ismbcsymbol-ismbcsymbol-l.md)|Simbolo multibyte|Restituisce un valore diverso da zero se e solo se 0x8141\=\<`c`\<\=0x81AC.|  
|[\_ismbcupper, \_ismbcupper\_l](../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|Alfabetico maiuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a singolo byte di una lettera maiuscola ASCII inglese: 0x41\<\=`c`\<\=0x5A.|  
  
 **Tabella codici specifica 932**  
  
 Le seguenti routine sono specifiche della tabella codici 932.  
  
|Routine|Condizione di test \(solamente per la tabella codici 932\)|  
|-------------|----------------------------------------------------------------|  
|[\_ismbchira, \_ismbchira\_l](../c-runtime-library/reference/ismbchira-ismbchira-l-ismbckata-ismbckata-l.md)|Doppio byte Hiragana: 0x829F\=\<`c`\<\=0x82F1.|  
|[\_ismbckata, \_ismbckata\_l](../c-runtime-library/reference/ismbchira-ismbchira-l-ismbckata-ismbckata-l.md)|Doppio byte katakana: 0x8340\=\<`c`\<\=0x8396.|  
|[\_ismbcl0, \_ismbcl0\_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|JIS non Kanji: 0x8140\=\<`c`\<\=0x889E.|  
|[\_ismbcl1, \_ismbcl1\_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|JIS di livello\-1: 0x889F\=\<`c`\<\=0x9872.|  
|[\_ismbcl2, \_ismbcl2\_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|JIS level\-2: 0x989F\=\<`c`\<\=0xEA9E.|  
  
 `_ismbcl0`, `_ismbcl1` e `_ismbcl2` verifica che il valore specificato `c` corrisponda alle condizioni di test descritte nella tabella precedente, ma non verifica quali `c` siano caratteri multibyte validi.  Se il byte più basso è compreso tra 0x00 – 0x3F, 0x7F, o 0xFD – 0xFF, queste funzioni restituiscono un valore diverso da zero, indicando che il carattere soddisfa la condizione di test.  Utilizzare [\_ismbbtrail, \_ismbbtrail\_l](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md) per verificare se il carattere multibyte è definito.  
  
 **Tabella codici END specifica 932**  
  
## Vedere anche  
 [Classificazione di caratteri](../c-runtime-library/character-classification.md)   
 [is, isw Routines](../c-runtime-library/is-isw-routines.md)   
 [Routines \_ismbb](../c-runtime-library/ismbb-routines.md)