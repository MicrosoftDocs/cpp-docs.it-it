---
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
ms.openlocfilehash: a2102c6a39c14c548828e57ad1c49de6a5bc03dd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370901"
---
# <a name="crecentfilelist-class"></a>Classe CRecentFileList

Supporta il controllo dell'elenco dei file usati di recente.

## <a name="syntax"></a>Sintassi

```
class CRecentFileList
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecentFileList::CRecentFileList](#crecentfilelist)|Costruisce un oggetto `CRecentFileList`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecentFileList::Add](#add)|Aggiunge un file all'elenco di file MRU.|
|[CRecentFileList::GetDisplayName](#getdisplayname)|Fornisce un nome visualizzato per la visualizzazione di menu di un nome file MRU.|
|[CRecentFileList::GetSize](#getsize)|Recupera il numero di file nell'elenco di file MRU.|
|[CRecentFileList::ReadList](#readlist)|Legge l'elenco dei file MRU dal Registro di sistema o . INI.|
|[CRecentFileList::Rimuovere](#remove)|Rimuove un file dall'elenco dei file MRU.|
|[CRecentFileList::UpdateMenu](#updatemenu)|Aggiorna la visualizzazione del menu dell'elenco di file MRU.|
|[CRecentFileList::WriteList](#writelist)|Scrive l'elenco di file MRU dal Registro di sistema o . INI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecentFileList::operatore \[\]](#operator_at)|Restituisce `CString` un oggetto in una posizione specificata.|

## <a name="remarks"></a>Osservazioni

I file possono essere aggiunti o eliminati dall'elenco dei file MRU, l'elenco dei file può essere letto o scritto nel Registro di sistema o in un file . INI e il menu che visualizza l'elenco dei file MRU possono essere aggiornati.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRecentFileList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

## <a name="crecentfilelistadd"></a><a name="add"></a>CRecentFileList::Add

Aggiunge un file all'elenco di file utilizzati più di recente.

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

*LpszPathName (nome di metodo)*<br/>
Specifica il nome del percorso da aggiungere all'elenco.

*lpszAppID (IDP)*<br/>
Specifica l'ID modello utente dell'applicazione.

*pItem (elemento)*<br/>
Specifica un puntatore all'elemento shell da aggiungere all'elenco.

*pLink (collegamento)*<br/>
Specifica un puntatore a Shell Link da aggiungere all'elenco.

*pidl*<br/>
Specifica l'IDLIST per l'elemento della shell che deve essere aggiunto alla cartella documenti recente.

### <a name="remarks"></a>Osservazioni

Il nome del file verrà aggiunto all'inizio dell'elenco MRU. Se il nome del file esiste già nell'elenco MRU, verrà spostato all'inizio.

## <a name="crecentfilelistcrecentfilelist"></a><a name="crecentfilelist"></a>CRecentFileList::CRecentFileList

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

*nInizio*<br/>
Offset per la numerazione nella visualizzazione menu dell'elenco dei file MRU (utilizzati più di recente).

*lpszSezione*<br/>
Punta al nome della sezione del Registro di sistema o al file . INI in cui viene letto e/o scritto l'elenco dei file MRU.

*LpszEntryFormat (formato lpszEntryFormat)*<br/>
Punta a una stringa di formato da utilizzare per i nomi delle voci memorizzate nel Registro di sistema o per il file . INI.

*nDimensioni*<br/>
Numero massimo di file nell'elenco dei file MRU.

*nMaxDispLen*<br/>
Lunghezza massima, in caratteri, disponibile per la visualizzazione del menu di un nome file nell'elenco dei file MRU.

### <a name="remarks"></a>Osservazioni

La stringa di formato a cui fa riferimento *lpszEntryFormat* deve contenere "%d", che verrà utilizzata per la sostituzione dell'indice di ogni elemento MRU. Ad esempio, se la `"file%d"` stringa di formato `file0`è `file1`quindi, le voci saranno denominate , e così via.

## <a name="crecentfilelistgetdisplayname"></a><a name="getdisplayname"></a>CRecentFileList::GetDisplayName

Ottiene un nome visualizzato per un file nell'elenco di file MRU, da utilizzare nella visualizzazione menu dell'elenco MRU.

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
Percorso completo del file il cui nome deve essere visualizzato nell'elenco dei menu dei file MRU.

*nIndex*<br/>
Indice in base zero del file nell'elenco dei file MRU.

*lpszCurDir*<br/>
Stringa contenente la directory corrente.

*nCurDir (informazioni in base alla proprietà del*<br/>
Lunghezza della stringa di directory corrente.

*bAtLeastName (nome da lavoro)*<br/>
Se diverso da zero, indica che deve essere restituito il nome di base del file, anche se supera la `CRecentFileList` lunghezza massima di visualizzazione (passato come *nMaxDispLen* parametro al costruttore).

### <a name="return-value"></a>Valore restituito

**FALSE** se non è presente alcun nome file in corrispondenza dell'indice specificato nell'elenco di file utilizzati più di recente (MRU).

### <a name="remarks"></a>Osservazioni

Se il file si trova nella directory corrente, la funzione lascia la directory fuori dal display. Se il nome del file è troppo lungo, la directory e l'estensione vengono rimosse. Se il nome del file è ancora troppo lungo, il nome visualizzato viene impostato su una stringa vuota a meno che *bAtLeastName* non sia uguale a zero.

## <a name="crecentfilelistgetsize"></a><a name="getsize"></a>CRecentFileList::GetSize

Recupera il numero di file nell'elenco di file MRU.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di file nell'elenco di file attualmente utilizzati più di recente.

## <a name="crecentfilelistoperator--"></a><a name="operator_at"></a>CRecentFileList::operator [ ]

L'operatore di`[]`indice di `CString` overload ( ) restituisce un singolo specificato dall'indice in base zero in *nIndex*.

```
CString& operator[ ](int nindex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base `CString` zero di `CString`a in un set di s.

## <a name="crecentfilelistreadlist"></a><a name="readlist"></a>CRecentFileList::ReadList

Legge l'elenco dei file utilizzati più di recente (MRU) dal Registro di sistema o dal file . INI.

```
virtual void ReadList();
```

## <a name="crecentfilelistremove"></a><a name="remove"></a>CRecentFileList::Rimuovere

Rimuove un file dall'elenco dei file MRU.

```
virtual void Remove(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del file da rimuovere dall'elenco di file utilizzati più di recente.

## <a name="crecentfilelistupdatemenu"></a><a name="updatemenu"></a>CRecentFileList::UpdateMenu

Aggiorna la visualizzazione del menu dell'elenco di file MRU.

```
virtual void UpdateMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI (informazioni in questo stato in stato in*<br/>
Puntatore all'oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) per il menu dell'elenco di file utilizzati più di recente.

## <a name="crecentfilelistwritelist"></a><a name="writelist"></a>CRecentFileList::WriteList

Scrive l'elenco di file utilizzati più di recente (MRU) nel Registro di sistema o nell'elenco . INI.

```
virtual void WriteList();
```

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
