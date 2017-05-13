---
title: _snscanf, _snscanf_l, _snwscanf, _snwscanf_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _snwscanf
- _snscanf_l
- _snscanf
- _snwscanf_l
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
- _snscanf
- _snscanf_l
- _snwscanf
- snscanf_l
- snscanf
- _sntscanf_l
- _sntscanf
- _snwscanf_l
- sntscanf_l
- sntscanf
- snwscanf
- snwscanf_l
dev_langs:
- C++
helpviewer_keywords:
- snscanf_l function
- snwscanf function
- _sntscanf_l function
- sntscanf function
- _snwscanf_l function
- _sntscanf function
- _snscanf_l function
- sntscanf_l function
- strings [C++], reading data from
- snscanf function
- snwscanf_l function
- _snwscanf function
- reading data, strings
- strings [C++], reading
- _snscanf function
ms.assetid: da1ac890-f905-4cd7-954b-3c90957b5551
caps.latest.revision: 24
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
ms.openlocfilehash: a9bc5007e94aad8cd8ed65f16ba3f0aaf73faabc
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="snscanf-snscanfl-snwscanf-snwscanfl"></a>_snscanf, _snscanf_l, _snwscanf, _snwscanf_l
Legge i dati formattati di una lunghezza specificata da una stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l](../../c-runtime-library/reference/snscanf-s-snscanf-s-l-snwscanf-s-snwscanf-s-l.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int __cdecl _snscanf(  
   const char * input,  
   size_t length,  
   const char * format,  
   ...  
);  
int __cdecl _snscanf_l(  
   const char * input,  
   size_t length,  
   const char * format,  
   locale_t locale,  
   ...  
);  
int __cdecl _snwscanf(  
   const wchar_t * input,  
   size_t length,  
   const wchar_t * format,  
   ...  
);  
int __cdecl _snwscanf_l(  
   const wchar_t * input,  
   size_t length,  
   const wchar_t * format,  
   locale_t locale,  
   ...  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `input`  
 Stringa di input da esaminare.  
  
 `length`  
 Numero di caratteri da esaminare in `input`.  
  
 `format`  
 Uno o più identificatori di formato.  
  
 `... (optional)`  
 Le variabili che verranno utilizzate per archiviare i valori estratti dalla stringa di input dagli identificatori di formato in `format`.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Entrambe queste funzioni restituiscono il numero di campi che vengono convertiti ed assegnati correttamente; il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito è `EOF` in caso di errore o se viene raggiunta la fine della stringa prima della prima conversione. Per altre informazioni, vedere [sscanf](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md).  
  
 Se `input` o `format` è un puntatore `NULL` o se `length` è minore o uguale a zero, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Questa funzione è come `sscanf` con la differenza che consente di specificare un numero di caratteri fisso da esaminare dalla stringa di input. Per altre informazioni, vedere [sscanf](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md).  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_sntscanf`|`_snscanf`|`_snscanf`|`_snwscanf`|  
|`_sntscanf_l`|`_snscanf_l`|`_snscanf_l`|`_snwscanf_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_snscanf`, `_snscanf_l`|\<stdio.h>|  
|`_snwscanf`, `_snwscanf_l`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_snscanf.c  
// compile with: /W3  
  
#include <stdio.h>  
int main( )  
{  
   char  str1[] = "15 12 14...";  
   wchar_t  str2[] = L"15 12 14...";  
   char  s1[3];  
   wchar_t  s2[3];  
   int   i;  
   float fp;  
  
   i = _snscanf( str1, 6,  "%s %f", s1, &fp); // C4996  
   // Note: _snscanf is deprecated; consider using _snscanf_s instead  
   printf("_snscanf converted %d fields: ", i);  
   printf("%s and %f\n", s1, fp);  
  
   i = _snwscanf( str2, 6,  L"%s %f", s2, &fp); // C4996  
   // Note: _snwscanf is deprecated; consider using _snwscanf_s instead  
   wprintf(L"_snwscanf converted %d fields: ", i);  
   wprintf(L"%s and %f\n", s2, fp);  
}  
```  
  
```Output  
_snscanf converted 2 fields: 15 and 12.000000  
_snwscanf converted 2 fields: 15 and 12.000000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md)
