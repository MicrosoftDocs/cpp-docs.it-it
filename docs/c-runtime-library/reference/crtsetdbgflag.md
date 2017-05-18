---
title: _CrtSetDbgFlag | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtSetDbgFlag
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
- _CRTDBG_REPORT_FLAG
- _CRTDBG_CHECK_EVERY_16_DF
- _CRTDBG_CHECK_DEFAULT_DF
- CRTDBG_CHECK_DEFAULT_DF
- CRTDBG_CHECK_EVERY_128_DF
- CRTDBG_CHECK_EVERY_1024_DF
- _CRTDBG_CHECK_EVERY_128_DF
- CrtSetDbgFlag
- CRTDBG_CHECK_EVERY_16_DF
- _CRTDBG_CHECK_EVERY_1024_DF
- _CrtSetDbgFlag
- CRTDBG_REPORT_FLAG
dev_langs:
- C++
helpviewer_keywords:
- _CRTDBG_CHECK_EVERY_16_DF macro
- CRTDBG_CHECK_EVERY_16_DF macro
- _CRTDBG_CHECK_ALWAYS_DF macro
- _CRTDBG_CHECK_DEFAULT_DF macro
- CRTDBG_ALLOC_MEM_DF macro
- CRTDBG_CHECK_ALWAYS_DF macro
- _CRTDBG_ALLOC_MEM_DF macro
- _CRTDBG_REPORT_FLAG macro
- _CRTDBG_CHECK_EVERY_128_DF macro
- CRTDBG_REPORT_FLAG macro
- _CRTDBG_CHECK_EVERY_1024_DF macro
- CRTDBG_CHECK_DEFAULT_DF macro
- CRTDBG_CHECK_EVERY_1024_DF macro
- _CrtSetDbgFlag function
- CrtSetDbgFlag function
- _CRTDBG_DELAY_FREE_MEM_DF macro
- CRTDBG_CHECK_EVERY_128_DF macro
- CRTDBG_DELAY_FREE_MEM_DF macro
- CRTDBG_CHECK_CRT_DF macro
- _CRTDBG_CHECK_CRT_DF macro
ms.assetid: b5657ffb-6178-4cbf-9886-1af904ede94c
caps.latest.revision: 19
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: ef1773e534c08a15f10fe2048a5036a957c6a1f4
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="crtsetdbgflag"></a>_CrtSetDbgFlag
Recupera o modifica lo stato del flag **_crtDbgFlag** per controllare il comportamento di allocazione del gestore dell'heap di debug (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _CrtSetDbgFlag(   
   int newFlag   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `newFlag`  
 Nuovo stato per **_crtDbgFlag**.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce lo stato precedente di **_crtDbgFlag**.  
  
## <a name="remarks"></a>Note  
 La funzione `_CrtSetDbgFlag` consente all'applicazione di controllare il modo in cui il gestore dell'heap di debug tiene traccia delle allocazioni di memoria modificando i campi in bit del flag **_crtDbgFlag**. Impostando i bit (ON), l'applicazione può comunicare al gestore dell'heap di debug di eseguire operazioni di debug speciali, tra cui verificare le eventuali perdite di memoria alla chiusura dell'applicazione, segnalare le perdite rilevate, simulare condizioni di poca memoria specificando che i blocchi di memoria liberati devono rimanere nell'elenco collegato dell'heap e verificare l'integrità dell'heap ispezionando ogni blocco di memoria a ogni richiesta di allocazione. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetDbgFlag` vengono rimosse durante la pre-elaborazione.  
  
 La tabella seguente contiene un elenco dei campi di bit per **_crtDbgFlag** e ne descrive il comportamento. Poiché l'impostazione dei bit produce un aumento dell'output di diagnostica e una riduzione della velocità di esecuzione del programma, per impostazione predefinita questi bit non sono impostati (OFF). Per altre informazioni su questi campi di bit, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap).  
  
