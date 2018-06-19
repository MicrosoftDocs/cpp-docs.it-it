---
title: Classe CMFCShellTreeCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCShellTreeCtrl
- AFXSHELLTREECTRL/CMFCShellTreeCtrl
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::EnableShellContextMenu
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::GetFlags
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::GetItemPath
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::GetRelatedList
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::OnChildNotify
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::OnGetItemIcon
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::OnGetItemText
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::Refresh
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::SelectPath
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::SetFlags
- AFXSHELLTREECTRL/CMFCShellTreeCtrl::SetRelatedList
dev_langs:
- C++
helpviewer_keywords:
- CMFCShellTreeCtrl [MFC], EnableShellContextMenu
- CMFCShellTreeCtrl [MFC], GetFlags
- CMFCShellTreeCtrl [MFC], GetItemPath
- CMFCShellTreeCtrl [MFC], GetRelatedList
- CMFCShellTreeCtrl [MFC], OnChildNotify
- CMFCShellTreeCtrl [MFC], OnGetItemIcon
- CMFCShellTreeCtrl [MFC], OnGetItemText
- CMFCShellTreeCtrl [MFC], Refresh
- CMFCShellTreeCtrl [MFC], SelectPath
- CMFCShellTreeCtrl [MFC], SetFlags
- CMFCShellTreeCtrl [MFC], SetRelatedList
ms.assetid: 3d1da715-9554-4ed7-968c-055c48146267
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fdd7e13e74fc3ae739c825f8aff95a79db8b5e29
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33371446"
---
# <a name="cmfcshelltreectrl-class"></a>Classe CMFCShellTreeCtrl
Il `CMFCShellTreeCtrl` classe estende [CTreeCtrl (classe)](../../mfc/reference/ctreectrl-class.md) funzionalità visualizzando una gerarchia di elementi della Shell.  

 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]    
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCShellTreeCtrl : public CTreeCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCShellTreeCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Abilita o disabilita il menu di scelta rapida.|  
|[CMFCShellTreeCtrl::GetFlags](#getflags)|Restituisce una combinazione di flag che vengono passati a [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066).|  
|[CMFCShellTreeCtrl::GetItemPath](#getitempath)|Recupera il percorso di un elemento.|  
|[CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist)|Restituisce un puntatore al [classe oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto che viene utilizzato insieme a questo `CMFCShellTreeCtrl` oggetto per creare una finestra simile a Esplora risorse.|  
|[CMFCShellTreeCtrl::OnChildNotify](#onchildnotify)|Quando riceve un messaggio di notifica che si applica a questa finestra, questa funzione membro viene chiamata dalla finestra padre della finestra. (Esegue l'override [CWnd:: OnChildNotify](../../mfc/reference/cwnd-class.md#onchildnotify).)|  
|[CMFCShellTreeCtrl::OnGetItemIcon](#ongetitemicon)||  
|[CMFCShellTreeCtrl::OnGetItemText](#ongetitemtext)||  
|[CMFCShellTreeCtrl::Refresh](#refresh)|Aggiorna e ridisegna corrente `CMFCShellTreeCtrl` oggetto.|  
|[CMFCShellTreeCtrl::SelectPath](#selectpath)|Seleziona l'elemento di controllo dell'albero appropriato in base a una PIDL fornito o un percorso di stringa.|  
|[CMFCShellTreeCtrl::SetFlags](#setflags)|Imposta i flag per il contesto di struttura ad albero di filtro (simili ai flag utilizzati da `IShellFolder::EnumObjects`).|  
|[CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist)|Imposta una relazione tra l'oggetto corrente `CMFCShellTreeCtrl` oggetto e un `CMFCShellListCtrl` oggetto.|  
  
## <a name="remarks"></a>Note  
 Questa classe estende la `CTreeCtrl` classe abilitando il programma includere gli elementi di Shell di Windows nella struttura. Questa classe può essere associata a un `CMFCShellListCtrl` oggetto per creare una finestra di Esplora completezza. Quindi, selezionando un elemento nella struttura visualizzerà un elenco di elementi della Shell di Windows nell'elenco associato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CTreeCtrl](../../mfc/reference/ctreectrl-class.md)  
  
 `CMFCShellTreeCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxshelltreeCtrl.h  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CMFCShellTreeCtrl`. Questo frammento di codice fa parte di [esempio Explorer](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_1.h)]  
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_2.cpp)]  
  
##  <a name="enableshellcontextmenu"></a>  CMFCShellTreeCtrl::EnableShellContextMenu  
 Abilita il menu di scelta rapida.  
  
```  
void EnableShellContextMenu(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Valore booleano che specifica se abilitare il menu di scelta rapida.  
  
##  <a name="getflags"></a>  CMFCShellTreeCtrl::GetFlags  
 Restituisce i flag impostati per la [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.  
  
```  
DWORD GetFlags() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` valore che specifica la combinazione di flag attualmente impostato.  
  
### <a name="remarks"></a>Note  
 I flag impostati `CMFCShellTreeCtrl` vengono inviate al metodo [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066) ogni volta che l'oggetto viene aggiornato. È possibile modificare i flag con la [CMFCShellTreeCtrl::SetFlags](#setflags) metodo.  
  
##  <a name="getitempath"></a>  CMFCShellTreeCtrl::GetItemPath  
 Recupera il percorso di un elemento di [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.  
  
```  
BOOL GetItemPath(
    CString& strPath,  
    HTREEITEM htreeItem = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `strPath`  
 Un riferimento a un parametro di stringa. A questo parametro, il metodo scrive il percorso dell'elemento.  
  
 [in] `htreeItem`  
 Il metodo recupera il percorso per questo elemento di controllo di struttura ad albero.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se questo metodo non riesce, `strPath` contiene una stringa vuota.  
  
 Se non si specifica `hTreeItem`, questo metodo tenta di ottenere la stringa per l'elemento attualmente selezionato. Se è selezionato alcun elemento e `hTreeItem` è `NULL`, questo metodo ha esito negativo.  
  
##  <a name="getrelatedlist"></a>  CMFCShellTreeCtrl::GetRelatedList  
 Restituisce un puntatore al [classe oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) associato all'oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.  
  
```  
CMFCShellListCtrl* GetRelatedList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `CMFCShellListCtrl` oggetto associato all'oggetto controllo struttura ad albero.  
  
### <a name="remarks"></a>Note  
 Utilizzando un `CMFCShellListCtrl` oggetto insieme a un `CMFCShellTreeCtrl` dell'oggetto, è possibile creare una finestra simile a Esplora risorse. Utilizzare il metodo [CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist) per associare le due classi. Dopo che sono associati, il framework aggiorna automaticamente il `CMFCShellListCtrl` se la selezione nella `CMFCShellTreeCtrl` le modifiche.  
  
##  <a name="onchildnotify"></a>  CMFCShellTreeCtrl::OnChildNotify  

  
```  
virtual BOOL OnChildNotify(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam,  
    LRESULT* pLResult);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `message`  
 [in] `wParam`  
 [in] `lParam`  
 [in] `pLResult`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ongetitemicon"></a>  CMFCShellTreeCtrl::OnGetItemIcon  

  
```  
virtual int OnGetItemIcon(
    LPAFX_SHELLITEMINFO pItem,  
    BOOL bSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pItem`  
 [in] `bSelected`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ongetitemtext"></a>  CMFCShellTreeCtrl::OnGetItemText  

  
```  
virtual CString OnGetItemText(LPAFX_SHELLITEMINFO pItem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pItem`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="refresh"></a>  CMFCShellTreeCtrl::Refresh  
 Aggiorna e ridisegna il [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md).  
  
```  
void Refresh();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per aggiornare la gerarchia degli elementi visualizzati nel `CMFCShellTreeCtrl`.  
  
##  <a name="selectpath"></a>  CMFCShellTreeCtrl::SelectPath  
 Seleziona un elemento di [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md) in base al percorso specificato.  
  
```  
BOOL SelectPath(LPCTSTR lpszPath);
BOOL SelectPath(LPCITEMIDLIST lpidl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszPath`  
 Stringa che specifica il percorso di un elemento.  
  
 [in] `lpidl`  
 Un PIDL che specifica l'elemento  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK` Se l'operazione riesce; `E_FAIL` in caso contrario.  
  
##  <a name="setflags"></a>  CMFCShellTreeCtrl::SetFlags  
 Imposta i flag per il contesto di struttura ad albero di filtro.  
  
```  
void SetFlags(
    DWORD dwFlags,  
    BOOL bRefresh = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwFlags`  
 Flag da impostare.  
  
 [in] `bRefresh`  
 Valore booleano che specifica se il `CMFCShellTreeCtrl` devono essere aggiornati immediatamente.  
  
### <a name="remarks"></a>Note  
 Il `CMFCShellTreeCtrl` passa tutti i flag di [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066). Per ulteriori informazioni sui valori di flag diversa, vedere [IShellFolder::EnumObjects](http://msdn.microsoft.com/library/windows/desktop/bb775066).  
  
##  <a name="setrelatedlist"></a>  CMFCShellTreeCtrl::SetRelatedList  
 Associa un [oggetto CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) dell'oggetto con un [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.  
  
```  
void SetRelatedList(CMFCShellListCtrl* pShellList);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pShellList`  
 Un puntatore a un `CMFCShellListCtrl` oggetto.  
  
### <a name="remarks"></a>Note  
 Questo metodo associa un `CMFCShellListCtrl` con un `CMFCShellTreeCtrl`. Questi oggetti possono essere visualizzati come una finestra simile a Esplora risorse: se l'utente seleziona un oggetto nel `CMFCShellTreeCtrl`, l'associati gli elementi di `CMFCShellListCtrl` verranno aggiornate automaticamente.  
  
 Utilizzare il metodo [CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist) per recuperare il `CMFCShellListCtrl` associata a un `CMFCShellTreeCtrl`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CTreeCtrl (classe)](../../mfc/reference/ctreectrl-class.md)   
 [Classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md)
