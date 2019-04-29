---
title: _heapwalk
ms.date: 11/04/2016
apiname:
- _heapwalk
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- heapwalk
- _heapwalk
helpviewer_keywords:
- debugging [CRT], heap-related problems
- heapwalk function
- _heapwalk function
ms.assetid: 2df67649-fb00-4570-a8b1-a4eca5738744
ms.openlocfilehash: cc2a49d9032746cc6c82c9dc401fc96baabbe2e1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62331688"
---
# <a name="heapwalk"></a>_heapwalk

Attraversa l'heap e restituisce informazioni relative alla voce successiva.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime, con l'eccezione delle build di debug. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _heapwalk( _HEAPINFO *entryinfo );
```

### <a name="parameters"></a>Parametri

*entryinfo*<br/>
Buffer che deve contenere le informazioni sull'heap.

## <a name="return-value"></a>Valore restituito

**heapwalk** restituisce uno delle costanti manifesto integer seguenti definite in malloc. h.

|Valore restituito|Significato|
|-|-|
|**_HEAPBADBEGIN**| Le informazioni di intestazione iniziali non sono valide o non sono state trovate.|
|**_HEAPBADNODE**| L'heap è danneggiato o è stato travato un nodo non valido.|
|**_HEAPBADPTR**| Il **pentry** campo le **heapinfo** struttura non contiene un puntatore valido nell'heap o *entryinfo* è un puntatore null.|
|**_HEAPEND**| Fine dell'heap raggiunta correttamente.|
|**_HEAPEMPTY**| L'heap non è stato inizializzato.|
|**_HEAPOK**| Nessun errore finora. *entryinfo* viene aggiornato con le informazioni relative alla voce dell'heap successiva.|

Inoltre, se si verifica un errore, **heapwalk** imposta **errno** al **ENOSYS**.

## <a name="remarks"></a>Note

Il **heapwalk** funzione consente di eseguire il debug dei problemi relativi all'heap nei programmi. La funzione esamina l'heap, attraversando una voce per ogni chiamata e restituisce un puntatore a una struttura di tipo **heapinfo** che contiene informazioni relative alla voce dell'heap successiva. Il **heapinfo** tipo, definito in malloc. h, contiene gli elementi seguenti.

|Campo|Significato|
|-|-|
|`int *_pentry`|Puntatore alla voce dell'heap.|
|`size_t _size`|Dimensioni della voce dell'heap.|
|`int _useflag`|Flag che indica se la voce dell'heap è in uso.|

Una chiamata a **heapwalk** che restituisce **heapok** archivia le dimensioni della voce nel **dimen_sione** campo e imposta il **useflag** campo a uno **Freeentry** oppure **usedentry** (entrambe sono costanti definite in malloc. h). Per ottenere queste informazioni sulla prima voce nell'heap, passare **heapwalk** un puntatore a un **heapinfo** struttura il cui **pentry** membro è **NULL** . Se il sistema operativo non supporta **heapwalk**(ad esempio, Windows 98), la funzione restituisce **heapend** e imposta **errno** a **ENOSYS**.

Questa funzione convalida il relativo parametro. Se *entryinfo* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **heapbadptr**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_heapwalk**|\<malloc.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_heapwalk.c

// This program "walks" the heap, starting
// at the beginning (_pentry = NULL). It prints out each
// heap entry's use, location, and size. It also prints
// out information about the overall state of the heap as
// soon as _heapwalk returns a value other than _HEAPOK
// or if the loop has iterated 100 times.

#include <stdio.h>
#include <malloc.h>

void heapdump(void);

int main(void)
{
    char *buffer;

    heapdump();
    if((buffer = (char *)malloc(59)) != NULL)
    {
        heapdump();
        free(buffer);
    }
    heapdump();
}

void heapdump(void)
{
    _HEAPINFO hinfo;
    int heapstatus;
    int numLoops;
    hinfo._pentry = NULL;
    numLoops = 0;
    while((heapstatus = _heapwalk(&hinfo)) == _HEAPOK &&
          numLoops < 100)
    {
        printf("%8s block at %Fp of size %4.4X\n",
               (hinfo._useflag == _USEDENTRY ? "USED" : "FREE"),
               hinfo._pentry, hinfo._size);
        numLoops++;
    }

    switch(heapstatus)
    {
    case _HEAPEMPTY:
        printf("OK - empty heap\n");
        break;
    case _HEAPEND:
        printf("OK - end of heap\n");
        break;
    case _HEAPBADPTR:
        printf("ERROR - bad pointer to heap\n");
        break;
    case _HEAPBADBEGIN:
        printf("ERROR - bad start of heap\n");
        break;
    case _HEAPBADNODE:
        printf("ERROR - bad node in heap\n");
        break;
    }
}
```

```Output
    USED block at 00310650 of size 0100
    USED block at 00310758 of size 0800
    USED block at 00310F60 of size 0080
    FREE block at 00310FF0 of size 0398
    USED block at 00311390 of size 000D
    USED block at 003113A8 of size 00B4
    USED block at 00311468 of size 0034
    USED block at 003114A8 of size 0039
...
    USED block at 00312228 of size 0010
    USED block at 00312240 of size 1000
    FREE block at 00313250 of size 1DB0
OK - end of heap
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[_heapadd](../../c-runtime-library/heapadd.md)<br/>
[_heapchk](heapchk.md)<br/>
[_heapmin](heapmin.md)<br/>
[_heapset](../../c-runtime-library/heapset.md)<br/>
