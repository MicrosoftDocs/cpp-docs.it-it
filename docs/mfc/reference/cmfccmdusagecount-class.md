---
title: Classe CMFCCmdUsageCount
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
ms.openlocfilehash: 95dca548856510cd8b06914932cc46435c28399d
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88834277"
---
# <a name="cmfccmdusagecount-class"></a>Classe CMFCCmdUsageCount

Tiene traccia del numero di utilizzi dei messaggi di Windows, ad esempio quando l'utente seleziona un elemento da un menu.

## <a name="syntax"></a>Sintassi

```
class CMFCCmdUsageCount : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|-|-|
|`CMFCCmdUsageCount::CMFCCmdUsageCount`|Costruttore predefinito.|
|`CMFCCmdUsageCount::~CMFCCmdUsageCount`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|-|-|
|[CMFCCmdUsageCount:: AddCmd](#addcmd)|Incrementa di uno il contatore associato al comando specificato.|
|[CMFCCmdUsageCount:: GetCount](#getcount)|Recupera il conteggio di utilizzo associato all'ID di comando specificato.|
|[CMFCCmdUsageCount:: HasEnoughInformation](#hasenoughinformation)|Determina se l'oggetto ha raccolto la quantità minima di dati di rilevamento.|
|[CMFCCmdUsageCount:: IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd)|Determina se il comando specificato viene utilizzato di frequente.|
|[CMFCCmdUsageCount:: Reset](#reset)|Cancella il conteggio di utilizzo di tutti i comandi.|
|[CMFCCmdUsageCount:: Serialize](#serialize)|Legge questo oggetto da un archivio o lo scrive in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CMFCCmdUsageCount:: SetOption](#setoptions)|Imposta i valori dei `CMFCCmdUsageCount` membri dati della classe condivisa.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|-|-|
|`m_CmdUsage`|`CMap`Oggetto che esegue il mapping dei comandi ai conteggi di utilizzo.|
|`m_nMinUsagePercentage`|Percentuale di utilizzo minima per un comando da utilizzare di frequente.|
|`m_nStartCount`|Il contatore iniziale utilizzato per determinare se l'oggetto ha raccolto la quantità minima di dati di rilevamento.|
|`m_nTotalUsage`|Conteggio di tutti i comandi rilevati.|

### <a name="remarks"></a>Osservazioni

La `CMFCCmdUsageCount` classe esegue il mapping di ogni identificatore di messaggio di Windows numerico a un contatore Unsigned Integer a 32 bit. `CMFCToolBar` Usa questa classe per visualizzare gli elementi della barra degli strumenti usati di frequente. Per ulteriori informazioni su `CMFCToolBar` , vedere [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).

È possibile salvare `CMFCCmdUsageCount` i dati della classe tra le esecuzioni del programma. Usare il metodo [CMFCCmdUsageCount:: Serialize](#serialize) per serializzare i dati dei membri della classe e il metodo [CMFCCmdUsageCount:: SetOption](#setoptions) per impostare i dati dei membri condivisi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCmdUsageCount](../../mfc/reference/cmfccmdusagecount-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmdusagecount. h

## <a name="cmfccmdusagecountaddcmd"></a><a name="addcmd"></a> CMFCCmdUsageCount:: AddCmd

Incrementa di uno il contatore associato al comando specificato.

```cpp
void AddCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*\
in Specifica il contatore dei comandi da incrementare.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge una nuova voce alla struttura della mappa dei conteggi dei comandi, `m_CmdUsage` , se la voce non esiste già.

Questo metodo non esegue alcuna operazione nei casi seguenti:

- Il Framework della barra degli strumenti è in modalità di personalizzazione (il metodo [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode) restituisce un valore diverso da zero).

- Il comando fa riferimento a un sottomenu o a un separatore di menu ( *uiCmd* è uguale a 0 o-1).

- *uiCmd* fa riferimento a un comando standard (la `IsStandardCommand` funzione globale restituisce un valore diverso da zero).

## <a name="cmfccmdusagecountgetcount"></a><a name="getcount"></a> CMFCCmdUsageCount:: GetCount

Recupera il conteggio di utilizzo associato all'ID di comando specificato.

