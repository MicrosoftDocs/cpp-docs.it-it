---
title: _mbsbtype, _mbsbtype_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbsbtype_l
- _mbsbtype
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- mbsbtype
- mbsbtype_l
- _mbsbtype_l
- _mbsbtype
dev_langs:
- C++
helpviewer_keywords:
- _mbsbtype function
- mbsbtype function
- _mbsbtype_l function
- mbsbtype_l function
ms.assetid: 0d5dd91a-d32d-4f98-ac57-98dfc9e98eac
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: a20ff8b10229714a434dc0f77748f37f9c15064a
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="mbsbtype-mbsbtypel"></a>_mbsbtype, _mbsbtype_l
Restituisce il tipo di byte all'interno di una stringa.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `mbstr`  
 Indirizzo di una sequenza di caratteri multibyte.  
  
 `count`  
 Offset dall'inizio della stringa in byte.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `_mbsbtype`e `_mbsbtype_l` restituisce un valore intero che indica il risultato del test in byte specificata. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.  
  
|Valore restituito|Tipo di byte|  
|------------------|---------------|  
|`_MBC_SINGLE` (0)|Carattere a byte singolo. Ad esempio, nella tabella codici 932, `_mbsbtype` restituisce 0 se il byte specificato è compreso nell'intervallo 0x20-0x7E o 0xA1 - 0xDF.|  
|`_MBC_LEAD` (1)|Byte di apertura del carattere multibyte. Ad esempio, nella tabella codici 932, `_mbsbtype` restituisce 1 se il byte specificato è compreso nell'intervallo 0x81-0x9F o 0xE0 - 0xFC.|  
|`_MBC_TRAIL` (2)|Byte di chiusura del carattere multibyte. Ad esempio, nella tabella codici 932, `_mbsbtype` restituisce 2 se il byte specificato è compreso nell'intervallo 0x40-0x7E o 0x80 - 0xFC.|  
|`_MBC_ILLEGAL` (-1)|Stringa `NULL`, carattere non valido o byte `NULL` trovati prima del byte in corrispondenza dell'offset `count` in `mbstr`.|  
  
## <a name="remarks"></a>Note  
 La funzione `_mbsbtype` determina il tipo di un byte in una stringa di caratteri multibyte. La funzione esamina solo i byte in corrispondenza dell'offset `count` in `mbstr`, ignorando i caratteri non validi prima del byte specificato.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). La versione di questa funzione senza il suffisso `_l` usa le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. La versione con il suffisso `_l` è identica, ad eccezione del fatto che usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se la stringa di input è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `_MBC_ILLEGAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_mbsbtype`|\<mbstring.h>|\<mbctype.h>*|  
|`_mbsbtype_l`|\<mbstring.h>|\<mbctype.h>*|  
  
 \* Per le costanti manifeste usate come valori restituiti.  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)
