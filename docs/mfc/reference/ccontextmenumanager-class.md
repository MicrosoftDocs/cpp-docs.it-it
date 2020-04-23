---
title: Classe CContextMenuManager
ms.date: 11/04/2016
f1_keywords:
- CContextMenuManager
- AFXCONTEXTMENUMANAGER/CContextMenuManager
- AFXCONTEXTMENUMANAGER/CContextMenuManager::CContextMenuManager
- AFXCONTEXTMENUMANAGER/CContextMenuManager::AddMenu
- AFXCONTEXTMENUMANAGER/CContextMenuManager::GetMenuById
- AFXCONTEXTMENUMANAGER/CContextMenuManager::GetMenuByName
- AFXCONTEXTMENUMANAGER/CContextMenuManager::GetMenuNames
- AFXCONTEXTMENUMANAGER/CContextMenuManager::LoadState
- AFXCONTEXTMENUMANAGER/CContextMenuManager::ResetState
- AFXCONTEXTMENUMANAGER/CContextMenuManager::SaveState
- AFXCONTEXTMENUMANAGER/CContextMenuManager::SetDontCloseActiveMenu
- AFXCONTEXTMENUMANAGER/CContextMenuManager::ShowPopupMenu
- AFXCONTEXTMENUMANAGER/CContextMenuManager::TrackPopupMenu
helpviewer_keywords:
- CContextMenuManager [MFC], CContextMenuManager
- CContextMenuManager [MFC], AddMenu
- CContextMenuManager [MFC], GetMenuById
- CContextMenuManager [MFC], GetMenuByName
- CContextMenuManager [MFC], GetMenuNames
- CContextMenuManager [MFC], LoadState
- CContextMenuManager [MFC], ResetState
- CContextMenuManager [MFC], SaveState
- CContextMenuManager [MFC], SetDontCloseActiveMenu
- CContextMenuManager [MFC], ShowPopupMenu
- CContextMenuManager [MFC], TrackPopupMenu
ms.assetid: 1de20640-243c-47e1-85de-1baa4153bc83
ms.openlocfilehash: c676355ebf44d6cc02bfa66ac870757627ae5a58
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754814"
---
# <a name="ccontextmenumanager-class"></a>Classe CContextMenuManager

L'oggetto `CContextMenuManager` gestisce i menu di scelta rapida, noti anche come menu di scelta rapida.

## <a name="syntax"></a>Sintassi

