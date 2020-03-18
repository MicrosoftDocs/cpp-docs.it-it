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
ms.openlocfilehash: c8a51a33c69b09d0ecd61520b5f1c9ff18c290a0
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420505"
---
# <a name="ccontextmenumanager-class"></a>Classe CContextMenuManager

L'oggetto `CContextMenuManager` gestisce i menu di scelta rapida, detti anche menu di scelta rapida.

## <a name="syntax"></a>Sintassi

```
class CContextMenuManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContextMenuManager:: CContextMenuManager](#ccontextmenumanager)|Costruisce un oggetto `CContextMenuManager`.|
|`CContextMenuManager::~CContextMenuManager`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CContextMenuManager:: AggiungiMenu](#addmenu)|Aggiunge un nuovo menu di scelta rapida.|
|[CContextMenuManager:: GetMenuById](#getmenubyid)|Restituisce un handle per il menu associato all'ID di risorsa specificato.|
|[CContextMenuManager:: GetMenuByName](#getmenubyname)|Restituisce un handle per il menu che corrisponde al nome del menu specificato.|
|[CContextMenuManager:: GetMenuNames](#getmenunames)|Restituisce un elenco di nomi di menu.|
|[CContextMenuManager:: LoadState](#loadstate)|Carica i menu di scelta rapida archiviati nel registro di sistema di Windows.|
|[CContextMenuManager:: ResetState](#resetstate)|Cancella i menu di scelta rapida da Gestione menu di scelta rapida.|
|[CContextMenuManager:: SaveState](#savestate)|Salva i menu di scelta rapida nel registro di sistema di Windows.|
|[CContextMenuManager:: SetDontCloseActiveMenu](#setdontcloseactivemenu)|Controlla se il `CContextMenuManager` chiude il menu di scelta rapida attivo quando viene visualizzato un nuovo menu di scelta rapida.|
|[CContextMenuManager:: ShowPopupMenu](#showpopupmenu)|Consente di visualizzare il menu di scelta rapida specificato.|
|[CContextMenuManager:: TrackPopupMenu](#trackpopupmenu)|Consente di visualizzare il menu di scelta rapida specificato. Restituisce l'indice del comando di menu selezionato.|

## <a name="remarks"></a>Osservazioni

`CContextMenuManager` gestisce i menu di scelta rapida e garantisce che abbiano un aspetto coerente.

Non è consigliabile creare manualmente un oggetto `CContextMenuManager`. Il Framework dell'applicazione crea l'oggetto `CContextMenuManager`. Tuttavia, è necessario chiamare [CWinAppEx:: InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) quando l'applicazione viene inizializzata. Dopo l'inizializzazione del gestore del contesto, utilizzare il metodo [CWinAppEx:: GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager) per ottenere un puntatore al gestore del contesto per l'applicazione.

È possibile creare menu di scelta rapida in fase di esecuzione chiamando `AddMenu`. Se si desidera visualizzare il menu senza ricevere prima l'input dell'utente, chiamare `ShowPopupMenu`. `TrackPopupMenu` viene usato quando si vuole creare un menu e attendere l'input dell'utente. `TrackPopupMenu` restituisce l'indice del comando selezionato oppure 0 se l'utente è terminato senza selezionare alcun elemento.

Il `CContextMenuManager` può inoltre salvare e caricare lo stato nel registro di sistema di Windows.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come aggiungere un menu a un oggetto `CContextMenuManager` e come non chiudere il menu a comparsa attivo quando l'oggetto `CContextMenuManager` Visualizza un nuovo menu a comparsa. Questo frammento di codice fa parte dell' [esempio di pagine personalizzate](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#4](../../mfc/reference/codesnippet/cpp/ccontextmenumanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CContextMenuManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcontextmenumanager. h

##  <a name="addmenu"></a>CContextMenuManager:: AggiungiMenu

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
in ID di risorsa per una stringa che contiene il nome del nuovo menu.

*uiMenuResId*<br/>
in ID della risorsa di menu.

*lpszName*<br/>
in Stringa che contiene il nome del nuovo menu.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha avuto esito positivo; 0 se il metodo ha esito negativo.

### <a name="remarks"></a>Osservazioni

Questo metodo ha esito negativo se *uiMenuResId* non è valido o se nell'`CContextMenuManager`è già presente un altro menu con lo stesso nome.

##  <a name="ccontextmenumanager"></a>CContextMenuManager:: CContextMenuManager

Costruisce un oggetto [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) .

```
CContextMenuManager();
```

### <a name="remarks"></a>Osservazioni

Nella maggior parte dei casi, non è consigliabile creare manualmente un `CContextMenuManager`. Il Framework dell'applicazione crea l'oggetto `CContextMenuManager`. È necessario chiamare [CWinAppEx:: InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) durante l'inizializzazione dell'applicazione. Per ottenere un puntatore al gestore del contesto, chiamare [CWinAppEx:: GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager).

##  <a name="getmenubyid"></a>CContextMenuManager:: GetMenuById

Restituisce un handle per il menu associato a un ID di risorsa specificato.

```
HMENU GetMenuById(UINT nMenuResId) const;
```

### <a name="parameters"></a>Parametri

*nMenuResId*<br/>
in ID risorsa per il menu.

### <a name="return-value"></a>Valore restituito

Handle per il menu associato o `NULL` se il menu non viene trovato.

##  <a name="getmenubyname"></a>CContextMenuManager:: GetMenuByName

Restituisce un handle per un menu specifico.

```
HMENU GetMenuByName(
    LPCTSTR lpszName,
    UINT* puiOrigResID = NULL) const;
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
in Stringa che contiene il nome del menu da recuperare.

