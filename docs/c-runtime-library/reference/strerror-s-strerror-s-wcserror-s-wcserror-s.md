---
title: "strerror_s, _strerror_s, _wcserror_s, __wcserror_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__wcserror_s"
  - "_strerror_s"
  - "_wcserror_s"
  - "strerror_s"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wcserror_s"
  - "__wcserror_s"
  - "_tcserror_s"
  - "_wcserror_s"
  - "tcserror_s"
  - "strerror_s"
  - "_strerror_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__wcserror_s (funzione)"
  - "_strerror_s (funzione)"
  - "_tcserror_s (funzione)"
  - "_wcserror_s (funzione)"
  - "messaggi di errore, recupero"
  - "messaggi di errore, stampa"
  - "stampa di messaggi di errore"
  - "strerror_s (funzione)"
  - "tcserror_s (funzione)"
  - "wcserror_s (funzione)"
ms.assetid: 9e5b15a0-efe1-4586-b7e3-e1d7c31a03d6
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# strerror_s, _strerror_s, _wcserror_s, __wcserror_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottenere un messaggio di errore dal sistema \(`strerror_s`, `_wcserror_s`, o stampa un messaggio di errore fornito dall'utente \(`_strerror_s`, `__wcserror_s`\).  Queste sono versioni di [strerror, \_strerror, \_wcserror, \_\_wcserror](../../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t strerror_s(  
   char *buffer,  
   size_t numberOfElements,  
   int errnum   
);  
errno_t _strerror_s(  
   char *buffer,  
   size_t numberOfElements,  
   const char *strErrMsg   
);  
errno_t _wcserror_s(  
   wchar_t *buffer,  
   size_t numberOfElements,  
   int errnum   
);  
errno_t __wcserror_s(  
   wchar_t *buffer,  
   size_t numberOfElements,  
   const wchar_t *strErrMsg   
);  
template <size_t size>  
errno_t strerror_s(  
   char (&buffer)[size],  
   int errnum   
); // C++ only  
template <size_t size>  
errno_t _strerror_s(  
   char (&buffer)[size],  
   const char *strErrMsg   
); // C++ only  
template <size_t size>  
errno_t _wcserror_s(  
   wchar_t (&buffer)[size],  
   int errnum   
); // C++ only  
template <size_t size>  
errno_t __wcserror_s(  
   wchar_t (&buffer)[size],  
   const wchar_t *strErrMsg   
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Buffer per contenere la stringa di errore.  
  
 `numberOfElements`  
 Dimensione del buffer.  
  
 `errnum`  
 Un codice di errore.  
  
 `strErrMsg`  
 Messaggi forniti dall'utente  
  
## Valore restituito  
 Zero se ha esito positivo, un codice di errore in caso di errore.  
  
### Condizioni di errore  
  
|`buffer`|`numberOfElements`|`strErrMsg`|Contenuto di `buffer`.|  
|--------------|------------------------|-----------------|----------------------------|  
|`NULL`|any|any|n\/d|  
|any|0|any|non modificato|  
  
## Note  
 La funzione `strerror_s` esegue il mapping di `errnum` in una stringa contenente il messaggio di errore, restituendo la stringa nel `buffer`.  `_strerror_s` non accetta il numero dell'errore; utilizza il valore corrente di `errno` per determinare il messaggio appropriato.  Né `strerror_s` né `_strerror_s` visualizza effettivamente il messaggio: Per questo, diviene necessario chiamare una funzione di output come [fprintf](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md):  
  
```  
if (( _access( "datafile",2 )) == -1 )  
{  
   _strerror_s(buffer, 80);  
   fprintf( stderr, buffer );  
}  
```  
  
 Se `strErrMsg` è `NULL`, `_strerror_s` restituisce una stringa nel `buffer` contenente il messaggio di errore del sistema per l'ultima chiamata della libreria che ha generato un errore.  La stringa del messaggio di errore termina con il carattere di nuova riga \("\\n"\).  Se `strErrMsg` non è uguale a `NULL`, quindi `_strerror_s` restituisce una stringa nel `buffer` che contiene \(secondo questo ordine\) il messaggio della stringa, i due punti, uno spazio, il messaggio di errore del sistema per l'ultima chiamata della libreria che ha generato un errore e il carattere di nuova riga.  Il messaggio stringa può essere, al più di 94 caratteri.  
  
 Queste funzioni troncano il messaggio di errore se la lunghezza supera `numberOfElements` \-1.  La stringa risultante nel `buffer` termina sempre con null.  
  
 Il numero di errore effettivo per `_strerror_s` viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  I messaggi di errore del sistema sono accessibili tramite la variabile [\_sys\_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), che è una matrice di messaggi ordinata in base al numero di errore.  `_strerror_s` accede al messaggio di errore appropriato tramite il valore `errno` come indice della variabile `_sys_errlist`.  Il valore della variabile [\_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) è definito come numero massimo di elementi della matrice `_sys_errlist`.  Per fornire risultati accurati, chiamare `_strerror_s` subito dopo il ritorno di un'errore da parte di una routine della libreria.  In caso contrario, le chiamate successive a `strerror_s` o `_strerror_s` possono sovrascrivere il valore `errno`.  
  
 `_wcserror_s` e `__wcserror_s`sono versioni a caratteri estesi rispettivamente di `strerror_s`e `_strerror_s`.  
  
 Queste funzioni convalidano i parametri.  Se il buffer è `NULL` o se il parametro di dimensione è 0, il viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
 `_strerror_s, _wcserror_s,` e `__wcserror_s`  non fanno parte della definizione ANSI ma sono invece estensioni Microsoft.  Non utilizzarli nel caso in cui si desidera avere la portabilità; utilizzare invece, per la compatibilità ANSI  `strerror_s` .  
  
 In C\+\+, l'utilizzo di queste funzioni viene semplificato da overload del modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 La versione di debug di queste funzioni per prima cosa riempiono il buffer con il valore 0xFD.  Per disattivare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcserror_s`|`strerror_s`|`strerror_s`|`_wcserror_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strerror_s`, `_strerror_s`|\<string.h\>|  
|`_wcserror_s`, `__wcserror_s`|\<string.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [perror](../../c-runtime-library/reference/perror-wperror.md).  
  
## Equivalente .NET Framework  
 [System::Exception::Message](https://msdn.microsoft.com/en-us/library/system.exception.message.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [perror, \_wperror](../../c-runtime-library/reference/perror-wperror.md)