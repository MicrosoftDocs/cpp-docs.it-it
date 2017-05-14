---
title: _ltoa_s, _ltow_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ltoa_s
- _ltow_s
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
apitype: DLLExport
f1_keywords:
- _ltow_s
- _ltoa_s
- ltoa_s
- ltow_s
dev_langs:
- C++
helpviewer_keywords:
- converting integers
- _ltoa_s function
- ltow_s function
- long integer conversion to string
- converting numbers, to strings
- ltoa_s function
- _ltow_s function
ms.assetid: d7dc61ea-1ccd-412d-b262-555a58647386
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
ms.openlocfilehash: 098bb1dcf673931ab4c0d3682fafcc442835d76f
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="ltoas-ltows"></a>_ltoa_s, _ltow_s
Converte un intero lungo in una stringa. Queste sono versioni di [_ltoa, _ltow](../../c-runtime-library/reference/ltoa-ltow.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _ltoa_s(  
    long value,  
    char *str,  
    size_t sizeOfstr,  
    int radix   
);  
errno_t _ltow_s(  
    long value,  
    wchar_t *str,  
    size_t sizeOfstr,  
    int radix   
);  
template <size_t size>  
errno_t _ltoa_s(  
    long value,  
    char (&str)[size],  
    int radix   
); // C++ only  
template <size_t size>  
errno_t _ltow_s(  
    long value,  
    wchar_t (&str)[size],  
    int radix   
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `value`  
 Numero da convertire.  
  
 `str`  
 Buffer per la stringa risultante.  
  
 `sizeOfstr`  
 Dimensione di `str` in byte per `_ltoa_s` o in parole per `_ltow_s`.  
  
 `radix`  
 Base di `value`.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se la funzione ha avuto esito positivo o un codice di errore.  
  
## <a name="remarks"></a>Note  
 La funzione `_ltoa_s` converte le cifre di `value` in una stringa di caratteri con terminazione Null e archivia il risultato (fino a 33 byte) in `str`. Il `radix` argomento specifica la base di `value`, che deve essere compreso nell'intervallo 2-36. Se `radix` è uguale a 10 e `value` è negativo, il primo carattere della stringa archiviata è il segno meno (-). `_ltow_s` è una versione a caratteri wide di `_ltoa_s`; il secondo argomento di `_ltow_s` è una stringa di caratteri wide.  
  
 Se `str` è un puntatore `NULL` o se `sizeOfstr` è minore o uguale a zero, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostano `errno` su `EINVAL` o se `value` o `str` sono fuori dall'intervallo di un Long Integer, queste funzioni restituiscono -1 e impostano `errno` su `ERANGE`.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_ltot_s`|`_ltoa_s`|`_ltoa_s`|`_ltow_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ltoa_s`|\<stdlib.h>|  
|`_ltow_s`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow](../../c-runtime-library/reference/itoa-i64toa-ui64toa-itow-i64tow-ui64tow.md)   
 [_ultoa, _ultow](../../c-runtime-library/reference/ultoa-ultow.md)   
 [_ultoa_s, _ultow_s](../../c-runtime-library/reference/ultoa-s-ultow-s.md)
