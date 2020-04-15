---
title: CMFCCmdUsageCount (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCCmdUsageCount
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::AddCmd
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::GetCount
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::HasEnoughInformation
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::IsFreqeuntlyUsedCmd
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::Reset
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::Serialize
- AFXCMDUSAGECOUNT/CMFCCmdUsageCount::SetOptions
helpviewer_keywords:
- CMFCCmdUsageCount [MFC], AddCmd
- CMFCCmdUsageCount [MFC], GetCount
- CMFCCmdUsageCount [MFC], HasEnoughInformation
- CMFCCmdUsageCount [MFC], IsFreqeuntlyUsedCmd
- CMFCCmdUsageCount [MFC], Reset
- CMFCCmdUsageCount [MFC], Serialize
- CMFCCmdUsageCount [MFC], SetOptions
ms.assetid: 9c33b783-37c0-43ea-9f31-3c75e246c841
ms.openlocfilehash: 1c03f0c62e508f9d00a352b71c8f3a18604e36c0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367751"
---
# <a name="cmfccmdusagecount-class"></a>CMFCCmdUsageCount (classe)

Tiene traccia del conteggio di utilizzo dei messaggi di Windows, ad esempio quando l'utente seleziona un elemento da un menu.

## <a name="syntax"></a>Sintassi

```
class CMFCCmdUsageCount : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|`CMFCCmdUsageCount::CMFCCmdUsageCount`|Costruttore predefinito.|
|`CMFCCmdUsageCount::~CMFCCmdUsageCount`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCCmdUsageCount::AddCmd](#addcmd)|Incrementa di uno il contatore associato al comando specificato.|
|[CMFCCmdUsageCount::GetCount](#getcount)|Recupera il conteggio di utilizzo associato all'ID di comando specificato.|
|[CMFCCmdUsageCount::HasEnoughInformation](#hasenoughinformation)|Determina se questo oggetto ha raccolto la quantità minima di dati di rilevamento.|
|[CMFCCmdUsageCount::IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd)|Determina se il comando specificato viene utilizzato di frequente.|
|[CMFCCmdUsageCount::Reset](#reset)|Cancella il conteggio di utilizzo di tutti i comandi.|
|[CMFCCmdUsageCount::Serialize](#serialize)|Legge l'oggetto da un archivio o lo scrive in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CMFCCmdUsageCount::SetOptions](#setoptions)|Imposta i valori `CMFCCmdUsageCount` dei membri dati della classe condivisa.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|`m_CmdUsage`|Oggetto `CMap` che esegue il mapping dei comandi ai relativi conteggi di utilizzo.|
|`m_nMinUsagePercentage`|Percentuale di utilizzo minima per un comando da utilizzare di frequente.|
|`m_nStartCount`|Contatore iniziale utilizzato per determinare se l'oggetto ha raccolto la quantità minima di dati di rilevamento.|
|`m_nTotalUsage`|Conteggio di tutti i comandi rilevati.|

### <a name="remarks"></a>Osservazioni

La `CMFCCmdUsageCount` classe esegue il mapping di ogni identificatore di messaggio di Windows numerico a un contatore unsigned integer a 32 bit. `CMFCToolBar`utilizza questa classe per visualizzare gli elementi della barra degli strumenti utilizzati di frequente. Per ulteriori `CMFCToolBar`informazioni su , vedere [CMFCToolBar (classe).](../../mfc/reference/cmfctoolbar-class.md)

È possibile `CMFCCmdUsageCount` rendere persistenti i dati di classe tra le esecuzioni del programma. Utilizzare il metodo [CMFCCmdUsageCount::Serialize](#serialize) per serializzare i dati dei membri della classe e il metodo [CMFCCmdUsageCount::SetOptions](#setoptions) per impostare i dati dei membri condivisi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCmdUsageCount](../../mfc/reference/cmfccmdusagecount-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmdusagecount.h

## <a name="cmfccmdusagecountaddcmd"></a><a name="addcmd"></a>CMFCCmdUsageCount::AddCmd

Incrementa di uno il contatore associato al comando specificato.

```
void AddCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*uiCmd (informazioni in stato in questo*|[in] Specifica il contatore dei comandi da incrementare.|

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge una nuova voce alla `m_CmdUsage`struttura della mappa dei conteggi dei comandi, , se la voce non esiste già.

Questo metodo non esegue alcuna operazione nei seguenti casi:

- Il framework della barra degli strumenti è in modalità di personalizzazione (il [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode) metodo restituisce un valore diverso da zero).

- Il comando fa riferimento a un separatore di sottomenu o di menu ( *uiCmd* è uguale a 0 o -1).

- *uiCmd* fa riferimento a un `IsStandardCommand` comando standard (la funzione globale restituisce un valore diverso da zero).

## <a name="cmfccmdusagecountgetcount"></a><a name="getcount"></a>CMFCCmdUsageCount::GetCount

Recupera il conteggio di utilizzo associato all'ID di comando specificato.

```
UINT GetCount(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*uiCmd (informazioni in stato in questo*|[in] ID del contatore di comandi da recuperare.|

### <a name="return-value"></a>Valore restituito

Conteggio di utilizzo associato all'ID di comando specificato.

## <a name="cmfccmdusagecounthasenoughinformation"></a><a name="hasenoughinformation"></a>CMFCCmdUsageCount::HasEnoughInformation

Determina se questo oggetto ha ricevuto la quantità minima di dati di rilevamento.

```
BOOL HasEnoughInformation() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questo oggetto ha ricevuto la quantità minima di dati di rilevamento; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce un valore diverso `m_nTotalUsage`da zero se il conteggio totale, , `m_nStartCount`di tutti i comandi rilevati è uguale o maggiore del conteggio iniziale, . Per impostazione predefinita, il framework imposta il conteggio iniziale 0.By default, the framework sets the initial count 0. È possibile eseguire l'override di questo valore utilizzando il [CMFCCmdUsageCount::SetOptions](#setoptions) metodo.

Questo metodo viene utilizzato da [CMFCMenuBar::IsShowAllCommands](../../mfc/reference/cmfcmenubar-class.md#isshowallcommands) per determinare se visualizzare tutti i comandi di menu disponibili.

## <a name="cmfccmdusagecountisfreqeuntlyusedcmd"></a><a name="isfreqeuntlyusedcmd"></a>CMFCCmdUsageCount::IsFreqeuntlyUsedCmd

Determina se il comando specificato viene utilizzato di frequente.

```
BOOL IsFreqeuntlyUsedCmd(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*uiCmd (informazioni in stato in questo*|[in] Specifica il comando da controllare.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando viene usato di frequente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce 0 se `m_nTotalUsage`l'utilizzo totale del comando, , è 0. In caso contrario, questo metodo restituisce un valore diverso da zero `m_nMinUsagePercentage`se la percentuale di utilizzo del comando specificato è maggiore della percentuale minima, . Per impostazione predefinita, il framework imposta la percentuale minima su 5. È possibile eseguire l'override di questo valore utilizzando il [CMFCCmdUsageCount::SetOptions](#setoptions) metodo. Se la percentuale minima è 0, questo metodo restituisce un valore diverso da zero se il conteggio dei comandi specificato è maggiore di 0.

[CMFCToolBar::IsCommandRarelyUsed](../../mfc/reference/cmfctoolbar-class.md#iscommandrarelyused) utilizza questo metodo per determinare se un comando viene utilizzato raramente.

## <a name="cmfccmdusagecountreset"></a><a name="reset"></a>CMFCCmdUsageCount::Reset

Cancella il conteggio di utilizzo di tutti i comandi.

```
void Reset();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per cancellare tutte le voci `m_CmdUsage`dalla struttura della mappa `m_nTotalUsage`dei conteggi dei comandi, e per reimpostare l'utilizzo totale del comando, , counter su 0.

## <a name="cmfccmdusagecountserialize"></a><a name="serialize"></a>CMFCCmdUsageCount::Serialize

Legge l'oggetto da un archivio o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*Ar*|[in] Oggetto `CArchive` da serializzare da o verso.|

### <a name="remarks"></a>Osservazioni

Questo metodo serializza la struttura `m_CmdUsage`della mappa dei `m_nTotalUsage`conteggi dei comandi, , e l'utilizzo totale dei comandi, , contatore da o nell'archivio specificato.

Per esempi di serializzazione, vedere [Serializzazione: serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

## <a name="cmfccmdusagecountsetoptions"></a><a name="setoptions"></a>CMFCCmdUsageCount::SetOptions

Imposta i valori `CMFCCmdUsageCount` dei membri dati della classe condivisa.

```
static BOOL __stdcall SetOptions(
    UINT nStartCount,
    UINT nMinUsagePercentage);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*nNumeroInizioInizio (Start)*|[in] Il nuovo conteggio iniziale di tutti i comandi rilevati.|
|*nMinUsagePercentuale*|[in] Nuova percentuale di utilizzo minima.|

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo, FALSE se il *nMinUsagePercentage* parametro è maggiore o uguale a 100.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta `CMFCCmdUsageCount` i `m_nStartCount` membri `m_nMinUsagePercentage` dati della classe condivisa e *su nStartCount* e *nMinUsagePercentage*rispettivamente. `m_nStartCount`viene utilizzato dal [CMFCCmdUsageCount::HasEnoughInformation](#hasenoughinformation) metodo per determinare se questo oggetto ha raccolto la quantità minima di dati di rilevamento. `m_nMinUsagePercentage`viene utilizzato dal [CMFCCmdUsageCount::IsFreqeuntlyUsedCmd metodo](#isfreqeuntlyusedcmd) per determinare se un determinato comando viene utilizzato di frequente.

In Debug compila questo metodo genera un errore di asserzione se il parametro *nMinUsagePercentage* è maggiore o uguale a 100.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)
