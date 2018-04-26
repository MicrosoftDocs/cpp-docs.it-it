---
title: _heapwalk | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- debugging [CRT], heap-related problems
- heapwalk function
- _heapwalk function
ms.assetid: 2df67649-fb00-4570-a8b1-a4eca5738744
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ab80252b599d0a6d7a50e3b113824adc8d8d9926
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

**heapwalk** restituisce una delle seguenti costanti manifesto integer definite in malloc. h.

|Valore restituito|Significato|
|-|-|
|**HEAPBADBEGIN**| Le informazioni di intestazione iniziali non sono valide o non sono state trovate.|
|**HEAPBADNODE**| L'heap è danneggiato o è stato travato un nodo non valido.|
|**HEAPBADPTR**| Il **pentry** campo il **heapinfo** struttura non contiene un puntatore valido nell'heap o *entryinfo* è un puntatore null.|
|**HEAPEND**| Fine dell'heap raggiunta correttamente.|
|**HEAPEMPTY**| L'heap non è stato inizializzato.|
|**HEAPOK**| Nessun errore finora; *entryinfo* viene aggiornato con informazioni sulla voce dell'heap successiva.|

Inoltre, se si verifica un errore, **heapwalk** imposta **errno** al **ENOSYS**.

## <a name="remarks"></a>Note

Il **heapwalk** funzione consente di eseguire il debug di problemi di heap nei programmi. La funzione esamina l'heap, attraversando una voce per ogni chiamata e restituisce un puntatore a una struttura di tipo **heapinfo** che contiene informazioni sulla voce dell'heap successiva. Il **heapinfo** tipo, definita in malloc. h, contiene gli elementi seguenti.

|Campo|Significato|
|-|-|
|`int *_pentry`|Puntatore alla voce dell'heap.|
|`size_t _size`|Dimensioni della voce dell'heap.|
|`int _useflag`|Flag che indica se la voce dell'heap è in uso.|

Una chiamata a **heapwalk** che restituisce **heapok** archivia le dimensioni della voce nel **_size** campo e imposta il **useflag** campo a uno **Freeentry** oppure **usedentry** (entrambi sono costanti definite in malloc. h). Per ottenere queste informazioni sulla prima voce dell'heap, passare **heapwalk** un puntatore a un **heapinfo** struttura il cui **pentry** membro **NULL** . Se il sistema operativo non supporta **heapwalk**(ad esempio, Windows 98), la funzione restituisce **heapend** e imposta **errno** a **ENOSYS**.

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
