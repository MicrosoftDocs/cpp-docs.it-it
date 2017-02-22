---
title: "_heapwalk | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_heapwalk"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "heapwalk"
  - "_heapwalk"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_heapwalk (funzione)"
  - "debug [CRT], problemi di heap"
  - "heapwalk (funzione)"
ms.assetid: 2df67649-fb00-4570-a8b1-a4eca5738744
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# _heapwalk
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Attraversa lo heap e restituisce informazioni sulla voce seguente.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni eseguite in Windows Runtime tranne che nelle build di Debug.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _heapwalk(   
   _HEAPINFO *entryinfo   
);  
```  
  
#### Parametri  
 `entryinfo`  
 Buffer per contenere informazioni sullo heap.  
  
## Valore restituito  
 `_heapwalk` restituisce una delle seguenti costanti del manifesto dell'intero definite in Malloc.h.  
  
 `_HEAPBADBEGIN`  
 Informazioni sull'intestazione iniziale non valide o non trovate.  
  
 `_HEAPBADNODE`  
 Heap danneggiato o trovato cattivo nodo di ricerca .  
  
 `_HEAPBADPTR`  
 Il campo `_pentry` della struttura `_HEAPINFO` non contiene un puntatore valido nell'heap o `entryinfo` è un puntatore null.  
  
 `_HEAPEND`  
 Fine dell'heap raggiunta correttamente.  
  
 `_HEAPEMPTY`  
 Heap non inizializzato.  
  
 `_HEAPOK`  
 Nessun errore finora; `entryinfo` viene aggiornato con le informazioni sulla prossima voce dell'heap.  
  
 Inoltre, se si verifica un errore, `_heapwalk` imposta `errno` a `ENOSYS`.  
  
## Note  
 La funzione `_heapwalk` aiuta ad eseguire il debug dei problemi relativi all'heap nei programmi.  La funzione attraversa lo heap, una voce per chiamata, e restituisce un puntatore a una struttura di tipo `_HEAPINFO` contenente informazioni sulla prossima voce dell'heap.  Il tipo `_HEAPINFO`, definito in Malloc.h, contiene i seguenti elementi.  
  
 `int *_pentry`  
 Puntatore alla voce dell'heap.  
  
 `size_t _size`  
 Dimensione della voce dell'heap.  
  
 `int _useflag`  
 Contrassegno che indica se la voce dell'heap è in uso.  
  
 Una chiamata a `_heapwalk` che restituisce `_HEAPOK` salva la dimensione della voce nel campo `_size` e imposta il campo `_useflag` a `_FREEENTRY` o `_USEDENTRY` \(entrambe sono costanti definite in Malloc.h\).  Per ottenere queste informazioni sulla prima voce nell'heap, passare `_heapwalk` un puntatore a una struttura `_HEAPINFO` il cui membro `_pentry` è `NULL`.  Se il sistema operativo non supporta `_heapwalk`\(ad esempio Windows 98\), la funzione restituisce `_HEAPEND` e imposta `errno` a `ENOSYS`.  
  
 Questa funzione convalida il parametro.  Se `entryinfo` è un puntatore a null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `_HEAPBADPTR`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_heapwalk`|\<malloc.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
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
  
  **Blocco UTILIZZATO a 00310650 di dimensioni 0100**  
 **Blocco UTILIZZATO a 00310758 di dimensioni 0800**  
 **Blocco UTILIZZATO a 00310F60 di dimensioni 0080**  
 **Blocco LIBERO a 00310FF0 di dimensioni 0398**  
 **Blocco UTILIZZATO a 00311390 di dimensioni 000D**  
 **Blocco UTILIZZATO a 003113A8 di dimensioni 00B4**  
 **Blocco UTILIZZATO a 00311468 di dimensioni 0034**  
 **Blocco UTILIZZATO a 003114A8 di dimensioni 0039**  
**...**  
 **Blocco UTILIZZATO a 00312228 di dimensioni 0010**  
 **Blocco UTILIZZATO a 00312240 di dimensioni 1000**  
 **Blocco LIBERO a 00313250 di dimensioni 1DB0**  
**OK \- fine dell'heap**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [\_heapadd](../../c-runtime-library/heapadd.md)   
 [\_heapchk](../../c-runtime-library/reference/heapchk.md)   
 [\_heapmin](../../c-runtime-library/reference/heapmin.md)   
 [\_heapset](../../c-runtime-library/heapset.md)