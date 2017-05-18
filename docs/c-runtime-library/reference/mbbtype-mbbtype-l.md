---
title: _mbbtype, _mbbtype_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbbtype
- _mbbtype_l
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
- _mbbtype_l
- mbbtype
- mbbtype_l
- _mbbtype
dev_langs:
- C++
helpviewer_keywords:
- _mbbtype function
- _mbbtype_l function
- mbbtype function
- mbbtype_l function
ms.assetid: b8e34b40-842a-4298-aa39-0bd2d8e51c2a
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: e7b9c7aed7205e6cac428a0f627525f9484afc5a
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="mbbtype-mbbtypel"></a>_mbbtype, _mbbtype_l
Restituisce il tipo di byte, in base al byte precedente.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _mbbtype(  
   unsigned char c,  
   int type   
);  
int _mbbtype_l(  
   unsigned char c,  
   int type,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da testare.  
  
 `type`  
 Tipo di byte per cui effettuare il test.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `_mbbtype` restituisce il tipo di byte all'interno di una stringa. Questa decisione è sensibile al contesto, come specificato dal valore di `type`, che fornisce la condizione di test del controllo. `type` è il tipo byte precedente nella stringa. Le costanti manifesto nella tabella seguente sono definite in Mbctype.h.  
  
|Valore di `type`|`_mbbtype` esegue il test per|Valore restituito|`c`|  
|---------------------|--------------------------|------------------|---------|  
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|`_MBC_SINGLE` (0)|Byte singolo (0x20 - 0x7E, 0xA1 - 0xDF)|  
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|`_MBC_LEAD` (1)|Byte iniziale di caratteri multibyte (0x81 - 0x9F, 0xE0 - 0xFC)|  
|Qualsiasi valore eccetto 1|Byte singolo o byte iniziale valido|`_MBC_ILLEGAL`<br /><br /> ( -1)|Carattere non valido (qualsiasi valore esclude 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|  
|1|Byte finale valido|`_MBC_TRAIL` (2)|Byte finale di caratteri multibyte (0x40 - 0x7E, 0x80 - 0xFC)|  
|1|Byte finale valido|`_MBC_ILLEGAL`<br /><br /> ( -1)|Carattere non valido (qualsiasi valore esclude 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|  
  
## <a name="remarks"></a>Note  
 La funzione `_mbbtype` determina il tipo di byte in un carattere multibyte. Se il valore di `type` è qualsiasi valore eccetto 1, `_mbbtype` testa un byte singolo valido o un byte iniziale di un carattere multibyte. Se il valore di `type` è 1, `_mbbtype` testa un byte finale valido di un carattere multibyte.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). La versione `_mbbtype` di questa funzione usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione `_mbbtype_l` è identica tranne per il fatto che usa in alternativa il parametro delle impostazioni locali che gli viene passato. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Nelle versioni precedenti, `_mbbtype` è stato denominato `chkctype`. Per un nuovo codice, usare in alternativa `_mbbtype`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_mbbtype`|\<mbstring.h>|\<mbctype.h>*|  
|`_mbbtype_l`|\<mbstring.h>|\<mbctype.h>*|  
  
 \* Per le definizioni di costanti manifeste usate come valori restituiti.  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)
