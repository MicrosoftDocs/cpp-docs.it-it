---
title: strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- strxfrm
- _wcsxfrm_l
- _strxfrm_l
- wcsxfrm
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- strxfrm
- _tcsxfrm
- wcsxfrm
dev_langs: C++
helpviewer_keywords:
- strxfrm_l function
- _tcsxfrm function
- _strxfrm_l function
- strxfrm function
- wcsxfrm_l function
- wcsxfrm function
- string comparison [C++], transforming strings
- tcsxfrm function
- strings [C++], comparing locale
- _wcsxfrm_l function
ms.assetid: 6ba8e1f6-4484-49aa-83b8-bc2373187d9e
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bc61e1f1dee03d0604b4a7fab97dc4236c1f705c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="strxfrm-wcsxfrm-strxfrml-wcsxfrml"></a>strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l
Trasformare una stringa basata sulle informazioni specifiche delle impostazioni locali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t strxfrm(  
   char *strDest,  
   const char *strSource,  
   size_t count   
);  
size_t wcsxfrm(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count   
);  
size_t _strxfrm_l(  
   char *strDest,  
   const char *strSource,  
   size_t count,  
   _locale_t locale  
);  
size_t wcsxfrm_l(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `strDest`  
 Stringa di destinazione.  
  
 `strSource`  
 Stringa di origine.  
  
 `count`  
 Numero massimo di caratteri da inserire in `strDest`.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la lunghezza della stringa trasformata, senza contare il carattere di terminazione null. Se il valore restituito è maggiore o uguale a `count`, il contenuto di `strDest` è imprevedibile. Su un errore, ogni funzione imposta `errno` e restituisce `INT_MAX`. Per un carattere non valido, `errno` è impostato su `EILSEQ`.  
  
## <a name="remarks"></a>Note  
 La funzione `strxfrm` trasforma la stringa puntata da `strSource` in un nuovo formato fascicolato che viene archiviato in `strDest`. Non più di `count` caratteri, incluso il carattere null, vengono trasformati e inseriti nella stringa risultante. La trasformazione viene eseguita utilizzando l'impostazione di categoria `LC_COLLATE` delle impostazioni locali. Per altre informazioni su `LC_COLLATE`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). `strxfrm` utilizza le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali; `_strxfrm_l` è identico con la differenza che utilizza le impostazioni locali passate anziché le impostazioni locali correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 Dopo la trasformazione, una chiamata a `strcmp` con le due stringhe trasformate restituisce risultati identici a quelli di una chiamata a `strcoll` applicata alle due stringhe originali. Come con `strcoll` e `stricoll`, `strxfrm` gestisce automaticamente le stringhe di caratteri multibyte in modo appropriato.  
  
 `wcsxfrm` è una versione a caratteri wide di `strxfrm`; gli argomenti stringa di `wcsxfrm` sono puntatori a caratteri wide. Per `wcsxfrm`, dopo la trasformazione di stringa, una chiamata a `wcscmp` con le due stringhe trasformate restituisce risultati identici a quelli di una chiamata a `wcscoll` applicata alle due stringhe originali. In caso contrario, `wcsxfrm` e `strxfrm` si comportano in modo identico. `wcsxfrm` utilizza le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali; `_wcsxfrm_l` utilizza le impostazioni locali passate anziché le impostazioni locali correnti.  
  
 Queste funzioni convalidano i relativi parametri. Se `strSource` è un puntatore Null o `strDest` è un puntatore NULL (a meno che il numero non sia zero) o se `count` è maggiore di `INT_MAX`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `INT_MAX`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsxfrm`|`strxfrm`|`strxfrm`|`wcsxfrm`|  
|`_tcsxfrm_l`|`_strxfrm_l`|`_strxfrm_l`|`_wcsxfrm_l`|  
  
 Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri (set di caratteri ASCII) è lo stesso dell'ordine lessicografico dei caratteri. Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico dei caratteri. Ad esempio, in alcune impostazioni locali europee, il carattere 'a' (valore 0x61) precede il carattere '&\#x00E4;' (valore 0xE4) nel set di caratteri, ma il carattere 'ä' precede lessicograficamente il carattere 'a'.  
  
 Nelle impostazioni locali per le quali l'ordine del set di caratteri e l'ordine lessicografico dei caratteri differiscono, utilizzare `strxfrm` sulle stringhe originali e quindi `strcmp` sulle stringhe risultanti per produrre un confronto di stringhe lessicografico secondo l'impostazione di categoria corrente di `LC_COLLATE` delle impostazioni locali. Pertanto, per confrontare lessicograficamente due stringhe nelle impostazioni locali precedenti, utilizzare `strxfrm` sulle stringhe originali, quindi `strcmp` sulle stringhe risultanti. In alternativa, è possibile utilizzare `strcoll` anziché `strcmp` sulle stringhe originali.  
  
 `strxfrm` è fondamentalmente un wrapper per [LCMapString](http://msdn.microsoft.com/library/windows/desktop/dd318700) con `LCMAP_SORTKEY`.  
  
 Il valore della seguente espressione corrisponde alla dimensione della matrice necessaria per contenere la trasformazione `strxfrm` della stringa di origine:  
  
```  
1 + strxfrm( NULL, string, 0 )  
```  
  
 Nelle impostazioni locali "C", solo `strxfrm` equivale a quanto indicato di seguito:  
  
```  
strncpy( _string1, _string2, _count );  
return( strlen( _string1 ) );  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strxfrm`|\<string.h>|  
|`wcsxfrm`|\<string.h> o \<wchar.h>|  
|`_strxfrm_l`|\<string.h>|  
|`_wcsxfrm_l`|\<string.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)