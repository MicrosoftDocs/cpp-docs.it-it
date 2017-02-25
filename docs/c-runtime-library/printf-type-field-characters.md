---
title: "Caratteri di campo di tipo per printf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "printf (funzione), campi di specifica di formato"
  - "printf (funzione), caratteri di campo di tipo"
ms.assetid: 699cb438-cd14-402e-9f81-c7a32acc3317
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Caratteri di campo di tipo per printf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In una specifica di formato, il carattere `type` è un identificatore di conversione che specifica se l'argomento corrispondente deve essere interpretato come un carattere, una stringa, un puntatore, un numero intero o un numero a virgola mobile.  Il carattere `type` è l'unico campo di specifica di formato obbligatorio e viene visualizzato dopo tutti i campi facoltativi.  
  
 Gli argomenti che seguono la stringa di formato vengono interpretati a seconda del carattere corrispondente `type` e del prefisso facoltativo [size](../c-runtime-library/size-specification.md).  Le conversioni dei tipi di carattere `char` e `wchar_t` vengono specificate con `c` o `C` e le stringhe di caratteri estesi a byte singolo e multibyte vengono specificati con `s` o `S`, a seconda della funzione di formattazione usata.  Argomenti di tipo stringa e carattere che vengono specificati usando `c` e `s` vengono interpretati come `char` e `char*` dalla famiglia di funzioni `printf` o come `wchar_t` e `wchar_t*` dalla famiglia di funzioni `wprintf`.  Argomenti di tipo stringa e carattere che vengono specificati usando `C` e `S` vengono interpretati come `wchar_t` e `wchar_t*` dalla famiglia di funzioni `printf` o come `char` e `char*` dalla famiglia di funzioni `wprintf`.  
  
 Tipi interi, ad esempio `short`, `int`, `long`, `long long` e le relative varianti `unsigned`, vengono specificati usando `d`, `i`, `o`, `u`, `x`, e `X`.  I tipi a virgola mobile come `float`, `double` e `long double`, vengono specificati usando `a`, `A`, `e`, `E`, `f`, `g` e `G`.  Per impostazione predefinita, a meno che non che vengano modificati da un prefisso di lunghezza del campo `size`, gli argomenti interi vengono assegnati forzatamente al tipo `int` e gli argomenti a virgola mobile v vengono assegnati forzatamente a `double`.  Nei sistemi a 64 bit, `int` è un valore a 32 bit; di conseguenza gli Integer a 64 bit verranno troncati quando vengono formattati per l'output, a meno che non venga usato un prefisso `size` di `ll` o `I64`.  I tipi di puntatore specificati da `p` usano la lunghezza predefinita per la piattaforma.  
  
> [!NOTE]
>  I caratteri tipo `C`, `S` e `Z` e il comportamento dei caratteri tipo `c` e `s` quando vengono usati con le funzioni `printf` e `wprintf`, sono estensioni Microsoft e non compatibili con lo standard ANSI.  [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] non supporta il tipo di carattere `F`.  
  
### Caratteri di campo di tipo per printf  
  
