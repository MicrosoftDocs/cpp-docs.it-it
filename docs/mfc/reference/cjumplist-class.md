---
title: Classe CJumpList | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc609fac36ccdbb9f84ce8f2b9b7c0ccfc5ccd3f
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038503"
---
# <a name="cjumplist-class"></a>Classe CJumpList
Oggetto `CJumpList` è l'elenco di collegamenti visualizzati quando pulsante destro del mouse fare clic su un'icona nella barra delle applicazioni.  
  
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
|[CJumpList::AbortList](#abortlist)|Interrompe una transazione di creazione elenco senza eseguire il commit.|  
|[CJumpList::AddDestination](#adddestination)|Di overload. Aggiunge all'elenco di destinazione.|  
|[CJumpList::AddKnownCategory](#addknowncategory)|Aggiunge una categoria noto all'elenco.|  
|[CJumpList::AddTask](#addtask)|Di overload. Aggiunge elementi alla categoria attività canonica.|  
|[CJumpList::AddTasks](#addtasks)|Aggiunge elementi alla categoria attività canonica.|  
|[CJumpList::AddTaskSeparator](#addtaskseparator)|Aggiunge un separatore tra le attività.|  
|[CJumpList::ClearAll](#clearall)|Rimuove tutte le attività e le destinazioni in cui sono stati aggiunti all'istanza corrente di `CJumpList` finora.|  
|[CJumpList::ClearAllDestinations](#clearalldestinations)|Rimuove tutte le destinazioni che sono stati aggiunti all'istanza corrente di `CJumpList` finora.|  
|[CJumpList::CommitList](#commitlist)|Termina una transazione di creazione elenco ed esegue il commit nell'elenco riportato nell'archivio associati (il registro in questo caso).|  
|[CJumpList::GetDestinationList](#getdestinationlist)|Recupera un puntatore a interfaccia all'elenco di destinazione.|  
|[CJumpList::GetMaxSlots](#getmaxslots)|Recupera il numero massimo di elementi, comprese le intestazioni di categoria che è possono visualizzare nel menu di destinazione dell'applicazione chiamante.|  
|[CJumpList::GetRemovedItems](#getremoveditems)|Restituisce una matrice di elementi che rappresentano rimosso destinazioni.|  
|[CJumpList::InitializeList](#initializelist)|Avvia una transazione di elenco di compilazione.|  
|[CJumpList::SetAppID](#setappid)|Imposta l'ID modello utente dell'applicazione per l'elenco che verrà compilato.|  
  
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
 Interrompe una transazione di creazione elenco senza eseguire il commit.  
  
```  
void AbortList();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo ha lo stesso effetto dell'eliminazione definitiva `CJumpList` senza chiamare `CommitList`.  
  
##  <a name="adddestination"></a>  CJumpList::AddDestination  
 Aggiunge all'elenco di destinazione.  
  
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
 *lpcszCategoryName*  
 Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creato.  
  
 *strDestinationPath*  
 Specifica il percorso di file di destinazione.  
  
 *strCategoryName*  
 Specifica un nome di categoria. Se la categoria specificata non esiste, verrà creato.  
  
 *pShellItem*  
 Specifica un elemento della Shell che rappresenta la destinazione da aggiungere.  
  
 *pShellLink*  
 Specifica un collegamento della Shell che rappresenta la destinazione da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 L'istanza di `CJumpList` internamente accumula aggiunto le destinazioni e quindi ne esegue il commit in `CommitList`.  
  
##  <a name="addknowncategory"></a>  CJumpList::AddKnownCategory  
 Aggiunge una categoria noto all'elenco.  
  
```  
BOOL AddKnownCategory(KNOWNDESTCATEGORY category);
```  
  
### <a name="parameters"></a>Parametri  
 *category*  
 Specifica un tipo di categoria nota. Può essere `KDC_RECENT`, o `KDC_KNOWN`.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Nota categorie sono le categorie di frequente e recenti che verrà automaticamente calcolato per ogni applicazione che utilizza `SHAddToRecentDocs` (o indirettamente lo utilizza come verrà chiamato dal conto dell'applicazione in alcuni scenari la shell).  
  
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
 *strTargetExecutablePath*  
 Specifica il percorso di attività di destinazione.  
  
 *strCommandLineArgs*  
 Specifica gli argomenti della riga di comando dell'eseguibile specificato da strTargetExecutablePath.  
  
 *strTitle*  
 Nome dell'attività che verrà visualizzato nell'elenco di destinazione.  
  
 *strIconLocation*  
 Posizione dell'icona che verrà visualizzato nell'elenco di destinazione con il titolo.  
  
 *iIconIndex*  
 Indice di icona.  
  
 *pShellLink*  
 Collegamento della shell che rappresenta un'attività da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 L'istanza di `CJumpList` accumula attività specificata e li aggiunge all'elenco di destinazione durante `CommitList`. Elementi di attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie quando viene compilato nell'interfaccia utente.  
  
##  <a name="addtasks"></a>  CJumpList::AddTasks  
 Aggiunge elementi alla categoria attività canonica.  
  
```  
BOOL AddTasks(IObjectArray* pObjectCollection);
```  
  
### <a name="parameters"></a>Parametri  
 *pObjectCollection*  
 Una raccolta di attività da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 L'istanza di CJumpList accumula attività specificata e li aggiunge all'elenco di destinazione durante `CommitList`. Elementi di attività verranno visualizzati in una categoria nella parte inferiore del menu di destinazione dell'applicazione. Questa categoria ha la precedenza su tutte le altre categorie quando viene compilato nell'interfaccia utente.  
  
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
 *bAutoCommit*  
 Se questo parametro è FALSE l'elenco non è automaticamente eseguito il commit nel distruttore.  
  
##  <a name="clearall"></a>  CJumpList::ClearAll  
 Rimuove tutte le attività e le destinazioni in cui sono stati aggiunti all'istanza corrente di `CJumpList` finora.  
  
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
 Chiamare questa funzione se è necessario rimuovere tutte le destinazioni che sono stati aggiunti finora nella sessione corrente di generazione elenco di destinazione e aggiungono altre destinazioni di nuovo. Se l'oggetto interno `ICustomDestinationList` è stato inizializzato, viene lasciato attivo.  
  
##  <a name="commitlist"></a>  CJumpList::CommitList  
 Termina una transazione di creazione elenco e viene eseguito il commit nell'elenco restituito per l'archivio associato (Registro di sistema in questo caso).  
  
```  
BOOL CommitList();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Il commit è atomico. Se il commit ha esito negativo, verrà restituito un errore.  Quando `CommitList` viene chiamato, corrente verrà pulizia elenco degli elementi rimossi. Chiamare questo metodo reimposta l'oggetto in modo che non dispone di una transazione attiva elenco predefiniti. Per aggiornare l'elenco, `BeginList` deve essere chiamato nuovamente.  
  
##  <a name="getdestinationlist"></a>  CJumpList::GetDestinationList  
 Recupera un puntatore a interfaccia all'elenco di destinazione.  
  
```  
ICustomDestinationList* GetDestinationList();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Se l'elenco di salto non è stata inizializzata, o stato eseguito il commit o interrotto, il valore restituito sarà `NULL`.  
  
##  <a name="getmaxslots"></a>  CJumpList::GetMaxSlots  
 Recupera il numero massimo di elementi, comprese le intestazioni di categoria che è possono visualizzare nel menu di destinazione dell'applicazione chiamante.  
  
```  
UINT GetMaxSlots() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Le applicazioni possono restituire solo un numero di elementi e le intestazioni di categoria combinate fino a questo valore. Se le chiamate a `AppendCategory`, `AppendKnownCategory`, o `AddUserTasks` superare questo numero, verrà restituito un errore.  
  
##  <a name="getremoveditems"></a>  CJumpList::GetRemovedItems  
 Restituisce una matrice di elementi che rappresentano rimosso destinazioni.  
  
```  
IObjectArray* GetRemovedItems();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Le destinazioni rimosse vengono recuperate durante l'inizializzazione del jump list di. Quando si genera un nuovo elenco di destinazione, le applicazioni devono elaborare prima l'elenco di destinazioni rimosse, cancellare i dati di rilevamento per qualsiasi elemento restituito dall'enumeratore elenco rimosso. Se un'applicazione tenta di fornire un elemento a cui è stato rimosso nella transazione corrente chiamata alla `BeginList` avviata, la chiamata al metodo che riaggiunto quell'elemento avrà esito negativo, per garantire che le applicazioni sono rispettando l'elenco rimosso.  
  
##  <a name="initializelist"></a>  CJumpList::InitializeList  
 Avvia una transazione di elenco di compilazione.  
  
```  
BOOL InitializeList();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Non è necessario chiamare questo metodo in modo esplicito a meno che non si desidera recuperare un puntatore a `ICustomDestinationList` mediante `GetDestinationList`, il numero di slot disponibili utilizzando `GetMaxSlots`, o un elenco di elementi rimossi utilizzando `GetRemovedItems`.  
  
##  <a name="setappid"></a>  CJumpList::SetAppID  
 Imposta l'ID modello utente dell'applicazione per l'elenco che verrà compilato.  
  
```  
void SetAppID(LPCTSTR strAppID);
```  
  
### <a name="parameters"></a>Parametri  
 *strAppID*  
 Stringa che specifica l'ID modello utente dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
