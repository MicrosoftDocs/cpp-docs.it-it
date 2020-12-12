---
description: 'Altre informazioni su: _CrtSetDbgFlag'
title: _CrtSetDbgFlag
ms.date: 11/04/2016
api_name:
- _CrtSetDbgFlag
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
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: cbeda5cdd3434e753f873533f4d362243d5aa64a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319586"
---
# <a name="_crtsetdbgflag"></a>_CrtSetDbgFlag

Recupera o modifica lo stato del flag **_crtDbgFlag** per controllare il comportamento di allocazione del gestore dell'heap di debug (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
int _CrtSetDbgFlag(
   int newFlag
);
```

### <a name="parameters"></a>Parametri

*newFlag*<br/>
Nuovo stato per **_crtDbgFlag**.

## <a name="return-value"></a>Valore restituito

Restituisce lo stato precedente di **_crtDbgFlag**.

## <a name="remarks"></a>Commenti

La funzione **_CrtSetDbgFlag** consente all'applicazione di controllare il modo in cui il gestore dell'heap di debug tiene traccia delle allocazioni di memoria modificando i campi di bit del flag di **_crtDbgFlag** . Impostando i bit (ON), l'applicazione può comunicare al gestore dell'heap di debug di eseguire operazioni di debug speciali, tra cui verificare le eventuali perdite di memoria alla chiusura dell'applicazione, segnalare le perdite rilevate, simulare condizioni di poca memoria specificando che i blocchi di memoria liberati devono rimanere nell'elenco collegato dell'heap e verificare l'integrità dell'heap ispezionando ogni blocco di memoria a ogni richiesta di allocazione. Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a **_CrtSetDbgFlag** vengono rimosse durante la pre-elaborazione.

La tabella seguente contiene un elenco dei campi di bit per **_crtDbgFlag** e ne descrive il comportamento. Poiché l'impostazione dei bit produce un aumento dell'output di diagnostica e una riduzione della velocità di esecuzione del programma, per impostazione predefinita questi bit non sono impostati (OFF). Per altre informazioni su questi campi di bit, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap).

|Campo di bit|Predefinito|Descrizione|
|---------------|-------------|-----------------|
|**_CRTDBG_ALLOC_MEM_DF**|ON|ON: Abilita le allocazioni dell'heap di debug e l'uso degli identificatori del tipo di blocco di memoria, ad esempio **_CLIENT_BLOCK**. OFF: aggiunge le nuove allocazioni all'elenco collegato dell'heap, ma imposta il tipo di blocco su **_IGNORE_BLOCK**.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|
|**_CRTDBG_CHECK_ALWAYS_DF**|OFF|ON: chiama [_CrtCheckMemory](crtcheckmemory.md) a ogni richiesta di allocazione e deallocazione. OFF: **_CrtCheckMemory** necessario chiamare in modo esplicito.<br /><br /> Quando viene impostato questo flag, le macro del controllo frequenza heap non hanno alcun effetto.|
|**_CRTDBG_CHECK_CRT_DF**|OFF|ON: include **_CRT_BLOCK** tipi nelle operazioni di rilevamento di perdite e differenze nello stato della memoria. OFF: la memoria usata internamente dalla libreria di runtime viene ignorata da queste operazioni.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|
|**_CRTDBG_DELAY_FREE_MEM_DF**|OFF|ON: mantiene i blocchi di memoria liberati nell'elenco collegato dell'heap, assegna loro il tipo **_FREE_BLOCK** e li riempie con il valore byte 0xDD. OFF: non mantiene i blocchi di memoria liberati nell'elenco collegato dell'heap.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|
|**_CRTDBG_LEAK_CHECK_DF**|OFF|ON: esegue il controllo automatico delle perdite all'uscita del programma mediante una chiamata a [_CrtDumpMemoryLeaks](crtdumpmemoryleaks.md) e genera un report di errore se l'applicazione non ha liberato tutta la memoria allocata. OFF: non esegue automaticamente il controllo delle perdite di memoria all'uscita del programma.<br /><br /> È anche possibile usare in combinazione le macro del controllo frequenza heap.|

**Macro di controllo della frequenza dell'heap**

È possibile specificare la frequenza con cui la libreria di runtime del linguaggio C esegue la convalida dell'heap di debug (**_CrtCheckMemory**) in base al numero di chiamate a **malloc**, **realloc**, **Free** e **_msize**.

**_CrtSetDbgFlag** quindi ispeziona i 16 bit superiori del parametro *newFlag* per un valore. Il valore specificato è il numero di chiamate **malloc**, **realloc**, **Free** e **_msize** tra **_CrtCheckMemory** chiamate. A questo scopo sono disponibili quattro macro predefinite.

|Macro|Numero di chiamate malloc, realloc, free e _msize tra le chiamate a _CrtCheckMemory|
|-----------|------------------------------------------------------------------------------------------|
|_CRTDBG_CHECK_EVERY_16_DF|16|
|_CRTDBG_CHECK_EVERY_128_DF|128|
|_CRTDBG_CHECK_EVERY_1024_DF|1024|
|_CRTDBG_CHECK_DEFAULT_DF|0 (per impostazione predefinita, nessun controllo dell'heap)|

Per impostazione predefinita, **_CrtCheckMemory** viene chiamato ogni 1.024 volte che si **chiamano malloc**, **realloc**, **Free** e **_msize**.

Ad esempio, è possibile specificare un controllo dell'heap ogni 16 operazioni **malloc**, **realloc**, **Free** e **_msize** con il codice seguente:

```C
#include <crtdbg.h>
int main( )
{
    int tmp;

    // Get the current bits
    tmp = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);

    // Clear the upper 16 bits and OR in the desired frequency
    tmp = (tmp & 0x0000FFFF) | _CRTDBG_CHECK_EVERY_16_DF;

    // Set the new bits
    _CrtSetDbgFlag(tmp);
}
```

I 16 bit superiori del parametro *newFlag* vengono ignorati quando si specifica _CRTDBG_CHECK_ALWAYS_DF. In questo caso, **_CrtCheckMemory** viene chiamato ogni volta che si chiamano **malloc**, **realloc**, **Free** e **_msize**.

*newFlag* è il nuovo stato da applicare al **_crtDbgFlag** ed è una combinazione dei valori per ognuno dei campi di bit.

### <a name="to-change-one-or-more-of-these-bit-fields-and-create-a-new-state-for-the-flag"></a>Per modificare uno più campi di bit e creare un nuovo stato per il flag

1. Chiamare **_CrtSetDbgFlag** con *newFlag* uguale a **_CRTDBG_REPORT_FLAG** per ottenere lo stato di **_crtDbgFlag** corrente e archiviare il valore restituito in una variabile temporanea.

1. Consente di attivare qualsiasi bit tramite un **operatore OR** bit per bit della variabile temporanea con le corrispondenti maschere di bit (rappresentate nel codice dell'applicazione da costanti manifesto).

1. Disattivare gli altri bit eseguendo un'operazione **AND** tra la variabile e un operatore **NOT** bit per bit delle maschere di bit appropriate.

1. Chiamare **_CrtSetDbgFlag** con *newFlag* uguale al valore archiviato nella variabile temporanea per impostare il nuovo stato di **_crtDbgFlag**.

Il codice seguente illustra come simulare condizioni di memoria insufficiente mantenendo i blocchi di memoria liberati nell'elenco collegato dell'heap e impedire che **_CrtCheckMemory** venga chiamato a ogni richiesta di allocazione:

```C
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

