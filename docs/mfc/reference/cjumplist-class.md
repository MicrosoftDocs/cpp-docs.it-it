---
title: Classe CJumpList
ms.date: 11/04/2016
f1_keywords:
- CJumpList
- AFXADV/CJumpList
- AFXADV/CJumpList::CJumpList
- AFXADV/CJumpList::AbortList
- AFXADV/CJumpList::AddDestination
- AFXADV/CJumpList::AddKnownCategory
- AFXADV/CJumpList::AddTask
- AFXADV/CJumpList::AddTasks
- AFXADV/CJumpList::AddTaskSeparator
- AFXADV/CJumpList::ClearAll
- AFXADV/CJumpList::ClearAllDestinations
- AFXADV/CJumpList::CommitList
- AFXADV/CJumpList::GetDestinationList
- AFXADV/CJumpList::GetMaxSlots
- AFXADV/CJumpList::GetRemovedItems
- AFXADV/CJumpList::InitializeList
- AFXADV/CJumpList::SetAppID
helpviewer_keywords:
- CJumpList [MFC], CJumpList
- CJumpList [MFC], AbortList
- CJumpList [MFC], AddDestination
- CJumpList [MFC], AddKnownCategory
- CJumpList [MFC], AddTask
- CJumpList [MFC], AddTasks
- CJumpList [MFC], AddTaskSeparator
- CJumpList [MFC], ClearAll
- CJumpList [MFC], ClearAllDestinations
- CJumpList [MFC], CommitList
- CJumpList [MFC], GetDestinationList
- CJumpList [MFC], GetMaxSlots
- CJumpList [MFC], GetRemovedItems
- CJumpList [MFC], InitializeList
- CJumpList [MFC], SetAppID
ms.assetid: d364d27e-f512-4b12-9872-c2a17c78ab1f
ms.openlocfilehash: b72ea6f3715be1e4a11d457dbdeaba7a622ef8b6
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57259074"
---
# <a name="cjumplist-class"></a>Classe CJumpList

Oggetto `CJumpList` è riportato l'elenco di collegamenti visualizzati quando fare clic su un'icona nella barra delle applicazioni.

## <a name="syntax"></a>Sintassi

```
class CJumpList;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CJumpList::CJumpList](#cjumplist)|Costruisce un oggetto `CJumpList`.|
|[CJumpList:: ~ CJumpList](#cjumplist__~cjumplist)|Elimina un oggetto `CJumpList`.|

|nome|Descrizione|
|----------|-----------------|
|[CJumpList::AbortList](#abortlist)|Interrompe una transazione di generazione elenco senza eseguire il commit.|
|[CJumpList::AddDestination](#adddestination)|Di overload. Aggiunge all'elenco destinazione.|
|[CJumpList::AddKnownCategory](#addknowncategory)|Aggiunge una categoria noto all'elenco.|
|[CJumpList::AddTask](#addtask)|Di overload. Aggiunge elementi alla categoria attività canonica.|
|[CJumpList::AddTasks](#addtasks)|Aggiunge elementi alla categoria attività canonica.|
|[CJumpList::AddTaskSeparator](#addtaskseparator)|Aggiunge un separatore tra le attività.|
|[CJumpList::ClearAll](#clearall)|Rimuove tutte le attività e destinazioni che sono stati aggiunti all'istanza corrente di `CJumpList` finora.|
|[CJumpList::ClearAllDestinations](#clearalldestinations)|Rimuove tutte le destinazioni che sono stati aggiunti all'istanza corrente di `CJumpList` finora.|
|[CJumpList::CommitList](#commitlist)|Termina un'operazione di compilazione di elenco ed esegue il commit nell'elenco restituito nell'archivio associato (Registro di sistema in questo caso.)|
|[CJumpList::GetDestinationList](#getdestinationlist)|Recupera un puntatore di interfaccia all'elenco di destinazione.|
|[CJumpList::GetMaxSlots](#getmaxslots)|Recupera il numero massimo di elementi, incluse le intestazioni di categoria che è possono visualizzare nel menu di destinazione dell'applicazione chiamante.|
|[CJumpList::GetRemovedItems](#getremoveditems)|Restituisce una matrice di elementi che rappresentano rimosse le destinazioni.|
|[CJumpList::InitializeList](#initializelist)|Inizia una transazione di compilazione di elenco.|
|[CJumpList::SetAppID](#setappid)|Imposta l'ID modello utente applicazione per l'elenco che verrà compilato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CJumpList](../../mfc/reference/cjumplist-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

##  <a name="_dtorcjumplist"></a>  CJumpList:: ~ CJumpList

Elimina un oggetto `CJumpList`.

```
~CJumpList();
```

##  <a name="abortlist"></a>  CJumpList::AbortList

Interrompe una transazione di generazione elenco senza eseguire il commit.

```
void AbortList();
```

### <a name="remarks"></a>Note

Chiamare questo metodo ha lo stesso effetto dell'eliminazione definitiva `CJumpList` senza chiamare `CommitList`.

##  <a name="adddestination"></a>  CJumpList::AddDestination

Aggiunge all'elenco destinazione.

```
BOOL AddDestination(
    LPCTSTR lpcszCategoryName,
    LPCTSTR strDestinationPath);

