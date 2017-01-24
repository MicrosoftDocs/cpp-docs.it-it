---
title: "_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ismbcpunct_l"
  - "_ismbcblank"
  - "_ismbcprint"
  - "_ismbcgraph_l"
  - "_ismbcblank_l"
  - "_ismbcpunct"
  - "_ismbcprint_l"
  - "_ismbcspace_l"
  - "_ismbcspace"
  - "_ismbcgraph"
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
  - "_ismbcspace"
  - "_ismbcgraph"
  - "_ismbcpunct"
  - "ismbcspace_l"
  - "ismbcgraph"
  - "_ismbcgraph_l"
  - "_ismbcprint"
  - "_ismbcspace_l"
  - "ismbcprint"
  - "ismbcgraph_l"
  - "ismbcspace"
  - "ismbcpunct"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbcgraph (funzione)"
  - "_ismbcgraph_l (funzione)"
  - "_ismbcprint (funzione)"
  - "_ismbcprint_l (funzione)"
  - "_ismbcpunct (funzione)"
  - "_ismbcpunct_l (funzione)"
  - "_ismbcspace (funzione)"
  - "_ismbcspace_l (funzione)"
  - "ismbcgraph (funzione)"
  - "ismbcgraph_l (funzione)"
  - "ismbcprint (funzione)"
  - "ismbcprint_l (funzione)"
  - "ismbcpunct (funzione)"
  - "ismbcpunct_l (funzione)"
  - "ismbcspace (funzione)"
  - "ismbcspace_l (funzione)"
ms.assetid: 8e0a5f47-ba64-4411-92a3-3c525d16e3be
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se il carattere è un carattere grafico, un carattere visualizzato, un carattere di punteggiatura, o uno spazio.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per ulteriori informazioni, vedere[Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbcgraph(  
   unsigned int c   
);  
int _ismbcgraph_l(  
   unsigned int c,  
   _locale_t locale   
);  
int _ismbcprint(  
   unsigned int c   
);  
int _ismbcprint_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcpunct(  
   unsigned int c  
);  
int _ismbcpunct_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcblank(  
   unsigned int c   
);  
int _ismbcblank_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcspace(  
   unsigned int c   
);  
int _ismbcspace_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Carattere da determinare.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test, o 0 in caso contrario.  Se `c` \<\=255 e c'è una corrispondente routine `_ismbb`, \(ad esempio `_ismbcalnum` corrisponde a `_ismbbalnum`\), il risultato è il valore restituito della corrispondente routine `_ismbb`.  
  
 Le versioni di queste funzioni sono identiche, a parte il fatto che quelle che hanno il suffisso `_l` utilizzano le impostazioni locali passate per il loro comportamento dipendente dalle impostazioni locali, anziché le impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Note  
 Ognuna di queste funzioni verifica un carattere multibyte specificato per una determinata condizione.  
  
|Routine|Condizione di test|Esempio di tabella di codici 932|  
|-------------|------------------------|--------------------------------------|  
|`_ismbcgraph`|Grafico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte singolo di qualsiasi carattere ASCII o di un carattere katakana stampabile ad eccezione di uno spazio vuoto \( \).|  
|`_ismbcprint`|Stampabile|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di qualsiasi carattere ASCII o di un carattere katakana stampabile incluso uno spazio vuoto \( \).|  
|`_ismbcpunct`|Punteggiatura|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a singolo byte di qualsiasi carattere ASCII o di un carattere di punteggiatura katakana.|  
|`_ismbcblank`|Spazio o tabulazione orizzontale|Ritorna un valore diverso da zero se e solo se `c` è uno spazio o un carattere di tabulazione orizzontale: `c`\=0x20 o `c`\=0x09.|  
|`_ismbcspace`|Spazio|Restituisce un valore diverso da zero se e solo se `c` è uno spazio bianco: `c`\=0x20 o 0x09\=\<`c`\<\=0x0D.|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbcgraph`|\<mbstring.h\>|  
|`_ismbcgraph_l`|\<mbstring.h\>|  
|`_ismbcprint`|\<mbstring.h\>|  
|`_ismbcprint_l`|\<mbstring.h\>|  
|`_ismbcpunct`|\<mbstring.h\>|  
|`_ismbcpunct_l`|\<mbstring.h\>|  
|`_ismbcblank`|\<mbstring.h\>|  
|`_ismbcblank_l`|\<mbstring.h\>|  
|`_ismbcspace`|\<mbstring.h\>|  
|`_ismbcspace_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
  
-   [System::Char::IsPunctuation](https://msdn.microsoft.com/en-us/library/system.char.ispunctuation.aspx)  
  
-   [System::Char::IsWhiteSpace](https://msdn.microsoft.com/en-us/library/system.char.iswhitespace.aspx)  
  
-   Per `_ismbcgraph` e `_ismbcprint`: Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)