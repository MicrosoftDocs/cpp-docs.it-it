---
title: Classe CContextMenuManager | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c3a9088ced647dd0e6694181cd7ab7857047c720
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713281"
---
# <a name="ccontextmenumanager-class"></a>Classe CContextMenuManager
Il `CContextMenuManager` oggetto gestisce i menu di scelta rapida, noto anche come menu di scelta rapida.  
  
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
|[CContextMenuManager::GetMenuById](#getmenubyid)|Restituisce un handle per il menu associato l'ID risorsa specificato.|  
|[CContextMenuManager::GetMenuByName](#getmenubyname)|Restituisce un handle al menu che corrisponde al nome del menu di scelta specificato.|  
|[CContextMenuManager::GetMenuNames](#getmenunames)|Restituisce un elenco di nomi di menu.|  
|[CContextMenuManager::LoadState](#loadstate)|Carica il menu di scelta rapida archiviato nel Registro di sistema Windows.|  
|[CContextMenuManager::ResetState](#resetstate)|Cancella i menu di scelta rapida dal gestore di menu di scelta rapida.|  
|[CContextMenuManager::SaveState](#savestate)|Salva i menu di scelta rapida per il Registro di sistema di Windows.|  
|[CContextMenuManager::SetDontCloseActiveMenu](#setdontcloseactivemenu)|Controlli se il `CContextMenuManager` chiude il menu di scelta rapida attiva quando viene visualizzato un nuovo menu di scelta rapida.|  
|[CContextMenuManager::ShowPopupMenu](#showpopupmenu)|Visualizza il menu di scelta rapida specificati.|  
|[CContextMenuManager::TrackPopupMenu](#trackpopupmenu)|Visualizza il menu di scelta rapida specificati. Restituisce l'indice del comando di menu selezionata.|  
  
## <a name="remarks"></a>Note  
 `CContextMenuManager` gestisce i menu di scelta rapida e garantisce che abbiano un aspetto coerente.  
  
 Non è necessario creare un `CContextMenuManager` oggetto manualmente. Il framework dell'applicazione crea il `CContextMenuManager` oggetto. Tuttavia, è necessario chiamare [CWinAppEx::InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) quando viene inizializzato l'applicazione. Dopo aver inizializzato gestore di contesto, usare il metodo [CWinAppEx::GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager) per ottenere un puntatore al gestore di contesto per l'applicazione.  
  
 È possibile creare i menu di scelta rapida in fase di esecuzione chiamando `AddMenu`. Se si desidera visualizzare il menu senza prima ricevente input dell'utente, chiamare `ShowPopupMenu`. `TrackPopupMenu` viene usato quando si desidera creare un menu di scelta e attende l'input utente. `TrackPopupMenu` Restituisce l'indice del comando selezionato oppure 0 se l'utente è stata chiusa senza effettuare selezioni.  
  
 Il `CContextMenuManager` possono anche salvare e caricare il proprio stato nel Registro di sistema di Windows.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come aggiungere un menu a un `CContextMenuManager` oggetti e come non chiudere il menu a comparsa attivo quando il `CContextMenuManager` oggetto venga visualizzato un nuovo menu a comparsa. Questo frammento di codice fa parte il [esempio di pagine personalizzate](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#4](../../mfc/reference/codesnippet/cpp/ccontextmenumanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CContextMenuManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcontextmenumanager. h  
  
##  <a name="addmenu"></a>  CContextMenuManager::AddMenu  
 Aggiunge un nuovo menu di scelta rapida per il [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).  
  
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
[in] Un ID di risorsa per una stringa che contiene il nome per il nuovo menu.  
  
*uiMenuResId*<br/>
[in] L'ID di risorsa di menu.  
  
*lpszName*<br/>
[in] Stringa che contiene il nome per il nuovo menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; 0 se il metodo ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Questo metodo ha esito negativo se *uiMenuResId* non è valido o se un altro menu con lo stesso nome è già nel `CContextMenuManager`.  
  
##  <a name="ccontextmenumanager"></a>  CContextMenuManager::CContextMenuManager  
 Costruisce un [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) oggetto.  
  
```  
CContextMenuManager();
```  
  
### <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non è necessario creare un `CContextMenuManager` manualmente. Il framework dell'applicazione crea il `CContextMenuManager` oggetto. È necessario chiamare [CWinAppEx::InitContextMenuManager](../../mfc/reference/cwinappex-class.md#initcontextmenumanager) durante l'inizializzazione dell'applicazione. Per ottenere un puntatore per la gestione del contesto, chiamare [CWinAppEx::GetContextMenuManager](../../mfc/reference/cwinappex-class.md#getcontextmenumanager).  
  
##  <a name="getmenubyid"></a>  CContextMenuManager::GetMenuById  
 Restituisce un handle per il menu associato a un ID risorsa specificato.  
  
```  
HMENU GetMenuById(UINT nMenuResId) const;  
```  
  
### <a name="parameters"></a>Parametri  
*nMenuResId*<br/>
[in] L'ID di risorsa per il menu di scelta.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per il menu associato o `NULL` se il menu non viene trovato.  
  
##  <a name="getmenubyname"></a>  CContextMenuManager::GetMenuByName  
 Restituisce un handle a un menu specifico.  
  
```  
HMENU GetMenuByName(
    LPCTSTR lpszName,  
    UINT* puiOrigResID = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
*lpszName*<br/>
[in] Stringa che contiene il nome del menu da recuperare.  
  
*puiOrigResID*<br/>
[out] Puntatore a un UINT. Questo parametro contiene l'ID di risorsa di menu specificato, se trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per il menu che corrisponde al nome specificato da *lpszName*. NULL se non esiste alcun menu chiamato *lpszName*.  
  
### <a name="remarks"></a>Note  
 Se questo metodo trova un menu che corrisponde a *lpszName*, `GetMenuByName` archivia l'ID di risorsa di menu nel parametro *puiOrigResID*.  
  
##  <a name="getmenunames"></a>  CContextMenuManager::GetMenuNames  
 Restituisce l'elenco di nomi di menu aggiunta per il [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).  
  
```  
void GetMenuNames(CStringList& listOfNames) const;  
```  
  
### <a name="parameters"></a>Parametri  
*listOfNames*<br/>
[out] Un riferimento a un [CStringList](../../mfc/reference/cstringlist-class.md) parametro. Questo metodo scrive l'elenco di nomi di menu per questo parametro.  
  
##  <a name="loadstate"></a>  CContextMenuManager::LoadState  
 Carica le informazioni associate le [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) dal Registro di sistema Windows.  
  
```  
virtual BOOL LoadState(LPCTSTR lpszProfileName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
*lpszProfileName*<br/>
[in] Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il *lpszProfileName* parametro non è il percorso assoluto per una voce del Registro di sistema. Si tratta di un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, usare i metodi [CWinAppEx::GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) e [CWinAppEx::SetRegistryBase](../../mfc/reference/cwinappex-class.md#setregistrybase) rispettivamente.  
  
 Usare il metodo [CContextMenuManager::SaveState](#savestate) per salvare i menu di scelta rapida per il Registro di sistema.  
  
##  <a name="resetstate"></a>  CContextMenuManager::ResetState  
 Cancella tutti gli elementi dal menu di scelta rapida associati con il [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md).  
  
```  
virtual BOOL ResetState();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha esito positivo. FALSE se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo cancella il menu di scelta rapida e li rimuove dal `CContextMenuManager`.  
  
##  <a name="savestate"></a>  CContextMenuManager::SaveState  
 Salva le informazioni associate le [classe CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) nel Registro di sistema di Windows.  
  
```  
virtual BOOL SaveState(LPCTSTR lpszProfileName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
*lpszProfileName*<br/>
[in] Stringa che contiene il percorso relativo di una chiave del Registro di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il *lpszProfileName* parametro non è il percorso assoluto per una voce del Registro di sistema. Si tratta di un percorso relativo che viene aggiunto alla fine della chiave del Registro di sistema predefinito per l'applicazione. Per ottenere o impostare la chiave del Registro di sistema predefinito, usare i metodi [CWinAppEx::GetRegistryBase](../../mfc/reference/cwinappex-class.md#getregistrybase) e [CWinAppEx::SetRegistryBase](../../mfc/reference/cwinappex-class.md#setregistrybase) rispettivamente.  
  
 Usare il metodo [CContextMenuManager::LoadState](#loadstate) per caricare i menu di scelta rapida dal Registro di sistema.  
  
##  <a name="setdontcloseactivemenu"></a>  CContextMenuManager::SetDontCloseActiveMenu  
 Controlli se il [CContextMenuManager](../../mfc/reference/ccontextmenumanager-class.md) chiude il menu a comparsa attivo quando questo viene visualizzato un nuovo menu a comparsa.  
  
```  
void SetDontCloseActiveMenu (BOOL bSet = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
*bSet*<br/>
[in] Un parametro booleano che controlla se chiudere il menu a comparsa attivo. Il valore TRUE indica che il menu a comparsa attivo non viene chiusa. FALSE indica che il menu a comparsa attivo viene chiuso.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il `CContextMenuManager` chiude il menu a comparsa attivo.  
  
##  <a name="showpopupmenu"></a>  CContextMenuManager::ShowPopupMenu  
 Visualizza il menu di scelta rapida specificati.  
  
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
[in] L'ID risorsa del menu di scelta che visualizzerà questo metodo.  
  
*x*<br/>
[in] Orizzontale offset per il menu di scelta rapida nelle coordinate del client.  
  
*y*<br/>
[in] L'offset verticale per il menu di scelta rapida nelle coordinate del client  
  
*pWndOwner*<br/>
[in] Puntatore alla finestra padre del menu di scelta rapida.  
  
*bOwnMessage*<br/>
[in] Un parametro booleano che indica come vengono indirizzati i messaggi. Se *bOwnMessage* è FALSE, standard MFC viene utilizzato il routing. In caso contrario, *pWndOwner* riceve i messaggi.  
  
*hmenuPopup*<br/>
[in] L'handle del menu di scelta che visualizzerà questo metodo.  
  
*flag bAutoDestroy*<br/>
[in] Un parametro booleano che indica se il menu di scelta verrà automaticamente eliminato definitivamente.  
  
*bRightAlign*<br/>
[in] Un parametro booleano che indica la modalità di allineamento delle voci di menu. Se *bRightAlign* è TRUE, il menu di scelta è allineata a destra per ordine di lettura da destra a sinistra.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo overload restituisce diverso da zero se il metodo viene illustrato il menu di scelta correttamente. in caso contrario 0. Il secondo overload del metodo restituisce un puntatore a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) se verrà visualizzato il menu di scelta rapida in modo corretto; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Questo metodo è simile al metodo [CContextMenuManager::TrackPopupMenu](#trackpopupmenu) in quanto entrambi i metodi di visualizzano un menu di scelta rapida. Tuttavia, `TrackPopupMenu` restituisce l'indice del comando di menu selezionata.  
  
 Se il parametro *il flag bAutoDestroy* è FALSE, è necessario chiamare manualmente ereditato `DestroyMenu` metodo per rilasciare le risorse di memoria. L'implementazione predefinita di `ShowPopupMenu` non usa il parametro *il flag bAutoDestroy*. Viene fornito per usi futuri o per classi personalizzate derivate dal `CContextMenuManager` classe.  
  
##  <a name="trackpopupmenu"></a>  CContextMenuManager::TrackPopupMenu  
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
[in] Handle del menu di scelta rapida che consente di visualizzare questo metodo.  
  
*x*<br/>
[in] Orizzontale offset per il menu di scelta rapida nelle coordinate del client.  
  
*y*<br/>
[in] L'offset per il menu di scelta rapida nelle coordinate del client verticale.  
  
*pWndOwner*<br/>
[in] Puntatore alla finestra padre del menu di scelta rapida.  
  
*bRightAlign*<br/>
[in] Un parametro booleano che indica la modalità di allineamento delle voci di menu. Se *bRightAlign* è TRUE, il menu di scelta è allineata a destra per ordine di lettura da destra a sinistra. Se *bRightAlign* è FALSE, il menu di scelta è allineata a sinistra per ordine di lettura da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando di menu del comando che l'utente sceglie; 0 se l'utente chiude il menu di scelta rapida senza selezionare un comando di menu.  
  
### <a name="remarks"></a>Note  
 Questo metodo funziona come una chiamata modale per visualizzare un menu di scelta rapida. L'applicazione non continuerà per la riga seguente nel codice fino a quando l'utente chiude il menu di scelta rapida o seleziona un comando. È un metodo alternativo che è possibile usare per visualizzare un menu di scelta rapida [CContextMenuManager::ShowPopupMenu](#showpopupmenu). Tale metodo non è una chiamata modale e non restituirà l'ID del comando selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)
