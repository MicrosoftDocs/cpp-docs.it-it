---
title: gets, _getws
ms.date: 11/04/2016
apiname:
- _getws
- gets
apilocation:
- msvcr80.dll
- msvcr90.dll
- msvcr120.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr100.dll
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _getts
- gets
- _getws
helpviewer_keywords:
- getws function
- getts function
- _getws function
- lines, getting
- streams, getting lines
- _getts function
- gets function
- standard input, reading from
ms.assetid: 1ec2dd4b-f801-48ea-97c2-892590f16024
ms.openlocfilehash: 523a295e088fe692eb9abd8dcca6b3919d432c4e
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702739"
---
# <a name="gets-getws"></a>gets, _getws

Ottiene una riga dal flusso `stdin` . Sono disponibili versioni più sicure di queste funzioni. Vedere [gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md).

> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT. Le versioni sicure di queste funzioni, gets_s e _getws_s, sono ancora disponibili. Per informazioni su queste funzioni alternative, vedere [gets_s, _getws_s](../c-runtime-library/reference/gets-s-getws-s.md).

> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```
char *gets(
   char *buffer
);
wchar_t *_getws(
   wchar_t *buffer
);
template <size_t size>
char *gets(
   char (&buffer)[size]
); // C++ only
template <size_t size>
wchar_t *_getws(
   wchar_t (&buffer)[size]
); // C++ only
```

#### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per la stringa di input.

## <a name="return-value"></a>Valore restituito

Restituisce il relativo argomento se l'operazione ha esito positivo. Un puntatore **NULL** indica una condizione di errore o di fine file. Usare [ferror](../c-runtime-library/reference/ferror.md) o [feof](../c-runtime-library/reference/feof.md) per determinare quella che si è verificata. Se `buffer` è **NULL**, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **NULL** e impostano errno su `EINVAL`.

## <a name="remarks"></a>Note

La funzione `gets` legge una riga dal flusso di input standard `stdin` e la archivia in `buffer`. La riga è costituita da tutti i caratteri, incluso il primo carattere di nuova riga ('\n'). `gets` sostituisce quindi il carattere di nuova riga con un carattere Null ('\0') prima di restituire la riga. Al contrario, la funzione `fgets` mantiene il carattere di nuova riga. `_getws` è una versione a caratteri wide di `gets`il cui argomento e il cui valore restituito sono stringhe a caratteri wide.

> [!IMPORTANT]
>  Dal momento che non esiste alcun modo per limitare il numero di caratteri letti tramite operazioni get, input non attendibile può causare facilmente sovraccarichi del buffer. In alternativa, usare `fgets` .

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_getts`|`gets`|`gets`|`_getws`|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`gets`|\<stdio.h>|
|`_getws`|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```
// crt_gets.c
// compile with: /WX /W3

#include <stdio.h>

int main( void )
{
   char line[21]; // room for 20 chars + '\0'
   gets( line );  // C4996
   // Danger: No way to limit input to 20 chars.
   // Consider using gets_s instead.
   printf( "The line entered was: %s\n", line );
}
```

Notare che se l'input contiene più di 20 caratteri, si verificherà un sovraccarico del buffer di riga e quasi certamente il programma verrà arrestato in modo anomalo.

```Output

Hello there!The line entered was: Hello there!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../c-runtime-library/stream-i-o.md)<br/>
[fgets, fgetws](../c-runtime-library/reference/fgets-fgetws.md)<br/>
[fputs, fputws](../c-runtime-library/reference/fputs-fputws.md)<br/>
[puts, _putws](../c-runtime-library/reference/puts-putws.md)