---
title: "_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l | Microsoft Docs"
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
  - "_ismbcalpha"
  - "_ismbcalnum"
  - "_ismbcdigit"
  - "_ismbcalnum_l"
  - "_ismbcdigit_l"
  - "_ismbcalpha_l"
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
  - "_ismbcdigit"
  - "ismbcalnum_l"
  - "_ismbcdigit_l"
  - "_ismbcalpha"
  - "ismbcalnum"
  - "ismbcdigit"
  - "ismbcalpha"
  - "_ismbcalnum_l"
  - "_ismbcalnum"
  - "ismbcdigit_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbcalnum (funzione)"
  - "_ismbcalnum_l (funzione)"
  - "_ismbcalpha (funzione)"
  - "_ismbcalpha_l (funzione)"
  - "_ismbcdigit (funzione)"
  - "_ismbcdigit_l (funzione)"
  - "ismbcalnum (funzione)"
  - "ismbcalnum_l (funzione)"
  - "ismbcalpha (funzione)"
  - "ismbcalpha_l (funzione)"
  - "ismbcdigit (funzione)"
  - "ismbcdigit_l (funzione)"
ms.assetid: 12d57925-aebe-46e0-80b0-82b84c4c31ec
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla se un carattere multibyte sia un carattere alfanumerico, alfabetico, o una cifra.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbcalnum  
(  
   unsigned int c   
);  
int _ismbcalnum_l  
(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcalpha  
(  
   unsigned int c   
);  
int _ismbcalpha_l  
(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcdigit  
(  
   unsigned int c   
);  
int _ismbcdigit_l  
(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test o 0 in caso contrario.  Se `c`\<\= 255 e c'è una routine `_ismbb` corrispondente, \(ad esempio `_ismbcalnum` corrisponde a `_ismbbalnum`\), il risultato è il valore restituito della procedura `_ismbb` corrispondente.  
  
## Note  
 Ognuna di queste routine verifica un carattere multibyte specificato per una determinata condizione.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ma utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test|Esempio di tabella di codici 932|  
|-------------|------------------------|--------------------------------------|  
|`_ismbcalnum,_ismbcalnum_l`|Alfanumerico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di un carattere ASCII inglese: Vedere gli esempi per `_ismbcdigit` e `_ismbcalpha`.|  
|`_ismbcalpha,_ismbcalpha_l`|Carattere alfabetico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di un carattere ASCII inglese: 0x41\<\=`c`\<\=0x5a o 0x61\<\=`c`\<\=0x7A; o una lettera katakana: 0xA6\<\=`c`\<\=0xDF.|  
|`_ismbcdigit,_ismbcdigit`|Cifra|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di una cifra ASCII: 0x30\<\=`c`\<\=0x39.|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbcalnum,_ismbcalnum_l`|\<mbstring.h\>|  
|`_ismbcalpha,_ismbcalpha_l`|\<mbstring.h\>|  
|`_ismbcdigit,_ismbcdigit_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
  
-   [System::Char::IsLetter](https://msdn.microsoft.com/en-us/library/system.char.isletter.aspx)  
  
-   [System::Char::IsDigit](https://msdn.microsoft.com/en-us/library/system.char.isdigit.aspx)  
  
-   Per `_ismbcalnum`: Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)