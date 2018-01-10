---
title: _stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _stricmp_l
- _mbsicmp
- _wcsicmp
- _mbsicmp_l
- _stricmp
- _wcsicmp_l
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
- ntoskrnl.exe
- ucrtbase.dll
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _ftcsicmp
- _stricmp
- wcsicmp_l
- _wcsicmp
- _tcsicmp
- _strcmpi
- stricmp_l
- _mbsicmp
- _fstricmp
- mbsicmp_l
- mbsicmp
dev_langs: C++
helpviewer_keywords:
- _wcsicmp function
- _stricmp_l function
- fstricmp function
- _tcsicmp function
- ftcsicmp function
- string comparison [C++], lowercase
- _wcsicmp_l function
- _fstricmp function
- strings [C++], comparing
- mbsicmp function
- _ftcsicmp function
- _mbsicmp_l function
- wcsicmp_l function
- _stricmp function
- _mbsicmp function
- tcsicmp function
- stricmp_l function
- mbsicmp_l function
- _strcmpi function
ms.assetid: 0e1ee515-0d75-435a-a445-8875d4669b50
caps.latest.revision: "28"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 15b581d0d47da824f1faaade1214d1320e29bb03
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stricmp-wcsicmp-mbsicmp-stricmpl-wcsicmpl-mbsicmpl"></a>_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l
Esegue un confronto di stringhe senza distinzione tra maiuscole/minuscole.  
  
