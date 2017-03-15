---
title: "_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_ismbclower"
  - "_ismbclower_l"
  - "_ismbcupper_l"
  - "_ismbcupper"
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
  - "_ismbcupper"
  - "_ismbclower"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ismbclower (funzione)"
  - "_ismbclower_l (funzione)"
  - "_ismbcupper (funzione)"
  - "_ismbcupper_l (funzione)"
  - "ismbclower (funzione)"
  - "ismbclower_l (funzione)"
  - "ismbcupper (funzione)"
  - "ismbcupper_l (funzione)"
ms.assetid: 17d89587-65bc-477c-ba8f-a84e63cf59e7
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla se un carattere multibyte è maiuscolo o minuscolo.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbclower(  
   unsigned int c   
);  
int _ismbclower_l(  
   unsigned int c,  
   _locale_t locale   
);  
int _ismbcupper(  
   unsigned int c   
);  
int _ismbcupper_l(  
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
 Ognuna di queste funzioni verifica un carattere multibyte specificato per una determinata condizione.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ma utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test|Esempio di tabella di codici 932|  
|-------------|------------------------|--------------------------------------|  
|`_ismbclower`|Alfabetico minuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di una lettera minuscola ASCII inglese: 0x61\<\=`c`\<\=0x7A.|  
|`_ismbclower_l`|Alfabetico minuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di una lettera minuscola ASCII inglese: 0x61\<\=`c`\<\=0x7A.|  
|`_ismbcupper`|Alfabetico maiuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di una lettera maiuscola ASCII inglese: 0x41\<\=`c`\<\=0x5A.|  
|`_ismbcupper_l`|Alfabetico maiuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a un byte di una lettera maiuscola ASCII inglese: 0x41\<\=`c`\<\=0x5A.|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_ismbclower`|\<mbstring.h\>|  
|`_ismbclower_l`|\<mbstring.h\>|  
|`_ismbcupper`|\<mbstring.h\>|  
|`_ismbcupper_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
  
-   [System::Char::IsLower](https://msdn.microsoft.com/en-us/library/system.char.islower.aspx)  
  
-   [System::Char::IsUpper](https://msdn.microsoft.com/en-us/library/system.char.isupper.aspx)  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)