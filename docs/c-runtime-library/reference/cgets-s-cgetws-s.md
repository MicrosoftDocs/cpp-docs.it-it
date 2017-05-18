---
title: _cgets_s, _cgetws_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _cgetws_s
- _cgets_s
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
- api-ms-win-crt-conio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _cgets_s
- cgets_s
- cgetws_s
- _cgetws_s
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], getting from console
- console, getting strings from
- _cgets_s function
- cget_s function
- _cgetws_s function
- cgetws_s function
ms.assetid: 38b74897-afe6-4dd9-a43f-36a3c0d72c5c
caps.latest.revision: 31
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: cad572e3b312ad29878486c9f40dafc2e96917f9
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="cgetss-cgetwss"></a>_cgets_s, _cgetws_s
Ottiene una stringa di caratteri dalla console. Queste versioni di [_cgets e _cgetws](../../c-runtime-library/cgets-cgetws.md) offrono miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _cgets_s(   
   char *buffer,  
   size_t numberOfElements,  
   size_t *pSizeRead  
);  
errno_t _cgetws_s(  
   wchar_t *buffer  
   size_t numberOfElements,  
   size_t *pSizeRead  
);  
template <size_t size>  
errno_t _cgets_s(   
   char (&buffer)[size],  
   size_t *pSizeRead  
); // C++ only  
template <size_t size>  
errno_t _cgetws_s(  
   wchar_t (&buffer)[size],  
   size_t *pSizeRead  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `buffer`  
 Percorso di archiviazione per i dati.  
  
 [in] `numberOfElements`  
 La dimensione del buffer in caratteri a byte singolo o wide, che è anche il numero massimo di caratteri da leggere.  
  
 [in] `pSizeRead`  
 Numero di caratteri attualmente letti.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito è zero se ha esito positivo; in caso contrario si verifica un errore.  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`buffer`|`numberOfElements`|`pSizeRead`|Valore restituito|Contenuto di `buffer`|  
|--------------|------------------------|-----------------|------------|--------------------------|  
|`NULL`|any|any|`EINVAL`|n/d|  
|non `NULL`|zero|qualsiasi|`EINVAL`|non modificato|  
|non `NULL`|qualsiasi|`NULL`|`EINVAL`|stringa di lunghezza zero|  
  
## <a name="remarks"></a>Note  
 `_cgets_s` e `_cgetws_s` leggono una stringa dalla console e copiano la stringa (con un carattere di terminazione null) in `buffer`. `_cgetws_s` è la versione a caratteri wide della funzione; a parte la dimensione di caratteri, il comportamento di queste due funzioni è identico. La dimensione massima della stringa da leggere viene passata come parametro `numberOfElements`. Questa dimensione deve includere un carattere aggiuntivo per la terminazione null. Il numero effettivo dei caratteri letti viene inserito in `pSizeRead`.  
  
 Se si verifica un errore durante l'operazione o nella convalida dei parametri, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e viene restituito `EINVAL`.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando quindi la necessità di specificare un argomento di dimensione, e possono sostituire automaticamente le funzioni precedenti, meno sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_cgetts_s`|`_cgets_s`|`_cgets_s`|`_cgetws_s`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_cgets_s`|\<conio.h>|  
|`_cgetws_s`|\<conio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O su console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [_getch, _getwch](../../c-runtime-library/reference/getch-getwch.md)
