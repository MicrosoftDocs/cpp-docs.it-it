)---title: "strdec, wcsdec, mbsdec, mbsdec_l | Microsoft Docs"ms. Custom:" "ms. date:" 11/04/2016"ms. Technology: ms. topic ["cpp-standard-librerie"]:"riferimento"apiname: ["wcsdec","strdec","mbsdec","mbsdec_l"] apilocation: ["MSVCRT. dll""msvcr80.dll","msvcr90.dll","msvcr100.dll" "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase. dll", "api-ms-win-crt-multibyte-l1-1-0.dll"] apitype: "DLLExport" f1_keywords: ["strdec", "mbsdec_l", "strdec", "mbsdec", "mbsdec_l", "mbsdec", "wcsdec", "wcsdec"] dev_langs: ["C++"] helpviewer_keywords: ["mbsdec_l (funzione)", "mbsdec function", "tcsdec (funzione)", "tcsdec function", "strdec function", "wcsdec (funzione)", "mbsdec_l function", "strdec (funzione)", " wcsdec (funzione)","mbsdec (funzione)"] ms. AssetID: ae37c223-800f-48a9-ae8e-38c8d20af2dd author:"msft corob"ms. Author:"corob"ms. Workload: ["cplusplus"]
---
# <a name="strdec-wcsdec-mbsdec-mbsdecl"></a>_strdec, _wcsdec, _mbsdec, _mbsdec_l

Sposta un puntatore di stringa indietro di un carattere.

> [!IMPORTANT]
> **mbsdec** e **mbsdec_l** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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
Puntatore a qualsiasi carattere (o per **mbsdec** e **mbsdec_l**, il primo byte di qualsiasi carattere multibyte) nella stringa di origine. *avviare* deve precedere *corrente* nella stringa di origine.

*current*<br/>
Puntatore a qualsiasi carattere (o per **mbsdec** e **mbsdec_l**, il primo byte di qualsiasi carattere multibyte) nella stringa di origine. *correnti* deve seguire *avviare* nella stringa di origine.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**mbsdec**, **mbsdec_l**, **strdec**, e **wcsdec** restituiscono ognuna un puntatore al carattere che precede immediatamente *corrente*; **mbsdec** restituisce **NULL** se il valore di *avviare* è maggiore o uguale a quello del *corrente*. **tcsdec** viene mappata a una di queste funzioni e il relativo valore restituito dipende dal mapping.

## <a name="remarks"></a>Note

Il **mbsdec** e **mbsdec_l** funzioni restituiscono un puntatore al primo byte del carattere multibyte che precede immediatamente *corrente* nella stringa che contiene *avviare*.

Il valore di output è interessato dall'impostazione della **LC_CTYPE** impostazione di categoria delle impostazioni locali; vedere [setlocale, wsetlocale](setlocale-wsetlocale.md) per altre informazioni.  **mbsdec** riconosce le sequenze di caratteri multibyte in base alle impostazioni locali che è attualmente in uso, mentre **mbsdec_l** è identica ma usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *avviare* oppure *corrente* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto nella [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **EINVAL** e imposta **errno** al **EINVAL**.

> [!IMPORTANT]
> Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer. I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tcsdec**|**_strdec**|**_mbsdec**|**_wcsdec**|

**strdec** e **wcsdec** sono versioni a caratteri a byte singolo e caratteri wide di **mbsdec** e **mbsdec_l**. **strdec** e **wcsdec** sono disponibili solo per questo mapping e non deve essere utilizzato in caso contrario.

Per altre informazioni, vedere [Uso dei mapping di testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping di testo generico](../../c-runtime-library/generic-text-mappings.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_mbsdec**|\<mbstring.h>|\<mbctype.h>|
|**_mbsdec_l**|\<mbstring.h>|\<mbctype.h>|
|**_strdec**|\<tchar.h>||
|**_wcsdec**|\<tchar.h>||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra un uso **tcsdec**.

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

L'esempio seguente illustra un uso **mbsdec**.

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

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_strinc, _wcsinc, _mbsinc, _mbsinc_l](strinc-wcsinc-mbsinc-mbsinc-l.md)<br/>
[_strnextc, _wcsnextc, _mbsnextc, _mbsnextc_l](strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)<br/>
[_strninc, _wcsninc, _mbsninc, _mbsninc_l](strninc-wcsninc-mbsninc-mbsninc-l.md)<br/>
