---
title: _strdec, _wcsdec, _mbsdec, _mbsdec_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wcsdec
- _strdec
- _mbsdec
- _mbsdec_l
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
- _strdec
- mbsdec_l
- strdec
- _mbsdec
- _mbsdec_l
- mbsdec
- wcsdec
- _wcsdec
dev_langs: C++
helpviewer_keywords:
- mbsdec_l function
- mbsdec function
- tcsdec function
- _tcsdec function
- _strdec function
- _wcsdec function
- _mbsdec_l function
- strdec function
- wcsdec function
- _mbsdec function
ms.assetid: ae37c223-800f-48a9-ae8e-38c8d20af2dd
caps.latest.revision: "24"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4df8de18c2256b4e9034b4b0c80f7c4edf85fe91
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strdec-wcsdec-mbsdec-mbsdecl"></a>_strdec, _wcsdec, _mbsdec, _mbsdec_l
Sposta un puntatore di stringa indietro di un carattere.  
  
> [!IMPORTANT]
>  `mbsdec` e `mbsdec_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned char *_strdec(  
   const unsigned char *start,  
   const unsigned char *current   
);  
unsigned wchar_t *_wcsdec(  
   const unsigned wchar_t *start,  
   const unsigned wchar_t *current   
);  
unsigned char *_mbsdec(  
   const unsigned char *start,  
   const unsigned char *current   
);  
unsigned char *_mbsdec_l(  
   const unsigned char *start,  
   const unsigned char *current,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `start`  
 Puntatore a qualsiasi carattere (o per `_mbsdec` e `_mbsdec_l`, il primo byte di un carattere multibyte) nella stringa di origine. `start` deve precedere `current` nella stringa di origine.  
  
 `current`  
 Puntatore a qualsiasi carattere (o per `_mbsdec` e `_mbsdec_l`, il primo byte di un carattere multibyte) nella stringa di origine. `current` deve seguire `start` nella stringa di origine.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `_mbsdec`, `_mbsdec_l`, `_strdec`, e `_wcsdec` ogni funzione restituisce un puntatore al carattere che precede immediatamente `current`; `_mbsdec` restituisce `NULL` se il valore di `start` è maggiore o uguale a quella del `current`. `_tcsdec` viene mappata a una di queste funzioni e il relativo valore restituito dipende dal mapping.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_mbsdec` e `_mbsdec_l` restituiscono un puntatore al primo byte del carattere multibyte che precede immediatamente `current` nella stringa contenente `start`.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  `_mbsdec` riconosce le sequenze di caratteri multibyte in base alle impostazioni locali in uso, mentre `_mbsdec_l` è identica ma usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `start` o `current` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
> [!IMPORTANT]
>  Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer. I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsdec`|`_strdec`|`_mbsdec`|`_wcsdec`|  
  
 `_strdec` e `_wcsdec` sono le versioni a caratteri a byte singolo e caratteri wide di `_mbsdec` e `_mbsdec_l`. `_strdec` e `_wcsdec` sono forniti solo per questo mapping e non devono essere usate in altre circostanze.  
  
 Per altre informazioni, vedere [Uso dei mapping di testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping di testo generico](../../c-runtime-library/generic-text-mappings.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_mbsdec`|\<mbstring.h>|\<mbctype.h>|  
|`_mbsdec_l`|\<mbstring.h>|\<mbctype.h>|  
|`_strdec`|\<tchar.h>||  
|`_wcsdec`|\<tchar.h>||  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra un uso di `_tcsdec`.  
  
```  
  
      #include <iostream>  
#include <tchar.h>  
using namespace std;  
  
int main()  
{  
   const TCHAR *str = _T("12345");  
   cout << "str: " << str << endl;  
  
   const TCHAR *str2;  
   str2 = str + 2;  
   cout << "str2: " << str2 << endl;  
  
   TCHAR *answer;  
   answer = _tcsdec( str, str2 );  
   cout << "answer: " << answer << endl;  
  
   return (0);   
}  
  
```  
  
 L'esempio seguente illustra un uso di `_mbsdec`.  
  
```  
#include <iostream>  
#include <mbstring.h>  
using namespace std;  
  
int main()   
{   
   char *str = "12345";  
   cout << "str: " << str << endl;  
  
   char *str2;  
   str2 = str + 2;   
   cout << "str2: " << str2 << endl;  
  
   unsigned char *answer;  
   answer = _mbsdec( reinterpret_cast<unsigned char *>( str ), reinterpret_cast<unsigned char *>( str2 ));  
  
   cout << "answer: " << answer << endl;  
  
   return (0);   
}  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [_strinc, _wcsinc, _mbsinc, _mbsinc_l](../../c-runtime-library/reference/strinc-wcsinc-mbsinc-mbsinc-l.md)   
 [_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](../../c-runtime-library/reference/strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)   
 [_strninc, _wcsninc, _mbsninc, _mbsninc_l](../../c-runtime-library/reference/strninc-wcsninc-mbsninc-mbsninc-l.md)