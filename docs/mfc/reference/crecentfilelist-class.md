---
description: 'Altre informazioni su: classe CRecentFileList'
title: Classe CRecentFileList
ms.date: 11/04/2016
f1_keywords:
- CRecentFileList
- AFXADV/CRecentFileList
- AFXADV/CRecentFileList::CRecentFileList
- AFXADV/CRecentFileList::Add
- AFXADV/CRecentFileList::GetDisplayName
- AFXADV/CRecentFileList::GetSize
- AFXADV/CRecentFileList::ReadList
- AFXADV/CRecentFileList::Remove
- AFXADV/CRecentFileList::UpdateMenu
- AFXADV/CRecentFileList::WriteList
helpviewer_keywords:
- CRecentFileList [MFC], CRecentFileList
- CRecentFileList [MFC], Add
- CRecentFileList [MFC], GetDisplayName
- CRecentFileList [MFC], GetSize
- CRecentFileList [MFC], ReadList
- CRecentFileList [MFC], Remove
- CRecentFileList [MFC], UpdateMenu
- CRecentFileList [MFC], WriteList
ms.assetid: a77f0524-7584-4582-849a-7e97b76d186e
ms.openlocfilehash: 9433e65336cba1018c7bff8cf3a90e239ae5e3eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301126"
---
# <a name="crecentfilelist-class"></a>Classe CRecentFileList

Supporta il controllo dell'elenco dei file usati di recente.

## <a name="syntax"></a>Sintassi

```
class CRecentFileList
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CRecentFileList:: CRecentFileList](#crecentfilelist)|Costruisce un oggetto `CRecentFileList`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CRecentFileList:: Add](#add)|Aggiunge un file all'elenco di file MRU.|
|[CRecentFileList:: GetDisplayName](#getdisplayname)|Fornisce un nome visualizzato per la visualizzazione del menu di un nome file MRU.|
|[CRecentFileList:: GetSize](#getsize)|Recupera il numero di file nell'elenco di file MRU.|
|[CRecentFileList:: Readin](#readlist)|Legge l'elenco dei file MRU dal registro di sistema o. File INI.|
|[CRecentFileList:: Remove](#remove)|Rimuove un file dall'elenco di file MRU.|
|[CRecentFileList:: UpdateMenu](#updatemenu)|Aggiorna la visualizzazione del menu dell'elenco di file MRU.|
|[CRecentFileList:: writes](#writelist)|Scrive l'elenco di file MRU dal registro di sistema o. File INI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore \[ CRecentFileList:: \]](#operator_at)|Restituisce un `CString` oggetto in una posizione specificata.|

## <a name="remarks"></a>Commenti

I file possono essere aggiunti o eliminati dall'elenco di file MRU, l'elenco di file può essere letto o scritto nel registro di sistema o in un. Il file INI e il menu che Visualizza l'elenco dei file MRU possono essere aggiornati.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRecentFileList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv. h

## <a name="crecentfilelistadd"></a><a name="add"></a> CRecentFileList:: Add

Aggiunge un file all'elenco dei file utilizzati più di recente (MRU).

```
virtual void Add(LPCTSTR lpszPathName);

virtual void Add(
    LPCTSTR lpszPathName,
    LPCTSTR lpszAppID);

void Add(
    IShellItem* pItem,
    LPCTSTR lpszAppID);

void Add(
    IShellLink* pLink,
    LPCTSTR lpszAppID);

void Add(
    PIDLIST_ABSOLUTE pidl,
    LPCTSTR lpszAppID);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Specifica il percorso da aggiungere all'elenco.

*lpszAppID*<br/>
Specifica l'ID del modello utente dell'applicazione per l'applicazione.

*pItem*<br/>
Specifica un puntatore all'elemento della shell da aggiungere all'elenco.

*pLink*<br/>
Specifica un puntatore al collegamento della shell da aggiungere all'elenco.

*PIDL*<br/>
Specifica il IDLIST per l'elemento della shell che deve essere aggiunto alla cartella docs recente.

### <a name="remarks"></a>Commenti

Il nome del file verrà aggiunto all'inizio dell'elenco MRU. Se il nome file è già presente nell'elenco MRU, verrà spostato in alto.

## <a name="crecentfilelistcrecentfilelist"></a><a name="crecentfilelist"></a> CRecentFileList:: CRecentFileList

Costruisce un oggetto `CRecentFileList`.

