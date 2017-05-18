---
title: _cgets, _cgetws | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _cgetws
- _cgets
apilocation:
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcrt.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- cgetws
- _cgetws
- _cgets
dev_langs:
- C++
helpviewer_keywords:
- _cgetws function
- strings [C++], getting from console
- console, getting strings from
- _cgets function
- cgetws function
- cgets function
ms.assetid: 4d5e134a-58c3-4f62-befd-5d235b0212f4
caps.latest.revision: 32
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Human Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 57e2d4bf3c84c44917ccfea8ca6584f1c94f5200
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="cgets-cgetws"></a>_cgets, _cgetws
Ottiene una stringa di caratteri dalla console. Sono disponibili versioni più sicure di queste funzioni. Vedere [_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).  
  
> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT. Le versioni sicure di queste funzioni, _cgets_s e _cgetws_s, sono ancora disponibili. Per informazioni su queste funzioni alternative, vedere [_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_cgets(   
   char *buffer   
);  
wchar_t *_cgetws(  
   wchar_t *buffer  
);  
template <size_t size>  
char *_cgets(   
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_cgetws(  
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Percorso di archiviazione per i dati.  
  
## <a name="return-value"></a>Valore restituito  
 `_cgets` e `_cgetws` restituiscono un puntatore all'inizio della stringa, in corrispondenza di `buffer[2]`. Se `buffer` è `NULL`, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
## <a name="remarks"></a>Note  
 Queste funzioni leggono una stringa di caratteri dalla console e archiviano la stringa e la relativa lunghezza nella posizione indicata da `buffer`. Il parametro `buffer` deve essere un puntatore a una matrice di caratteri. Il primo elemento della matrice, `buffer[0]`, deve contenere la lunghezza massima in caratteri della stringa da leggere. La matrice deve contenere un numero tale di elementi per contenere la stringa, un carattere Null di terminazione ('\0') e due byte aggiuntivi. La funzione legge i caratteri finché non viene letta una combinazione di ritorno a capo con avanzamento riga (CR-LF) oppure il numero specificato di caratteri. La stringa viene archiviata a partire da `buffer[2]`. Se la funzione legge una combinazione CR-LF, archivia il carattere Null ('\0'). La funzione archivia quindi la lunghezza effettiva della stringa nel secondo elemento della matrice, `buffer[1]`.  
  
 Dal momento che tutti i tasti di modifica sono attivi quando si chiama `_cgets` o `_cgetws` in una finestra di console, premendo F3 viene ripetuta l'ultima voce immessa.  
  
 In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_cgetts`|`_cgets`|`_cgets`|`_cgetws`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_cgets`|\<conio.h>|  
|`_cgetws`|\<conio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_cgets.c  
// compile with: /c /W3  
// This program creates a buffer and initializes  
// the first byte to the size of the buffer. Next, the  
// program accepts an input string using _cgets and displays  
// the size and text of that string.  
  
#include <conio.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
   char buffer[83] = { 80 };  // Maximum characters in 1st byte  
   char *result;  
  
   printf( "Input line of text, followed by carriage return:\n");  
  
   // Input a line of text:  
   result = _cgets( buffer ); // C4996  
   // Note: _cgets is deprecated; consider using _cgets_s  
   if (!result)  
   {  
      printf( "An error occurred reading from the console:"  
              " error code %d\n", errno);  
   }  
   else  
   {     
      printf( "\nLine length = %d\nText = %s\n",  
              buffer[1], result );  
   }  
}  
```  
  
```Output  
  
      A line of input.Input line of text, followed by carriage return:  
Line Length = 16  
Text = A line of input.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O su console e porta](../c-runtime-library/console-and-port-i-o.md)   
 [_getch, _getwch](../c-runtime-library/reference/getch-getwch.md)
