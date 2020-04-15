---
title: Struttura CMemoryState
ms.date: 11/04/2016
f1_keywords:
- CMemoryState
helpviewer_keywords:
- CMemoryState structure [MFC]
- memory leaks [MFC], detecting
- detecting memory leaks [MFC]
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
ms.openlocfilehash: 8f49a9faf70673c62167deeaa1bef33e4882378f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369992"
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
|[CMemoryState::CMemoryState](#cmemorystate)|Costruisce una struttura simile a una classe che controlla i checkpoint di memoria.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMemoryState::Checkpoint](#checkpoint)|Ottiene uno snapshot (checkpoint) dello stato della memoria corrente.|
|[CMemoryState::Difference](#difference)|Calcola la differenza tra `CMemoryState`due oggetti di tipo .|
|[CMemoryState::DumpAllObjectsSince](#dumpallobjectssince)|Esegue il dump di un riepilogo di tutti gli oggetti attualmente allocati dopo un checkpoint precedente.|
|[CMemoryState::DumpStatistics](#dumpstatistics)|Stampa le statistiche di `CMemoryState` allocazione della memoria per un oggetto.|

## <a name="remarks"></a>Osservazioni

`CMemoryState`è una struttura e non dispone di una classe base.

Una "perdita di memoria" si verifica quando la memoria per un oggetto viene allocata nell'heap ma non deallocata quando non è più necessaria. Tali perdite di memoria possono eventualmente portare a errori di memoria insufficiente. Esistono diversi modi per allocare e deallocare la memoria nel programma:

- Utilizzo `malloc` /  `free` della famiglia di funzioni della libreria di runtime.

- Utilizzando `LocalAlloc` /  `LocalFree` le funzioni di gestione `GlobalAlloc` /  `GlobalFree`della memoria dell'API di Windows e .

- Utilizzo degli operatori **new** e **delete** di C.

La `CMemoryState` diagnostica consente solo di rilevare le perdite di memoria causate quando la memoria allocata utilizzando l'operatore **new** non viene deallocata tramite **delete**. Gli altri due gruppi di funzioni di gestione della memoria sono per i programmi non C , e la loro combinazione con **new** e **delete** nello stesso programma non è raccomandato. Viene fornita una macro aggiuntiva, DEBUG_NEW, per sostituire l'operatore **new** quando è necessario il rilevamento di file e numeri di riga delle allocazioni di memoria. DEBUG_NEW viene utilizzato ogni volta che si utilizza normalmente l'operatore **new.**

Come con altre `CMemoryState` diagnosi, la diagnostica è disponibile solo nelle versioni di debug del programma. Una versione di debug deve avere la _DEBUG costante definita.

Se si sospetta che il programma abbia `Checkpoint`una `Difference`perdita di memoria, è possibile utilizzare le funzioni , e `DumpStatistics` per individuare la differenza tra lo stato della memoria (oggetti allocati) in due punti diversi dell'esecuzione del programma. Queste informazioni possono essere utili per determinare se una funzione sta pulendo tutti gli oggetti allocati.

Se la semplice conoscenza dello squilibrio nell'allocazione e nella `DumpAllObjectsSince` deallocazione non fornisce informazioni sufficienti, è possibile utilizzare la funzione per eseguire il dump di tutti gli oggetti allocati dalla chiamata precedente a `Checkpoint`. Questo dump mostra l'ordine di allocazione, il file di origine e la riga in cui è stato allocato l'oggetto (se si utilizza DEBUG_NEW per l'allocazione) e la derivazione dell'oggetto, il relativo indirizzo e le relative dimensioni. `DumpAllObjectsSince`chiama anche la `Dump` funzione di ogni oggetto per fornire informazioni sullo stato corrente.

Per ulteriori informazioni su `CMemoryState` come utilizzare e altri controlli, vedere [Debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

> [!NOTE]
> Le dichiarazioni di `CMemoryState` oggetti di tipo e le `#if defined(_DEBUG)/#endif` chiamate alle funzioni membro devono essere racchiuse tra parentesi quadre dalle direttive. In questo modo la diagnostica della memoria da includere solo nelle build di debug del programma.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CMemoryState`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cmemorystatecheckpoint"></a><a name="checkpoint"></a>CMemoryState::Checkpoint

Crea un riepilogo della memoria dello `CMemoryState` snapshot e lo archivia in questo oggetto.

```
void Checkpoint();
```

### <a name="remarks"></a>Osservazioni

Le `CMemoryState` funzioni membro [Difference](#difference) e [DumpAllObjectsSince](#dumpallobjectssince) utilizzano questi dati dello snapshot.

### <a name="example"></a>Esempio

  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.

## <a name="cmemorystatecmemorystate"></a><a name="cmemorystate"></a>CMemoryState::CMemoryState

Costruisce un `CMemoryState` oggetto vuoto che deve essere compilato dalla funzione membro [Checkpoint](#checkpoint) o [Difference.](#difference)

```
CMemoryState();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#18](../../mfc/codesnippet/cpp/cmemorystate-structure_1.cpp)]

## <a name="cmemorystatedifference"></a><a name="difference"></a>CMemoryState::Difference

Confronta due `CMemoryState` oggetti, quindi memorizza `CMemoryState` la differenza in questo oggetto.

```
BOOL Difference(
    const CMemoryState& oldState,
    const CMemoryState& newState);
```

### <a name="parameters"></a>Parametri

*oldState*<br/>
Stato di memoria iniziale `CMemoryState` definito da un checkpoint.

*newState*<br/>
Nuovo stato di memoria `CMemoryState` definito da un checkpoint.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i due stati di memoria sono diversi; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

[Il checkpoint](#checkpoint) deve essere stato chiamato per ognuno dei due parametri dello stato di memoria.

### <a name="example"></a>Esempio

  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.

## <a name="cmemorystatedumpallobjectssince"></a><a name="dumpallobjectssince"></a>CMemoryState::DumpAllObjectsSince

Chiama `Dump` la funzione per tutti gli `CObject` oggetti di un tipo derivato dalla classe che `CMemoryState` sono stati allocati (e sono ancora allocati) dall'ultima chiamata [Checkpoint](#checkpoint) per questo oggetto.

```
void DumpAllObjectsSince() const;
```

### <a name="remarks"></a>Osservazioni

La `DumpAllObjectsSince` chiamata con `CMemoryState` un oggetto non inizializzato eseguirà il dump di tutti gli oggetti attualmente in memoria.

### <a name="example"></a>Esempio

  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.

## <a name="cmemorystatedumpstatistics"></a><a name="dumpstatistics"></a>CMemoryState::DumpStatistics

Stampa un report di statistiche di `CMemoryState` memoria conciso da un oggetto che viene compilato dalla funzione membro [Difference.](#difference)

```
void DumpStatistics() const;
```

### <a name="remarks"></a>Osservazioni

Il report, che viene stampato sul dispositivo [afxDump,](diagnostic-services.md#afxdump) mostra quanto segue:

Un rapporto di esempio fornisce informazioni sul numero (o l'importo) di:

- blocchi liberi

- blocchi normali

- Blocchi CRT

- ignorare i blocchi

- blocchi client

- memoria massima utilizzata dal programma in qualsiasi momento (in byte)

- memoria totale attualmente utilizzata dal programma (in byte)

I blocchi liberi sono il numero di `afxMemDF` blocchi la `delayFreeMemDF`cui deallocazione è stata ritardata se è stata impostata su . Per ulteriori informazioni, vedere [afxMemDF](diagnostic-services.md#afxmemdf), nella sezione "Mfc Macros and Globals".

### <a name="example"></a>Esempio

  Il codice seguente deve essere inserito in *projname*App.cpp. Definire le seguenti variabili globali:

[!code-cpp[NVC_MFC_Utilities#40](../../mfc/codesnippet/cpp/cmemorystate-structure_2.cpp)]

Nella `InitInstance` funzione, aggiungere la riga:

[!code-cpp[NVC_MFC_Utilities#41](../../mfc/codesnippet/cpp/cmemorystate-structure_3.cpp)]

Aggiungere un gestore per la funzione e usare il codice seguente:Add a handler for the `ExitInstance` function and use the following code:

[!code-cpp[NVC_MFC_Utilities#42](../../mfc/codesnippet/cpp/cmemorystate-structure_4.cpp)]

È ora possibile eseguire il programma in modalità Debug per visualizzare l'output della `DumpStatistics` funzione.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
