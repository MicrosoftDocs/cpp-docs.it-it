---
title: _heapwalk | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _heapwalk
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
dev_langs: C++
helpviewer_keywords:
- debugging [CRT], heap-related problems
- heapwalk function
- _heapwalk function
ms.assetid: 2df67649-fb00-4570-a8b1-a4eca5738744
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: caed5b5fec9ff7854905542c093a0d265dee4db5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="heapwalk"></a>_heapwalk
Attraversa l'heap e restituisce informazioni relative alla voce successiva.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime, con l'eccezione delle build di debug. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _heapwalk(   
   _HEAPINFO *entryinfo   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `entryinfo`  
 Buffer che deve contenere le informazioni sull'heap.  
  
## <a name="return-value"></a>Valore restituito  
 `_heapwalk` restituisce una delle costanti manifeste di tipo Integer seguenti definite in Malloc.h.  
  
 `_HEAPBADBEGIN`  
 Le informazioni di intestazione iniziali non sono valide o non sono state trovate.  
  
 `_HEAPBADNODE`  
 L'heap è danneggiato o è stato travato un nodo non valido.  
  
 `_HEAPBADPTR`  
 Il campo `_pentry` della struttura `_HEAPINFO` non contiene un puntatore valido nell'heap oppure `entryinfo` è un puntatore Null.  
  
 `_HEAPEND`  
 Fine dell'heap raggiunta correttamente.  
  
 `_HEAPEMPTY`  
 L'heap non è stato inizializzato.  
  
 `_HEAPOK`  
 Nessun errore finora. `entryinfo` viene aggiornato con informazioni relative alla voce dell'heap successiva.  
  
 Inoltre, se si verifica un errore, `_heapwalk` imposta `errno` su `ENOSYS`.  
  
## <a name="remarks"></a>Note  
 La funzione `_heapwalk` è utile per eseguire il debug dei problemi relativi all'heap nei programmi. La funzione esamina l'heap, attraversando una voce per ogni chiamata, quindi restituisce un puntatore a una struttura di tipo `_HEAPINFO` che contiene informazioni sulla voce dell'heap successiva. Il tipo `_HEAPINFO`, definito in Malloc.h, contiene gli elementi seguenti.  
  
 `int *_pentry`  
 Puntatore alla voce dell'heap.  
  
 `size_t _size`  
 Dimensioni della voce dell'heap.  
  
 `int _useflag`  
 Flag che indica se la voce dell'heap è in uso.  
  
 Una chiamata a `_heapwalk` che restituisce `_HEAPOK` consente di archiviare la dimensione della voce nel campo `_size` e imposta il campo `_useflag` su `_FREEENTRY` o `_USEDENTRY` (entrambe sono costanti definite in malloc. h). Per ottenere queste informazioni sulla prima voce nell'heap, passare a `_heapwalk` un puntatore a una struttura `_HEAPINFO` il cui membro `_pentry` è `NULL`. Se il sistema operativo non supporta `_heapwalk` (ad esempio, Windows 98), la funzione restituisce `_HEAPEND` e imposta `errno` su `ENOSYS`.  
  
 Questa funzione convalida il relativo parametro. Se `entryinfo` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `_HEAPBADPTR`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_heapwalk`|\<malloc.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
  
```  
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
        printf("%6s block at %Fp of size %4.4X\n",  
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
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [_heapadd](../../c-runtime-library/heapadd.md)   
 [_heapchk](../../c-runtime-library/reference/heapchk.md)   
 [_heapmin](../../c-runtime-library/reference/heapmin.md)   
 [_heapset](../../c-runtime-library/heapset.md)