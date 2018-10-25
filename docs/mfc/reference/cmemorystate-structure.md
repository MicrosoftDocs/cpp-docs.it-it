---
title: Struttura CMemoryState | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMemoryState
dev_langs:
- C++
helpviewer_keywords:
- CMemoryState structure [MFC]
- memory leaks [MFC], detecting
- detecting memory leaks [MFC]
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 09b82a4ee1c10e009d403e0e0071cf90cb65cd86
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50082516"
---
# <a name="cmemorystate-structure"></a>Struttura CMemoryState

Fornisce un modo pratico per rilevare le perdite di memoria nel programma.

## <a name="syntax"></a>Sintassi

```
struct CMemoryState
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMemoryState::CMemoryState](#cmemorystate)|Costruisce una struttura simile a classe che consente di controllare i checkpoint di memoria.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMemoryState:: checkpoint](#checkpoint)|Ottiene uno snapshot (checkpoint) dello stato corrente della memoria.|
|[Funzioni CMemoryState::](#difference)|Calcola la differenza tra due oggetti di tipo `CMemoryState`.|
|[CMemoryState:: DumpAllObjectsSince](#dumpallobjectssince)|Scarica un riepilogo di tutti gli oggetti allocati dopo un checkpoint precedente.|
|[CMemoryState::](#dumpstatistics)|Stampa le statistiche di allocazione di memoria per un `CMemoryState` oggetto.|

## <a name="remarks"></a>Note

`CMemoryState` è una struttura e non dispone di una classe di base.

Una "perdita di memoria" si verifica quando la memoria per un oggetto viene allocata nell'heap ma non deallocata quando non è più necessaria. Tali perdite di memoria possono causare errori di memoria insufficiente. Esistono diversi modi per allocare e deallocare la memoria nel programma:

- Usando il `malloc` /  `free` della famiglia di funzioni dalla libreria run-time.

- Le funzioni di gestione API di Windows della memoria, usando `LocalAlloc` /  `LocalFree` e `GlobalAlloc` /  `GlobalFree`.

- Uso di C++ **nuove** e **eliminare** operatori.

Il `CMemoryState` diagnostica solo il rilevamento di memoria perdite causate quando la memoria allocata tramite il **nuovi** operatore non è deallocato utilizzando **eliminare**. Sono altri due gruppi di funzioni di gestione della memoria per programmi non-c + + e con la combinazione **nuove** e **eliminare** nello stesso programma non è consigliata. Una macro aggiuntiva, DEBUG_NEW, viene utilizzata per sostituire il **nuovo** operatore quando sono necessari file e traccia del numero di riga delle allocazioni di memoria. DEBUG_NEW viene utilizzato ogni volta che si userebbe normalmente il **nuovo** operatore.

Come per altre informazioni di diagnostica, il `CMemoryState` diagnostica è disponibile solo in versioni di debug del programma. Una versione di debug deve avere la costante debug definita.

Se si ritiene che il programma ha una perdita di memoria, è possibile usare la `Checkpoint`, `Difference`, e `DumpStatistics` funzioni per individuare la differenza tra lo stato di memoria (gli oggetti allocati) in due diversi momenti dell'esecuzione del programma. Queste informazioni possono essere utili per determinare se una funzione di pulitura di tutti gli oggetti che alloca.

Se è sufficiente sapere dove si verifica lo sbilanciamento nell'allocazione e deallocazione non fornisce informazioni sufficienti, è possibile usare la `DumpAllObjectsSince` funzione per eseguire il dump di tutti gli oggetti allocati dalla chiamata precedente a `Checkpoint`. Questo dump Mostra l'ordine di allocazione, il file di origine e in cui l'oggetto è stato allocato (se si usa per l'allocazione DEBUG_NEW), riga e la derivazione di oggetto, il relativo indirizzo e la dimensione. `DumpAllObjectsSince` chiama anche ogni oggetto `Dump` funzione per fornire informazioni sullo stato corrente.

Per altre informazioni su come usare `CMemoryState` e altre informazioni di diagnostica, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

> [!NOTE]
>  Le dichiarazioni di oggetti di tipo `CMemoryState` e le chiamate alle funzioni membro devono essere racchiuso tra `#if defined(_DEBUG)/#endif` direttive. In questo modo diagnostica della memoria da includere solo nelle build del programma di debug.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CMemoryState`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="checkpoint"></a>  CMemoryState:: checkpoint

