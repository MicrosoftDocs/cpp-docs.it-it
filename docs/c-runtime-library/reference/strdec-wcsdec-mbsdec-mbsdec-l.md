---
description: 'Altre informazioni su: _strdec, _wcsdec, _mbsdec, _mbsdec_l'
title: _strdec, _wcsdec, _mbsdec, _mbsdec_l
ms.date: 4/2/2020
api_name:
- _wcsdec
- _strdec
- _mbsdec
- _mbsdec_l
- _o__mbsdec
- _o__mbsdec_l
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _strdec
- mbsdec_l
- strdec
- _mbsdec
- _mbsdec_l
- mbsdec
- wcsdec
- _wcsdec
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
ms.openlocfilehash: 85001258baea9e7c6509bfdd33a74f9a0eccd80f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340554"
---
# <a name="_strdec-_wcsdec-_mbsdec-_mbsdec_l"></a>_strdec, _wcsdec, _mbsdec, _mbsdec_l

Sposta un puntatore di stringa indietro di un carattere.

> [!IMPORTANT]
> **mbsdec** e **mbsdec_l** non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*start*<br/>
Puntatore a qualsiasi carattere (o per **_mbsdec** e **_mbsdec_l**, il primo byte di un carattere multibyte) nella stringa di origine. *Start* deve precedere *Current* nella stringa di origine.

*corrente*<br/>
Puntatore a qualsiasi carattere (o per **_mbsdec** e **_mbsdec_l**, il primo byte di un carattere multibyte) nella stringa di origine. l' *oggetto corrente* deve seguire l' *inizio* nella stringa di origine.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_mbsdec**, **_mbsdec_l**, **_strdec** e **_wcsdec** restituiscono ciascuno un puntatore al carattere che precede immediatamente l' *oggetto corrente*; **_mbsdec** restituisce **null** se il valore di *Start* è maggiore o uguale a quello dell' *oggetto corrente*. **_tcsdec** esegue il mapping a una di queste funzioni e il valore restituito dipende dal mapping.

## <a name="remarks"></a>Commenti

Le funzioni **_mbsdec** e **_mbsdec_l** restituiscono un puntatore al primo byte del carattere multibyte che precede immediatamente *Current* nella stringa che contiene *Start*.

Il valore di output è influenzato dall'impostazione dell'impostazione di categoria **LC_CTYPE** delle impostazioni locali; Per ulteriori informazioni [, vedere setlocale _wsetlocale](setlocale-wsetlocale.md) .  **_mbsdec** riconosce le sequenze di caratteri multibyte in base alle impostazioni locali attualmente in uso, mentre **_mbsdec_l** è identico, ad eccezione del fatto che usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *Start* o *Current* è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **EINVAL** e imposta **errno** su **EINVAL**.

> [!IMPORTANT]
> Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer. I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsdec**|**_strdec**|**_mbsdec**|**_wcsdec**|

**_strdec** e **_wcsdec** sono le versioni a caratteri a byte singolo e a caratteri wide di **_mbsdec** e **_mbsdec_l**. **_strdec** e **_wcsdec** sono forniti solo per questo mapping e non devono essere utilizzati in caso contrario.

Per altre informazioni, vedere [Uso dei mapping di testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping di testo generico](../../c-runtime-library/generic-text-mappings.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbsdec**|\<mbstring.h>|\<mbctype.h>|
|**_mbsdec_l**|\<mbstring.h>|\<mbctype.h>|
|**_strdec**|\<tchar.h>||
|**_wcsdec**|\<tchar.h>||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo di **_tcsdec**.

```cpp
// crt_tcsdec.cpp
// Compile by using: cl /EHsc crt_tcsdec.cpp
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

Nell'esempio seguente viene illustrato l'utilizzo di **_mbsdec**.

```cpp
// crt_mbsdec.cpp
// Compile by using: cl /EHsc crt_mbsdec.c
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

## <a name="see-also"></a>Vedi anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strinc, _wcsinc, _mbsinc, _mbsinc_l](strinc-wcsinc-mbsinc-mbsinc-l.md)<br/>
[_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)<br/>
[_strninc, _wcsninc, _mbsninc, _mbsninc_l](strninc-wcsninc-mbsninc-mbsninc-l.md)<br/>
