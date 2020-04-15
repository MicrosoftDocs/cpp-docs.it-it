---
title: CMFCShellTreeCtrl (classe)
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
ms.openlocfilehash: 41d9a14e379c566f001eda8b10b2669b95beb171
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376145"
---
# <a name="cmfcshelltreectrl-class"></a>CMFCShellTreeCtrl (classe)

La `CMFCShellTreeCtrl` classe estende la funzionalità [della classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md) visualizzando una gerarchia di elementi della shell.

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCShellTreeCtrl : public CTreeCtrl
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCShellTreeCtrl::EnableShellContextMenu](#enableshellcontextmenu)|Abilita o disabilita il menu di scelta rapida.|
|[CMFCShellTreeCtrl::GetFlags](#getflags)|Restituisce una combinazione di flag passati a [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).|
|[CMFCShellTreeCtrl::PercorsoGetItemPath](#getitempath)|Recupera il percorso di un elemento.|
|[CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist)|Restituisce un puntatore all'oggetto [Classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) utilizzato con questo `CMFCShellTreeCtrl` oggetto per creare una finestra simile a Esplora risorse.|
|[CMFCShellTreeCtrl::OnChildNotify](#onchildnotify)|Questa funzione membro viene chiamata dalla finestra padre di questa finestra quando riceve un messaggio di notifica che si applica a questa finestra. (esegue l'override di [CWnd::OnChildNotify](../../mfc/reference/cwnd-class.md#onchildnotify).)|
|[CMFCShellTreeCtrl::OnGetItemIcon](#ongetitemicon)||
|[CMFCShellTreeCtrl::OnGetItemText](#ongetitemtext)||
|[CMFCShellTreeCtrl::Aggiornare](#refresh)|Aggiorna e ridisegna l'oggetto corrente. `CMFCShellTreeCtrl`|
|[CMFCShellTreeCtrl::SelectPath](#selectpath)|Seleziona l'elemento del controllo struttura ad albero appropriato in base a un VALORE PIDL o un percorso di stringa fornito.|
|[CMFCShellTreeCtrl::SetFlags](#setflags)|Imposta i flag per filtrare il contesto della struttura ad albero (simile ai flag utilizzati da `IShellFolder::EnumObjects`).|
|[CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist)|Imposta una relazione `CMFCShellTreeCtrl` tra l'oggetto corrente e un `CMFCShellListCtrl` oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe `CTreeCtrl` estende la classe consentendo al programma di includere elementi della shell di Windows nella struttura ad albero. Questa classe può essere `CMFCShellListCtrl` associata a un oggetto per creare una finestra di Esplora risorse completa. Quindi, selezionando un elemento nella struttura verrà visualizzato un elenco di elementi della shell di Windows nell'elenco associato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CTreeCtrl](../../mfc/reference/ctreectrl-class.md)

`CMFCShellTreeCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxshelltreeCtrl.h

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CMFCShellTreeCtrl`. Questo frammento di codice fa parte [dell'esempio di Explorer](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_1.h)]
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_2.cpp)]

## <a name="cmfcshelltreectrlenableshellcontextmenu"></a><a name="enableshellcontextmenu"></a>CMFCShellTreeCtrl::EnableShellContextMenu

Attiva il menu di scelta rapida.

```
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Valore Boolean che specifica se abilitare il menu di scelta rapida.

## <a name="cmfcshelltreectrlgetflags"></a><a name="getflags"></a>CMFCShellTreeCtrl::GetFlags

Restituisce i flag impostati per il [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
DWORD GetFlags() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD che specifica la combinazione di flag attualmente impostati.

### <a name="remarks"></a>Osservazioni

I flag impostati in `CMFCShellTreeCtrl` vengono inviati al metodo [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects) ogni volta che l'oggetto viene aggiornato. È possibile modificare i flag con il [metodo CMFCShellTreeCtrl::SetFlags](#setflags) .

## <a name="cmfcshelltreectrlgetitempath"></a><a name="getitempath"></a>CMFCShellTreeCtrl::PercorsoGetItemPath

Recupera il percorso di un elemento nel [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
BOOL GetItemPath(
    CString& strPath,
    HTREEITEM htreeItem = NULL) const;
```

### <a name="parameters"></a>Parametri

*strPath (strPath)*<br/>
[fuori] Riferimento a un parametro di stringa. Il metodo scrive il percorso dell'elemento in questo parametro.

*htreeItem (elemento)*<br/>
[in] Il metodo recupera il percorso per questo elemento del controllo struttura ad albero.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Osservazioni

Se questo metodo ha esito negativo, *strPath* contiene la stringa vuota.

Se non si specifica *hTreeItem*, questo metodo tenta di ottenere la stringa per l'elemento attualmente selezionato. Se non è selezionato alcun elemento e *hTreeItem* è NULL, questo metodo ha esito negativo.

## <a name="cmfcshelltreectrlgetrelatedlist"></a><a name="getrelatedlist"></a>CMFCShellTreeCtrl::GetRelatedList

Restituisce un puntatore all'oggetto [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) associato a questo oggetto [CMFCShellTreeCtrl.](../../mfc/reference/cmfcshelltreectrl-class.md)

```
CMFCShellListCtrl* GetRelatedList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `CMFCShellListCtrl` associato a questo oggetto controllo struttura ad albero.

### <a name="remarks"></a>Osservazioni

Utilizzando un `CMFCShellListCtrl` oggetto insieme `CMFCShellTreeCtrl` a un oggetto, è possibile creare una finestra simile a Esplora risorse. Utilizzare il metodo [CMFCShellTreeCtrl::SetRelatedList](#setrelatedlist) per associare le due classi. Dopo che sono stati associati, `CMFCShellListCtrl` il framework `CMFCShellTreeCtrl` aggiorna automaticamente il se la selezione nelle modifiche.

## <a name="cmfcshelltreectrlonchildnotify"></a><a name="onchildnotify"></a>CMFCShellTreeCtrl::OnChildNotify

```
virtual BOOL OnChildNotify(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pLResult);
```

### <a name="parameters"></a>Parametri

[in] *messaggio*<br/>
[in] *wParam (mcParam)*<br/>
[in] *lParam*<br/>
[in] *PLRisultain (a)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcshelltreectrlongetitemicon"></a><a name="ongetitemicon"></a>CMFCShellTreeCtrl::OnGetItemIcon

```
virtual int OnGetItemIcon(
    LPAFX_SHELLITEMINFO pItem,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

[in] *pItem (elemento)*<br/>
[in] *bSelezionato*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcshelltreectrlongetitemtext"></a><a name="ongetitemtext"></a>CMFCShellTreeCtrl::OnGetItemText

```
virtual CString OnGetItemText(LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

[in] *pItem (elemento)*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcshelltreectrlrefresh"></a><a name="refresh"></a>CMFCShellTreeCtrl::Aggiornare

Aggiorna e ridisegna [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md).

```
void Refresh();
```

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per aggiornare la gerarchia degli elementi visualizzati nel `CMFCShellTreeCtrl`file .

## <a name="cmfcshelltreectrlselectpath"></a><a name="selectpath"></a>CMFCShellTreeCtrl::SelectPath

Seleziona un elemento nel [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md) in base al percorso fornito.

```
BOOL SelectPath(LPCTSTR lpszPath);
BOOL SelectPath(LPCITEMIDLIST lpidl);
```

### <a name="parameters"></a>Parametri

*LpszPath (percorso ipinoso)*<br/>
[in] Stringa che specifica il percorso di un elemento.

*lpidl*<br/>
[in] Un VALORE PIDL che specifica l'elemento

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; E_FAIL contrario.

## <a name="cmfcshelltreectrlsetflags"></a><a name="setflags"></a>CMFCShellTreeCtrl::SetFlags

Imposta i flag per filtrare il contesto dell'albero.

```
void SetFlags(
    DWORD dwFlags,
    BOOL bRefresh = TRUE);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
[in] Flag da impostare.

*bAggiornare*<br/>
[in] Valore booleano che `CMFCShellTreeCtrl` specifica se l'oggetto deve essere aggiornato immediatamente.

### <a name="remarks"></a>Osservazioni

Tutti `CMFCShellTreeCtrl` i flag set vengono passati a [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects). Per ulteriori informazioni sui valori di flag diversi, vedere [IShellFolder::EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).

## <a name="cmfcshelltreectrlsetrelatedlist"></a><a name="setrelatedlist"></a>CMFCShellTreeCtrl::SetRelatedList

Associa un [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) oggetto a un [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) oggetto.

```
void SetRelatedList(CMFCShellListCtrl* pShellList);
```

### <a name="parameters"></a>Parametri

*pShellList (elenco di protezione)*<br/>
[in] Puntatore a `CMFCShellListCtrl` un oggetto.

### <a name="remarks"></a>Osservazioni

Questo metodo associa `CMFCShellListCtrl` un `CMFCShellTreeCtrl`oggetto a un oggetto . Questi oggetti possono essere visualizzati come una finestra simile a Esplora `CMFCShellTreeCtrl`risorse: se `CMFCShellListCtrl` l'utente seleziona un oggetto in , gli elementi associati in verranno aggiornati automaticamente.

Utilizzare il metodo [CMFCShellTreeCtrl::GetRelatedList](#getrelatedlist) per recuperare l'oggetto `CMFCShellListCtrl` associato a un `CMFCShellTreeCtrl`oggetto .

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)<br/>
[CMFCShellListCtrl (classe)](../../mfc/reference/cmfcshelllistctrl-class.md)