*puiOrigResID*<br/>
out Puntatore a un UINT. Questo parametro contiene l'ID risorsa del menu specificato, se trovato.

### <a name="return-value"></a>Valore restituito

Handle per il menu che corrisponde al nome specificato da *lpszName*. NULL se non è presente alcun menu denominato *lpszName*.

### <a name="remarks"></a>Osservazioni

Se questo metodo trova un menu che corrisponde a *lpszName*, `GetMenuByName` archivia l'ID della risorsa di menu nel parametro *puiOrigResID*.

##  <a name="getmenunames"></a>CContextMenuManager:: GetMenuNames

Restituisce l'elenco dei nomi di menu aggiunti a [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```
void GetMenuNames(CStringList& listOfNames) const;
```

### <a name="parameters"></a>Parametri

*listOfNames*<br/>
out Riferimento a un parametro [CString](../../mfc/reference/cstringlist-class.md) . Questo metodo scrive l'elenco di nomi di menu in questo parametro.

##  <a name="loadstate"></a>CContextMenuManager:: LoadState

Carica le informazioni associate alla [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) dal registro di sistema di Windows.

```
virtual BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Stringa che contiene il percorso relativo di una chiave del registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il parametro *lpszProfileName* non è il percorso assoluto di una voce del registro di sistema. Si tratta di un percorso relativo aggiunto alla fine della chiave predefinita del registro di sistema per l'applicazione. Per ottenere o impostare la chiave del registro di sistema predefinita, usare i metodi [CWinAppEx:: GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) e [CWinAppEx:: SetRegistryBase](../../mfc/reference/cwinappex-class.md#setregistrybase) rispettivamente.

