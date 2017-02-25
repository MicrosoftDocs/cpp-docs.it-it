---
title: "strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "strxfrm"
  - "_wcsxfrm_l"
  - "_strxfrm_l"
  - "wcsxfrm"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "strxfrm"
  - "_tcsxfrm"
  - "wcsxfrm"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strxfrm_l (funzione)"
  - "_tcsxfrm (funzione)"
  - "_wcsxfrm_l (funzione)"
  - "confronto tra stringhe [C++], trasformazione di stringhe"
  - "stringhe [C++], confronto di impostazioni locali"
  - "strxfrm (funzione)"
  - "strxfrm_l (funzione)"
  - "tcsxfrm (funzione)"
  - "wcsxfrm (funzione)"
  - "wcsxfrm_l (funzione)"
ms.assetid: 6ba8e1f6-4484-49aa-83b8-bc2373187d9e
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasforma una stringa in base alle informazioni specifiche delle impostazioni locali.  
  
## Sintassi  
  
```  
size_t strxfrm(  
   char *strDest,  
   const char *strSource,  
   size_t count   
);  
size_t wcsxfrm(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count   
);  
size_t _strxfrm_l(  
   char *strDest,  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
);  
size_t wcsxfrm_l(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `strDest`  
 Stringa destinazione.  
  
 `strSource`  
 Stringa di origine.  
  
 `count`  
 Massimo numero di caratteri da mettere in `strDest`*.*  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce la lunghezza della stringa trasformata, senza contare il carattere di terminazione null.  Se il valore di ritorno è maggiore o uguale a `count`, il contenuto di `strDest` è imprevedibile.  Su un errore, ogni funzione imposta `errno` e restituisce `INT_MAX`.  Per un carattere non valido, `errno` è impostato su `EILSEQ`.  
  
## Note  
 La funzione `strxfrm` trasforma la stringa puntata da `strSource` in un nuovo formato raccolto che viene archiviato in `strDest`.  Non più di `count` caratteri, incluso il carattere null, vengono modificati e inseriti nella stringa risultante.  La conversione viene eseguita utilizzando l'impostazione di categoria `LC_COLLATE` delle impostazioni locali.  Per ulteriori informazioni su `LC_COLLATE`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  `strxfrm` utilizza le impostazioni locali attuali per il relativo comportamento dipendente dalle impostazioni locali; `_strxfrm_l` è identico con la differenza che utilizza le impostazioni locali passate anziché le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Dopo la trasformazione, una chiamata a `strcmp` con le due stringhe trasformate produce risultati identici a quelli di una chiamata a `strcoll` applicata alle due stringhe originali.  Come con `strcoll` e `stricoll`, `strxfrm` gestisce automaticamente le stringhe di caratteri multibyte in modo appropriato.  
  
 `wcsxfrm` è una versione a caratteri "wide" di `strxfrm`; gli argomenti di tipo stringa di `wcsxfrm` sono puntatori a caratteri "wide".  Per `wcsxfrm`, dopo la trasformazione della stringa, una chiamata a `wcscmp` con le due stringhe trasformate produce risultati identici a quelli di una chiamata a `wcscoll` applicata alle due stringhe originali.  `wcsxfrm` e `strxfrm` si comportano in modo identico in caso contrario.  `wcsxfrm` utilizza le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali; `_wcsxfrm_l` utilizza le impostazioni locali passate anziché le impostazioni locali correnti.  
  
 Queste funzioni convalidano i parametri.  Se `strSource` è un puntatore null, o `strDest` è un puntatore null \(a meno che il conteggio non sia zero\), o se `count` è maggiore di `INT_MAX`, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `INT_MAX`.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsxfrm`|`strxfrm`|`strxfrm`|`wcsxfrm`|  
|`_tcsxfrm_l`|`_strxfrm_l`|`_strxfrm_l`|`_wcsxfrm_l`|  
  
 Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri \(set di caratteri ASCII\) è lo stesso dell'ordine lessicografico dei caratteri.  Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico dei caratteri.  Ad esempio, in alcune impostazioni locali europee, il carattere "a" \(valore 0x61\) precede il carattere "&\#x00E4;" \(valore 0xE4\) nel set di caratteri, ma il carattere "ä" precede lessicograficamente il carattere "a".  
  
 Nelle impostazioni locali per le quali l'ordine del set di caratteri e l'ordine lessicografico differiscono, utilizzare `strxfrm` sulle stringhe originali e quindi `strcmp` sulle stringhe risultanti per produrre un confronto di stringhe lessicografico secondo l'impostazione corrente di categoria di `LC_COLLATE` delle impostazioni locali.  Pertanto, per confrontare lessicograficamente due stringhe nelle impostazioni locali sopra riportate, utilizzare `strxfrm` sulle stringhe originali, quindi `strcmp` sulle stringhe risultanti.  In alternativa, è possibile utilizzare `strcoll` anziché `strcmp` sulle stringhe originali.  
  
 `strxfrm` è fondamentalmente un wrapper di [LCMapString](http://msdn.microsoft.com/library/windows/desktop/dd318700) con `LCMAP_SORTKEY`.  
  
 Il valore della seguente espressione corrisponde alla dimensione dell'array necessaria per memorizzare la trasformazione di `strxfrm` della stringa di origine:  
  
```  
1 + strxfrm( NULL, string, 0 )  
```  
  
 In impostazioni locali "C", solo `strxfrm` equivale al seguente:  
  
```  
strncpy( _string1, _string2, _count );  
return( strlen( _string1 ) );  
```  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strxfrm`|\<string.h\>|  
|`wcsxfrm`|\<string.h\> o \<wchar.h\>|  
|`_strxfrm_l`|\<string.h\>|  
|`_wcsxfrm_l`|\<string.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)