|Carattere tipo|Argomento|Formato di output|  
|--------------------|---------------|-----------------------|  
|`c`|Carattere|Una volta usato con funzioni `printf`, specifica un carattere a byte singolo; quando usato con funzioni `wprintf`, specifica un carattere wide.|  
|`C`|Carattere|Una volta usato con funzioni `printf`, specifica un carattere wide; quando usato con funzioni `wprintf`, specifica un carattere a byte singolo.|  
|`d`|Integer|Intero decimale con segno.|  
|`i`|Integer|Intero decimale con segno.|  
|`o`|Integer|Intero ottale senza segno.|  
|`u`|Integer|Intero decimale senza segno.|  
|`x`|Integer|Intero esadecimale senza segno; usa "abcdef".|  
|`X`|Integer|Intero esadecimale senza segno; usa "ABCDEF".|  
|`e`|A virgola mobile|Il valore con segno che presenta il formato \[\-\] `d`**.**`dddd` e \[*segno*\]`dd[d]` dove `d` è una cifra decimale, `dddd` è una o più cifre decimali, `dd[d]` è due o tre cifre decimali a seconda del [formato di output](../c-runtime-library/set-output-format.md) e le dimensioni dell'esponente e il *segno* è \+ o –.|  
|`E`|A virgola mobile|Identico al formato `e` con la differenza che **E** invece di **e** introduce l'esponente.|  
|`f`|A virgola mobile|Valore con segno che ha il formato \[\-\] `dddd`**.**`dddd`, dove `dddd` è costituito da una o più cifre decimali.  Il numero di cifre prima del separatore decimale dipende dalla grandezza del numero, mentre il numero di cifre dopo il separatore decimale dipende dalla precisione richiesta.|  
|`g`|A virgola mobile|I valori con segno vengono mostrati nel formato `f` o `e`, a seconda di quale sia più compatto per il valore e la precisione specificati.  Il formato `e` viene usato solo quando l'esponente del valore è minore di – 4 oppure maggiore o uguale all'argomento `precision`.  Gli zeri finali vengono troncati e il separatore decimale viene visualizzato solo se uno o più cifre lo seguono.|  
|`G`|A virgola mobile|Identico al formato `g` con la differenza che **E** invece di **e** introduce l'esponente \(quando necessario\).|  
|`a`|A virgola mobile|Il valore esadecimale con segno a virgola mobile a precisione doppia che presenta il formato \[−\]0x*h.hhhh* **p±**`dd`, dove *h.hhhh* sono le cifre esadecimali \(usando lettere minuscole\) della mantissa e `dd` sono una o più cifre per l'esponente.  La precisione indica il numero di cifre dopo il punto.|  
|`A`|A virgola mobile|Il valore esadecimale con segno a virgola mobile a precisione doppia che presenta il formato \[−\]0X*h.hhhh* **P±**`dd`, dove *h.hhhh* sono le cifre esadecimali \(usando lettere maiuscole\) della mantissa e `dd` sono una o più cifre per l'esponente.  La precisione indica il numero di cifre dopo il punto.|  
|`n`|Puntatore a intero|Numero di caratteri che viene scritto correttamente fino al flusso o nel buffer.  Questo valore viene archiviato nel valore intero in cui l'indirizzo viene fornito come argomento.  Vedere la sezione Note sulla sicurezza più avanti in questo articolo.|  
|`p`|Tipo di puntatore|Visualizza l'argomento come indirizzo nelle cifre esadecimali.|  
|`s`|Stringa|Una volta usato con funzioni `printf`, specifica una stringa di caratteri a byte singolo o multibyte; una volta usato con le funzioni `wprintf`, specifica una stringa di carattere wide.  I caratteri vengono visualizzati fino al primo carattere Null o fino a quando non viene raggiunto il valore `precision`.|  
|`S`|Stringa|Una volta usato con funzioni `printf`, specifica una stringa di caratteri wide; una volta usato con le funzioni `wprintf`, specifica una stringa di caratteri a un byte singolo o multibyte.  I caratteri vengono visualizzati fino al primo carattere Null o fino a quando non viene raggiunto il valore `precision`.|  
|`Z`|Struttura `ANSI_STRING` o `UNICODE_STRING`|Quando l'indirizzo di una struttura [ANSI\_STRING](http://msdn.microsoft.com/library/windows/hardware/ff540605.aspx) o [UNICODE\_STRING](http://msdn.microsoft.com/library/windows/hardware/ff564879.aspx) viene passato come argomento, viene visualizzata la stringa contenuta nel buffer a cui punta il campo `Buffer` della struttura.  Usare un prefisso modificatore di lunghezza `w` per specificare un argomento `UNICODE_STRING`, ad esempio, `%wZ`.  Il campo `Length` della struttura deve essere impostato sulla lunghezza, espressa in byte, della stringa.  Il campo `MaximumLength` della struttura deve essere impostato sulla lunghezza, espressa in byte, del buffer.<br /><br /> In genere, il carattere di tipo `Z` viene usato solo nelle funzioni che usano una specifica di formato, come ad esempio `dbgPrint` e `kdPrint`.|  
  
 Se l'argomento che corrisponde a un identificatore di conversione a virgola mobile è infinito, non definito o NAN, la tabella seguente elenca l'output formattato.  
  
|Valore|Output|  
|------------|------------|  
|\+ infinito|`1.#INF` *cifre casuali*|  
|– infinito|`–1.#INF` *cifre casuali*|  
|Non definito \(stesso valore di NaN non interattivo\)|*cifra* `. #IND` *cifre casuali*|  
|NAN|*cifra* `. #NAN` *cifre casuali*|  
  
> [!NOTE]
>  Se il campo `Buffer` dell'argomento corrispondente a `%Z` o dell'argomento corrispondente a `%s` o `%S`, è un puntatore null, verrà visualizzato "\(null\)".  
  
> [!NOTE]
>  In tutti i formati esponenziali, il numero predefinito di cifre dell'esponente da visualizzare è tre.  Usando la funzione [set\_output\_format](../c-runtime-library/set-output-format.md), è possibile impostare il numero di cifre visualizzate a due, ma si espande a tre se viene richiesto dalle dimensioni dell'esponente.  
  
> [!IMPORTANT]
>  Poiché il formato `%n` è considerato non sicuro, è disabilitato per impostazione predefinita.  Se `%n` viene rilevato in una stringa di formato, il gestore di parametri non validi viene richiamato, come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md).  Per abilitare il supporto a `%n`, vedere [\_set\_printf\_count\_output](../c-runtime-library/reference/set-printf-count-output.md).  
  
## Vedere anche  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Direttive flag](../c-runtime-library/flag-directives.md)   
 [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md)   
 [Specifica precisione](../c-runtime-library/precision-specification.md)   
 [Specifiche di dimensione](../c-runtime-library/size-specification.md)   
 [\_set\_output\_format](../c-runtime-library/set-output-format.md)