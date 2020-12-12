---
description: 'Altre informazioni su: classe CJumpList'
title: Classe CJumpList
ms.date: 03/27/2019
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
ms.openlocfilehash: 07e896c5b3a205a44850d45dcc4876103a48f2fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236906"
---
# <a name="cjumplist-class"></a>Classe CJumpList

R `CJumpList` è l'elenco dei collegamenti rilevati quando si fa clic con il pulsante destro del mouse su un'icona nella barra delle applicazioni.

## <a name="syntax"></a>Sintassi

```
class CJumpList;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CJumpList:: CJumpList](#cjumplist)|Costruisce un oggetto `CJumpList`.|
|[CJumpList:: ~ CJumpList](#_dtorcjumplist)|Elimina un oggetto `CJumpList` .|

|Nome|Description|
|----------|-----------------|
|[CJumpList:: Abort](#abortlist)|Interrompe una transazione di compilazione di un elenco senza eseguire il commit.|
|[CJumpList:: AddDestination](#adddestination)|Di overload. Aggiunge la destinazione all'elenco.|
|[CJumpList:: AddKnownCategory](#addknowncategory)|Accoda una categoria nota all'elenco.|
|[CJumpList:: AddTask](#addtask)|Di overload. Aggiunge elementi alla categoria di attività canoniche.|
|[CJumpList:: AddTasks](#addtasks)|Aggiunge elementi alla categoria di attività canoniche.|
|[CJumpList:: AddTaskSeparator](#addtaskseparator)|Aggiunge un separatore tra le attività.|
|[CJumpList:: ClearAll](#clearall)|Rimuove tutte le attività e le destinazioni che sono state aggiunte all'istanza corrente di `CJumpList` finora.|
|[CJumpList:: ClearAllDestinations](#clearalldestinations)|Rimuove tutte le destinazioni che sono state aggiunte all'istanza corrente di `CJumpList` finora.|
|[CJumpList:: commit](#commitlist)|Termina una transazione di compilazione di un elenco ed Esegui il commit dell'elenco segnalato nell'archivio associato, in questo caso il registro di sistema.|
|[CJumpList:: getDestination](#getdestinationlist)|Recupera un puntatore di interfaccia all'elenco di destinazione.|
|[CJumpList:: GetMaxSlots](#getmaxslots)|Recupera il numero massimo di elementi, incluse le intestazioni di categoria che possono essere visualizzate nel menu di destinazione dell'applicazione chiamante.|
|[CJumpList:: GetRemovedItems](#getremoveditems)|Restituisce una matrice di elementi che rappresentano le destinazioni rimosse.|
|[CJumpList:: Initializen](#initializelist)|Inizia una transazione di compilazione di un elenco.|
|[CJumpList:: seappid](#setappid)|Imposta l'ID del modello utente dell'applicazione per l'elenco che verrà compilato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CJumpList](../../mfc/reference/cjumplist-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv. h

## <a name="cjumplistcjumplist"></a><a name="_dtorcjumplist"></a> CJumpList:: ~ CJumpList

Elimina un oggetto `CJumpList` .

```
~CJumpList();
```

## <a name="cjumplistabortlist"></a><a name="abortlist"></a> CJumpList:: Abort

Interrompe una transazione di compilazione di un elenco senza eseguire il commit.

```cpp
void AbortList();
```

### <a name="remarks"></a>Commenti

La chiamata a questo metodo ha lo stesso effetto dell'eliminazione `CJumpList` senza chiamare `CommitList` .

## <a name="cjumplistadddestination"></a><a name="adddestination"></a> CJumpList:: AddDestination

Aggiunge la destinazione all'elenco.

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
Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creata.

*strDestinationPath*<br/>
Specifica un percorso del file di destinazione.

*strCategoryName*<br/>
Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creata.

*pShellItem*<br/>
Specifica un elemento della shell che rappresenta la destinazione da aggiungere.

*pShellLink*<br/>
Specifica un collegamento alla shell che rappresenta la destinazione da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

L'istanza di `CJumpList` accumula internamente le destinazioni aggiunte e quindi le salva in `CommitList` .

## <a name="cjumplistaddknowncategory"></a><a name="addknowncategory"></a> CJumpList:: AddKnownCategory

Accoda una categoria nota all'elenco.

```
BOOL AddKnownCategory(KNOWNDESTCATEGORY category);
```

### <a name="parameters"></a>Parametri

*category*<br/>
Specifica un tipo di categoria noto. Può essere KDC_RECENT o KDC_KNOWN.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Le categorie note sono le categorie frequenti e recenti che verranno calcolate automaticamente per ogni applicazione che utilizza `SHAddToRecentDocs` (o che indirettamente la utilizza perché la shell lo chiamerà per conto dell'applicazione in alcuni scenari).

## <a name="cjumplistaddtask"></a><a name="addtask"></a> CJumpList:: AddTask

Aggiunge elementi alla categoria di attività canoniche.

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
Specifica il percorso dell'attività di destinazione.

*strCommandLineArgs*<br/>
Specifica gli argomenti della riga di comando del file eseguibile specificato da *strTargetExecutablePath*.

*strTitle*<br/>
Nome dell'attività che verrà visualizzato nell'elenco destinazione.

*strIconLocation*<br/>
Posizione dell'icona che verrà visualizzata nell'elenco di destinazione insieme al titolo.

*iIconIndex*<br/>
Indice icona.

*pShellLink*<br/>
Collegamento della shell che rappresenta un'attività da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

L'istanza di `CJumpList` accumula le attività specificate e le aggiunge all'elenco di destinazione durante `CommitList` . Gli elementi attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie quando viene compilata nell'interfaccia utente.

## <a name="cjumplistaddtasks"></a><a name="addtasks"></a> CJumpList:: AddTasks

Aggiunge elementi alla categoria di attività canoniche.

```
BOOL AddTasks(IObjectArray* pObjectCollection);
```

### <a name="parameters"></a>Parametri

*pObjectCollection*<br/>
Raccolta di attività da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

L'istanza di CJumpList accumula le attività specificate e le aggiunge all'elenco di destinazione durante `CommitList` . Gli elementi attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie quando viene compilata nell'interfaccia utente.

## <a name="cjumplistaddtaskseparator"></a><a name="addtaskseparator"></a> CJumpList:: AddTaskSeparator

Aggiunge un separatore tra le attività.

```
BOOL AddTaskSeparator();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, 0 in caso contrario.