BOOL AddDestination(
    LPCTSTR strCategoryName,
    IShellItem* pShellItem);

BOOL AddDestination(
    LPCTSTR strCategoryName,
    IShellLink* pShellLink);
```

### <a name="parameters"></a>Parametri

*lpcszCategoryName*<br/>
Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creato.

*strDestinationPath*<br/>
Specifica un percorso file di destinazione.

*strCategoryName*<br/>
Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creato.

*pShellItem*<br/>
Specifica un elemento di Shell che rappresenta la destinazione da aggiungere.

*pShellLink*<br/>
Specifica un collegamento di Shell che rappresenta la destinazione da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

L'istanza di `CJumpList` internamente accumula le destinazioni aggiunte e quindi ne esegue il commit in `CommitList`.

##  <a name="addknowncategory"></a>  CJumpList::AddKnownCategory

Aggiunge una categoria noto all'elenco.

```
BOOL AddKnownCategory(KNOWNDESTCATEGORY category);
```

### <a name="parameters"></a>Parametri

*category*<br/>
Specifica un tipo di categoria noti. Può essere KDC_RECENT oppure KDC_KNOWN.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Noto categorie sono le categorie di frequente e recenti che verranno calcolati automaticamente per ogni applicazione che utilizza `SHAddToRecentDocs` (o indirettamente lo utilizza come verrà chiamato per conto dell'applicazione in alcuni scenari la shell).

##  <a name="addtask"></a>  CJumpList::AddTask

Aggiunge elementi alla categoria attività canonica.

```
BOOL AddTask(
    LPCTSTR strTargetExecutablePath,
    LPCTSTR strCommandLineArgs,
    LPCTSTR strTitle,
    LPCTSTR strIconLocation,
    int iIconIndex);

BOOL AddTask(IShellLink* pShellLink);
```

### <a name="parameters"></a>Parametri

*strTargetExecutablePath*<br/>
Specifica il percorso di attività di destinazione.

*strCommandLineArgs*<br/>
Specifica gli argomenti della riga di comando dell'eseguibile specificato da strTargetExecutablePath.

*strTitle*<br/>
Nome dell'attività che verrà visualizzato nell'elenco di destinazione.

*strIconLocation*<br/>
Posizione dell'icona che verrà visualizzato nell'elenco di destinazione al titolo.

*iIconIndex*<br/>
Indice dell'icona.

*pShellLink*<br/>
Collegamento di shell che rappresenta un'attività da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

L'istanza di `CJumpList` accumula attività specificata e li aggiunge all'elenco di destinazione durante `CommitList`. Elementi di attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie, quando viene compilato nell'interfaccia utente.

##  <a name="addtasks"></a>  CJumpList::AddTasks

Aggiunge elementi alla categoria attività canonica.

```
BOOL AddTasks(IObjectArray* pObjectCollection);
```

### <a name="parameters"></a>Parametri

*pObjectCollection*<br/>
Una raccolta di attività da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

L'istanza di CJumpList accumula attività specificata e li aggiunge all'elenco di destinazione durante `CommitList`. Elementi di attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie, quando viene compilato nell'interfaccia utente.

##  <a name="addtaskseparator"></a>  CJumpList::AddTaskSeparator

Aggiunge un separatore tra le attività.

```
BOOL AddTaskSeparator();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, 0 in caso contrario.

