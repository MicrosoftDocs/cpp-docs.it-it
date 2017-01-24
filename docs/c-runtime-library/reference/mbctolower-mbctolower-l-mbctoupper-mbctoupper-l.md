---
title: "_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbctolower_l"
  - "_mbctoupper_l"
  - "_mbctoupper"
  - "_mbctolower"
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
  - "mbctoupper_l"
  - "mbctolower_l"
  - "_mbctolower"
  - "_mbctolower_l"
  - "_mbctoupper"
  - "mbctoupper"
  - "mbctolower"
  - "_mbctoupper_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbctolower (funzione)"
  - "_mbctolower_l (funzione)"
  - "_mbctoupper (funzione)"
  - "_mbctoupper_l (funzione)"
  - "_totlower (funzione)"
  - "_totupper (funzione)"
  - "mbctolower (funzione)"
  - "mbctolower_l (funzione)"
  - "mbctoupper (funzione)"
  - "mbctoupper_l (funzione)"
  - "totlower (funzione)"
  - "totupper (funzione)"
ms.assetid: 787fab71-3224-4ed7-bc93-4dcd8023fc54
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Testa e converte il caso di un carattere multibyte.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned int _mbctolower(  
   unsigned int c   
);  
unsigned int _mbctolower_l(  
   unsigned int c,  
   _locale_t locale  
);  
unsigned int _mbctoupper(  
   unsigned int c   
);  
unsigned int _mbctoupper_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `c`  
 Caratteri multibyte da convertire.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il carattere convertito `c`, se possibile.  In caso contrario, restituisce il carattere `c` invariato.  
  
## Note  
 Le funzioni verificano un carattere `c` e, se possibile, applicano una delle seguenti conversioni.  
  
|Routine|Converte|  
|-------------|--------------|  
|`_mbctolower,_mbctolower_l`|Carattere maiuscolo a carattere minuscolo.|  
|`_mbctoupper,_mbctoupper_l`|Carattere minuscolo a carattere maiuscolo.|  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  La versione di questa funzione senza il suffisso `_l` utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; la versione con il suffisso `_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Nelle versioni precedenti, `_mbctolower` è stato chiamato`jtolower`, e `_mbctoupper` è stato chiamato `jtoupper`.  Per il nuovo codice, utilizzare i nuovi nomi.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_totlower`|`tolower`|`_mbctolower`|`towlower`|  
|`_totlower_l`|`_tolower_l`|`_mbctolower_l`|`_towlower_t`|  
|`_totupper`|`toupper`|`_mbctoupper`|`towupper`|  
|`_totupper_l`|`toupper_l`|`_mbctoupper_l`|`_towupper_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbctolower,_mbctolower_l`|\<mbstring.h\>|  
|`_mbctoupper,_mbctoupper_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [\_mbbtombc, \_mbbtombc\_l](../../c-runtime-library/reference/mbbtombc-mbbtombc-l.md)   
 [\_mbcjistojms, \_mbcjistojms\_l, \_mbcjmstojis, \_mbcjmstojis\_l](../../c-runtime-library/reference/mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)   
 [\_mbctohira, \_mbctohira\_l, \_mbctokata, \_mbctokata\_l](../../c-runtime-library/reference/mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)   
 [\_mbctombb, \_mbctombb\_l](../../c-runtime-library/reference/mbctombb-mbctombb-l.md)