---
title: Caratteri di campo di tipo per scanf | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apilocation:
- msvcr90.dll
- msvcr80.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- scanf
dev_langs:
- C++
helpviewer_keywords:
- scanf function, type field characters
ms.assetid: 5d546a84-715b-44ca-b1c5-bbe997f9ff62
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eb4c1c25c5b45fc967954ea78a35a9420b712f81
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32417409"
---
# <a name="scanf-type-field-characters"></a>Caratteri di campo di tipo per scanf
Le informazioni seguenti si applicano a qualsiasi famiglia di funzioni `scanf` , incluse le versioni protette, ad esempio `scanf_s`.  
  
 Il carattere `type` è l'unico campo di formato obbligatorio e viene visualizzato dopo tutti i campi di formato facoltativi. Il carattere `type` carattere determina se l'argomento associato viene interpretato come carattere, stringa o numero.  
  
### <a name="type-characters-for-scanf-functions"></a>Caratteri tipo per funzioni scanf  
  
|Carattere|Tipo di input previsto|Tipo di argomento|Argomento di dimensione nella versione protetta?|  
|---------------|----------------------------|----------------------|--------------------------------------|  
|`c`|Carattere. Una volta usato con funzioni `scanf` , specifica un carattere a byte singolo; quando usato con funzioni `wscanf` , specifica un carattere wide. Caratteri di spazio che normalmente vengono ignorati quando è specificato `c` . Per leggere il successivo carattere a un byte che non sia uno spazio vuoto, usare `%1s`. Per leggere il successivo carattere wide che non sia uno spazio vuoto, usare `%1ws`.|Puntatore a `char` se usato con funzioni `scanf` , puntatore a `wchar_t` se usato con funzioni `wscanf` .|Obbligatorio. La dimensione non include lo spazio per una terminazione NULL.|  
|`C`|Dimensioni carattere opposto. Una volta usato con funzioni `scanf` , specifica un carattere wide; quando usato con funzioni `wscanf` , specifica un carattere a singolo byte. Caratteri di spazio che normalmente vengono ignorati quando è specificato `C` . Per leggere il successivo carattere a un byte che non sia uno spazio vuoto, usare `%1s`. Per leggere il successivo carattere wide che non sia uno spazio vuoto, usare `%1ws`.|Puntatore a `wchar_t` se usato con funzioni `scanf` , puntatore a `char` se usato con funzioni `wscanf` .|Obbligatorio. L'argomento relativo alla dimensione non include lo spazio per una terminazione NULL.|  
|`d`|Integer decimale.|Puntatore a `int`.|No.|  
|`i`|Intero. Esadecimale se la stringa di input inizia con "0x" o "0X", ottale se la stringa inizia con "0", in caso contrario decimale.|Puntatore a `int`.|No.|  
|`o`|Integer ottale.|Puntatore a `int`.|No.|  
|`p`|Indirizzo del puntatore in cifre esadecimali. Il numero massimo di cifre lette dipende dalle dimensioni di un puntatore (32 o 64 bit), che a sua volta dipende dall'architettura del computer. I prefissi accettati sono "0x" e "0X".|Puntatore a `void*`.|No.|  
|`u`|Intero decimale senza segno.|Puntatore a `unsigned int`.|No.|  
|`x`|Integer esadecimale.|Puntatore a `int`.|No.|  
|`e`, `E`, `f`, `F`, `g`, `G`|Valore a virgola mobile composto dal segno (+ o -) facoltativo, serie di uno o più cifre decimali che include il separatore decimale e l'esponente facoltativo ("e" o "E") seguito facoltativamente da un intero con segno.|Puntatore a `float`.|No.|  
|`a`, `A`|Valore a virgola mobile costituito da una serie di una o più cifre esadecimali che contiene un separatore decimale facoltativo e un esponente ("p" o "P") seguito da un valore decimale.|Puntatore a `float`.|No.|  
|`n`|Nessun input letto dal flusso o buffer.|Puntatore a `int`in cui è stato correttamente archiviato il numero di caratteri letti dal flusso o dal buffer fino un determinato punto della chiamata corrente alle funzioni `scanf` o `wscanf` .|No.|  
|`s`|Stringa, fino al primo carattere di spazio vuoto (spazio, scheda o una nuova riga). Per leggere stringhe non delimitati da caratteri di spazio, usare il set di parentesi quadre (`[ ]`), come illustrato in [scanf Width Specification](../c-runtime-library/scanf-width-specification.md).|Una volta usato con funzioni `scanf` , specifica una matrice di caratteri a singolo byte; quando usato con funzioni `wscanf` , specifica una matrice di caratteri wide. In entrambi i casi, la matrice di caratteri deve essere sufficientemente grande per il campo di input e il carattere di terminazione null che viene aggiunto automaticamente.|Obbligatorio. La dimensione include lo spazio per una terminazione NULL.|  
|`S`|Stringa di caratteri di dimensione opposta fino al primo carattere di spazio vuoto (spazio, scheda o una nuova riga). Per leggere stringhe non delimitate da caratteri di spazio, usare il set di parentesi quadre (`[ ]`), come illustrato in [Specifica della larghezza per scanf](../c-runtime-library/scanf-width-specification.md).|Quando viene usato con funzioni `scanf`, specifica una matrice di caratteri wide. Quando viene usato con funzioni `wscanf`, specifica una matrice di caratteri a un byte. In entrambi i casi, la matrice di caratteri deve essere sufficientemente grande per il campo di input e il carattere di terminazione null che viene aggiunto automaticamente.|Obbligatorio. La dimensione include lo spazio per una terminazione NULL.|  
  
  
 Gli argomenti di dimensione, se necessario, devono essere passati nell'elenco di parametri immediatamente dopo l'argomento a cui si applicano. Ad esempio, il seguente codice:  
  
```  
char string1[11], string2[9];  
scanf_s("%10s %8s", string1, 11, string2, 9);  
```  
  
 legge una stringa con una lunghezza massima di 10 in `string1`e una stringa con una lunghezza massima di 8 in `string2`. Le dimensioni del buffer devono essere superiori di almeno un valore rispetto alle specifiche di larghezza poiché è necessario riservare dello spazio per una terminazione null.  
  
 La stringa di formato può gestire gli input di caratteri a singolo byte o wide, a prescindere che venga usata la versione con carattere a byte o una versione a caratteri wide. Pertanto, per leggere i caratteri a singolo byte o wide con funzioni `scanf` e `wscanf` , usare gli identificatori di formato come indicato di seguito.  
  
|Per leggere un carattere come|Usare questa funzione|Con questi identificatori di formato|  
|--------------------------|-----------------------|----------------------------------|  
|a un byte|Funzioni`scanf` |`c`, `hc`o `hC`|  
|a un byte|Funzioni`wscanf` |`C`, `hc`o `hC`|  
|wide|Funzioni`wscanf` |`c`, `lc`o `lC`|  
|wide|Funzioni`scanf` |`C`, `lc`o `lC`|  
  
 Per analizzare le stringhe con funzioni `scanf` e `wscanf` , usare la tabella sopra riportata con identificatori di tipo di formato `s` e `S` anziché `c` e `C`.  
  
## <a name="see-also"></a>Vedere anche  
 [scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)