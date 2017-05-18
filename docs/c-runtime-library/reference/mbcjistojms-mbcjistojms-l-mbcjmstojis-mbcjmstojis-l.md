---
title: _mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbcjistojms
- _mbcjmstojis
- _mbcjistojms_l
- _mbcjmstojis_l
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
- mbcjistojms
- _mbcjistojms
- _mbcjistojms_l
- _mbcjmstojis_l
- _mbcjmstojis
- mbcjmstojis_l
- mbcjistojms_l
- mbcjmstojis
dev_langs:
- C++
helpviewer_keywords:
- _mbcjmstojis_l function
- _mbcjistojms function
- mbcjmstojis function
- _mbcjistojms_l function
- _mbcjmstojis function
- mbcjistojms function
- mbcjmstojis_l function
- mbcjistojms_l function
ms.assetid: dece5127-b337-40a4-aa10-53320a2c9432
caps.latest.revision: 20
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 514e00148ec34a14a7b229d5b7e226d8be66636d
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="mbcjistojms-mbcjistojmsl-mbcjmstojis-mbcjmstojisl"></a>_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l
Esegue la conversione tra caratteri JIS (Japan Industry Standard) e caratteri JMS (Japan Microsoft).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned int _mbcjistojms(  
   unsigned int c   
);  
unsigned int _mbcjistojms_l(  
   unsigned int c,  
   _locale_t locale  
);  
unsigned int _mbcjmstojis(  
   unsigned int c   
);  
unsigned int _mbcjmstojis_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da convertire.  
  
 `local`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Nelle impostazioni locali giapponesi queste funzioni restituiscono un carattere convertito o restituiscono 0 se non è possibile alcuna conversione. Nelle impostazioni locali non giapponesi queste funzioni restituiscono il carattere passato.  
  
## <a name="remarks"></a>Note  
 La funzione `_mbcjistojms` converte un carattere JIS (Japan Industry Standard) in un Microsoft Kanji (Shift-JIS). Il carattere viene convertito solo se i byte di anticipo e di traccia sono compresi nell'intervallo 0x21 - 0x7E. Se il byte di apertura o di chiusura è esterno all'intervallo, `errno` viene impostato su `EILSEQ`. Per altre informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Il `_mbcjmstojis` funzione converte un carattere Shift JIS in un carattere JIS. Il carattere viene convertito solo se il byte di apertura è compreso nell'intervallo tra 0x81-0x9F o 0xE0 - 0xFC e il byte di chiusura è compreso nell'intervallo 0x40-0x7E o 0x80 - 0xFC. Si noti che alcuni punti di codice in tale intervallo non hanno un carattere assegnato e quindi non possono essere convertiti.  
  
 Il valore `c` deve essere un valore a 16 bit i cui 8 bit superiori rappresentano il byte di apertura del carattere da convertire e gli 8 bit inferiori rappresentano il byte di chiusura.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso `_l` sono identiche ma usano il parametro passato relativo alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 Nelle versioni precedenti, `_mbcjistojms` e `_mbcjmstojis` chiamati `jistojms` e `jmstojis`, rispettivamente. `_mbcjistojms`, `_mbcjistojms_l`, `_mbcjmstojis` e `_mbcjmstojis_l` deve pertanto essere utilizzato.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mbcjistojms`|\<mbstring.h>|  
|`_mbcjistojms_l`|\<mbstring.h>|  
|`_mbcjmstojis`|\<mbstring.h>|  
|`_mbcjmstojis_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)
