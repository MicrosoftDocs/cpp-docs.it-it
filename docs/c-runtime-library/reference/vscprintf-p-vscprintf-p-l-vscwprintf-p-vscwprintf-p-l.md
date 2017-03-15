---
title: "_vscprintf_p, _vscprintf_p_l, _vscwprintf_p, _vscwprintf_p_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vscprintf_p_l"
  - "_vscprintf_p"
  - "_vscwprintf_p_l"
  - "_vscwprintf_p"
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
apitype: "DLLExport"
f1_keywords: 
  - "_vscprintf_p"
  - "_vscprintf_p_l"
  - "vscwprintf_p"
  - "vscprintf_p"
  - "vscwprintf_p_l"
  - "_vscwprintf_p_l"
  - "vscprintf_p_l"
  - "_vscwprintf_p"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_vscprintf_p (funzione)"
  - "_vscprintf_p_l (funzione)"
  - "_vsctprintf_p (funzione)"
  - "_vsctprintf_p_l (funzione)"
  - "_vscwprintf_p (funzione)"
  - "_vscwprintf_p_l (funzione)"
  - "vscprintf_p (funzione)"
  - "vscprintf_p_l (funzione)"
  - "vsctprintf_p (funzione)"
  - "vsctprintf_p_l (funzione)"
  - "vscwprintf_p (funzione)"
  - "vscwprintf_p_l (funzione)"
ms.assetid: 5da920b3-8652-4ee9-b19e-5aac3ace9d03
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# _vscprintf_p, _vscprintf_p_l, _vscwprintf_p, _vscwprintf_p_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il numero di caratteri nella stringa formattata utilizzando un puntatore ad un elenco di argomenti, con la possibilità di specificare l'ordine in cui gli argomenti vengono utilizzati.  
  
## Sintassi  
  
```  
int _vscprintf_p(  
   const char *format,  
   va_list argptr   
);  
int _vscprintf_p _l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vscwprintf_p (  
   const wchar_t *format,  
   va_list argptr   
);  
int _vscwprintf_p _l(  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
```  
  
#### Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `argptr`  
 Puntatore all'elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 `_vscprintf_p` restituisce il numero di caratteri che dovrebbero essere generati se la stringa puntata dalla lista di argomenti fosse stampata o inviata ad un file o buffer utilizzando i codici di formattazione specifici.  Il valore restituito non include il carattere di terminazione null.  `_vscwprintf_p` esegue la stessa funzione per i caratteri di tipo "wide".  
  
## Note  
 Queste funzioni differiscono da `_vscprintf` e `_vscwprintf` solo nel fatto che supportano la possibilità di specificare l'ordine in cui gli argomenti sono utilizzati.  Per ulteriori informazioni, vedere [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md).  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
 Se `format` è un puntatore a null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EINVAL`.  
  
> [!IMPORTANT]
>  Assicurarsi che se `format` è una stringa definita dall'utente, sia del tipo con terminazione null e con il corretto numero e tipo di parametri.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vsctprintf_p`|`_vscprintf_p`|`_vscprintf_p`|`_vscwprintf_p`|  
|`_vsctprintf_p_l`|`_vscprintf_p_l`|`_vscprintf_p_l`|`_vscwprintf_p_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_vscprintf_p`, `_vscprintf_p_l`|\<stdio.h\>|  
|`_vscwprintf_p`, `_vscwprintf_p_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio per [vsprintf](../../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md).  
  
## Vedere anche  
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [\_scprintf\_p, \_scprintf\_p\_l, \_scwprintf\_p, \_scwprintf\_p\_l](../../c-runtime-library/reference/scprintf-p-scprintf-p-l-scwprintf-p-scwprintf-p-l.md)   
 [\_vscprintf, \_vscprintf\_l, \_vscwprintf, \_vscwprintf\_l](../../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)