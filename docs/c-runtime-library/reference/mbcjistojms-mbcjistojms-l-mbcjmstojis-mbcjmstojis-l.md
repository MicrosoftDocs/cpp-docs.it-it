---
title: "_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbcjistojms"
  - "_mbcjmstojis"
  - "_mbcjistojms_l"
  - "_mbcjmstojis_l"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "mbcjistojms"
  - "_mbcjistojms"
  - "_mbcjistojms_l"
  - "_mbcjmstojis_l"
  - "_mbcjmstojis"
  - "mbcjmstojis_l"
  - "mbcjistojms_l"
  - "mbcjmstojis"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbcjistojms (funzione)"
  - "_mbcjistojms_l (funzione)"
  - "_mbcjmstojis (funzione)"
  - "_mbcjmstojis_l (funzione)"
  - "mbcjistojms (funzione)"
  - "mbcjistojms_l (funzione)"
  - "mbcjmstojis (funzione)"
  - "mbcjmstojis_l (funzione)"
ms.assetid: dece5127-b337-40a4-aa10-53320a2c9432
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Conversione tra il caratteri Japan Industry Standard \(JIS\) e Japan Microsoft \(JMS\)  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned int _mbcjistojms(  
   unsigned int c   
);  
unsigned int _mbcjistojms_l(  
   unsigned int c,  
   _locale_t locale  
);  
unsigned int _mbcjmstojis(  
   unsigned int c   
);  
unsigned int _mbcjmstojis_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Carattere da convertire.  
  
 `local`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Nelle impostazione locali giapponesi, queste funzioni restituiscono un carattere convertito o restituiscono 0 se non esiste alcuna conversione possibile.  Nelle impostazioni locali non giapponesi, queste funzioni restituiscono il carattere che gli viene passato.  
  
## Note  
 La funzione `_mbcjistojms`  converte un carattere Japan Industry Standard \(JIS\) in un carattere Microsoft Kanji \(Shift JIS\).  Il carattere viene convertito solo se il byte di apertura e quello finale sono compresi nell'intervallo 0x21 – 0x7E.  Se il byte di apertura o quello di prova non è incluso in questo intervallo, `errno` è impostato su `EILSEQ`.  Per ulteriori informazioni su questo e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 La funzione `_mbcjmstojis` converte un carattere Shift JIS in un carattere JIS.  Il carattere viene convertito solo se il byte di apertura è nell'intervallo tra 0x81 – 0x9F o 0xE0 – 0xFC e il byte finale è nell'intervallo 0x40 – 0x7E o 0x80 – 0xFC.  Si noti che alcuni punti del codice in questo intervallo non dispongono di un carattere assegnato e non possono essere convertiti.  
  
 Il valore `c` deve essere un valore a 16 bit dei quali 8 bit più significativi rappresentano il byte di apertura del carattere da convertire e gli 8 bit meno significativi rappresentano il byte finale.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Nelle versioni precedenti, `_mbcjistojms` e `_mbcjmstojis` sono stati chiamati, rispettivamente `jistojms` e `jmstojis`.  È consigliabile utilizzare invece `_mbcjistojms`,`_mbcjistojms_l`,`_mbcjmstojis` e `_mbcjmstojis_l`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbcjistojms`|\<mbstring.h\>|  
|`_mbcjistojms_l`|\<mbstring.h\>|  
|`_mbcjmstojis`|\<mbstring.h\>|  
|`_mbcjmstojis_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)