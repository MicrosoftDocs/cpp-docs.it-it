---
title: Classe CMFCShellTreeCtrl
ms.date: 11/04/2016
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
ms.openlocfilehash: 1fc422c3aca3efe1fb177e7a3567530d70c27119
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58779755"
---
# <a name="cmfcshelltreectrl-class"></a>Classe CMFCShellTreeCtrl

Il `CMFCShellTreeCtrl` classe estende [classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md) funzionalità visualizzando una gerarchia di elementi della Shell.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.
## <a name="syntax"></a>Sintassi

```
class CMFCShellTreeCtrl : public CTreeCtrl
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCShellTreeCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Abilita o disabilita il menu di scelta rapida.|
|[CMFCShellTreeCtrl::GetFlags](#getflags)|Restituisce una combinazione di flag passati a [IShellFolder::EnumObjects](/windows/desktop/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).|
|[CMFCShellTreeCtrl::GetItemPath](#getitempath)|Recupera il percorso di un elemento.|
|[CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist)|Restituisce un puntatore ai [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) che viene usato insieme a questo oggetto `CMFCShellTreeCtrl` oggetto per creare una finestra simile a Esplora risorse.|
|[CMFCShellTreeCtrl::OnChildNotify](#onchildnotify)|Questa funzione membro viene chiamata dalla finestra padre della finestra quando viene ricevuto un messaggio di notifica che si applica a questa finestra. (Esegue l'override [CWnd:: OnChildNotify](../../mfc/reference/cwnd-class.md#onchildnotify).)|
|[CMFCShellTreeCtrl::OnGetItemIcon](#ongetitemicon)||
|[CMFCShellTreeCtrl::OnGetItemText](#ongetitemtext)||
|[CMFCShellTreeCtrl::Refresh](#refresh)|Consente di aggiornare e ridisegna corrente `CMFCShellTreeCtrl` oggetto.|
|[CMFCShellTreeCtrl::SelectPath](#selectpath)|Seleziona l'elemento di controllo albero corrispondente basato su un percorso di stringa o PIDL fornito.|
|[CMFCShellTreeCtrl::SetFlags](#setflags)|Imposta i flag per il contesto dell'albero di filtro (simile ai flag usati dai `IShellFolder::EnumObjects`).|
|[CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist)|Imposta una relazione tra l'oggetto corrente `CMFCShellTreeCtrl` oggetto e un `CMFCShellListCtrl` oggetto.|

## <a name="remarks"></a>Note

Questa classe estende la `CTreeCtrl` abilitando il programma includere gli elementi della Shell di Windows nella struttura della classe. Questa classe può essere associata un `CMFCShellListCtrl` oggetto per creare una finestra di Esplora completata. Quindi, la selezione di un elemento nell'albero della visualizzerà un elenco di elementi della Shell di Windows nell'elenco associato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CTreeCtrl](../../mfc/reference/ctreectrl-class.md)

`CMFCShellTreeCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxshelltreeCtrl.h

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CMFCShellTreeCtrl`. Questo frammento di codice fa parte di [esempio di Esplora risorse](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_1.h)]
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_2.cpp)]

##  <a name="enableshellcontextmenu"></a>  CMFCShellTreeCtrl::EnableShellContextMenu

Abilita il menu di scelta rapida.

```
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Valore booleano che specifica se abilitare il menu di scelta rapida.

##  <a name="getflags"></a>  CMFCShellTreeCtrl::GetFlags

