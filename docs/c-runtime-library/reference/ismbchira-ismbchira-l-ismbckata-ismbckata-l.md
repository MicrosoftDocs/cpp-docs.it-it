---
title: "_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l | Microsoft Docs"
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
  - "_ismbckata"
  - "_ismbchira_l"
  - "_ismbchira"
  - "_ismbckata_l"
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
  - "ismbckata_l"
  - "_ismbckata_l"
  - "ismbckata"
  - "ismbchira"
  - "_ismbckata"
  - "ismbchira_l"
  - "_ismbchira_l"
  - "_ismbchira"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbchira (funzione)"
  - "_ismbchira_l (funzione)"
  - "_ismbckata (funzione)"
  - "_ismbckata_l (funzione)"
  - "Hiragana"
  - "ismbchira (funzione)"
  - "ismbchira_l (funzione)"
  - "ismbckata (funzione)"
  - "ismbdkata_l (funzione)"
  - "Katakana"
ms.assetid: 2db388a2-be31-489b-81c8-f6bf3f0582d3
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Funzioni specifiche della tabella codici 932**  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbchira(  
   unsigned int c   
);  
int _ismbchira_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbckata(  
   unsigned int c   
);  
int _ismbckata_l(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test o 0 in caso contrario.  Se `c` \<\=255 e c'è una corrispondente routine `_ismbb`, \(ad esempio `_ismbcalnum` corrisponde a `_ismbbalnum`\), il risultato è il valore restituito della corrispondente routine `_ismbb`.  
  
## Note  
 Ognuna di queste funzioni verifica un carattere multibyte specificato per una determinata condizione.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ma utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test \(solamente per la tabella codici 932\)|  
|-------------|----------------------------------------------------------------|  
|`_ismbchira`|Doppio byte Hiragana: 0x829F\=\<`c`\<\=0x82F1.|  
|`_ismbchira_l`|Doppio byte Hiragana: 0x829F\=\<`c`\<\=0x82F1.|  
|`_ismbckata`|Doppio byte katakana: 0x8340\=\<`c`\<\=0x8396.|  
|`_ismbckata_l`|Doppio byte katakana: 0x8340\=\<`c`\<\=0x8396.|  
  
 **Tabella Codici Finale Specifica 932**  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbchira`|\<mbstring.h\>|  
|`_ismbchira_l`|\<mbstring.h\>|  
|`_ismbckata`|\<mbstring.h\>|  
|`_ismbckata_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)