```
class CContextMenuManager : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContextMenuManager::CContextMenuManager](#ccontextmenumanager)|Costruisce un oggetto `CContextMenuManager`.|
|`CContextMenuManager::~CContextMenuManager`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContextMenuManager::AddMenu](#addmenu)|Aggiunge un nuovo menu di scelta rapida.|
|[CContextMenuManager::GetMenuById](#getmenubyid)|Restituisce un handle per il menu associato all'ID risorsa fornito.|
|[CContextMenuManager::GetMenuByName](#getmenubyname)|Restituisce un handle al menu che corrisponde al nome del menu fornito.|
|[CContextMenuManager::GetMenuNames](#getmenunames)|Restituisce un elenco di nomi di menu.|
|[CContextMenuManager::LoadState](#loadstate)|Carica i menu di scelta rapida archiviati nel Registro di sistema di Windows.|
|[CContextMenuManager::ResetState](#resetstate)|Cancella i menu di scelta rapida dal gestore dei menu di scelta rapida.|
|[CContextMenuManager::SaveState](#savestate)|Salva i menu di scelta rapida nel Registro di sistema di Windows.|
|[CContextMenuManager::SetDontCloseActiveMenu](#setdontcloseactivemenu)|Controlla se `CContextMenuManager` chiude il menu di scelta rapida attivo quando viene visualizzato un nuovo menu di scelta rapida.|
|[CContextMenuManager::ShowPopupMenu](#showpopupmenu)|Visualizza il menu di scelta rapida specificato.|
|[CContextMenuManager::TrackPopupMenu](#trackpopupmenu)|Visualizza il menu di scelta rapida specificato. Restituisce l'indice del comando di menu selezionato.|

## <a name="remarks"></a>Osservazioni

`CContextMenuManager`gestisce i menu di scelta rapida e si assicura che abbiano un aspetto coerente.

Non creare un `CContextMenuManager` oggetto manualmente. Il framework dell'applicazione `CContextMenuManager` crea l'oggetto. Tuttavia, è necessario chiamare [CWinAppEx::InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) quando viene inizializzata l'applicazione. Dopo l'inizializzazione del gestore di contesto, utilizzare il metodo [CWinAppEx::GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager) per ottenere un puntatore al gestore del contesto per l'applicazione.

È possibile creare menu di `AddMenu`scelta rapida in fase di esecuzione chiamando . Se si desidera visualizzare il menu senza `ShowPopupMenu`prima ricevere l'input dell'utente, chiamare . `TrackPopupMenu`viene utilizzato quando si desidera creare un menu e attendere l'input dell'utente. `TrackPopupMenu`restituisce l'indice del comando selezionato o 0 se l'utente è uscito senza selezionare nulla.

Il `CContextMenuManager` può anche salvare e caricare il proprio stato nel Registro di sistema di Windows.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CContextMenuManager` aggiungere un menu a un oggetto e `CContextMenuManager` come non chiudere il menu a comparsa attivo quando l'oggetto visualizza un nuovo menu a comparsa. Questo frammento di codice fa parte [dell'esempio Pagine personalizzate](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#4](../../mfc/reference/codesnippet/cpp/ccontextmenumanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CContextMenuManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcontextmenumanager.h

## <a name="ccontextmenumanageraddmenu"></a><a name="addmenu"></a>CContextMenuManager::AddMenu

Aggiunge un nuovo menu di scelta rapida a [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```
BOOL AddMenu(
    UINT uiMenuNameResId,
    UINT uiMenuResId);

BOOL AddMenu(
    LPCTSTR lpszName,
    UINT uiMenuResId);
```

### <a name="parameters"></a>Parametri

*uiMenuNameResId*<br/>
[in] ID di risorsa per una stringa che contiene il nome del nuovo menu.

*uiMenuResId*<br/>
[in] ID della risorsa di menu.

*lpszName*<br/>
[in] Stringa contenente il nome del nuovo menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; 0 se il metodo ha esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se *uiMenuResId* non è `CContextMenuManager`valido o se è già presente un altro menu con lo stesso nome nell'oggetto .

## <a name="ccontextmenumanagerccontextmenumanager"></a><a name="ccontextmenumanager"></a>CContextMenuManager::CContextMenuManager

Costruisce un oggetto [CContextMenuManager.](../../mfc/reference/ccontextmenumanager-class.md)

```
CContextMenuManager();
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, non è consigliabile creare manualmente un `CContextMenuManager` oggetto . Il framework dell'applicazione `CContextMenuManager` crea l'oggetto. È necessario chiamare [CWinAppEx::InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) durante l'inizializzazione dell'applicazione. Per ottenere un puntatore al gestore del contesto, chiamare [CWinAppEx::GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager).

## <a name="ccontextmenumanagergetmenubyid"></a><a name="getmenubyid"></a>CContextMenuManager::GetMenuById

Restituisce un handle per il menu associato a un ID di risorsa specificato.

```
HMENU GetMenuById(UINT nMenuResId) const;
```

### <a name="parameters"></a>Parametri

*nMenuResId*<br/>
[in] ID risorsa per il menu.

### <a name="return-value"></a>Valore restituito

Una maniglia per `NULL` il menu associato o se il menu non viene trovato.

## <a name="ccontextmenumanagergetmenubyname"></a><a name="getmenubyname"></a>CContextMenuManager::GetMenuByName

Restituisce un handle a un menu specifico.

```
HMENU GetMenuByName(
    LPCTSTR lpszName,
    UINT* puiOrigResID = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Stringa contenente il nome del menu da recuperare.

*puiOrigResID*<br/>
[fuori] Puntatore a un UINT. Questo parametro contiene l'ID risorsa del menu specificato, se trovato.

### <a name="return-value"></a>Valore restituito

Handle del menu che corrisponde al nome specificato da *lpszName*. NULL se non è presente alcun menu denominato *lpszName*.

### <a name="remarks"></a>Osservazioni

Se questo metodo trova un menu che `GetMenuByName` corrisponde a *lpszName*, archivia l'ID della risorsa menu nel *parametro puiOrigResID*.

## <a name="ccontextmenumanagergetmenunames"></a><a name="getmenunames"></a>CContextMenuManager::GetMenuNames

Restituisce l'elenco dei nomi di menu aggiunti a [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```cpp
void GetMenuNames(CStringList& listOfNames) const;
```

### <a name="parameters"></a>Parametri

*listOfNomi*<br/>
[fuori] Riferimento a un parametro [CStringList.](../../mfc/reference/cstringlist-class.md) Questo metodo scrive l'elenco dei nomi di menu in questo parametro.

## <a name="ccontextmenumanagerloadstate"></a><a name="loadstate"></a>CContextMenuManager::LoadState

Carica le informazioni associate alla [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) dal Registro di sistema di Windows.

```
virtual BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Stringa contenente il percorso relativo di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il *lpszProfileName* parametro non è il percorso assoluto per una voce del Registro di sistema. Si tratta di un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinita per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinita, utilizzare rispettivamente i metodi [CWinAppEx::GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) e [CWinAppEx::SetRegistryBase.](../../mfc/reference/cwinappex-class.md#setregistrybase)

Utilizzare il metodo [CContextMenuManager::SaveState](#savestate) per salvare i menu di scelta rapida nel Registro di sistema.

## <a name="ccontextmenumanagerresetstate"></a><a name="resetstate"></a>CContextMenuManager::ResetState

Cancella tutte le voci dai menu di scelta rapida associati alla [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```
virtual BOOL ResetState();
```

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. FALSE se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questo metodo cancella i menu a comparsa `CContextMenuManager`e li rimuove dall'oggetto .

## <a name="ccontextmenumanagersavestate"></a><a name="savestate"></a>CContextMenuManager::SaveState

Salva le informazioni associate alla [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) nel Registro di sistema di Windows.

```
virtual BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Stringa contenente il percorso relativo di una chiave del Registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il *lpszProfileName* parametro non è il percorso assoluto per una voce del Registro di sistema. Si tratta di un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinita per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinita, utilizzare rispettivamente i metodi [CWinAppEx::GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) e [CWinAppEx::SetRegistryBase.](../../mfc/reference/cwinappex-class.md#setregistrybase)

Utilizzare il metodo [CContextMenuManager::LoadState](#loadstate) per caricare i menu di scelta rapida dal Registro di sistema.

## <a name="ccontextmenumanagersetdontcloseactivemenu"></a><a name="setdontcloseactivemenu"></a>CContextMenuManager::SetDontCloseActiveMenu

Controlla se [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) chiude il menu a comparsa attivo quando viene visualizzato un nuovo menu a comparsa.

```cpp
void SetDontCloseActiveMenu (BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bImpostazione*<br/>
[in] Un parametro booleano che controlla se chiudere il menu a comparsa attivo. Il valore TRUE indica che il menu a comparsa attivo non è chiuso. FALSE indica che il menu a comparsa attivo è chiuso.

### <a name="remarks"></a>Osservazioni

Per impostazione `CContextMenuManager` predefinita, chiude il menu a comparsa attivo.

## <a name="ccontextmenumanagershowpopupmenu"></a><a name="showpopupmenu"></a>CContextMenuManager::ShowPopupMenu

Visualizza il menu di scelta rapida specificato.

```
virtual BOOL ShowPopupMenu(
    UINT uiMenuResId,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bOwnMessage = FALSE,
    BOOL bRightAlign = FALSE);

virtual CMFCPopupMenu* ShowPopupMenu(
    HMENU hmenuPopup,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bOwnMessage = FALSE,
    BOOL bAutoDestroy = TRUE,
    BOOL bRightAlign = FALSE);
```

### <a name="parameters"></a>Parametri

*uiMenuResId*<br/>
[in] ID risorsa del menu che verrà visualizzato da questo metodo.

*x*<br/>
[in] Offset orizzontale per il menu di scelta rapida nelle coordinate client.

*Y*<br/>
[in] Offset verticale per il menu di scelta rapida nelle coordinate client

*pWndProprietario*<br/>
[in] Puntatore alla finestra padre del menu di scelta rapida.

*bMessaggio inproprio*<br/>
[in] Parametro booleano che indica la modalità di instradamento dei messaggi. Se *bOwnMessage* è FALSE, viene utilizzato il routing MFC standard. In caso contrario, *pWndOwner* riceve i messaggi.

*hmenuPopup (informazioni in stato inquestoes*<br/>
[in] Handle del menu che verrà visualizzato da questo metodo.

*bAutoDistruggi*<br/>
[in] Parametro booleano che indica se il menu verrà eliminato automaticamente.

*bRightAlign (informazioni in base al*<br/>
[in] Parametro booleano che indica la modalità di allineamento delle voci di menu. Se *bRightAlign* è TRUE, il menu è allineato a destra per l'ordine di lettura da destra a sinistra.

### <a name="return-value"></a>Valore restituito

Il primo overload del metodo restituisce diverso da zero se il metodo mostra il menu correttamente; in caso contrario 0. Il secondo overload del metodo restituisce un puntatore a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) se il menu di scelta rapida viene visualizzato correttamente; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile al metodo [CContextMenuManager::TrackPopupMenu](#trackpopupmenu) in quanto entrambi i metodi visualizzano un menu di scelta rapida. Tuttavia, `TrackPopupMenu` restituisce l'indice del comando di menu selezionato.

Se il parametro *bAutoDestroy* è FALSE, `DestroyMenu` è necessario chiamare manualmente il metodo ereditato per rilasciare le risorse di memoria. L'implementazione `ShowPopupMenu` predefinita di non utilizza il parametro *bAutoDestroy*. Viene fornito per un utilizzo futuro o `CContextMenuManager` per le classi personalizzate derivate dalla classe .

## <a name="ccontextmenumanagertrackpopupmenu"></a><a name="trackpopupmenu"></a>CContextMenuManager::TrackPopupMenu

Visualizza il menu di scelta rapida specificato e restituisce l'indice del comando del menu di scelta rapida selezionato.

```
virtual UINT TrackPopupMenu(
    HMENU hmenuPopup,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bRightAlign = FALSE);
```

### <a name="parameters"></a>Parametri

*hmenuPopup (informazioni in stato inquestoes*<br/>
[in] Handle del menu di scelta rapida visualizzato da questo metodo.

*x*<br/>
[in] Offset orizzontale per il menu di scelta rapida nelle coordinate client.

*Y*<br/>
[in] Offset verticale per il menu di scelta rapida nelle coordinate client.

*pWndProprietario*<br/>
[in] Puntatore alla finestra padre del menu di scelta rapida.

*bRightAlign (informazioni in base al*<br/>
[in] Parametro booleano che indica la modalità di allineamento delle voci di menu. Se *bRightAlign* è TRUE, il menu è allineato a destra per l'ordine di lettura da destra a sinistra. Se *bRightAlign* è FALSE, il menu è allineato a sinistra per l'ordine di lettura da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Id del comando di menu scelto dall'utente; 0 se l'utente chiude il menu di scelta rapida senza selezionare un comando di menu.

### <a name="remarks"></a>Osservazioni

Questo metodo funziona come una chiamata modale per visualizzare un menu di scelta rapida. L'applicazione non continuerà alla riga seguente nel codice fino a quando l'utente non chiude il menu di scelta rapida o seleziona un comando. Un metodo alternativo che è possibile utilizzare per visualizzare un menu di scelta rapida è [CContextMenuManager::ShowPopupMenu](#showpopupmenu). Tale metodo non è una chiamata modale e non restituirà l'ID del comando selezionato.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
