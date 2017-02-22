---
title: "_mbbtombc, _mbbtombc_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbbtombc_l"
  - "_mbbtombc"
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
  - "_mbbtombc_l"
  - "_mbbtombc"
  - "mbbtombc_l"
  - "mbbtombc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mbbtombc (funzione)"
  - "_mbbtombc_l (funzione)"
  - "mbbtombc (funzione)"
  - "mbbtombc_l (funzione)"
ms.assetid: 78593389-b0fc-43b6-8c1f-2a6bf702d64e
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _mbbtombc, _mbbtombc_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un carattere multibyte a byte singolo in un carattere multibyte a byte doppio corrispondente.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned int _mbbtombc(  
   unsigned int c   
);  
unsigned int _mbbtombc_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Carattere a byte singolo da convertire.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Se `_mbbtombc` converte correttamente `c`, restituisce un carattere multibyte; in caso contrario, restituisce `c`.  
  
## Note  
 La funzione `_mbbtombc` converte un carattere multibyte a byte singolo dato in un carattere multibyte a byte doppio corrispondente.  I caratteri per essere convertiti devono essere compresi nell'intervallo 0x20 \- 0x7E o 0xA1 \- 0xDF.  
  
 Il valore di output è interessato dalla configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Per altre informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di questa funzione sono identiche, tranne per il fatto che `_mbbtombc` usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali e `_mbbtombc_l`, invece, usa il parametro delle impostazioni locali passato.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Nelle versioni precedenti, `_mbbtombc` è stato denominato `hantozen`.  Per nuovi codici, usare `_mbbtombc`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbbtombc`|\<mbstring.h\>|  
|`_mbbtombc_l`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_mbctombb, \_mbctombb\_l](../../c-runtime-library/reference/mbctombb-mbctombb-l.md)