|Campo di bit|Impostazione predefinita|Descrizione|  
|---------------|-------------|-----------------|  
|**_CRTDBG_ALLOC_MEM_DF**|ON|ON: attiva le allocazioni dell'heap di debug e l'uso di identificatori del tipo di blocco di memoria, ad esempio `_CLIENT_BLOCK`. OFF: aggiunge le nuove allocazioni all'elenco collegato dell'heap, ma imposta il tipo di blocco su **_IGNORE_BLOCK**.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|  
|**_CRTDBG_CHECK_ALWAYS_DF**|OFF|ON: chiama [_CrtCheckMemory](../../c-runtime-library/reference/crtcheckmemory.md) a ogni richiesta di allocazione e deallocazione. OFF: la funzione `_CrtCheckMemory` deve essere chiamata in modo esplicito.<br /><br /> Quando viene impostato questo flag, le macro del controllo frequenza heap non hanno alcun effetto.|  
|`_CRTDBG_CHECK_CRT_DF`|OFF|ON: include i tipi `_CRT_BLOCK` nelle operazioni di rilevamento di perdite e differenze tra gli stati della memoria. OFF: la memoria usata internamente dalla libreria di runtime viene ignorata da queste operazioni.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|  
|**_CRTDBG_DELAY_FREE_MEM_DF**|OFF|ON: mantiene i blocchi di memoria liberati nell'elenco collegato dell'heap, assegna loro il tipo **_FREE_BLOCK** e li riempie con il valore byte 0xDD. OFF: non mantiene i blocchi di memoria liberati nell'elenco collegato dell'heap.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|  
|`_CRTDBG_LEAK_CHECK_DF`|OFF|ON: esegue il controllo automatico delle perdite all'uscita del programma mediante una chiamata a [_CrtDumpMemoryLeaks](../../c-runtime-library/reference/crtdumpmemoryleaks.md) e genera un report di errore se l'applicazione non ha liberato tutta la memoria allocata. OFF: non esegue automaticamente il controllo delle perdite di memoria all'uscita del programma.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|  
  
 **Macro di controllo della frequenza dell'heap**  
  
 È possibile specificare quanto spesso la libreria di runtime di C debba eseguire la convalida dell'heap per il debug (`_CrtCheckMemory`) in base al numero di chiamate a `malloc`, `realloc`, **free** e `_msize`.  
  
 `_CrtSetDbgFlag` cerca quindi un valore nei 16 bit superiori del parametro `newFlag`. Il valore specificato è il numero di chiamate a `malloc`, `realloc`,**free** e `_msize` tra le chiamate a `_CrtCheckMemory`. A questo scopo sono disponibili quattro macro predefinite.  
  
|Macro|Numero di chiamate malloc, realloc, free e _msize tra le chiamate a _CrtCheckMemory|  
|-----------|------------------------------------------------------------------------------------------|  
|_CRTDBG_CHECK_EVERY_16_DF|16|  
|_CRTDBG_CHECK_EVERY_128_DF|128|  
|_CRTDBG_CHECK_EVERY_1024_DF|1024|  
|_CRTDBG_CHECK_DEFAULT_DF|0 (per impostazione predefinita, nessun controllo dell'heap)|  
  
 Per impostazione predefinita, la funzione `_CrtCheckMemory` viene chiamata ogni 1.024 chiamate a `malloc`, `realloc`, **free** e `_msize`.  
  
 Ad esempio, è possibile specificare un controllo dell'heap ogni 16 operazioni `malloc`, `realloc`, **free** e `_msize` usando il codice seguente:  
  
```  
#include <crtdbg.h>  
int main( )  
{  
int tmp;  
  
// Get the current bits  
tmp = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);  
  
// Clear the upper 16 bits and OR in the desired freqency  
tmp = (tmp & 0x0000FFFF) | _CRTDBG_CHECK_EVERY_16_DF;  
  
// Set the new bits  
_CrtSetDbgFlag(tmp);  
}  
```  
  
 Quando si specifica _CRTDBG_CHECK_ALWAYS_DF, i 16 bit superiori del parametro `newFlag` vengono ignorati. In questo caso, la funzione `_CrtCheckMemory` viene chiamata a ogni chiamata a `malloc`, `realloc`, **free** e `_msize`.  
  
 `newFlag` è il nuovo stato da applicare a **_crtDbgFlag** ed è una combinazione dei valori per ognuno dei campi di bit.  
  
### <a name="to-change-one-or-more-of-these-bit-fields-and-create-a-new-state-for-the-flag"></a>Per modificare uno più campi di bit e creare un nuovo stato per il flag  
  
1.  Chiamare `_CrtSetDbgFlag` con `newFlag` uguale a `_CRTDBG_REPORT_FLAG` per ottenere lo stato corrente di **_crtDbgFlag** e archiviare il valore restituito in una variabile temporanea.  
  
2.  Attivare eventuali bit eseguendo un'operazione `OR` tra la variabile temporanea e le corrispondenti maschere di bit (rappresentate nel codice dell'applicazione da costanti manifesto).  
  
