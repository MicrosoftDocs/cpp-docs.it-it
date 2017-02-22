---
title: "_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_snwscanf_s_l"
  - "_snwscanf_s"
  - "_snscanf_s"
  - "_snscanf_s_l"
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
apitype: "DLLExport"
f1_keywords: 
  - "_sntscanf_s"
  - "snscanf_s"
  - "_snwscanf_s_l"
  - "sntscanf_s_l"
  - "snwscanf_s_l"
  - "snwscanf_s"
  - "_snscanf_s"
  - "_snwscanf_s"
  - "snscanf_s_l"
  - "_sntscanf_s_l"
  - "_snscanf_s_l"
  - "sntscanf_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_snscanf_s (funzione)"
  - "_snscanf_s_l (funzione)"
  - "_sntscanf_s (funzione)"
  - "_sntscanf_s_l (funzione)"
  - "_snwscanf_s (funzione)"
  - "_snwscanf_s_l (funzione)"
  - "lettura di dati, stringhe"
  - "snscanf_s (funzione)"
  - "snscanf_s_l (funzione)"
  - "sntscanf_s (funzione)"
  - "sntscanf_s_l (funzione)"
  - "snwscanf_s (funzione)"
  - "snwscanf_s_l (funzione)"
  - "stringhe [C++], lettura"
  - "stringhe [C++], lettura di dati"
ms.assetid: 72356653-7362-461a-af73-597b9c0a8094
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# _snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattati di una lunghezza specificata da una stringa.  Queste sono versioni di [\_snscanf, \_snscanf\_l, \_snwscanf, \_snwscanf\_l](../../c-runtime-library/reference/snscanf-snscanf-l-snwscanf-snwscanf-l.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int __cdecl _snscanf_s(  
   const char * input,  
   size_t length,  
   const char * format,  
   ...  
);  
int __cdecl _snscanf_s_l(  
   const char * input,  
   size_t length,  
   const char * format,  
   locale_t locale,  
   ...  
);  
int __cdecl _snwscanf_s(  
   const wchar_t * input,  
   size_t length,  
   const wchar_t * format,  
   ...  
);  
int __cdecl _snwscanf_s_l(  
   const wchar_t * input,  
   size_t length,  
   const wchar_t * format,  
   locale_t locale,  
   …  
);  
```  
  
#### Parametri  
 `input`  
 Stringa di input da esaminare.  
  
 `length`  
 Numero di caratteri da esaminare in `input`.  
  
 `format`  
 Uno o più identificatori di formato.  
  
 `... (optional)`  
 Le variabili da utilizzare per archiviare i valori estratti dalla stringa di input dagli identificatori di formato in `format`.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Entrambe queste funzioni restituiscono il numero di campi che vengono convertiti ed assegnati correttamente; il valore di ritorno non include i campi che sono stati letti ma non assegnati.  Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  Il valore restituito è `EOF` per un errore, o se la fine della stringa viene raggiunta prima della prima conversione.  Per ulteriori informazioni, vedere [sscanf\_s, \_sscanf\_s\_l, swscanf\_s, \_swscanf\_s\_l](../../c-runtime-library/reference/sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md).  
  
 Se `input` o `format` è un `NULL` puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Questa funzione è come `sscanf_s` con la differenza che consente di specificare un numero di caratteri fisso per esaminare la stringa di input.  Per ulteriori informazioni, vedere [sscanf\_s, \_sscanf\_s\_l, swscanf\_s, \_swscanf\_s\_l](../../c-runtime-library/reference/sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md).  
  
 Il parametro di dimensione del buffer è obbligatorio con i caratteri del campo del tipo `c`, `C`, `s`, `S` e `[`.  Per ulteriori informazioni, vedere [Caratteri di campo di tipo per scanf](../../c-runtime-library/scanf-type-field-characters.md).  
  
> [!NOTE]
>  Il parametro di dimensione è di tipo `unsigned`, non `size_t`.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_sntscanf_s`|`_snscanf_s`|`_snscanf_s`|`_snwscanf_s`|  
|`_sntscanf_s_l`|`_snscanf_s_l`|`_snscanf_s_l`|`_snwscanf_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_snscanf_s`, \_`snscanf_s_l`|\<stdio.h\>|  
|`_snwscanf_s`, `_snwscanf_s_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_snscanf_s.c  
// This example scans a string of   
// numbers, using both the character  
// and wide character secure versions  
// of the snscanf function.  
  
#include <stdio.h>  
  
int main( )  
{  
    char        str1[] = "15 12 14...";  
    wchar_t     str2[] = L"15 12 14...";  
    char        s1[3];  
    wchar_t     s2[3];  
    int         i;  
    float       fp;  
  
    i = _snscanf_s( str1, 6,  "%s %f", s1, 3, &fp);  
    printf_s("_snscanf_s converted %d fields: ", i);  
    printf_s("%s and %f\n", s1, fp);  
  
    i = _snwscanf_s( str2, 6,  L"%s %f", s2, 3, &fp);  
    wprintf_s(L"_snwscanf_s converted %d fields: ", i);  
    wprintf_s(L"%s and %f\n", s2, fp);  
}  
```  
  
  **\_snscanf\_s ha convertito 2 campi: 15 e 12,000000**  
**\_snwscanf\_s ha convertito 2 campi: 15 e 12,000000**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md)