## <a name="cjumplistcjumplist"></a><a name="cjumplist"></a> CJumpList:: CJumpList

Costruisce un oggetto `CJumpList`.

```
CJumpList(BOOL bAutoCommit = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoCommit*<br/>
Se questo parametro è FALSE, l'elenco non viene sottoposta automaticamente a commit nel distruttore.

## <a name="cjumplistclearall"></a><a name="clearall"></a> CJumpList:: ClearAll

Rimuove tutte le attività e le destinazioni che sono state aggiunte all'istanza corrente di `CJumpList` finora.

```cpp
void ClearAll();
```

### <a name="remarks"></a>Commenti

Questo metodo cancella e rilascia tutti i dati e le interfacce interne.

## <a name="cjumplistclearalldestinations"></a><a name="clearalldestinations"></a> CJumpList:: ClearAllDestinations

Rimuove finora tutte le destinazioni che sono state aggiunte all'istanza corrente di CJumpList.

```cpp
void ClearAllDestinations();
```

### <a name="remarks"></a>Commenti

Chiamare questa funzione se è necessario rimuovere tutte le destinazioni che sono state aggiunte finora nella sessione corrente della compilazione dell'elenco di destinazione e aggiungere di nuovo altre destinazioni. Se l'oggetto interno `ICustomDestinationList` è stato inizializzato, resta attivo.

## <a name="cjumplistcommitlist"></a><a name="commitlist"></a> CJumpList:: commit

Termina una transazione di compilazione di un elenco ed Esegui il commit dell'elenco segnalato nell'archivio associato (in questo caso il registro di sistema).

```
BOOL CommitList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Il commit è atomico. Se il commit ha esito negativo, verrà restituito un errore.  Quando `CommitList` viene chiamato, l'elenco corrente degli elementi rimossi verrà pulito. La chiamata a questo metodo reimposta l'oggetto in modo che non disponga di una transazione di compilazione elenco attiva. Per aggiornare l'elenco, `BeginList` è necessario chiamare di nuovo.

## <a name="cjumplistgetdestinationlist"></a><a name="getdestinationlist"></a> CJumpList:: getDestination

Recupera un puntatore di interfaccia all'elenco di destinazione.

```
ICustomDestinationList* GetDestinationList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Se la Jump List non è stata inizializzata o è stato eseguito il commit o l'interruzione, il valore restituito sarà NULL.

## <a name="cjumplistgetmaxslots"></a><a name="getmaxslots"></a> CJumpList:: GetMaxSlots

Recupera il numero massimo di elementi, incluse le intestazioni di categoria che possono essere visualizzate nel menu di destinazione dell'applicazione chiamante.

```
UINT GetMaxSlots() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Le applicazioni possono segnalare solo un numero di elementi e intestazioni di categoria combinati fino a questo valore. Se le chiamate a `AppendCategory` , `AppendKnownCategory` o `AddUserTasks` superano questo numero, restituiranno un errore.

## <a name="cjumplistgetremoveditems"></a><a name="getremoveditems"></a> CJumpList:: GetRemovedItems

Restituisce una matrice di elementi che rappresentano le destinazioni rimosse.

```
IObjectArray* GetRemovedItems();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Le destinazioni rimosse vengono recuperate durante l'inizializzazione della Jump List. Quando si genera un nuovo elenco di destinazione, le applicazioni devono prima elaborare l'elenco delle destinazioni rimosse, deselezionando i dati di rilevamento per qualsiasi elemento restituito dall'enumeratore di elenco rimosso. Se un'applicazione tenta di fornire un elemento appena rimosso nella transazione a cui è stata avviata la chiamata corrente `BeginList` , la chiamata al metodo che ha aggiunto nuovamente tale elemento avrà esito negativo, per garantire che le applicazioni rispettino l'elenco rimosso.

## <a name="cjumplistinitializelist"></a><a name="initializelist"></a> CJumpList:: Initializen

Inizia una transazione di compilazione di un elenco.

```
BOOL InitializeList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Non è necessario chiamare questo metodo in modo esplicito a meno che non si desideri recuperare un puntatore a `ICustomDestinationList` utilizzando `GetDestinationList` , il numero di slot disponibili usando `GetMaxSlots` o un elenco di elementi rimossi usando `GetRemovedItems` .

## <a name="cjumplistsetappid"></a><a name="setappid"></a> CJumpList:: seappid

Imposta l'ID del modello utente dell'applicazione per l'elenco che verrà compilato.

```cpp
void SetAppID(LPCTSTR strAppID);
```

### <a name="parameters"></a>Parametri

*strAppID*<br/>
Stringa che specifica l'ID del modello utente dell'applicazione.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
