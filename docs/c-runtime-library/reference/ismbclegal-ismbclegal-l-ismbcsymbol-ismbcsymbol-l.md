---
title: "_ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l | Microsoft Docs"
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
  - "_ismbclegal_l"
  - "_ismbclegal"
  - "_ismbcsymbol"
  - "_ismbcsymbol_l"
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
  - "ismbcsymbol_l"
  - "_ismbcsymbol_l"
  - "_ismbcsymbol"
  - "_ismbclegal_l"
  - "_ismbclegal"
  - "ismbclegal_l"
  - "ismbcsymbol"
  - "ismbclegal"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbclegal (funzione)"
  - "_ismbclegal_l (funzione)"
  - "_ismbcsymbol (funzione)"
  - "_ismbcsymbol_l (funzione)"
  - "_istlegal (funzione)"
  - "_istlegal_l (funzione)"
  - "ismbclegal (funzione)"
  - "ismbclegal_l (funzione)"
  - "ismbcsymbol (funzione)"
  - "ismbcsymbol_l (funzione)"
  - "istlegal (funzione)"
  - "istlegal_l (funzione)"
ms.assetid: 31bf1ea5-b56f-4e28-b21e-b49a2cf93ffc
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla se un carattere multibyte è un carattere di segno o valido.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbclegal(  
   unsigned int c   
);  
int _ismbclegal_l(  
   unsigned int c,   
   _locale_t locale  
);  
int _ismbcsymbol(  
   unsigned int c   
);  
int _ismbcsymbol_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Carattere da testare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test o 0 in caso contrario.  Se `c`\<\= 255 e c'è una corrispondente routine `_ismbb`, \(ad esempio `_ismbcalnum` corrisponde a `_ismbbalnum`\), il risultato è il valore restituito della procedura corrispondente `_ismbb`.  
  
## Note  
 Ognuna di queste funzioni verifica un carattere multibyte specificato per una determinata condizione.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ma utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test|Esempio di tabella di codici 932|  
|-------------|------------------------|--------------------------------------|  
|`_ismbclegal`|Multibyte valido|Restituisce un valore diverso da zero se e solo se il primo byte di `c` è negli intervalli 0x81 – 0x9F o 0xE0 – 0xFC, mentre il secondo byte è negli intervalli 0x40 – 0x7E o 0x80 \- FC.|  
|`_ismbcsymbol`|Simbolo multibyte|Restituisce un valore diverso da zero se e solo se 0x8141\=\<`c`\<\=0x81AC.|  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istlegal`|Restituisce sempre false|`_ismbclegal`|Restituisce sempre false.|  
|`_istlegal_l`|Restituisce sempre false|`_ismbclegal_l`|Restituisce sempre false.|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbclegal,_ismbclegal_l`|\<mbstring.h\>|  
|`_ismbcsymbol,_ismbcsymbol_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)