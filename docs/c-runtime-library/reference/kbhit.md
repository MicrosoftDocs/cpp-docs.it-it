---
title: _kbhit
ms.date: 11/04/2016
apiname:
- _kbhit
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _kbhit
- kbhit
- conio/_kbhit
helpviewer_keywords:
- keyboard input
- user input, checking for keyboard
- kbhit function
- console
- console, checking
- keyboards, keyboard input
- _kbhit function
- keyboards, checking input
ms.assetid: e82a1cc9-bbec-4150-b678-a7e433220fe4
ms.openlocfilehash: 9133d73e92438327bb2381e3293fd37076dd27ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667995"
---
# <a name="kbhit"></a>_kbhit

Controlla la console per l'input da tastiera.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C

int _kbhit( void );
```

## <a name="return-value"></a>Valore restituito

**isatty** restituisce un valore diverso da zero se è stato premuto un tasto. In caso contrario restituirà 0.

## <a name="remarks"></a>Note

Il **kbhit** funzione controlla la console per una sequenza di tasti recente. Se la funzione restituisce un valore diverso da zero, una sequenza di tasti è in attesa nel buffer. Il programma può quindi chiamare **getch** oppure **getche** per ottenere la sequenza di tasti.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_kbhit**|\<conio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_kbhit.c
// compile with: /c
/* This program loops until the user
* presses a key. If _kbhit returns nonzero, a
* keystroke is waiting in the buffer. The program
* can call _getch or _getche to get the keystroke.
*/

#include <conio.h>
#include <stdio.h>

int main( void )
{
   /* Display message until key is pressed. */
   while( !_kbhit() )
      _cputs( "Hit me!! " );

   /* Use _getch to throw key away. */
   printf( "\nKey struck was '%c'\n", _getch() );
}
```

### <a name="sample-output"></a>Esempio di output

```Output
Hit me!! Hit me!! Hit me!! Hit me!! Hit me!! Hit me!! Hit me!!
Key struck was 'q'
```

## <a name="see-also"></a>Vedere anche

[I/O su console e porta](../../c-runtime-library/console-and-port-i-o.md)<br/>
