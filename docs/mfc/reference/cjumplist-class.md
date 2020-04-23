---
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
ms.openlocfilehash: 2e45e2e58bd51d36b6412940b7ed01aa119017ed
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754944"
---
# <a name="cjumplist-class"></a>Classe CJumpList

A `CJumpList` è l'elenco dei tasti di scelta rapida visualizzati quando si fa clic con il pulsante destro del mouse su un'icona nella barra delle applicazioni.

## <a name="syntax"></a>Sintassi

```
class CJumpList;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Episodi di CJumpList::CJumpList](#cjumplist)|Costruisce un oggetto `CJumpList`.|
|[CJumpList:::CJumpList](#_dtorcjumplist)|Elimina un oggetto `CJumpList` .|

|Nome|Descrizione|
|----------|-----------------|
|[Proprietà CJumpList::AbortList](#abortlist)|Interrompe una transazione di creazione di elenchi senza eseguire il commit.|
|[Elenco di dialogo::AddDestination](#adddestination)|Di overload. Aggiunge la destinazione all'elenco.|
|[Elenco pulsante::AddKnownCategory](#addknowncategory)|Aggiunge una categoria nota all'elenco.|
|[Oggetto CJumpList::AddTask](#addtask)|Di overload. Aggiunge elementi alla categoria Attività canoniche.|
|[Proprietà CJumpList::AddTasks](#addtasks)|Aggiunge elementi alla categoria Attività canoniche.|
|[CJumpList::AddTaskSeparator](#addtaskseparator)|Aggiunge un separatore tra le attività.|
|[Episodi di CJumpList::ClearAll](#clearall)|Rimuove tutte le attività e le destinazioni `CJumpList` che sono state aggiunte all'istanza corrente di finora.|
|[CJumpList::ClearAllDestinations](#clearalldestinations)|Rimuove tutte le destinazioni aggiunte `CJumpList` all'istanza corrente di finora.|
|[Elenco di lavoro::CommitList](#commitlist)|Termina una transazione di creazione di elenchi ed esegue il commit dell'elenco riportato nell'archivio associato, in questo caso il Registro di sistema.|
|[Elenco di dialogo::GetDestinationList](#getdestinationlist)|Recupera un puntatore a interfaccia all'elenco di destinazione.|
|[CJumpList::GetMaxSlots](#getmaxslots)|Recupera il numero massimo di elementi, incluse le intestazioni di categoria che possono essere visualizzate nel menu di destinazione dell'applicazione chiamante.|
|[Oggetto CJumpList::GetRemovedItems](#getremoveditems)|Restituisce una matrice di elementi che rappresentano destinazioni rimosse.|
|[Elenco di lavoro::InitializeList](#initializelist)|Avvia una transazione di creazione di elenchi.|
|[Episodi di CJumpList::SetAppID](#setappid)|Imposta l'ID modello utente dell'applicazione per l'elenco che verrà compilato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CJumpList](../../mfc/reference/cjumplist-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

## <a name="cjumplistcjumplist"></a><a name="_dtorcjumplist"></a>CJumpList:::CJumpList

Elimina un oggetto `CJumpList` .

```
~CJumpList();
```

## <a name="cjumplistabortlist"></a><a name="abortlist"></a>Proprietà CJumpList::AbortList

Interrompe una transazione di creazione di elenchi senza eseguire il commit.

```cpp
void AbortList();
```

### <a name="remarks"></a>Osservazioni

La chiamata a questo metodo `CJumpList` ha `CommitList`lo stesso effetto dell'eliminazione senza chiamare .

## <a name="cjumplistadddestination"></a><a name="adddestination"></a>Elenco di dialogo::AddDestination

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

*LpcszCategoryName (nome categoria)*<br/>
Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creata.

*strDestinationPath (percorso di destinazione)*<br/>
Specifica un percorso al file di destinazione.

*strCategoryName (nome di categoria)*<br/>
Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creata.

*pShellItem (articolo di pShell)*<br/>
Specifica un elemento della shell che rappresenta la destinazione aggiunta.

*pShellLink (informazioni in base al tano*<br/>
Specifica un collegamento della shell che rappresenta la destinazione da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

L'istanza `CJumpList` di internamente accumula le destinazioni aggiunte e quindi ne esegue il commit in `CommitList`.

## <a name="cjumplistaddknowncategory"></a><a name="addknowncategory"></a>Elenco pulsante::AddKnownCategory

Aggiunge una categoria nota all'elenco.

```
BOOL AddKnownCategory(KNOWNDESTCATEGORY category);
```

### <a name="parameters"></a>Parametri

*category*<br/>
Specifica un tipo di categoria noto. Può essere KDC_RECENT o KDC_KNOWN.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Categorie note sono le categorie Frequenti e Recenti che calcoleremo automaticamente per ogni applicazione che utilizza `SHAddToRecentDocs` (o indirettamente lo utilizza come la shell lo chiamerà per conto dell'applicazione in alcuni scenari).

## <a name="cjumplistaddtask"></a><a name="addtask"></a>Oggetto CJumpList::AddTask

Aggiunge elementi alla categoria Attività canoniche.

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

*percorsostrTargetExecutablePath*<br/>
Specifica il percorso dell'attività di destinazione.

*strCommandLineArgs*<br/>
Specifica gli argomenti della riga di comando dell'eseguibile specificato da *strTargetExecutablePath*.

*strTitle (conflitto)*<br/>
Nome dell'attività che verrà visualizzato nell'Elenco destinazioni.

*strIconLocation*<br/>
Posizione dell'icona che verrà visualizzata nell'Elenco destinazioni insieme al titolo.

*iIconIndice*<br/>
Indice delle icone.

*pShellLink (informazioni in base al tano*<br/>
Collegamento shell che rappresenta un'attività da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

L'istanza `CJumpList` di accumula le attività specificate `CommitList`e le aggiunge all'Elenco destinazioni durante l'elenco delle destinazioni durante l'elenco delle attività. Gli elementi di attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie quando viene compilata nell'interfaccia utente.

## <a name="cjumplistaddtasks"></a><a name="addtasks"></a>Proprietà CJumpList::AddTasks

Aggiunge elementi alla categoria Attività canoniche.

```
BOOL AddTasks(IObjectArray* pObjectCollection);
```

### <a name="parameters"></a>Parametri

*pObjectCollection (insieme)*<br/>
Raccolta di attività da aggiungere.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

L'istanza di CJumpList accumula le attività specificate e le aggiunge all'elenco delle destinazioni durante `CommitList`l'oggetto . Gli elementi di attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie quando viene compilata nell'interfaccia utente.

## <a name="cjumplistaddtaskseparator"></a><a name="addtaskseparator"></a>CJumpList::AddTaskSeparator

Aggiunge un separatore tra le attività.

```
BOOL AddTaskSeparator();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo, 0 se non lo è.