```
CRecentFileList(
    UINT nStart,
    LPCTSTR lpszSection,
    LPCTSTR lpszEntryFormat,
    int nSize,
    int nMaxDispLen = AFX_ABBREV_FILENAME_LEN);
```

### <a name="parameters"></a>Parametri

*nStart*<br/>
Offset per la numerazione nella visualizzazione del menu dell'elenco di file MRU (usato più di recente).

*lpszSection*<br/>
Punta al nome della sezione del registro di sistema o dell'applicazione. File INI in cui l'elenco dei file MRU viene letto e/o scritto.

*lpszEntryFormat*<br/>
Punta a una stringa di formato da utilizzare per i nomi delle voci archiviate nel registro di sistema o dell'applicazione. File INI.

*nSize*<br/>
Numero massimo di file nell'elenco di file MRU.

*nMaxDispLen*<br/>
Lunghezza massima, in caratteri, disponibile per la visualizzazione del menu di un nome di file nell'elenco di file MRU.

### <a name="remarks"></a>Commenti

La stringa di formato a cui punta *lpszEntryFormat* deve contenere "% d", che verrà usata per sostituire l'indice di ogni elemento MRU. Se, ad esempio, la stringa di formato è, `"file%d"` le voci verranno denominate `file0` , `file1` e così via.

## <a name="crecentfilelistgetdisplayname"></a><a name="getdisplayname"></a> CRecentFileList:: GetDisplayName

Ottiene un nome visualizzato per un file nell'elenco di file MRU, da usare nella visualizzazione del menu dell'elenco MRU.

```
virtual BOOL GetDisplayName(
    CString& strName,
    int nIndex,
    LPCTSTR lpszCurDir,
    int nCurDir,
    BOOL bAtLeastName = TRUE) const;
```

### <a name="parameters"></a>Parametri

*strName*<br/>
Percorso completo del file il cui nome deve essere visualizzato nell'elenco dei menu di file MRU.

*nIndex*<br/>
Indice in base zero del file nell'elenco di file MRU.

*lpszCurDir*<br/>
Stringa che contiene la directory corrente.

*nCurDir*<br/>
Lunghezza della stringa di directory corrente.

*bAtLeastName*<br/>
Se diverso da zero, indica che deve essere restituito il nome di base del file, anche se supera la lunghezza massima di visualizzazione (passata come parametro *nMaxDispLen* al `CRecentFileList` costruttore).

### <a name="return-value"></a>Valore restituito

**False** se non è presente alcun nome file in corrispondenza dell'indice specificato nell'elenco dei file usati di recente (MRU).

### <a name="remarks"></a>Commenti

Se il file si trova nella directory corrente, la funzione lascia la directory fuori dallo schermo. Se il nome del file è troppo lungo, la directory e l'estensione vengono rimossi. Se il nome del file è ancora troppo lungo, il nome visualizzato viene impostato su una stringa vuota, a meno che *bAtLeastName* non sia diverso da zero.

## <a name="crecentfilelistgetsize"></a><a name="getsize"></a> CRecentFileList:: GetSize

Recupera il numero di file nell'elenco di file MRU.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di file nell'elenco dei file utilizzati più di recente (MRU) corrente.

## <a name="crecentfilelistoperator--"></a><a name="operator_at"></a> CRecentFileList:: operator []

L'operatore pedice () di overload `[]` restituisce un singolo `CString` oggetto specificato dall'indice in base zero in *nIndex*.

```
CString& operator[ ](int nindex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero di un oggetto `CString` in un set di oggetti `CString` .

## <a name="crecentfilelistreadlist"></a><a name="readlist"></a> CRecentFileList:: Readin

Legge l'elenco dei file usati di recente (MRU) dal registro di sistema o dall'applicazione. File INI.

```
virtual void ReadList();
```

## <a name="crecentfilelistremove"></a><a name="remove"></a> CRecentFileList:: Remove

Rimuove un file dall'elenco di file MRU.

```
virtual void Remove(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del file da rimuovere dall'elenco dei file usati di recente (MRU).

## <a name="crecentfilelistupdatemenu"></a><a name="updatemenu"></a> CRecentFileList:: UpdateMenu

Aggiorna la visualizzazione del menu dell'elenco di file MRU.

```
virtual void UpdateMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore all'oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) per il menu dell'elenco dei file usati di recente (MRU).

## <a name="crecentfilelistwritelist"></a><a name="writelist"></a> CRecentFileList:: writes

Scrive l'elenco dei file usati di recente (MRU) nel registro di sistema o nell'applicazione. File INI.

```
virtual void WriteList();
```

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
