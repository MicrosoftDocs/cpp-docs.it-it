---
title: "_mbccpy_s, _mbccpy_s_l | Microsoft Docs"
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
  - "_mbccpy_s"
  - "_mbccpy_s_l"
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
  - "_mbccpy_s_l"
  - "mbccpy_s_l"
  - "mbccpy_s"
  - "_mbccpy_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbccpy_s (funzione)"
  - "_mbccpy_s_l (funzione)"
  - "_tccpy_s (funzione)"
  - "_tccpy_s_l (funzione)"
  - "mbccpy_s (funzione)"
  - "mbccpy_s_l (funzione)"
  - "tccpy_s (funzione)"
  - "tccpy_s_l (funzione)"
ms.assetid: b6e965fa-53c1-4ec3-85ef-a1c4b4f2b2da
caps.latest.revision: 30
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mbccpy_s, _mbccpy_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia di un carattere multibyte da una stringa ad un'altra stringa.  Queste versioni di [\_mbccpy, \_mbccpy\_l](../../c-runtime-library/reference/mbccpy-mbccpy-l.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
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
  
#### Parametri  
 \[out\] `dest`  
 Copiare la destinazione.  
  
 \[in\] `buffSizeInBytes`  
 Dimensione del buffer di destinazione.  
  
 \[out\] `pCopied`  
 Riempito con il numero di byte copiati \(1 o 2 in caso di esito positivo\).  Passare `NULL` se non interessa il numero.  
  
 \[in\] `src`  
 Caratteri multibyte da copiare.  
  
 \[in\] `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Zero se ha esito positivo; un codice di errore in caso di errore.  Se `src` o `dest` è `NULL`, o se più byte `buffSizeinBytes` sono stati copiati in `dest`, quindi il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, le funzioni restituiscono `EINVAL` e `errno` è impostato su `EINVAL`.  
  
## Note  
 La funzione `_mbccpy_s` copia un carattere multibyte da `src` a `dest`.  Se `src` non indica il byte di apertura di un carattere multibyte come stabilito da una chiamata implicita a [\_ismbblead](../../c-runtime-library/reference/ismbblead-ismbblead-l.md), allora il singolo byte a cui `src` punta viene copiato.  Se `src` punta a un byte di apertura ma il byte successivo è 0 e pertanto non valido, quindi 0 viene copiato in `dest`, `errno` è impostato su `EILSEQ` e a funzione restituisce `EILSEQ`.  
  
 `_mbccpy_s` non aggiunge un terminatore null; tuttavia, se `src` punta a un carattere null, allora null viene copiato in `dest` \(si tratta di una normale copia a byte singolo\).  
  
 Il valore in `pCopied` viene riempito con il numero di byte copiato.  I valori possibili sono 1 e 2 se l'operazione ha esito positivo.  Se viene passato `NULL`, questo parametro viene ignorato.  
  
|`src`|copiato in `dest`|`pCopied`|Valore restituito|  
|-----------|-----------------------|---------------|-----------------------|  
|byte\-non\-iniziale|byte\-non\-iniziale|1|0|  
|0|0|1|0|  
|byte iniziale seguito da non\-0|byte iniziale seguito da non\-0|2|0|  
|byte iniziale seguito da 0|0|1|`EILSEQ`|  
  
 Si noti che la seconda riga è semplicemente un caso speciale della prima.  Si noti inoltre che la tabella presuppone che `buffSizeInBytes` \>\= `pCopied`.  
  
 `_mbccpy_s` utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali.  `_mbccpy_s_l` è identico a `_mbccpy_s` se non che `_mbccpy_s_l` utilizza le impostazioni locali passate per qualsiasi comportamento dipendente dalle impostazioni locali.  
  
 In C\+\+, l'utilizzo di queste funzioni viene semplificato da overload del modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tccpy_s`|Viene eseguito il mapping della macro o della funzione inline.|`_mbccpy_s`|Viene eseguito il mapping della macro o della funzione inline.|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbccpy_s`|\<mbstring.h\>|  
|`_mbccpy_s_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)