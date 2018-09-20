---
title: Classe CMFCCmdUsageCount | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CMFCCmdUsageCount [MFC], AddCmd
- CMFCCmdUsageCount [MFC], GetCount
- CMFCCmdUsageCount [MFC], HasEnoughInformation
- CMFCCmdUsageCount [MFC], IsFreqeuntlyUsedCmd
- CMFCCmdUsageCount [MFC], Reset
- CMFCCmdUsageCount [MFC], Serialize
- CMFCCmdUsageCount [MFC], SetOptions
ms.assetid: 9c33b783-37c0-43ea-9f31-3c75e246c841
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2a30be41a1f0beb407bae41512b11b27ee31cf9a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46448363"
---
# <a name="cmfccmdusagecount-class"></a>Classe CMFCCmdUsageCount

Registra il conteggio di utilizzo di messaggi di Windows, ad esempio quando l'utente seleziona un elemento da un menu.

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
|[CMFCCmdUsageCount::AddCmd](#addcmd)|Viene incrementato di uno il contatore associato con il comando specificato.|
|[CMFCCmdUsageCount::GetCount](#getcount)|Recupera il conteggio di utilizzo associato con l'ID del comando specificato.|
|[CMFCCmdUsageCount::HasEnoughInformation](#hasenoughinformation)|Determina se questo oggetto ha raccolto la quantità minima di dati di rilevamento.|
|[CMFCCmdUsageCount::IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd)|Determina se il comando specificato viene usato di frequente.|
|[CMFCCmdUsageCount::Reset](#reset)|Cancella il conteggio di utilizzo di tutti i comandi.|
|[CMFCCmdUsageCount::Serialize](#serialize)|Legge l'oggetto da un archivio o lo scrive in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CMFCCmdUsageCount::SetOptions](#setoptions)|Imposta i valori di condivisi `CMFCCmdUsageCount` membri dati della classe.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|nome|Descrizione|
|`m_CmdUsage`|Oggetto `CMap` oggetto che esegue il mapping di comandi per i conteggi dell'utilizzo.|
|`m_nMinUsagePercentage`|La percentuale di utilizzo minima per un comando per essere più frequente.|
|`m_nStartCount`|Il contatore di avvio che viene usato per determinare se questo oggetto ha raccolto la quantità minima di dati di rilevamento.|
|`m_nTotalUsage`|Il numero di comandi tutto viene monitorati.|

### <a name="remarks"></a>Note

Il `CMFCCmdUsageCount` classe esegue il mapping di ogni identificatore di messaggio Windows numerico per un contatore intero senza segno a 32 bit. `CMFCToolBar` utilizza questa classe per visualizzare gli elementi usati di frequente della barra degli strumenti. Per altre informazioni sulle `CMFCToolBar`, vedere [classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).

È possibile rendere persistenti `CMFCCmdUsageCount` classe dei dati tra le esecuzioni del programma. Usare la [CMFCCmdUsageCount::Serialize](#serialize) metodo per serializzare i dati dei membri di classe e il [CMFCCmdUsageCount::SetOptions](#setoptions) metodo per impostare i dati dei membri condivisi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCCmdUsageCount](../../mfc/reference/cmfccmdusagecount-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmdusagecount.h

##  <a name="addcmd"></a>  CMFCCmdUsageCount::AddCmd

Viene incrementato di uno il contatore associato con il comando specificato.

```
void AddCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*uiCmd*|[in] Specifica il contatore di comando da incrementare.|

### <a name="remarks"></a>Note

Questo metodo aggiunge una nuova voce per la struttura della mappa dei conteggi di comando, `m_CmdUsage`, se la voce non esiste già.

Questo metodo non esegue alcuna operazione nei casi seguenti:

- Il framework della barra degli strumenti è in modalità di personalizzazione (il [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode) metodo restituisce un valore diverso da zero).

- Il comando fa riferimento a un separatore di menu o di sottomenu ( *uiCmd* uguale a 0 o -1).

- *uiCmd* fa riferimento a un comando standard (globale `IsStandardCommand` funzione restituisce un valore diverso da zero).

##  <a name="getcount"></a>  CMFCCmdUsageCount::GetCount

Recupera il conteggio di utilizzo associato con l'ID del comando specificato.

```
UINT GetCount(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*uiCmd*|[in] L'ID del contatore comando da recuperare.|

### <a name="return-value"></a>Valore restituito

Il conteggio di utilizzo associato con l'ID del comando specificato.

##  <a name="hasenoughinformation"></a>  CMFCCmdUsageCount::HasEnoughInformation

Determina se questo oggetto ha ricevuto la quantità minima di dati di rilevamento.

```
BOOL HasEnoughInformation() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto ha ricevuto la quantità minima di rilevamento dei dati; in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo restituisce un valore diverso da zero se il conteggio totale `m_nTotalUsage`, di comandi tutto viene monitorati è uguale o superiore rispetto al numero iniziale, `m_nStartCount`. Per impostazione predefinita, il framework imposta il numero iniziale di 0. È possibile eseguire l'override di questo valore usando il [CMFCCmdUsageCount::SetOptions](#setoptions) (metodo).

Questo metodo viene utilizzato da [CMFCMenuBar::IsShowAllCommands](../../mfc/reference/cmfcmenubar-class.md#isshowallcommands) per determinare se visualizzare tutti i comandi di menu disponibili.

##  <a name="isfreqeuntlyusedcmd"></a>  CMFCCmdUsageCount::IsFreqeuntlyUsedCmd

Determina se il comando specificato viene usato di frequente.

```
BOOL IsFreqeuntlyUsedCmd(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*uiCmd*|[in] Specifica il comando da controllare.|

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando è frequente; in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo restituisce 0 se l'uso del comando totale, `m_nTotalUsage`, è 0. In caso contrario, questo metodo restituisce diverso da zero se la percentuale di cui viene usato il comando specificato è maggiore è la percentuale minima, `m_nMinUsagePercentage`. Per impostazione predefinita, il framework imposta la percentuale minima di 5. È possibile eseguire l'override di questo valore usando il [CMFCCmdUsageCount::SetOptions](#setoptions) (metodo). Se la percentuale minima è 0, questo metodo restituisce diverso da zero se il conteggio di comando specificato è maggiore di 0.

[CMFCToolBar::IsCommandRarelyUsed](../../mfc/reference/cmfctoolbar-class.md#iscommandrarelyused) Usa questo metodo per determinare se un comando viene usato raramente.

##  <a name="reset"></a>  CMFCCmdUsageCount::Reset

Cancella il conteggio di utilizzo di tutti i comandi.

```
void Reset();
```

### <a name="remarks"></a>Note

Chiamare questo metodo per cancellare tutte le voci dalla struttura di mappa dei conteggi, comandi `m_CmdUsage`e reimpostare l'uso del comando totale, `m_nTotalUsage`, contatore su 0.

##  <a name="serialize"></a>  CMFCCmdUsageCount::Serialize

Legge l'oggetto da un archivio, o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*ar*|[in] Oggetto `CArchive` oggetto da serializzare da o a.|

### <a name="remarks"></a>Note

Questo metodo serializza la struttura della mappa del comando conteggi `m_CmdUsage`e l'uso del comando totale, `m_nTotalUsage`, contatore da o verso l'archivio specificato.

Per esempi di serializzazione, vedere [serializzazione: serializzazione di un oggetto](../../mfc/serialization-serializing-an-object.md).

##  <a name="setoptions"></a>  CMFCCmdUsageCount::SetOptions

Imposta i valori di condivisi `CMFCCmdUsageCount` membri dati della classe.

```
static BOOL __stdcall SetOptions(
    UINT nStartCount,
    UINT nMinUsagePercentage);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*nStartCount*|[in] Il nuovo conteggio iniziale di comandi tutto viene monitorati.|
|*nMinUsagePercentage*|[in] La percentuale di utilizzo minimo della nuova.|

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo, FALSE se il *nMinUsagePercentage* parametro è maggiore o uguale a 100.

### <a name="remarks"></a>Note

Questo metodo imposta condiviso `CMFCCmdUsageCount` membri dati della classe `m_nStartCount` e `m_nMinUsagePercentage` al *nStartCount* e *nMinUsagePercentage*, rispettivamente. `m_nStartCount` viene usato per il [CMFCCmdUsageCount::HasEnoughInformation](#hasenoughinformation) metodo per determinare se questo oggetto ha raccolto la quantità minima di dati di rilevamento. `m_nMinUsagePercentage` viene usato per il [CMFCCmdUsageCount::IsFreqeuntlyUsedCmd](#isfreqeuntlyusedcmd) metodo per determinare se un comando specificato è frequente.

Nelle build di Debug questo metodo genera un errore di asserzione se il *nMinUsagePercentage* parametro è maggiore o uguale a 100.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)