```
UINT GetCount(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

*uiCmd*\
in ID del contatore dei comandi da recuperare.

### <a name="return-value"></a>Valore restituito

Conteggio di utilizzo associato all'ID di comando specificato.

## <a name="cmfccmdusagecounthasenoughinformation"></a><a name="hasenoughinformation"></a> CMFCCmdUsageCount:: HasEnoughInformation

Determina se l'oggetto ha ricevuto la quantità minima di dati di rilevamento.

```
BOOL HasEnoughInformation() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto ha ricevuto la quantità minima di dati di rilevamento. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce un valore diverso da zero se il conteggio totale, `m_nTotalUsage` , di tutti i comandi rilevati è uguale o maggiore del numero iniziale, `m_nStartCount` . Per impostazione predefinita, il Framework imposta il conteggio iniziale 0. È possibile eseguire l'override di questo valore usando il metodo [CMFCCmdUsageCount:: SetOption](#setoptions) .

Questo metodo viene usato da [CMFCMenuBar:: IsShowAllCommands](../../mfc/reference/cmfcmenubar-class.md#isshowallcommands) per determinare se visualizzare tutti i comandi di menu disponibili.

## <a name="cmfccmdusagecountisfreqeuntlyusedcmd"></a><a name="isfreqeuntlyusedcmd"></a> CMFCCmdUsageCount:: IsFreqeuntlyUsedCmd

Determina se il comando specificato viene utilizzato di frequente.

```
BOOL IsFreqeuntlyUsedCmd(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

*uiCmd*\
in Specifica il comando da controllare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando viene usato di frequente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce 0 se l'utilizzo totale del comando, `m_nTotalUsage` , è 0. In caso contrario, questo metodo restituisce un valore diverso da zero se la percentuale di utilizzo del comando specificato è maggiore della percentuale minima `m_nMinUsagePercentage` . Per impostazione predefinita, il Framework imposta la percentuale minima su 5. È possibile eseguire l'override di questo valore usando il metodo [CMFCCmdUsageCount:: SetOption](#setoptions) . Se la percentuale minima è 0, questo metodo restituisce un valore diverso da zero se il numero di comandi specificato è maggiore di 0.

[CMFCToolBar:: IsCommandRarelyUsed](../../mfc/reference/cmfctoolbar-class.md#iscommandrarelyused) usa questo metodo per determinare se un comando viene usato raramente.

## <a name="cmfccmdusagecountreset"></a><a name="reset"></a> CMFCCmdUsageCount:: Reset

Cancella il conteggio di utilizzo di tutti i comandi.

```cpp
void Reset();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per cancellare tutte le voci dalla struttura della mappa dei conteggi dei comandi, `m_CmdUsage` , e per reimpostare l'utilizzo totale del comando, `m_nTotalUsage` , Counter su 0.

## <a name="cmfccmdusagecountserialize"></a><a name="serialize"></a> CMFCCmdUsageCount:: Serialize

Legge questo oggetto da un archivio o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*AR*\
in `CArchive` Oggetto da serializzare da o a.

### <a name="remarks"></a>Osservazioni

Questo metodo serializza la struttura della mappa dei conteggi dei comandi, `m_CmdUsage` , e l'utilizzo del comando totale, `m_nTotalUsage` , il contatore da o all'archivio specificato.

Per esempi di serializzazione, vedere [serializzazione: serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

## <a name="cmfccmdusagecountsetoptions"></a><a name="setoptions"></a> CMFCCmdUsageCount:: SetOption

Imposta i valori dei `CMFCCmdUsageCount` membri dati della classe condivisa.

```
static BOOL __stdcall SetOptions(
    UINT nStartCount,
    UINT nMinUsagePercentage);
```

### <a name="parameters"></a>Parametri

*nStartCount*\
in Nuovo conteggio iniziale di tutti i comandi rilevati.

*nMinUsagePercentage*\
in Nuova percentuale di utilizzo minima.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo, FALSE se il parametro *nMinUsagePercentage* è maggiore o uguale a 100.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta rispettivamente i `CMFCCmdUsageCount` membri dati della classe condivisa `m_nStartCount` e `m_nMinUsagePercentage` *nStartCount* e *nMinUsagePercentage*. `m_nStartCount` viene usato dal metodo [CMFCCmdUsageCount:: HasEnoughInformation](#hasenoughinformation) per determinare se l'oggetto ha raccolto la quantità minima di dati di rilevamento. `m_nMinUsagePercentage` viene usato dal metodo [CMFCCmdUsageCount:: IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd) per determinare se viene usato di frequente un determinato comando.

Nelle compilazioni di debug questo metodo genera un errore di asserzione se il parametro *nMinUsagePercentage* è maggiore o uguale a 100.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
