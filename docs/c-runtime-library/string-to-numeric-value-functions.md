---
title: "Funzioni da stringa a valore numerico | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tcstoui64"
  - "_tcstoi64"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "analisi, stringhe numeriche"
  - "conversione di stringhe, in valori numerici"
ms.assetid: 11cbd9ce-033b-4914-bf66-029070e7e385
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Funzioni da stringa a valore numerico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

-   [strtod, \_strtod\_l, wcstod, \_wcstod\_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)  
  
-   [strtol, wcstol, \_strtol\_l, \_wcstol\_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)  
  
-   [strtoul, \_strtoul\_l, wcstoul, \_wcstoul\_l](../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)  
  
-   [\_strtoi64, \_wcstoi64, \_strtoi64\_l, \_wcstoi64\_l](../c-runtime-library/reference/strtoi64-wcstoi64-strtoi64-l-wcstoi64-l.md)  
  
-   [\_strtoui64, \_wcstoui64, \_strtoui64\_l, \_wcstoui64\_l](../c-runtime-library/reference/strtoui64-wcstoui64-strtoui64-l-wcstoui64-l.md)  
  
## Note  
 Ogni funzione nella famiglia **strtod** converte una stringa con terminazione null a un valore numerico.  Nella tabella riportata di seguito vengono elencate le funzioni disponibili.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|`strtod`|Convertire stringhe in valori a virgola mobile e con doppia precisione.|  
|`strtol`|Convertire una stringa in un long integer|  
|`strtoul`|Convertire una stringa in un unsigned long integer|  
|`_strtoi64`|Convertire una stringa in un integer `__int64` a 64 bit|  
|`_strtoui64`|Convertire una stringa in un unsigned integer `__int64` a 64 bit.|  
  
 `wcstod`, `wcstol`, `wcstoul`e `_wcstoi64` sono versioni a caratteri estesi di `strtod`, `strtol`, `strtoul`e `_strtoi64`, rispettivamente.  L'argomento di tipo stringa a ognuna di queste funzioni a caratteri estesi è una stringa di caratteri estesi, ogni funzione si comporta in modo identico alla sua relativa controparte in single byte character.  
  
 La funzione `strtod` accetta due argomenti: il primo è la stringa di input e la seconda un puntatore al carattere che termina il processo di conversione.  `strtol`, `strtoul`, **\_strtoi64** e **\_strtoui64** accettano un terzo argomento come il numero base da utilizzare nel processo di conversione.  
  
 La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato.  Ogni funzione arresta la lettura della stringa in corrispondenza del primo carattere non riconosciuto come parte di un numero.  Questo può rappresentare il carattere di terminazione null.  Per `strtol`, `strtoul`, `_strtoi64`e `_strtoui64`, questo carattere di terminazione può essere il primo carattere numerico maggiore o uguale del numero fornito dall'utente.  
  
 Se il puntatore, fornito dall'utente, a un carattere di fine di conversione non è impostato su **NULL** al momento della chiamata, verrà archiviato un puntatore al carattere che arresta la scansione.  Se nessuna conversione può essere eseguita \(nessuna cifra valida è stata trovata o è stata specificata una base non valida\), il valore del puntatore della stringa viene archiviato all'indirizzo.  
  
 `strtod` si aspetta una stringa nel formato seguente:  
  
 \[*spazio*\] \[*segno*\] \[`digits`\] \[**.**`digits`\] \[ {**d** &#124; **D** &#124; **e** &#124; **E**}\[*sign*\]`digits`\]  
  
 Uno *spazio* può essere costituito dallo spazio o di caratteri di tabulazione, che vengono ignorati; il *segno* è sia più \(**\+**\) che meno \(**–**\); e `digits` è una o più cifre decimali.  Se nessuna cifra viene visualizzata prima del carattere radice, almeno uno deve apparire dopo il carattere di base.  Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva \(**d**, **D**, **e**, o **E**\) e opzionalmente da un signed integer.  Se né una parte dell'esponente né un carattere di base viene visualizzato, un carattere di base viene utilizzato per seguire l'ultima cifra nella stringa.  Il primo carattere non idoneo arresta la scansione.  
  
 Il `strtol`, `strtoul`, `_strtoi64`e le funzioni `_strtoui64` si aspettano una stringa del formato seguente:  
  
 *spazio*\] \[{**\+** &#124; **\-**}\] \[**0** \[{ **x** &#124; **X** }\]\] \[`digits`\]  
  
 Se l'argomento di base è compreso tra 2 e 36, quindi viene utilizzato come base del numero.  Se è 0, i caratteri iniziali a cui fanno riferimento dal puntatore di fine di conversione vengono utilizzati per determinare la base.  Se il primo carattere è 0 e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come intero ottale; in caso contrario, viene interpretata come numero decimale.  Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come Integer esadecimale.  Se il primo carattere è '1' e '9', la stringa viene interpretata come Integer decimale.  Le lettere da 'a' a 'z' \(o da 'A' a 'Z'\) sono assegnati i valori da 10 a 35; solo lettere con valori assegnati minori della *base* sono permesse.  `strtoul` e `_strtoui64` consentono un segno più \(**\+**\) o meno \(**–**\) come prefisso; un segno meno iniziale indica che il valore restituito è negato.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_NUMERIC` delle impostazioni locali; vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso **\_l** utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso **\_l** sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  
  
 Quando il valore restituito da queste funzioni può causare un overflow o un underflow, o quando la conversione non è possibile, i valori speciali vengono restituiti come mostrato di seguito:  
  
|Funzione|Condizione|Valore restituito|  
|--------------|----------------|-----------------------|  
|`strtod`|Overflow|\+\/\- `HUGE_VAL`|  
|`strtod`|Underflow o nessuna conversione|0|  
|`strtol`|\+ Overflow.|**LONG\_MAX**|  
|`strtol`|\- Overflow|**LONG\_MIN**|  
|`strtol`|Underflow o nessuna conversione|0|  
|`_strtoi64`|\+ Overflow.|**\_I64\_MAX**|  
|`_strtoi64`|\- Overflow|**\_I64\_MIN**|  
|`_strtoi64`|Nessuna conversione|0|  
|`_strtoui64`|Overflow|**\_UI64\_MAX**|  
|`_strtoui64`|Nessuna conversione|0|  
  
 **\_I64\_MAX**, \_**I64\_MIN**, e **\_UI64\_MAX** sono definiti in LIMITS.H.  
  
 `wcstod`, `wcstol`, `wcstoul`, `_wcstoi64`e `_wcstoui64` sono versioni a caratteri estesi `strtod`, `strtol`, `strtoul`, `_strtoi64`e `_strtoui64`, rispettivamente; il puntatore a un argomento di fine conversione a ognuna di queste funzioni a caratteri estesi è una stringa di caratteri estesi.  In caso contrario, ognuna di queste funzioni a caratteri estesi si comporta in modo identico alla relativa controparte in single byte character.  
  
## Vedere anche  
 [Conversione dei dati](../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Supporto a virgola mobile](../c-runtime-library/floating-point-support.md)   
 [atof, \_atof\_l, \_wtof, \_wtof\_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)