Restituisce i flag impostati per il [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
DWORD GetFlags() const;
```

### <a name="return-value"></a>Valore restituito

Un valore DWORD che specifica la combinazione di flag attualmente impostato.

### <a name="remarks"></a>Note

I flag impostati `CMFCShellTreeCtrl` vengono inviati al metodo [IShellFolder::EnumObjects](/windows/desktop/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects) ogni volta che l'oggetto è aggiornato. È possibile modificare i flag con la [CMFCShellTreeCtrl::SetFlags](#setflags) (metodo).

##  <a name="getitempath"></a>  CMFCShellTreeCtrl::GetItemPath

Recupera il percorso di un elemento di [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
BOOL GetItemPath(
    CString& strPath,
    HTREEITEM htreeItem = NULL) const;
```

### <a name="parameters"></a>Parametri

*strPath*<br/>
[out] Un riferimento a un parametro di stringa. Il metodo scrive il percorso dell'elemento per questo parametro.

*htreeItem*<br/>
[in] Il metodo recupera il percorso per questo elemento di controllo struttura ad albero.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Note

Se questo metodo ha esito negativo, *strPath* contiene una stringa vuota.

Se non si specifica *hTreeItem*, questo metodo tenta di ottenere la stringa per l'elemento attualmente selezionato. Se è selezionato alcun elemento e *hTreeItem* è NULL, questo metodo ha esito negativo.

##  <a name="getrelatedlist"></a>  CMFCShellTreeCtrl::GetRelatedList

Restituisce un puntatore per il [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto associato a questa [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
CMFCShellListCtrl* GetRelatedList() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `CMFCShellListCtrl` oggetto associato a questo oggetto di controllo dell'albero.

### <a name="remarks"></a>Note

Usando un `CMFCShellListCtrl` dell'oggetto insieme a un `CMFCShellTreeCtrl` dell'oggetto, è possibile creare una finestra simile a Esplora risorse. Usare il metodo [CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist) per associare le due classi. Dopo che sono associate, il framework viene aggiornato automaticamente il `CMFCShellListCtrl` se la selezione nel `CMFCShellTreeCtrl` le modifiche.

##  <a name="onchildnotify"></a>  CMFCShellTreeCtrl::OnChildNotify

```
virtual BOOL OnChildNotify(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pLResult);
```

### <a name="parameters"></a>Parametri

[in] *messaggio*<br/>
[in] *wParam*<br/>
[in] *lParam*<br/>
[in] *pLResult*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="ongetitemicon"></a>  CMFCShellTreeCtrl::OnGetItemIcon

```
virtual int OnGetItemIcon(
    LPAFX_SHELLITEMINFO pItem,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

[in] *pItem*<br/>
[in] *bSelected*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="ongetitemtext"></a>  CMFCShellTreeCtrl::OnGetItemText

```
virtual CString OnGetItemText(LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

[in] *pItem*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="refresh"></a>  CMFCShellTreeCtrl::Refresh

Consente di aggiornare e ridisegna il [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md).

```
void Refresh();
```

### <a name="remarks"></a>Note

Chiamare questo metodo per aggiornare la gerarchia di elementi visualizzati nei `CMFCShellTreeCtrl`.

##  <a name="selectpath"></a>  CMFCShellTreeCtrl::SelectPath

Seleziona un elemento nel [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) in base al percorso fornito.

```
BOOL SelectPath(LPCTSTR lpszPath);
BOOL SelectPath(LPCITEMIDLIST lpidl);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
[in] Stringa che specifica il percorso di un elemento.

*lpidl*<br/>
[in] Un PIDL che specifica l'elemento

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. In caso contrario, E_FAIL.

##  <a name="setflags"></a>  CMFCShellTreeCtrl::SetFlags

Imposta i flag per il contesto dell'albero di filtro.

```
void SetFlags(
    DWORD dwFlags,
    BOOL bRefresh = TRUE);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
[in] I flag da impostare.

*bRefresh*<br/>
[in] Valore booleano che specifica se il `CMFCShellTreeCtrl` che deve essere aggiornata immediatamente.

### <a name="remarks"></a>Note

Il `CMFCShellTreeCtrl` tutti i flag di passa [IShellFolder::EnumObjects](/windows/desktop/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects). Per altre informazioni sui valori di flag diversa, vedere [IShellFolder::EnumObjects](/windows/desktop/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).

##  <a name="setrelatedlist"></a>  CMFCShellTreeCtrl::SetRelatedList

Associa un [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) dell'oggetto con un [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
void SetRelatedList(CMFCShellListCtrl* pShellList);
```

### <a name="parameters"></a>Parametri

*pShellList*<br/>
[in] Un puntatore a un `CMFCShellListCtrl` oggetto.

### <a name="remarks"></a>Note

Questo metodo associa un `CMFCShellListCtrl` con un `CMFCShellTreeCtrl`. Questi oggetti possano essere visualizzati come una finestra simile a Esplora risorse: se l'utente seleziona un oggetto nel `CMFCShellTreeCtrl`, l'elementi in associati il `CMFCShellListCtrl` verranno aggiornate automaticamente.

Usare il metodo [CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist) per recuperare le `CMFCShellListCtrl` associata a un `CMFCShellTreeCtrl`.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md)<br/>
[Classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md)
