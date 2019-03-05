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
ms.openlocfilehash: 30536d91d057de4e551b5a28200dd903e12713b3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304834"
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
|[CRecentFileList::Add](#add)|Aggiunge un file all'elenco dei file usati di recente.|
|[CRecentFileList::GetDisplayName](#getdisplayname)|Fornisce un nome visualizzato per la visualizzazione di menu di scelta di un nome file usati di recente.|
|[CRecentFileList::GetSize](#getsize)|Recupera il numero di file nell'elenco di file usati di recente.|
|[CRecentFileList::ReadList](#readlist)|Legge l'elenco dei file usati di recente dal Registro di sistema o. File INI.|
|[CRecentFileList::Remove](#remove)|Rimuove un file dall'elenco dei file usati di recente.|
|[CRecentFileList::UpdateMenu](#updatemenu)|Aggiorna la visualizzazione del menu dell'elenco di file usati di recente.|
|[CRecentFileList::WriteList](#writelist)|Scrive l'elenco dei file usati di recente dal Registro di sistema o. File INI.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CRecentFileList::operator \[ \]](#operator_at)|Restituisce un `CString` oggetto in una determinata posizione.|

## <a name="remarks"></a>Note

File possono essere aggiunto o eliminati dall'elenco dei file usati di recente, l'elenco dei file può essere letti da o scritto nel Registro di sistema o un oggetto. È possibile aggiornare il file INI e il menu di visualizzazione dell'elenco di file usati di recente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CRecentFileList`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

##  <a name="add"></a>  CRecentFileList::Add

Aggiunge un file all'elenco dei file utilizzato di recente (MRU).

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
Specifica nome del percorso da aggiungere all'elenco.

*lpszAppID*<br/>
Specifica l'ID modello utente applicazione per l'applicazione.

*pItem*<br/>
Specifica un puntatore all'elemento Shell da aggiungere all'elenco.

*pLink*<br/>
Specifica un puntatore alla Shell di collegamento da aggiungere all'elenco.

*pidl*<br/>
Specifica l'ottenuto per l'elemento di shell che deve essere aggiunto alla cartella docs recenti.

### <a name="remarks"></a>Note

Il nome del file verrà aggiunto all'inizio dell'elenco MRU. Se il nome del file esiste già nell'elenco MRU, verrà spostato nella parte superiore.

##  <a name="crecentfilelist"></a>  CRecentFileList::CRecentFileList

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
Offset per la numerazione nella visualizzazione del menu dell'elenco di file usati di recente (usati di recente).

*lpszSection*<br/>
Punta al nome della sezione del Registro di sistema o dell'applicazione. File INI in cui l'elenco dei file usati di recente viene letto e/o scritto.

*lpszEntryFormat*<br/>
Punta a una stringa di formato da utilizzare per i nomi delle voci archiviate nel Registro di sistema o dell'applicazione. File INI.

*nSize*<br/>
Numero massimo di file nell'elenco di file usati di recente.

*nMaxDispLen*<br/>
Lunghezza massima, in caratteri, disponibile per la visualizzazione del menu di un nome di file nell'elenco di file usati di recente.

### <a name="remarks"></a>Note

La stringa di formato a cui punta *lpszEntryFormat* deve contenere "%d", che verrà usato per sostituire l'indice di ogni elemento MRU. Ad esempio, se la stringa di formato viene `"file%d"` quindi le voci verranno denominate `file0`, `file1`e così via.

##  <a name="getdisplayname"></a>  CRecentFileList::GetDisplayName

Ottiene un nome visualizzato per un file nell'elenco di file usati di recente, per l'utilizzo nella visualizzazione del menu dell'elenco MRU.

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
Percorso completo del file il cui nome viene visualizzato nell'elenco di menu dei file usati di recente.

*nIndex*<br/>
Indice in base zero del file nell'elenco di file usati di recente.

*lpszCurDir*<br/>
Stringa che contiene la directory corrente.

*nCurDir*<br/>
Lunghezza della stringa di directory corrente.

*bAtLeastName*<br/>
Se diverso da zero, indica che deve essere restituito il nome di base del file, anche se supera la lunghezza massima di visualizzazione (passato come il *nMaxDispLen* parametro per il `CRecentFileList` costruttore).

### <a name="return-value"></a>Valore restituito

**FALSE** se non vi è alcun nome di file in corrispondenza dell'indice specificato nell'elenco di file utilizzato di recente (MRU).

### <a name="remarks"></a>Note

Se il file è nella directory corrente, la funzione lascia che la directory disattiva la visualizzazione. Se il nome del file è troppo lungo, vengono rimosse la directory e l'estensione. Se il nome del file è ancora troppo lungo, il nome visualizzato è impostato su una stringa vuota, a meno che *bAtLeastName* è diverso da zero.

##  <a name="getsize"></a>  CRecentFileList::GetSize

Recupera il numero di file nell'elenco di file usati di recente.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di file nell'attuale più di recente (MRU) elenco file utilizzati.

##  <a name="operator_at"></a>  [] CRecentFileList::operator

L'overload pedice (`[]`) operatore restituisce un singolo `CString` specificata dall'indice in base zero nella *nIndex*.

```
CString& operator[ ](int nindex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero di un `CString` in un set di `CString`s.

##  <a name="readlist"></a>  CRecentFileList::ReadList

Legge più recente (MRU) elenco file usati dal Registro di sistema o dell'applicazione. File INI.

```
virtual void ReadList();
```

##  <a name="remove"></a>  CRecentFileList::Remove

Rimuove un file dall'elenco dei file usati di recente.

```
virtual void Remove(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del file da rimuovere dall'elenco dei file utilizzato di recente (MRU).

##  <a name="updatemenu"></a>  CRecentFileList::UpdateMenu

Aggiorna la visualizzazione del menu dell'elenco di file usati di recente.

```
virtual void UpdateMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Un puntatore per il [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto per il menu dell'elenco file utilizzato più di recente (MRU).

##  <a name="writelist"></a>  CRecentFileList::WriteList

Scrive il massimo elenco usati di recente (MRU) file nel Registro di sistema o dell'applicazione. File INI.

```
virtual void WriteList();
```

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
