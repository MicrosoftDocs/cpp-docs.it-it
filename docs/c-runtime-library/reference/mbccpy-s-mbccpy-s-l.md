---
title: _mbccpy_s, _mbccpy_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbccpy_s
- _mbccpy_s_l
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
- _mbccpy_s_l
- mbccpy_s_l
- mbccpy_s
- _mbccpy_s
dev_langs: C++
helpviewer_keywords:
- tccpy_s_l function
- _tccpy_s function
- _mbccpy_s function
- mbccpy_s function
- tccpy_s function
- mbccpy_s_l function
- _tccpy_s_l function
- _mbccpy_s_l function
ms.assetid: b6e965fa-53c1-4ec3-85ef-a1c4b4f2b2da
caps.latest.revision: "30"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 04c9091214928ecf7122868992974a0b0af9d3c6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mbccpys-mbccpysl"></a>_mbccpy_s, _mbccpy_s_l
Copia un carattere multibyte da una stringa in un'altra stringa. Queste versioni di [_mbccpy, _mbccpy_l](../../c-runtime-library/reference/mbccpy-mbccpy-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _mbccpy_s(  
   unsigned char *dest,  
   size_t buffSizeInBytes,  
   int * pCopied,  
   const unsigned char *src   
);  
errno_t _mbccpy_s_l(  
   unsigned char *dest,  
   size_t buffSizeInBytes,  
   int * pCopied,  
   const unsigned char *src,  
   locale_t locale  
);  
template <size_t size>  
errno_t _mbccpy_s(  
   unsigned char (&dest)[size],  
   int * pCopied,  
   const unsigned char *src   
); // C++ only  
template <size_t size>  
errno_t _mbccpy_s_l(  
   unsigned char (&dest)[size],  
   int * pCopied,  
   const unsigned char *src,  
   locale_t locale  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `dest`  
 Destinazione della copia.  
  
 [in] `buffSizeInBytes`  
 Dimensioni del buffer di destinazione.  
  
 [out] `pCopied`  
 Riempito con il numero di byte copiati (1 o 2 se ha esito positivo). Passare `NULL` se il numero non è importante.  
  
 [in] `src`  
 Caratteri multibyte da copiare.  
  
 [in] `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se con esito positivo; un codice di errore in caso di errore. Se `src` o `dest` è `NULL` oppure se l'operazione comporta la copia di più di `buffSizeinBytes` byte in `dest`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni restituiranno `EINVAL` e `errno` viene impostato su `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `_mbccpy_s` copia un carattere multibyte da `src` a `dest`. Se `src` non punta al byte di apertura di un carattere multibyte in base a quanto determinato da una chiamata implicita a [_ismbblead](../../c-runtime-library/reference/ismbblead-ismbblead-l.md), viene copiato il singolo byte a cui punta `src`. Se `src` punta a un byte di apertura, ma il byte successivo è 0 e pertanto non è valido, viene copiato 0 in `dest`, `errno` viene impostato su `EILSEQ` e la funzione restituisce `EILSEQ`.  
  
 `_mbccpy_s` non aggiunge un carattere di terminazione Null. Tuttavia, se `src` punta a un carattere Null, tale valore Null viene copiato in `dest` (questa è solo una normale copia a byte singolo).  
  
 Il valore in `pCopied` viene con il numero di byte copiati. I valori possibili sono 1 e 2 se l'operazione ha esito positivo. Se viene passato `NULL`, questo parametro viene ignorato.  
  
|`src`|copia in `dest`|`pCopied`|Valore restituito|  
|-----------|----------------------|---------------|------------------|  
|byte non di apertura|byte non di apertura|1|0|  
|0|0|1|0|  
|byte di apertura non seguito da 0|byte di apertura non seguito da 0|2|0|  
|byte di apertura seguito da 0|0|1|`EILSEQ`|  
  
 Si noti che la seconda riga è semplicemente un caso speciale della prima. Si noti inoltre che la tabella presuppone `buffSizeInBytes` >= `pCopied`.  
  
 `_mbccpy_s` usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. La funzione `_mbccpy_s_l` è identica a `_mbccpy_s`, ma `_mbccpy_s_l` usa le impostazioni locali passate per qualsiasi comportamento dipendente dalle impostazioni locali.  
  
 In C++ l'uso di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tccpy_s`|Esegue il mapping a una macro o a una funzione inline.|`_mbccpy_s`|Esegue il mapping a una macro o a una funzione inline.|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mbccpy_s`|\<mbstring.h>|  
|`_mbccpy_s_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)