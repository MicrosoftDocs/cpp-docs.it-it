---
title: mbstowcs_s, _mbstowcs_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbstowcs_s_l
- mbstowcs_s
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _mbstowcs_s_l
- mbstowcs_s
dev_langs: C++
helpviewer_keywords:
- _mbstowcs_s_l function
- mbstowcs_s function
- mbstowcs_s_l function
ms.assetid: 2fbda953-6918-498f-b440-3e7b21ed65a4
caps.latest.revision: "31"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 822a7058afd6588be6f953c5c2b89d41ec02c87f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mbstowcss-mbstowcssl"></a>mbstowcs_s, _mbstowcs_s_l
Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente. Versioni di [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t mbstowcs_s(  
   size_t *pReturnValue,  
   wchar_t *wcstr,  
   size_t sizeInWords,  
   const char *mbstr,  
   size_t count   
);  
errno_t _mbstowcs_s_l(  
   size_t *pReturnValue,  
   wchar_t *wcstr,  
   size_t sizeInWords,  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t mbstowcs_s(  
   size_t *pReturnValue,  
   wchar_t (&wcstr)[size],  
   const char *mbstr,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _mbstowcs_s_l(  
   size_t *pReturnValue,  
   wchar_t (&wcstr)[size],  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pReturnValue`  
 Numero di caratteri convertiti.  
  
 [out] `wcstr`  
 Indirizzo del buffer per la stringa di caratteri wide convertita risultante.  
  
 [in] `sizeInWords`  
 Dimensioni del buffer `wcstr` in parole.  
  
 [in]`mbstr`  
 Indirizzo di una sequenza di caratteri multibyte con terminazione Null.  
  
 [in] `count`  
 Numero massimo di caratteri wide da archiviare nel buffer `wcstr`, escluso il carattere Null di terminazione o [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 [in] `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo, un codice di errore in caso di esito negativo.  
  
|Condizione di errore|Valore restituito e `errno`|  
|---------------------|------------------------------|  
|`wcstr` è `NULL` e `sizeInWords` > 0|`EINVAL`|  
|`mbstr` è `NULL`|`EINVAL`|  
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che `count` non sia `_TRUNCATE`; vedere la sezione Note di seguito)|`ERANGE`|  
|`wcstr` non è `NULL` e `sizeInWords` == 0|`EINVAL`|  
  
 Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice errore e imposta `errno` come indicato nella tabella.  
  
## <a name="remarks"></a>Note  
 La funzione `mbstowcs_s` converte una stringa di caratteri multibyte a cui punta `mbstr` in caratteri wide archiviati nel buffer a cui punta `wcstr`. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:  
  
-   Viene rilevato un carattere Null multibyte  
  
-   Viene rilevato un carattere multibyte non valido  
  
-   Il numero di caratteri wide archiviati nel buffer `wcstr` è uguale a `count`.  
  
 La stringa di destinazione termina sempre con Null, anche in caso di errore.  
  
 Se `count` è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), `mbstowcs_s` converte la parte di stringa più ampia possibile che può rientrare nel buffer di destinazione, lasciando però spazio per un carattere di terminazione Null.  
  
 Se `mbstowcs_s` converte correttamente la stringa di origine, inserisce la dimensione in caratteri wide della stringa convertita, incluso il carattere di terminazione Null, in `*pReturnValue`, a condizione che `pReturnValue` non sia `NULL`. Ciò si verifica anche se l'argomento `wcstr` è `NULL` e consente di determinare le dimensioni del buffer richieste. Si noti che se `wcstr` è `NULL`, `count` viene ignorato e `sizeInWords` deve essere 0.  
  
 Se `mbstowcs_s` rileva un carattere multibyte non valido, inserisce 0 in `*pReturnValue`, imposta il buffer di destinazione su una stringa vuota, imposta `errno` su `EILSEQ` e restituisce `EILSEQ`.  
  
 Se le sequenze a cui punta `mbstr` e `wcstr` si sovrappongono, il comportamento di `mbstowcs_s` non è definito.  
  
> [!IMPORTANT]
>  Verificare che `wcstr` e `mbstr` non si sovrappongano e che `count` rispecchi correttamente il numero di caratteri multibyte da convertire.  
  
 `mbstowcs_s` usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. La funzione `_mbstowcs_s_l` è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`mbstowcs_s`|\<stdlib.h>|  
|`_mbstowcs_s_l`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)