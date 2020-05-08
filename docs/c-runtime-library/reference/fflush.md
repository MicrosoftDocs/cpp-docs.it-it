---
title: fflush
ms.date: 4/2/2020
api_name:
- fflush
- _o_fflush
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fflush
helpviewer_keywords:
- streams, flushing
- flushing
- fflush function
ms.assetid: 8bbc753f-dc74-4e77-b563-74da2835e92b
ms.openlocfilehash: c5208c86484e1d9478f3879d91b32d57ba7c4a3a
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82912890"
---
# <a name="fflush"></a>fflush

Scarica un flusso.

## <a name="syntax"></a>Sintassi

```C
int fflush(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**fflush** restituisce 0 se il buffer è stato scaricato correttamente. Il valore 0 viene restituito anche nel caso in cui il flusso specificato non ha nessun buffer o viene aperto in sola lettura. Un valore restituito di **EOF** indica un errore.

> [!NOTE]
> Se **fflush** restituisce **EOF**, è possibile che i dati siano andati perduti a causa di un errore di scrittura. Quando si configura un gestore errori critico, è più sicuro disattivare il buffer con la funzione **setvbuf** o usare routine di i/o di basso livello, ad esempio **_open**, **_close**e **_Write** invece delle funzioni di i/o del flusso.

## <a name="remarks"></a>Osservazioni

La funzione **fflush** Scarica il *flusso*del flusso. Se il flusso è stato aperto in modalità scrittura o in modalità aggiornamento e l'ultima operazione è stata un'operazione di scrittura, il contenuto del buffer di flusso viene scritto nel file sottostante o nel dispositivo e il buffer viene eliminato. Se il flusso è stato aperto in modalità di lettura o se il flusso non ha buffer, la chiamata a **fflush** non ha alcun effetto e viene mantenuto qualsiasi buffer. Una chiamata a **fflush** nega l'effetto di qualsiasi chiamata precedente a **ungetc** per il flusso. Il flusso rimane aperto dopo la chiamata.

Se il *flusso* è **null**, il comportamento è lo stesso di una chiamata a **fflush** in ogni flusso aperto. Tutti i flussi aperti in modalità scrittura e in modalità aggiornamento in cui l'ultima operazione è stata un'operazione di scrittura vengono scaricati. La chiamata non ha effetto su altri flussi.

I buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è pieno, quando un flusso viene chiuso o quando un programma termina normalmente senza chiudere i flussi. La funzionalità di commit al disco della libreria di runtime consente di assicurare che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo. Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a COMMODE.OBJ. Nel file eseguibile risultante, le chiamate a **_flushall** scrivono il contenuto di tutti i buffer su disco. Solo **_flushall** e **fflush** sono interessati da commode. obj.

Per informazioni sul controllo della funzionalità di commit su disco, vedere [Flusso I/O](../../c-runtime-library/stream-i-o.md), [fopen](fopen-wfopen.md) e [_fdopen](fdopen-wfdopen.md).

Questa funzione blocca il thread che chiama e quindi è thread-safe. Per una versione senza blocco, vedere **_fflush_nolock**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**fflush**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fflush.c
// Compile with: cl /W4 crt_fflush.c
// This sample gets a number from the user, then writes it to a file.
// It ensures the write isn't lost on crash by calling fflush.
#include <stdio.h>

int * crash_the_program = 0;

int main(void)
{
    FILE * my_file;
    errno_t err = fopen_s(&my_file, "myfile.txt", "w");
    if (my_file && !err)
    {
        printf("Write a number: ");

        int my_number = 0;
        scanf_s("%d", &my_number);

        fprintf(my_file, "User selected %d\n", my_number);

        // Write data to a file immediately instead of buffering.
        fflush(my_file);

        if (my_number == 5)
        {
            // Without using fflush, no data was written to the file
            // prior to the crash, so the data is lost.
            *crash_the_program = 5;
        }

        // Normally, fflush is not needed as closing the file will write the buffer.
        // Note that files are automatically closed and flushed during normal termination.
        fclose(my_file);
    }
    return 0;
}
```

```Input
5
```

```myfile.txt
User selected 5
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_flushall](flushall.md)<br/>
[setvbuf](setvbuf.md)<br/>