Usare il metodo [CContextMenuManager:: SaveState](#savestate) per salvare i menu di scelta rapida nel registro di sistema.

##  <a name="resetstate"></a>CContextMenuManager:: ResetState

Cancella tutti gli elementi dai menu di scelta rapida associati alla [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).

```
virtual BOOL ResetState();
```

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; FALSE se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Questo metodo cancella i menu a comparsa e li rimuove dalla `CContextMenuManager`.

##  <a name="savestate"></a>CContextMenuManager:: SaveState

Salva le informazioni associate alla [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) nel registro di sistema di Windows.

```
virtual BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Stringa che contiene il percorso relativo di una chiave del registro di sistema.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Il parametro *lpszProfileName* non è il percorso assoluto di una voce del registro di sistema. Si tratta di un percorso relativo aggiunto alla fine della chiave predefinita del registro di sistema per l'applicazione. Per ottenere o impostare la chiave del registro di sistema predefinita, usare i metodi [CWinAppEx:: GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) e [CWinAppEx:: SetRegistryBase](../../mfc/reference/cwinappex-class.md#setregistrybase) rispettivamente.

Usare il metodo [CContextMenuManager:: LoadState](#loadstate) per caricare i menu di scelta rapida dal registro di sistema.

##  <a name="setdontcloseactivemenu"></a>CContextMenuManager:: SetDontCloseActiveMenu

Controlla se [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) chiude il menu di scelta rapida attivo quando viene visualizzato un nuovo menu di scelta rapida.

```
void SetDontCloseActiveMenu (BOOL bSet = TRUE);
```

### <a name="parameters"></a>Parametri

*bSet*<br/>
in Parametro booleano che controlla se chiudere il menu di scelta rapida attivo. Il valore TRUE indica che il menu di scelta rapida attivo non è chiuso. FALSE indica che il menu di scelta rapida attivo è chiuso.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il `CContextMenuManager` chiude il menu di scelta rapida attivo.

##  <a name="showpopupmenu"></a>CContextMenuManager:: ShowPopupMenu

Consente di visualizzare il menu di scelta rapida specificato.

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
in ID risorsa del menu che verrà visualizzato da questo metodo.

*x*<br/>
in Offset orizzontale per il menu di scelta rapida nelle coordinate del client.

*y*<br/>
in Offset verticale per il menu di scelta rapida nelle coordinate del client

*pWndOwner*<br/>
in Puntatore alla finestra padre del menu di scelta rapida.

*bOwnMessage*<br/>
in Parametro booleano che indica il modo in cui vengono indirizzati i messaggi. Se *bOwnMessage* è false, viene utilizzato il routing MFC standard. In caso contrario, *pWndOwner* riceve i messaggi.

*hmenuPopup*<br/>
in Handle del menu che verrà visualizzato da questo metodo.

*bAutoDestroy*<br/>
in Parametro booleano che indica se il menu verrà eliminato automaticamente.

*bRightAlign*<br/>
in Parametro booleano che indica il modo in cui le voci di menu sono allineate. Se *bRightAlign* è true, il menu è allineato a destra per l'ordine di lettura da destra a sinistra.

### <a name="return-value"></a>Valore restituito

Il primo overload del metodo restituisce un valore diverso da zero se il metodo visualizza correttamente il menu; in caso contrario, 0. Il secondo overload del metodo restituisce un puntatore a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) se il menu di scelta rapida viene visualizzato correttamente; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile al metodo [CContextMenuManager:: TrackPopupMenu](#trackpopupmenu) in quanto entrambi i metodi visualizzano un menu di scelta rapida. Tuttavia, `TrackPopupMenu` restituisce l'indice del comando di menu selezionato.

Se il parametro *bAutoDestroy* è false, è necessario chiamare manualmente il metodo `DestroyMenu` ereditato per rilasciare le risorse di memoria. L'implementazione predefinita di `ShowPopupMenu` non usa il parametro *bAutoDestroy*. Viene fornito per usi futuri o per le classi personalizzate derivate dalla classe `CContextMenuManager`.

##  <a name="trackpopupmenu"></a>CContextMenuManager:: TrackPopupMenu

Visualizza il menu di scelta rapida specificato e restituisce l'indice del comando di menu di scelta rapida selezionato.

```
virtual UINT TrackPopupMenu(
    HMENU hmenuPopup,
    int x,
    int y,
    CWnd* pWndOwner,
    BOOL bRightAlign = FALSE);
```

### <a name="parameters"></a>Parametri

*hmenuPopup*<br/>
in Handle del menu di scelta rapida visualizzato da questo metodo.

*x*<br/>
in Offset orizzontale per il menu di scelta rapida nelle coordinate del client.

*y*<br/>
in Offset verticale per il menu di scelta rapida nelle coordinate del client.

*pWndOwner*<br/>
in Puntatore alla finestra padre del menu di scelta rapida.

*bRightAlign*<br/>
in Parametro booleano che indica come sono allineate le voci di menu. Se *bRightAlign* è true, il menu è allineato a destra per l'ordine di lettura da destra a sinistra. Se *bRightAlign* è false, il menu è allineato a sinistra per l'ordine di lettura da sinistra a destra.

### <a name="return-value"></a>Valore restituito

ID del comando di menu scelto dall'utente; 0 se l'utente chiude il menu di scelta rapida senza selezionare un comando di menu.

### <a name="remarks"></a>Osservazioni

Questo metodo funge da chiamata modale per visualizzare un menu di scelta rapida. L'applicazione non procederà alla riga seguente nel codice fino a quando l'utente non chiude il menu di scelta rapida né seleziona un comando. Un metodo alternativo che è possibile usare per visualizzare un menu di scelta rapida è [CContextMenuManager:: ShowPopupMenu](#showpopupmenu). Questo metodo non è una chiamata modale e non restituisce l'ID del comando selezionato.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