> [!IMPORTANT]
>  `_mbsicmp` e `_mbsicmp_l` non possono essere usati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _stricmp(  
   const char *string1,  
   const char *string2   
);  
int _wcsicmp(  
   const wchar_t *string1,  
   const wchar_t *string2   
);  
int _mbsicmp(  
   const unsigned char *string1,  
   const unsigned char *string2   
);  
int _stricmp_l(  
   const char *string1,  
   const char *string2,  
   _locale_t locale  
);  
int _wcsicmp_l(  
   const wchar_t *string1,  
   const wchar_t *string2,  
   _locale_t locale  
);  
int _mbsicmp_l(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `string1, string2`  
 Stringhe che terminano con Null da confrontare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito indica la relazione di `string1` con `string2` come descritto di seguito.  
  
|Valore restituito|Descrizione|  
|------------------|-----------------|  
|< 0|`string1` minore di `string2`|  
|0|`string1` uguale a `string2`|  
|> 0|`string1` maggiore di `string2`|  
  
 In caso di errore, `_mbsicmp` restituisce `_NLSCMPERROR`, definito in \<string.h> e \<mbstring.h>.  
  
## <a name="remarks"></a>Note  
 La funzione `_stricmp` esegue un confronto ordinale tra `string1` e `string2` dopo aver convertito tutti i caratteri in minuscolo e restituisce un valore che ne indica la relazione. `_stricmp` è diverso da `_stricoll` perché il confronto con `_stricmp` è interessato solo da `LC_CTYPE`, che determina quali caratteri sono in maiuscolo e quali in minuscolo. La funzione `_stricoll` confronta le stringhe in base alle categorie `LC_CTYPE` e `LC_COLLATE` delle impostazioni locali, che includono sia i caratteri maiuscoli/minuscoli che l'ordine delle regole di confronto. Per altre informazioni sulla categoria `LC_COLLATE`, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) e [Categorie di impostazioni locali](../../c-runtime-library/locale-categories.md). Le versioni di queste funzioni senza il suffisso `_l` usano le impostazioni locali per il comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso sono identiche, ma usano le impostazioni locali passate. Se le impostazioni locali non sono state impostate, vengono usate le impostazioni locali di C. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
> [!NOTE]
>  `_stricmp` è equivalente a `_strcmpi`. Possono essere usati indifferentemente, ma `_stricmp` è lo standard preferito.  
  
 La funzione `_strcmpi` è equivalente a `_stricmp` ed è fornita solo per la compatibilità con le versioni precedenti.  
  
 `_stricmp` esegue i confronti con caratteri minuscoli, pertanto può produrre comportamenti imprevisti.  
  
 Per spiegare in quali casi la conversione dei caratteri maiuscoli/minuscoli da parte di `_stricmp` influisce sui risultati di un confronto, si prendano ad esempio due stringhe, JOHNSTON e JOHN_HENRY. La stringa JOHN_HENRY viene considerata minore rispetto a JOHNSTON perché "_" ha un valore ASCII minore rispetto a una S minuscola. In realtà, qualsiasi carattere con un valore ASCII compreso tra 91 e 96 verrà considerato minore rispetto a qualsiasi lettera.  
  
 Se viene usata la funzione [strcmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md) invece di `_stricmp`, JOHN_HENRY sarà maggiore di JOHNSTON.  
  
 `_wcsicmp` e `_mbsicmp` sono le versioni a caratteri wide e a caratteri multibyte di `_stricmp`. Gli argomenti e il valore restituito di `_wcsicmp` sono stringhe con caratteri wide, mentre quelli di `_mbsicmp` sono stringhe con caratteri multibyte. `_mbsicmp` riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce `_NLSCMPERROR` in caso di errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). A parte ciò, queste tre funzioni si comportano in modo identico.  
  
 `_wcsicmp` e `wcscmp` si comportano in modo identico, ad eccezione del fatto che `wcscmp` non converte i propri argomenti in minuscolo prima di confrontarli. `_mbsicmp` e `_mbscmp` si comportano in modo identico, ad eccezione del fatto che `_mbscmp` non converte i propri argomenti in minuscolo prima di confrontarli.  
  
 È necessario chiamare [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per usare `_wcsicmp` con i caratteri Latin 1. Le impostazioni locali di C sono applicate per impostazione predefinita, quindi, ad esempio, il confronto tra ä e Ä non risulterà uguale. Chiamare `setlocale` con qualsiasi impostazione locale ad eccezione di C prima della chiamata a `_wcsicmp`. Il seguente esempio mostra in che modo `_wcsicmp` sia sensibile alle impostazioni locali:  
  
```  
// crt_stricmp_locale.c  
#include <string.h>  
#include <stdio.h>  
#include <locale.h>  
  
int main() {  
   setlocale(LC_ALL,"C");   // in effect by default  
   printf("\n%d",_wcsicmp(L"ä", L"Ä"));   // compare fails  
   setlocale(LC_ALL,"");  
   printf("\n%d",_wcsicmp(L"ä", L"Ä"));   // compare succeeds  
}  
```  
  
 In alternativa, è possibile chiamare [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md) e passare l'oggetto delle impostazioni locali restituito come parametro per `_wcsicmp_l`.  
  
 Tutte queste funzioni convalidano i relativi parametri. Se `string1` o `string2` sono puntatori Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `_NLSCMPERROR` e impostano `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsicmp`|`_stricmp`|`_mbsicmp`|`_wcsicmp`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_stricmp`, `_stricmp_l`|\<string.h>|  
|`_wcsicmp`, `_wcsicmp_l`|\<string.h> o \<wchar.h>|  
|`_mbsicmp`, `_mbsicmp_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_stricmp.c  
  
#include <string.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
char string1[] = "The quick brown dog jumps over the lazy fox";  
char string2[] = "The QUICK brown dog jumps over the lazy fox";  
  
int main( void )  
{  
   char tmp[20];  
   int result;  
  
   // Case sensitive  
   printf( "Compare strings:\n   %s\n   %s\n\n", string1, string2 );  
   result = strcmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof(tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof(tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof(tmp), "equal to" );  
   printf( "   strcmp:   String 1 is %s string 2\n", tmp );  
  
   // Case insensitive (could use equivalent _stricmp)  
   result = _stricmp( string1, string2 );  
   if( result > 0 )  
      strcpy_s( tmp, _countof(tmp), "greater than" );  
   else if( result < 0 )  
      strcpy_s( tmp, _countof(tmp), "less than" );  
   else  
      strcpy_s( tmp, _countof(tmp), "equal to" );  
   printf( "   _stricmp:  String 1 is %s string 2\n", tmp );  
}  
```  
  
```Output  
Compare strings:  
   The quick brown dog jumps over the lazy fox  
   The QUICK brown dog jumps over the lazy fox  
  
   strcmp:   String 1 is greater than string 2  
   _stricmp:  String 1 is equal to string 2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [_memicmp, _memicmp_l](../../c-runtime-library/reference/memicmp-memicmp-l.md)   
 [strcmp, wcscmp, _mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)