Accetta uno snapshot di riepilogo della memoria e lo archivia in questo `CMemoryState` oggetto.

```
void Checkpoint();
```

### <a name="remarks"></a>Note

Il `CMemoryState` funzioni membro [differenza](#difference) e [DumpAllObjectsSince](#dumpallobjectssince) usare i dati dello snapshot.

### <a name="example"></a>Esempio

  Vedere l'esempio per la [CMemoryState](#cmemorystate) costruttore.

##  <a name="cmemorystate"></a>  CMemoryState::CMemoryState

Costruisce un oggetto vuoto `CMemoryState` oggetto che deve essere compilato dal [Checkpoint](#checkpoint) oppure [differenza](#difference) funzione membro.

```
CMemoryState();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#18](../../mfc/codesnippet/cpp/cmemorystate-structure_1.cpp)]

##  <a name="difference"></a>  Funzioni CMemoryState::

Confronta due `CMemoryState` oggetti, quindi Archivia la differenza in ciò `CMemoryState` oggetto.

```
BOOL Difference(
    const CMemoryState& oldState,
    const CMemoryState& newState);
```

### <a name="parameters"></a>Parametri

*stato precedente*<br/>
Lo stato di memoria iniziale come definito da un `CMemoryState` checkpoint.

*newState*<br/>
Il nuovo stato di memoria come definito da un `CMemoryState` checkpoint.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i due stati della memoria sono differenti. in caso contrario 0.

### <a name="remarks"></a>Note

[Checkpoint](#checkpoint) devono sono stati chiamati per ciascuno dei due parametri di stato di memoria.

### <a name="example"></a>Esempio

  Vedere l'esempio per la [CMemoryState](#cmemorystate) costruttore.

##  <a name="dumpallobjectssince"></a>  CMemoryState:: DumpAllObjectsSince

Chiama il `Dump` funzione per tutti gli oggetti di un tipo derivato dalla classe `CObject` che sono stati allocati (e vengono ancora allocate) dopo l'ultimo [Checkpoint](#checkpoint) chiamare per questo `CMemoryState` oggetto.

```
void DumpAllObjectsSince() const;

```

### <a name="remarks"></a>Note

La chiamata `DumpAllObjectsSince` con un valore non inizializzato `CMemoryState` oggetto viene eseguito il dump di tutti gli oggetti attualmente in memoria.

### <a name="example"></a>Esempio

  Vedere l'esempio per la [CMemoryState](#cmemorystate) costruttore.

##  <a name="dumpstatistics"></a>  CMemoryState::

Consente di stampare un report delle statistiche di memoria conciso da un `CMemoryState` oggetto che viene compilato tramite il [differenza](#difference) funzione membro.

```
void DumpStatistics() const;

```

### <a name="remarks"></a>Note

Il report, che viene stampato sul [afxDump](diagnostic-services.md#afxdump) dispositivo, viene visualizzato quanto segue:

Un report di esempio offre informazioni sul numero o quantità di:

- blocchi liberi

- blocchi normali

- Blocchi CRT

- Ignora i blocchi

- blocchi client

- memoria massima utilizzata dal programma in qualsiasi momento (in byte)

- memoria totale attualmente utilizzata dal programma (in byte)

I blocchi liberi rappresentano il numero di blocchi se è stato ritardato cui deallocazione `afxMemDF` è stata impostata su `delayFreeMemDF`. Per altre informazioni, vedere [afxMemDF](diagnostic-services.md#afxmemdf), nella sezione "MFC macro e funzioni globali".

### <a name="example"></a>Esempio

  Il codice seguente deve essere inserito *projname*App.cpp. Definire le variabili globali seguenti:

[!code-cpp[NVC_MFC_Utilities#40](../../mfc/codesnippet/cpp/cmemorystate-structure_2.cpp)]

Nel `InitInstance` di funzione, aggiungere la riga:

[!code-cpp[NVC_MFC_Utilities#41](../../mfc/codesnippet/cpp/cmemorystate-structure_3.cpp)]

Aggiungere un gestore per il `ExitInstance` funzione, usare il codice seguente:

[!code-cpp[NVC_MFC_Utilities#42](../../mfc/codesnippet/cpp/cmemorystate-structure_4.cpp)]

È ora possibile eseguire il programma in modalità di Debug per visualizzare l'output del `DumpStatistics` (funzione).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