## <a name="cjumplistcjumplist"></a><a name="cjumplist"></a>Episodi di CJumpList::CJumpList

Costruisce un oggetto `CJumpList`.

```
CJumpList(BOOL bAutoCommit = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoCommit (Commit)*<br/>
Se questo parametro è FALSE, il commit dell'elenco non viene eseguito automaticamente nel distruttore.

## <a name="cjumplistclearall"></a><a name="clearall"></a>Episodi di CJumpList::ClearAll

Rimuove tutte le attività e le destinazioni `CJumpList` che sono state aggiunte all'istanza corrente di finora.

```cpp
void ClearAll();
```

### <a name="remarks"></a>Osservazioni

Questo metodo cancella e rilascia tutti i dati e le interfacce interne.

## <a name="cjumplistclearalldestinations"></a><a name="clearalldestinations"></a>CJumpList::ClearAllDestinations

Rimuove tutte le destinazioni che sono state aggiunte all'istanza corrente di CJumpList finora.

```cpp
void ClearAllDestinations();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione se è necessario rimuovere tutte le destinazioni che sono state aggiunte finora nella sessione corrente della creazione dell'elenco di destinazione e aggiungere di nuovo altre destinazioni. Se l'interno `ICustomDestinationList` è stato inizializzato, viene lasciato attivo.

