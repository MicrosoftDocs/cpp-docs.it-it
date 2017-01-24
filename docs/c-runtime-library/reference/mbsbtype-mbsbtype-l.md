---
title: "_mbsbtype, _mbsbtype_l | Microsoft Docs"
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
  - "_mbsbtype_l"
  - "_mbsbtype"
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
  - "mbsbtype"
  - "mbsbtype_l"
  - "_mbsbtype_l"
  - "_mbsbtype"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsbtype (funzione)"
  - "_mbsbtype_l (funzione)"
  - "mbsbtype (funzione)"
  - "mbsbtype_l (funzione)"
ms.assetid: 0d5dd91a-d32d-4f98-ac57-98dfc9e98eac
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbsbtype, _mbsbtype_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il tipo di byte all'interno di una stringa.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _mbsbtype(  
   const unsigned char *mbstr,  
   size_t count   
);  
int _mbsbtype_l(  
   const unsigned char *mbstr,  
   size_t count,  
   _locale_t locale   
);  
```  
  
#### Parametri  
 `mbstr`  
 Indirizzo di una sequenza di caratteri multibyte.  
  
 `count`  
 Offset dei byte dall'inizio della stringa.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_mbsbtype` e `_mbsbtype_l` restituiscono un integer che indica il risultato del test sul byte specificato.  Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.  
  
|Valore restituito|Tipo byte.|  
|-----------------------|----------------|  
|`_MBC_SINGLE` \(0\)|Carattere a byte singolo.  Ad esempio, nella tabella codici 932, `_mbsbtype` restituisce 0 se il byte specificato è compreso nell'intervallo 0x20 – 0x7E o 0xA1 – 0xDF.|  
|`_MBC_LEAD` \(1\)|Byte iniziale del carattere multibyte.  Ad esempio, nella tabella codici 932, `_mbsbtype` restituisce 1 se il byte specificato è compreso nell'intervallo 0x81 – 0x9F o 0xE0 – 0xFC.|  
|`_MBC_TRAIL` \(2\)|Byte finale del carattere multibyte.  Ad esempio, nella tabella codici 932, `_mbsbtype` restituisce 2 se il byte specificato è compreso nell'intervallo 0x40 – 0x7E or 0x80 – 0xFC.|  
|`_MBC_ILLEGAL` \(–1\)|Stringa `NULL`, carattere non valido, o byte `NULL` trovati prima del byte all'offset `count` in `mbstr`.|  
  
## Note  
 La funzione `_mbsbtype` determina il tipo di un byte in una stringa di caratteri multibyte.  La funzione esamina solo il byte all'offset `count` in `mbstr`, i caratteri non validi prima del byte specificato verranno ignorati.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  La versione di questa funzione senza il suffisso `_l` utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; la versione con il suffisso `_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se la stringa di input è `NULL`, verrà richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `_MBC_ILLEGAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_mbsbtype`|\<mbstring.h\>|\<mbctype.h\>\*|  
|`_mbsbtype_l`|\<mbstring.h\>|\<mbctype.h\>\*|  
  
 \* Per le costanti manifesto utilizzate come valori restituiti.  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)