---
title: "_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l | Microsoft Docs"
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
  - "_ismbcl2"
  - "_ismbcl1"
  - "_ismbcl0"
  - "_ismbcl2_l"
  - "_ismbcl1_l"
  - "_ismbcl0_l"
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
  - "ismbcl0"
  - "_ismbcl1_l"
  - "_ismbcl0"
  - "ismbcl1"
  - "ismbcl0_l"
  - "_ismbcl2_l"
  - "ismbcl2"
  - "ismbcl1_l"
  - "_ismbcl1"
  - "_ismbcl0_l"
  - "_ismbcl2"
  - "ismbcl2_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbcl0 (funzione)"
  - "_ismbcl0_l (funzione)"
  - "_ismbcl1 (funzione)"
  - "_ismbcl1_l (funzione)"
  - "_ismbcl2 (funzione)"
  - "_ismbcl2_l (funzione)"
  - "ismbcl0 (funzione)"
  - "ismbcl0_l (funzione)"
  - "ismbcl1 (funzione)"
  - "ismbcl1_l (funzione)"
  - "ismbcl2 (funzione)"
  - "ismbcl2_l (funzione)"
ms.assetid: ee15ebd1-462c-4a43-95f3-6735836d626a
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Funzioni specifiche della tabella codici 932**, utilizzando le impostazioni locali correnti o di una determinata categoria dello stato di conversione LC\_CTYPE.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbcl0(  
   unsigned int c   
);  
int _ismbcl0_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcl1(  
   unsigned int c   
);  
int _ismbcl1_l(  
   unsigned int c ,  
   _locale_t locale  
);  
int _ismbcl2(  
   unsigned int c   
);  
int _ismbcl2_l(  
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
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test \(solamente per la tabella codici 932\)|  
|-------------|----------------------------------------------------------------|  
|`_ismbcl0`|JIS non Kanji: 0x8140\=\<`c`\<\=0x889E.|  
|`_ismbcl0_l`|JIS non Kanji: 0x8140\=\<`c`\<\=0x889E.|  
|`_ismbcl1`|JIS di livello \-1: 0x889F\=\<`c`\<\=0x9872.|  
|`_ismbcl1_l`|JIS di livello \-1: 0x889F\=\<`c`\<\=0x9872.|  
|`_ismbcl2`|JIS di livello \-2: 0x989F\=\<`c`\<\=0xEAA4.|  
|`_ismbcl2_l`|JIS di livello \-2: 0x989F\=\<`c`\<\=0xEAA4.|  
  
 Le funzioni controllano che il valore specificato `c` corrisponda alle condizioni di test descritte precedentemente, ma non verifica quale `c` sia un carattere multibyte valido.  Se il byte più basso è compreso tra 0x00 – 0x3F, 0x7F, o 0xFD – 0xFF, queste funzioni restituiscono un valore diverso da zero, indicando che il carattere soddisfa la condizione di test.  Utilizzare [\_ismbbtrail](../../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md) per verificare se il carattere multibyte è definito.  
  
 **Tabella Codici Finale Specifica 932**  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbcl0`|\<mbstring.h\>|  
|`_ismbcl0_l`|\<mbstring.h\>|  
|`_ismbcl1`|\<mbstring.h\>|  
|`_ismbcl1_l`|\<mbstring.h\>|  
|`_ismbcl2`|\<mbstring.h\>|  
|`_ismbcl2_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)