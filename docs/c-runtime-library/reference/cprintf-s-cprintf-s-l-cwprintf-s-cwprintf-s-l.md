---
title: _cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _cwprintf_s_l
- _cprintf_s_l
- _cprintf_s
- _cwprintf_s
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
- _cwprintf_s_l
- _cprintf_s
- cwprintf_s
- _cprintf_s_l
- cwprintf_s_l
- cprintf_s_l
- _tcprintf_s
- cprintf_s
- _cwprintf_s
- tcprintf_s
dev_langs:
- C++
helpviewer_keywords:
- tcprintf_s_l function
- _cprintf_s_l function
- _cwprintf_s_l function
- tcprintf_s function
- _tcprintf_s_l function
- _cwprintf_s function
- cwprintf_s function
- _cprintf_s function
- cprintf_s function
- _tcprintf_s function
- cprintf_s_l function
- cwprintf_s_l function
ms.assetid: c28504fe-0d20-4f06-8f97-ee33225922ad
caps.latest.revision: 26
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: f4da11dcce5dfccb6002ef3c3d78c8ae958ad6a0
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="cprintfs-cprintfsl-cwprintfs-cwprintfsl"></a>_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l
Formatta e stampa nella console. Queste versioni di [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md) includono miglioramenti per la sicurezza, come descritto in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md) (Funzionalità di sicurezza in CRT).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _cprintf_s(   
   const char * format [,   
   argument] ...   
);  
int _cprintf_s_l(   
   const char * format,  
   locale_t locale [,   
   argument] ...   
);  
int _cwprintf_s(  
   const wchar * format [,   
   argument] ...  
);  
int _cwprintf_s_l(  
   const wchar * format,  
   locale_t locale [,   
   argument] ...  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Parametri facoltativi.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Numero di caratteri stampati.  
  
## <a name="remarks"></a>Note  
 Queste funzioni formattano e stampano una serie di caratteri e valori direttamente sulla console, usando la funzione `_putch` (`_putwch` per `_cwprintf_s`) per i caratteri di output. Ogni funzione `argument` (se presente) viene convertita e restituita in base al formato specificato in `format`. Il formato ha la stessa forma e funzione del parametro `format` per la funzione [printf_s](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md). A differenza di `fprintf_s`, `printf_s`, e `sprintf_s` funzioni, né `_cprintf_s` né `_cwprintf_s` converte i caratteri di avanzamento di riga in combinazioni di ritorno a capo e avanzamento riga (CR-LF) quando l'output.  
  
 Una differenza importante è che `_cwprintf_s` visualizza i caratteri Unicode se usato in Windows NT. A differenza di `_cprintf_s`, `_cwprintf_s` usa le impostazioni locali correnti della console  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle correnti.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
 Come le versioni non sicure (vedere [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)), queste funzioni convalidano i parametri e richiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri), se il valore `format` è un puntatore Null. Queste funzioni differiscono dalle versioni non sicure nel fatto che anche la stringa di formato viene convalidata. Se sono presenti identificatori di formattazione sconosciuti o non corretti, queste funzioni richiamano il gestore di parametri non validi. In tutti casi, se l'esecuzione può continuare, le funzioni restituiscono -1 e impostano `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcprintf_s`|`_cprintf_s`|`_cprintf_s`|`_cwprintf_s`|  
|`_tcprintf_s_l`|`_cprintf_s_l`|`_cprintf_s_l`|`_cwprintf_s_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_cprintf_s`,`_cprintf_s_l`|\<conio.h>|  
|`_cwprintf_s`, `_cwprintf_s_l`|\<conio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_cprintf_s.c  
// compile with: /c  
// This program displays some variables to the console.  
  
#include <conio.h>  
  
int main( void )  
{  
   int      i = -16, h = 29;  
   unsigned u = 62511;  
   char     c = 'A';  
   char     s[] = "Test";  
  
   /* Note that console output does not translate \n as  
    * standard output does. Use \r\n instead.  
    */  
   _cprintf_s( "%d  %.4x  %u  %c %s\r\n", i, h, u, c, s );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
-16  001d  62511  A Test  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O su console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](../../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md)   
 [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)   
 [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)   
 [vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../../c-runtime-library/reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md) (Sintassi per la specifica del formato: funzioni printf e wprintf)