##  <a name="cjumplist"></a>  CJumpList::CJumpList

Costruisce un oggetto `CJumpList`.

```
CJumpList(BOOL bAutoCommit = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoCommit*<br/>
Se questo parametro è FALSE l'elenco non si impegna automaticamente nel distruttore.

##  <a name="clearall"></a>  CJumpList::ClearAll

Rimuove tutte le attività e destinazioni che sono stati aggiunti all'istanza corrente di `CJumpList` finora.

```
void ClearAll();
```

### <a name="remarks"></a>Note

Questo metodo cancella e rilascia tutti i dati e le interfacce interne.

##  <a name="clearalldestinations"></a>  CJumpList::ClearAllDestinations

Rimuove tutte le destinazioni che sono stati aggiunti all'istanza corrente di CJumpList finora.

```
void ClearAllDestinations();
```

### <a name="remarks"></a>Note

Chiamare questa funzione se è necessario rimuovere tutte le destinazioni che sono stati aggiunti finora nella sessione corrente di generazione elenco di destinazione e aggiungono altre destinazioni di nuovo. Se l'oggetto interno `ICustomDestinationList` è stata inizializzata, viene lasciato attivo.

##  <a name="commitlist"></a>  CJumpList::CommitList

Termina un'operazione di compilazione di elenco ed esegue il commit nell'elenco restituito nell'archivio associato (Registro di sistema in questo caso).

```
BOOL CommitList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Il commit è atomico. Se il commit ha esito negativo, verrà restituito un errore.  Quando si `CommitList` viene chiamato, corrente verrà eliminato elenco degli elementi rimossi. Chiamare questo metodo reimposta l'oggetto in modo che non dispone di una transazione attiva elenco predefiniti. Per aggiornare l'elenco, `BeginList` deve essere chiamato nuovamente.

##  <a name="getdestinationlist"></a>  CJumpList::GetDestinationList

Recupera un puntatore di interfaccia all'elenco di destinazione.

```
ICustomDestinationList* GetDestinationList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Se l'elenco di salto non è stata inizializzata, o stato eseguito il commit o interrotto, il valore restituito è NULL.

##  <a name="getmaxslots"></a>  CJumpList::GetMaxSlots

Recupera il numero massimo di elementi, incluse le intestazioni di categoria che è possono visualizzare nel menu di destinazione dell'applicazione chiamante.

```
UINT GetMaxSlots() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Le applicazioni possono restituire solo un numero di elementi e le intestazioni di categoria combinate fino a questo valore. Se le chiamate a `AppendCategory`, `AppendKnownCategory`, o `AddUserTasks` supera questo limite, verrà restituito un errore.

##  <a name="getremoveditems"></a>  CJumpList::GetRemovedItems

Restituisce una matrice di elementi che rappresentano rimosse le destinazioni.

```
IObjectArray* GetRemovedItems();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Le destinazioni rimosse vengono recuperate durante l'inizializzazione dell'elenco di salto. Durante la generazione di un nuovo elenco di destinazione, le applicazioni devono elaborare prima di tutto l'elenco di destinazioni rimosse, cancellare i dati di rilevamento per qualsiasi elemento restituito dall'enumeratore elenco rimosso. Se un'applicazione tenta di fornire un elemento che è stata appena rimossa nella transazione corrente di chiamare a `BeginList` avviata, la chiamata al metodo che aggiunto di nuovo quell'elemento avrà esito negativo, per garantire che le applicazioni sono rispettando l'elenco rimosso.

##  <a name="initializelist"></a>  CJumpList::InitializeList

Inizia una transazione di compilazione di elenco.

```
BOOL InitializeList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Non è necessario chiamare questo metodo in modo esplicito, a meno che non si desidera recuperare un puntatore a `ICustomDestinationList` usando `GetDestinationList`, il numero di slot disponibili utilizzando `GetMaxSlots`, o un elenco di elementi rimossi usando `GetRemovedItems`.

##  <a name="setappid"></a>  CJumpList::SetAppID

Imposta l'ID modello utente applicazione per l'elenco che verrà compilato.

```
void SetAppID(LPCTSTR strAppID);
```

### <a name="parameters"></a>Parametri

*strAppID*<br/>
Stringa che specifica l'ID modello utente applicazione.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
