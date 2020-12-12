---
description: 'Altre informazioni su: struttura CMemoryState'
title: Struttura CMemoryState
ms.date: 11/04/2016
f1_keywords:
- CMemoryState
helpviewer_keywords:
- CMemoryState structure [MFC]
- memory leaks [MFC], detecting
- detecting memory leaks [MFC]
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
ms.openlocfilehash: fc480c986a62391561ed541de070672f3681d885
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325892"
---
# <a name="cmemorystate-structure"></a>Struttura CMemoryState

Offre un modo pratico per rilevare le perdite di memoria nel programma.

## <a name="syntax"></a>Sintassi

```
struct CMemoryState
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMemoryState:: CMemoryState](#cmemorystate)|Costruisce una struttura di tipo classe che controlla i checkpoint di memoria.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMemoryState:: Checkpoint](#checkpoint)|Ottiene uno snapshot (Checkpoint) dello stato corrente della memoria.|
|[CMemoryState::D ifference](#difference)|Calcola la differenza tra due oggetti di tipo `CMemoryState` .|
|[CMemoryState::D umpAllObjectsSince](#dumpallobjectssince)|Dump di un riepilogo di tutti gli oggetti attualmente allocati a partire da un checkpoint precedente.|
|[CMemoryState::D umpStatistics](#dumpstatistics)|Stampa le statistiche di allocazione della memoria per un `CMemoryState` oggetto.|

## <a name="remarks"></a>Commenti

`CMemoryState` è una struttura e non dispone di una classe base.

Una "perdita di memoria" si verifica quando la memoria per un oggetto viene allocata nell'heap, ma non deallocata quando non è più necessaria. Tali perdite di memoria possono causare errori di memoria insufficiente. Esistono diversi modi per allocare e deallocare memoria nel programma:

- Uso della `malloc` /  `free` famiglia di funzioni dalla libreria di Runtime.

- Utilizzando le funzioni di gestione della memoria dell'API Windows, `LocalAlloc` /  `LocalFree` e `GlobalAlloc` /  `GlobalFree` .

- Uso degli **`new`** operatori C++ e **`delete`** .

La `CMemoryState` diagnostica consente solo di rilevare le perdite di memoria causate dalla deallocazione della memoria allocata tramite l' **`new`** operatore tramite **`delete`** . Gli altri due gruppi di funzioni di gestione della memoria sono per i programmi non C + + e **`new`** non è consigliabile combinarli con e **`delete`** nello stesso programma. Viene fornita una macro aggiuntiva, DEBUG_NEW, per sostituire l' **`new`** operatore quando è necessario il rilevamento di file e numeri di riga delle allocazioni di memoria. DEBUG_NEW viene utilizzato ogni volta che in genere si utilizza l' **`new`** operatore.

Come per altri tipi di diagnostica, la `CMemoryState` diagnostica è disponibile solo nelle versioni di debug del programma. Per una versione di debug deve essere definita la costante _DEBUG.

Se si sospetta che il programma abbia una perdita di memoria, è possibile usare le `Checkpoint` `Difference` funzioni, e `DumpStatistics` per individuare la differenza tra lo stato della memoria (oggetti allocati) in due punti diversi nell'esecuzione del programma. Queste informazioni possono essere utili per determinare se una funzione sta pulendo tutti gli oggetti allocati.

Se è sufficiente sapere dove si verifica lo squilibrio durante l'allocazione e la deallocazione non fornisce informazioni sufficienti, è possibile usare la `DumpAllObjectsSince` funzione per eseguire il dump di tutti gli oggetti allocati dalla chiamata precedente a `Checkpoint` . Questo dump Mostra l'ordine di allocazione, il file di origine e la riga in cui è stato allocato l'oggetto (se si utilizza DEBUG_NEW per l'allocazione) e la derivazione dell'oggetto, il relativo indirizzo e le relative dimensioni. `DumpAllObjectsSince` chiama anche la funzione di ogni oggetto `Dump` per fornire informazioni sullo stato corrente.

Per ulteriori informazioni sull'utilizzo di `CMemoryState` e di altri tipi di diagnostica, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

> [!NOTE]
> Le dichiarazioni di oggetti di tipo `CMemoryState` e le chiamate a funzioni membro devono essere racchiuse tra le `#if defined(_DEBUG)/#endif` direttive. In questo modo, la diagnostica della memoria viene inclusa solo nelle build di debug del programma.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CMemoryState`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cmemorystatecheckpoint"></a><a name="checkpoint"></a> CMemoryState:: Checkpoint

