---
title: "_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l | Microsoft Docs"
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
  - "_ismbstrail"
  - "_ismbslead_l"
  - "_ismbslead"
  - "_ismbstrail_l"
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
  - "_ismbslead"
  - "ismbs"
  - "ismbslead_l"
  - "_ismbs"
  - "ismbstrail_l"
  - "ismbslead"
  - "_ismbstrail"
  - "_ismbstrail_l"
  - "ismbstrail"
  - "_ismbslead_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ismbslead (funzione)"
  - "_ismbslead_l (funzione)"
  - "_ismbstrail (funzione)"
  - "_ismbstrail_l (funzione)"
  - "ismbslead (funzione)"
  - "ismbslead_l (funzione)"
  - "ismbstrail (funzione)"
  - "ismbstrail_l (funzione)"
ms.assetid: 86d2cd7a-3cff-443a-b713-14cc17a231e9
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue test sensibili al contesto per i byte iniziali e finali della stringa con caratteri multibyte e determina se un puntatore di una data sottostringa punta a un byte iniziale o finale.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _ismbslead(  
   const unsigned char *str,  
   const unsigned char *current   
);  
int _ismbstrail(  
   const unsigned char *str,  
   const unsigned char *current   
);  
int _ismbslead_l(  
   const unsigned char *str,  
   const unsigned char *current,  
   _locale_t locale  
);  
int _ismbstrail_l(  
   const unsigned char *str,  
   const unsigned char *current,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `str`  
 Puntatore all'inizio della stringa o al precedente byte iniziale noto.  
  
 `current`  
 Puntatore alla posizione nella stringa da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 `_ismbslead` restituisce \-1 se il carattere è un byte iniziale e `_ismbstrail` restituisce \-1 se il carattere è un byte finale.  Se le stringhe di input sono valide ma non rappresentano un byte iniziale o finale, queste funzioni restituiscono zero.  Se l'argomento è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
## Note  
 `_ismbslead` e `_ismbstrail` sono più lenti delle versioni `_ismbblead` e `_ismbbtrail` perché prendono in considerazione il contesto della stringa.  
  
 Le versioni di queste funzioni che presentano il suffisso `_l` sono identiche ad eccezione del fatto che, per il comportamento dipendente dalle impostazioni locali, usano le impostazioni locali passate anziché quelle correnti.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_ismbslead`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
|`_ismbstrail`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
|`_ismbslead_l`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
|`_ismbstrail_l`|\<mbctype.h\> o \<mbstring.h\>|\<ctype.h\>,\* \<limits.h\>, \<stdlib.h\>|  
  
 \* Per le costanti manifesto per le condizioni di test.  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routines \_ismbc](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)