## <a name="cjumplistcommitlist"></a><a name="commitlist"></a>Elenco di lavoro::CommitList

Termina una transazione di creazione di elenchi ed esegue il commit dell'elenco riportato nell'archivio associato ( in questo caso il Registro di sistema).

```
BOOL CommitList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Il commit è atomico. Se il commit ha esito negativo, verrà restituito un errore.  Quando `CommitList` viene chiamato, l'elenco corrente di elementi rimossi verrà pulito. La chiamata a questo metodo reimposta l'oggetto in modo che non disponga di una transazione di creazione di elenchi attiva. Per aggiornare `BeginList` l'elenco, è necessario chiamare nuovamente.

## <a name="cjumplistgetdestinationlist"></a><a name="getdestinationlist"></a>Elenco di dialogo::GetDestinationList

Recupera un puntatore a interfaccia all'elenco di destinazione.

```
ICustomDestinationList* GetDestinationList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Se la Jump List non è stata inizializzata o è stata sottoposta a commit o interrotta, il valore restituito sarà NULL.

## <a name="cjumplistgetmaxslots"></a><a name="getmaxslots"></a>CJumpList::GetMaxSlots

Recupera il numero massimo di elementi, incluse le intestazioni di categoria che possono essere visualizzate nel menu di destinazione dell'applicazione chiamante.

```
UINT GetMaxSlots() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Le applicazioni possono segnalare solo un numero di elementi e intestazioni di categoria combinate fino a questo valore. Se le `AppendCategory` `AppendKnownCategory`chiamate `AddUserTasks` a , o superano questo numero, restituiranno un errore.

## <a name="cjumplistgetremoveditems"></a><a name="getremoveditems"></a>Oggetto CJumpList::GetRemovedItems

Restituisce una matrice di elementi che rappresentano destinazioni rimosse.

```
IObjectArray* GetRemovedItems();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Le destinazioni rimosse vengono recuperate durante l'inizializzazione della Jump List. Quando si genera un nuovo elenco di destinazione, è previsto che le applicazioni elaborino innanzitutto l'elenco delle destinazioni rimosse, cancellando i dati di rilevamento per qualsiasi elemento restituito dall'enumeratore dell'elenco rimosso. Se un'applicazione tenta di fornire un elemento appena rimosso `BeginList` nella transazione che la chiamata corrente all'avvio, la chiamata al metodo che ha aggiunto nuovamente tale elemento avrà esito negativo, per garantire che le applicazioni rispettino l'elenco rimosso.

## <a name="cjumplistinitializelist"></a><a name="initializelist"></a>Elenco di lavoro::InitializeList

Avvia una transazione di creazione di elenchi.

```
BOOL InitializeList();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Non è necessario chiamare questo metodo in modo esplicito `ICustomDestinationList` `GetDestinationList`a meno che non `GetMaxSlots`si desideri recuperare un `GetRemovedItems`puntatore all'utilizzo , al numero di slot disponibili utilizzando o all'elenco di elementi rimossi utilizzando .

## <a name="cjumplistsetappid"></a><a name="setappid"></a>Episodi di CJumpList::SetAppID

Imposta l'ID modello utente dell'applicazione per l'elenco che verrà compilato.

```cpp
void SetAppID(LPCTSTR strAppID);
```

### <a name="parameters"></a>Parametri

*strAppID (strAppID)*<br/>
Stringa che specifica l'ID modello utente dell'applicazione.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
