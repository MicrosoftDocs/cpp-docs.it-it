---
title: Funzioni da stringa a valore numerico | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apilocation:
- msvcr80.dll
- msvcr110.dll
- msvcr120.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr90.dll
apitype: DLLExport
f1_keywords:
- _tcstoui64
- _tcstoi64
dev_langs:
- C++
helpviewer_keywords:
- parsing, numeric strings
- string conversion, to numeric values
ms.assetid: 11cbd9ce-033b-4914-bf66-029070e7e385
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c7c793590daee13841439fc7c372ff02d18f83b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32417340"
---
# <a name="string-to-numeric-value-functions"></a>Funzioni da stringa a valore numerico
-   [strtod, _strtod_l, wcstod, _wcstod_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)  
  
-   [strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)  
  
-   [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)  
  
-   [_strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l](../c-runtime-library/reference/strtoi64-wcstoi64-strtoi64-l-wcstoi64-l.md)  
  
-   [_strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l](../c-runtime-library/reference/strtoui64-wcstoui64-strtoui64-l-wcstoui64-l.md)  
  
## <a name="remarks"></a>Note  
 Ogni funzione della famiglia **strtod** converte una stringa con terminazione Null in un valore numerico. Nella tabella seguente sono elencate le funzioni disponibili.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|`strtod`|Converte una stringa in un valore a virgola mobile a precisione doppia|  
|`strtol`|Converte una stringa in un long integer|  
|`strtoul`|Converte una stringa in un unsigned long integer|  
|`_strtoi64`|Converte una stringa in un integer `__int64` a 64 bit|  
|`_strtoui64`|Converte una stringa in un unsigned integer `__int64` a 64 bit|  
  
 `wcstod`, `wcstol`, `wcstoul` e `_wcstoi64` sono versioni a caratteri wide rispettivamente di `strtod`, `strtol`, `strtoul` e `_strtoi64`. L'argomento di stringa per ognuna di queste funzioni di caratteri wide è una stringa di caratteri wide. Ogni funzione si comporta in maniera identica alla relativa controparte di caratteri a un byte.  
  
 La funzione `strtod` accetta due argomenti: il primo è la stringa di input e il secondo è un puntatore al carattere che termina il processo di conversione. `strtol`, `strtoul`, **_strtoi64** e **_strtoui64** accettano un terzo argomento come base numerica da usare nel processo di conversione.  
  
 La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato. Ogni funzione interrompe la lettura della stringa in corrispondenza del primo carattere che non può riconoscere come parte di un numero. Questo può essere il carattere Null di terminazione. Per `strtol`, `strtoul`, `_strtoi64` e `_strtoui64`, il carattere di terminazione può anche essere il primo carattere numerico maggiore o uguale alla base numerica specificata dall'utente.  
  
 Se il puntatore specificato dall'utente in un carattere di fine di conversione non è impostato su **NULL** in fase di chiamata, verrà archiviato un puntatore al carattere che ha interrotto l'analisi. Se è non possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore puntatore della stringa viene archiviato in tale indirizzo.  
  
 `strtod` prevede una stringa nel formato seguente:  
  
 [*whitespace*] [*sign*] [`digits`] [**.**`digits`] [ {**d** &#124; **D** &#124; **e** &#124; **E**}[*sign*]`digits`]  
  
 Uno *spazio vuoto* può essere costituito da spazi o caratteri di tabulazione, che vengono ignorati; *sign* è il segno di addizione (**+**) o di sottrazione (**-**); e `digits` corrisponde a una o più cifre decimali. Se non viene visualizzata alcuna cifra prima del carattere di base, deve essercene almeno una dopo il carattere di base. Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**d**, **D**, **e** o **E**) e facoltativamente da un intero con segno. Se non viene visualizzata una parte esponente né un carattere di base, si presuppone che l'ultima cifra nella stringa sia seguita da un carattere di base. Il primo carattere che non corrisponde a questo formato interrompe la lettura.  
  
 Le funzioni `strtol`, `strtoul`, `_strtoi64` e `_strtoui64` prevedono una stringa nel formato seguente:  
  
 [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [`digits`]  
  
 Se l'argomento di base è incluso tra 2 e 36, viene usato come base del numero. Se è 0, per determinare la base vengono usati i caratteri iniziali a cui fa riferimento il puntatore di fine della conversione. Se il primo carattere è 0 e il secondo carattere non è 'x' o 'X', la stringa viene interpretata come un numero intero ottale. In caso contrario, viene interpretata come numero decimale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. `strtoul` e `_strtoui64` consentono l'uso di un prefisso con un segno di addizione (**+**) o sottrazione (**-**). Un segno di sottrazione iniziale indica che il valore restituito è negativo.  
  
 La configurazione dell'impostazione della categoria `LC_NUMERIC` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali.  
  
 Se il valore restituito da queste funzioni causa un overflow o underflow, o se la conversione non può essere eseguita, vengono restituiti valori case speciali come illustrato di seguito:  
  
|Funzione|Condizione|Valore restituito|  
|--------------|---------------|--------------------|  
|`strtod`|Overflow|+/- `HUGE_VAL`|  
|`strtod`|Underflow o nessuna conversione|0|  
|`strtol`|+ Overflow|**LONG_MAX**|  
|`strtol`|- Overflow|**LONG_MIN**|  
|`strtol`|Underflow o nessuna conversione|0|  
|`_strtoi64`|+ Overflow|**_I64_MAX**|  
|`_strtoi64`|- Overflow|**_I64_MIN**|  
|`_strtoi64`|Nessuna conversione|0|  
|`_strtoui64`|Overflow|**_UI64_MAX**|  
|`_strtoui64`|Nessuna conversione|0|  
  
 **_I64_MAX**, _**I64_MIN** e **_UI64_MAX** sono definiti in LIMITS.H.  
  
 `wcstod`, `wcstol`, `wcstoul`, `_wcstoi64` e `_wcstoui64` sono versioni a caratteri wide rispettivamente di `strtod`, `strtol`, `strtoul`, `_strtoi64` e `_strtoui64`. Il puntatore a un argomento di fine conversione per ognuna di queste funzioni di caratteri wide è una stringa di caratteri wide. In caso contrario, ognuna di queste funzioni di caratteri wide si comporta in modo identico alla controparte di caratteri a un byte.  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Floating-Point Support](../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [atof, _atof_l, _wtof, _wtof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)