3.  Disattivare gli altri bit eseguendo un'operazione **AND** tra la variabile e un operatore **NOT** bit per bit delle maschere di bit appropriate.  
  
4.  Chiamare `_CrtSetDbgFlag` con `newFlag` impostato sul valore archiviato nella variabile temporanea per creare il nuovo stato di **_crtDbgFlag**.  
  
 Il codice seguente illustra come simulare condizioni di memoria insufficiente mantenendo i blocchi di memoria liberati nell'elenco collegato dell'heap e impedire che la funzione `_CrtCheckMemory` venga chiamata a ogni richiesta di allocazione:  
  
```  
// Get the current state of the flag  
// and store it in a temporary variable  
int tmpFlag = _CrtSetDbgFlag( _CRTDBG_REPORT_FLAG );  
  
// Turn On (OR) - Keep freed memory blocks in the  
// heap's linked list and mark them as freed  
tmpFlag |= _CRTDBG_DELAY_FREE_MEM_DF;  
  
// Turn Off (AND) - prevent _CrtCheckMemory from  
// being called at every allocation request  
tmpFlag &= ~_CRTDBG_CHECK_ALWAYS_DF;  
  
// Set the new state for the flag  
_CrtSetDbgFlag( tmpFlag );  
```  
  
 Per una panoramica sulla gestione della memoria e l'heap per il debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
 Per disabilitare un flag con la funzione `_CrtSetDbgFlag`, è necessario usare la variabile **AND** con l'operatore bit per bit **NOT** della maschera di bit.  
  
 Se `newFlag` non è un valore valido, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL` e restituisce lo stato precedente di `_crtDbgFlag`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtSetDbgFlag`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_crtsetdflag.c  
// compile with: /c -D_DEBUG /MTd -Od -Zi -W3 /link -verbose:lib /debug  
/*  
 * This program concentrates on allocating and freeing memory  
 * blocks to test the functionality of the _crtDbgFlag flag..  
 */  
  
#include <string.h>  
#include <malloc.h>  
#include <crtdbg.h>  
  
int main( )  
{  
        char *p1, *p2;  
        int tmpDbgFlag;  
  
        _CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_FILE );  
        _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDERR );  
        /*  
         * Set the debug-heap flag to keep freed blocks in the  
         * heap's linked list - This will allow us to catch any  
         * inadvertent use of freed memory  
         */  
        tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);  
        tmpDbgFlag |= _CRTDBG_DELAY_FREE_MEM_DF;  
        tmpDbgFlag |= _CRTDBG_LEAK_CHECK_DF;  
        _CrtSetDbgFlag(tmpDbgFlag);  
  
        /*  
         * Allocate 2 memory blocks and store a string in each  
         */  
        p1 = malloc( 34 );  
        p2 = malloc( 38 );  
        strcpy_s( p1, 34, "p1 points to a Normal allocation block" );  
        strcpy_s( p2, 38, "p2 points to a Client allocation block" );  
  
        /*  
         * Free both memory blocks  
         */  
        free( p2 );  
        free( p1 );  
  
        /*  
         * Set the debug-heap flag to no longer keep freed blocks in the  
         * heap's linked list and turn on Debug type allocations (CLIENT)  
         */  
        tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);  
        tmpDbgFlag |= _CRTDBG_ALLOC_MEM_DF;  
        tmpDbgFlag &= ~_CRTDBG_DELAY_FREE_MEM_DF;  
        _CrtSetDbgFlag(tmpDbgFlag);  
  
        /*  
         * Explicitly call _malloc_dbg to obtain the filename and   
         * line number of our allocation request and also so we can   
         * allocate CLIENT type blocks specifically for tracking  
         */  
        p1 = _malloc_dbg( 40, _NORMAL_BLOCK, __FILE__, __LINE__ );  
        p2 = _malloc_dbg( 40, _CLIENT_BLOCK, __FILE__, __LINE__ );  
        strcpy_s( p1, 40, "p1 points to a Normal allocation block" );  
        strcpy_s( p2, 40, "p2 points to a Client allocation block" );  
  
        /*  
         * _free_dbg must be called to free the CLIENT block  
         */  
        _free_dbg( p2, _CLIENT_BLOCK );  
        free( p1 );  
  
        /*  
         * Allocate p1 again and then exit - this will leave unfreed  
         * memory on the heap  
         */  
        p1 = malloc( 10 );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)   
 [_CrtCheckMemory](../../c-runtime-library/reference/crtcheckmemory.md)