Per disabilitare un flag con la funzione **_CrtSetDbgFlag** , è necessario **e** la variabile con bit per bit **not** della maschera di bit.

Se *newFlag* non è un valore valido, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce lo stato precedente di **_crtDbgFlag**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_CrtSetDbgFlag**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_crtsetdflag.c
// compile with: /c -D_DEBUG /MTd -Od -Zi -W3 /link -verbose:lib /debug

// This program concentrates on allocating and freeing memory
// blocks to test the functionality of the _crtDbgFlag flag.

#include <string.h>
#include <malloc.h>
#include <crtdbg.h>

int main( )
{
    char *p1, *p2;
    int tmpDbgFlag;

    _CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_FILE );
    _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDERR );

    // Set the debug-heap flag to keep freed blocks in the
    // heap's linked list - This will allow us to catch any
    // inadvertent use of freed memory
    tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    tmpDbgFlag |= _CRTDBG_DELAY_FREE_MEM_DF;
    tmpDbgFlag |= _CRTDBG_LEAK_CHECK_DF;
    _CrtSetDbgFlag(tmpDbgFlag);

    // Allocate 2 memory blocks and store a string in each
    p1 = malloc( 34 );
    p2 = malloc( 38 );
    strcpy_s( p1, 34, "p1 points to a Normal allocation block" );
    strcpy_s( p2, 38, "p2 points to a Client allocation block" );

    // Free both memory blocks
    free( p2 );
    free( p1 );

    // Set the debug-heap flag to no longer keep freed blocks in the
    // heap's linked list and turn on Debug type allocations (CLIENT)
    tmpDbgFlag = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    tmpDbgFlag |= _CRTDBG_ALLOC_MEM_DF;
    tmpDbgFlag &= ~_CRTDBG_DELAY_FREE_MEM_DF;
    _CrtSetDbgFlag(tmpDbgFlag);

    // Explicitly call _malloc_dbg to obtain the filename and
    // line number of our allocation request and also so we can
    // allocate CLIENT type blocks specifically for tracking
    p1 = _malloc_dbg( 40, _NORMAL_BLOCK, __FILE__, __LINE__ );
    p2 = _malloc_dbg( 40, _CLIENT_BLOCK, __FILE__, __LINE__ );
    strcpy_s( p1, 40, "p1 points to a Normal allocation block" );
    strcpy_s( p2, 40, "p2 points to a Client allocation block" );

    // _free_dbg must be called to free the CLIENT block
    _free_dbg( p2, _CLIENT_BLOCK );
    free( p1 );

    // Allocate p1 again and then exit - this will leave unfreed
    // memory on the heap
    p1 = malloc( 10 );
}
```

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[_crtDbgFlag](../../c-runtime-library/crtdbgflag.md)<br/>
[_CrtCheckMemory](crtcheckmemory.md)<br/>