Acquisisce un riepilogo dello snapshot della memoria e lo archivia in questo `CMemoryState` oggetto.

```cpp
void Checkpoint();
```

### <a name="remarks"></a>Commenti

Le `CMemoryState` funzioni membro [Difference](#difference) e [DumpAllObjectsSince](#dumpallobjectssince) utilizzano questi dati dello snapshot.

### <a name="example"></a>Esempio

  Vedere l'esempio per il costruttore [CMemoryState](#cmemorystate) .

## <a name="cmemorystatecmemorystate"></a><a name="cmemorystate"></a> CMemoryState:: CMemoryState

Costruisce un `CMemoryState` oggetto vuoto che deve essere compilato dalla funzione membro [Checkpoint](#checkpoint) o [Difference](#difference) .

```
CMemoryState();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#18](../../mfc/codesnippet/cpp/cmemorystate-structure_1.cpp)]

## <a name="cmemorystatedifference"></a><a name="difference"></a> CMemoryState::D ifference

Confronta due `CMemoryState` oggetti, quindi archivia la differenza in questo `CMemoryState` oggetto.

```
BOOL Difference(
    const CMemoryState& oldState,
    const CMemoryState& newState);
```

### <a name="parameters"></a>Parametri

*Stato precedente*<br/>
Stato di memoria iniziale definito da un `CMemoryState` Checkpoint.

*newState*<br/>
Nuovo stato di memoria definito da un `CMemoryState` Checkpoint.

### <a name="return-value"></a>Valore restituito

Diverso da zero se i due Stati della memoria sono diversi. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il [Checkpoint](#checkpoint) deve essere stato chiamato per ognuno dei due parametri dello stato della memoria.

### <a name="example"></a>Esempio

  Vedere l'esempio per il costruttore [CMemoryState](#cmemorystate) .

## <a name="cmemorystatedumpallobjectssince"></a><a name="dumpallobjectssince"></a> CMemoryState::D umpAllObjectsSince

Chiama la `Dump` funzione per tutti gli oggetti di un tipo derivato dalla classe `CObject` allocata (e ancora allocata) dall'ultima chiamata di [Checkpoint](#checkpoint) per questo `CMemoryState` oggetto.

```cpp
void DumpAllObjectsSince() const;
```

### <a name="remarks"></a>Commenti

`DumpAllObjectsSince`La chiamata a con un oggetto non inizializzato `CMemoryState` effettuerà il dump di tutti gli oggetti attualmente in memoria.

### <a name="example"></a>Esempio

  Vedere l'esempio per il costruttore [CMemoryState](#cmemorystate) .

## <a name="cmemorystatedumpstatistics"></a><a name="dumpstatistics"></a> CMemoryState::D umpStatistics

Stampa un report conciso Statistics Memory da un `CMemoryState` oggetto compilato dalla funzione membro [Difference](#difference) .

```cpp
void DumpStatistics() const;
```

### <a name="remarks"></a>Commenti

Il report, stampato nel dispositivo [afxDump](diagnostic-services.md#afxdump) , Mostra gli elementi seguenti:

In un report di esempio vengono fornite informazioni sul numero o sull'importo di:

- blocchi liberi

- blocchi normali

- Blocchi CRT

- Ignora blocchi

- blocchi client

- quantità massima di memoria utilizzata dal programma in qualsiasi momento (in byte)

- memoria totale attualmente utilizzata dal programma (in byte)

I blocchi liberi sono il numero di blocchi la cui deallocazione è stata posticipata se `afxMemDF` è stato impostato su `delayFreeMemDF` . Per ulteriori informazioni, vedere [afxMemDF](diagnostic-services.md#afxmemdf)nella sezione "macro MFC e Globals".

### <a name="example"></a>Esempio

  Il codice seguente deve essere inserito in *ProjName* app. cpp. Definire le variabili globali seguenti:

[!code-cpp[NVC_MFC_Utilities#40](../../mfc/codesnippet/cpp/cmemorystate-structure_2.cpp)]

Nella `InitInstance` funzione aggiungere la riga:

[!code-cpp[NVC_MFC_Utilities#41](../../mfc/codesnippet/cpp/cmemorystate-structure_3.cpp)]

Aggiungere un gestore per la `ExitInstance` funzione e usare il codice seguente:

[!code-cpp[NVC_MFC_Utilities#42](../../mfc/codesnippet/cpp/cmemorystate-structure_4.cpp)]

È ora possibile eseguire il programma in modalità di debug per visualizzare l'output della `DumpStatistics` funzione.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
