---
description: 'Altre informazioni su: classe CMFCShellTreeCtrl'
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
ms.openlocfilehash: 86b18d1cb919eaa36c3aed0d6e1623bab530a0aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339670"
---
# <a name="cmfcshelltreectrl-class"></a>Classe CMFCShellTreeCtrl

La `CMFCShellTreeCtrl` classe estende la funzionalità della [classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md) visualizzando una gerarchia di elementi della shell.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCShellTreeCtrl : public CTreeCtrl
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCShellTreeCtrl:: EnableShellContextMenu](#enableshellcontextmenu)|Abilita o Disabilita il menu di scelta rapida.|
|[CMFCShellTreeCtrl:: GetFlags](#getflags)|Restituisce una combinazione di flag passati a [IShellFolder:: EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).|
|[CMFCShellTreeCtrl:: GetItemPath](#getitempath)|Recupera il percorso di un elemento.|
|[CMFCShellTreeCtrl:: GetRelated](#getrelatedlist)|Restituisce un puntatore all'oggetto della [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) usato insieme a questo `CMFCShellTreeCtrl` oggetto per creare una finestra simile a Esplora risorse.|
|[CMFCShellTreeCtrl:: OnChildNotify](#onchildnotify)|Questa funzione membro viene chiamata dalla finestra padre di questa finestra quando riceve un messaggio di notifica che si applica a questa finestra. Esegue l'override di [CWnd:: OnChildNotify](../../mfc/reference/cwnd-class.md#onchildnotify).|
|[CMFCShellTreeCtrl:: OnGetItemIcon](#ongetitemicon)||
|[CMFCShellTreeCtrl:: OnGetItemText](#ongetitemtext)||
|[CMFCShellTreeCtrl:: Refresh](#refresh)|Aggiorna e ridisegna l' `CMFCShellTreeCtrl` oggetto corrente.|
|[CMFCShellTreeCtrl:: SelectPath](#selectpath)|Seleziona l'elemento di controllo di struttura ad albero appropriato in base a un PIDL o a un percorso di stringa fornito.|
|[CMFCShellTreeCtrl:: Flags](#setflags)|Imposta i flag per filtrare il contesto dell'albero (simile ai flag utilizzati da `IShellFolder::EnumObjects` ).|
|[CMFCShellTreeCtrl:: filerelated](#setrelatedlist)|Imposta una relazione tra l' `CMFCShellTreeCtrl` oggetto corrente e un `CMFCShellListCtrl` oggetto.|

## <a name="remarks"></a>Commenti

Questa classe estende la `CTreeCtrl` classe consentendo al programma di includere gli elementi della shell di Windows nell'albero. Questa classe può essere associata a un `CMFCShellListCtrl` oggetto per creare una finestra di esplorazione completa. Quindi, selezionando un elemento nell'albero verrà visualizzato un elenco di elementi della shell di Windows nell'elenco associato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CTreeCtrl](../../mfc/reference/ctreectrl-class.md)

`CMFCShellTreeCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxshelltreeCtrl. h

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CMFCShellTreeCtrl`. Questo frammento di codice fa parte dell' [esempio di Esplora risorse](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Explorer#4](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_1.h)]
[!code-cpp[NVC_MFC_Explorer#5](../../mfc/reference/codesnippet/cpp/cmfcshelltreectrl-class_2.cpp)]

## <a name="cmfcshelltreectrlenableshellcontextmenu"></a><a name="enableshellcontextmenu"></a> CMFCShellTreeCtrl:: EnableShellContextMenu

Consente di abilitare il menu di scelta rapida.

```cpp
void EnableShellContextMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Valore booleano che specifica se abilitare il menu di scelta rapida.

## <a name="cmfcshelltreectrlgetflags"></a><a name="getflags"></a> CMFCShellTreeCtrl:: GetFlags

Restituisce i flag impostati per l'oggetto della [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) .

```
DWORD GetFlags() const;
```

### <a name="return-value"></a>Valore restituito

Valore DWORD che specifica la combinazione di flag attualmente impostati.

### <a name="remarks"></a>Commenti

I flag impostati in `CMFCShellTreeCtrl` vengono inviati al metodo [IShellFolder:: EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects) ogni volta che l'oggetto viene aggiornato. È possibile modificare i flag con il metodo [CMFCShellTreeCtrl:: Seflags](#setflags) .

## <a name="cmfcshelltreectrlgetitempath"></a><a name="getitempath"></a> CMFCShellTreeCtrl:: GetItemPath

Recupera il percorso di un elemento nell'oggetto della [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) .

```
BOOL GetItemPath(
    CString& strPath,
    HTREEITEM htreeItem = NULL) const;
```

### <a name="parameters"></a>Parametri

*strPath*<br/>
out Riferimento a un parametro di stringa. Il metodo scrive il percorso dell'elemento in questo parametro.

*htreeItem*<br/>
in Il metodo recupera il percorso per questo elemento di controllo della struttura ad albero.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero in caso di esito positivo, 0 in caso contrario.

### <a name="remarks"></a>Commenti

Se questo metodo ha esito negativo, *strPath* contiene la stringa vuota.

Se non si specifica *HTREEITEM*, questo metodo tenta di ottenere la stringa per l'elemento attualmente selezionato. Se non è selezionato alcun elemento e *HTREEITEM* è null, questo metodo ha esito negativo.

## <a name="cmfcshelltreectrlgetrelatedlist"></a><a name="getrelatedlist"></a> CMFCShellTreeCtrl:: GetRelated

Restituisce un puntatore all'oggetto della [classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) associato a questo oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) .

```
CMFCShellListCtrl* GetRelatedList() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `CMFCShellListCtrl` oggetto associato a questo oggetto controllo struttura ad albero.

### <a name="remarks"></a>Commenti

Utilizzando un `CMFCShellListCtrl` oggetto insieme a un `CMFCShellTreeCtrl` oggetto, è possibile creare una finestra simile a Esplora risorse. Usare il metodo [CMFCShellTreeCtrl::](#setrelatedlist) SetValue per associare le due classi. Una volta associate, il Framework aggiorna automaticamente l'oggetto `CMFCShellListCtrl` se la selezione in `CMFCShellTreeCtrl` viene modificata.

## <a name="cmfcshelltreectrlonchildnotify"></a><a name="onchildnotify"></a> CMFCShellTreeCtrl:: OnChildNotify

```
virtual BOOL OnChildNotify(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pLResult);
```

### <a name="parameters"></a>Parametri

in *messaggio* di<br/>
in *wParam*<br/>
in *lParam*<br/>
in *pLResult*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcshelltreectrlongetitemicon"></a><a name="ongetitemicon"></a> CMFCShellTreeCtrl:: OnGetItemIcon

```
virtual int OnGetItemIcon(
    LPAFX_SHELLITEMINFO pItem,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

in *pItem*<br/>
in *bSelected*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcshelltreectrlongetitemtext"></a><a name="ongetitemtext"></a> CMFCShellTreeCtrl:: OnGetItemText

```
virtual CString OnGetItemText(LPAFX_SHELLITEMINFO pItem);
```

### <a name="parameters"></a>Parametri

in *pItem*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcshelltreectrlrefresh"></a><a name="refresh"></a> CMFCShellTreeCtrl:: Refresh

Aggiorna e ridisegna [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md).

```cpp
void Refresh();
```

### <a name="remarks"></a>Commenti

Chiamare questo metodo per aggiornare la gerarchia degli elementi visualizzati nell'oggetto `CMFCShellTreeCtrl` .

## <a name="cmfcshelltreectrlselectpath"></a><a name="selectpath"></a> CMFCShellTreeCtrl:: SelectPath

Seleziona un elemento nella [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) in base al percorso fornito.

```
BOOL SelectPath(LPCTSTR lpszPath);
BOOL SelectPath(LPCITEMIDLIST lpidl);
```

### <a name="parameters"></a>Parametri

*lpszPath*<br/>
in Stringa che specifica il percorso di un elemento.

*lpidl*<br/>
in Oggetto PIDL che specifica l'elemento.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; In caso contrario E_FAIL.

## <a name="cmfcshelltreectrlsetflags"></a><a name="setflags"></a> CMFCShellTreeCtrl:: Flags

Imposta i flag per filtrare il contesto dell'albero.

```cpp
void SetFlags(
    DWORD dwFlags,
    BOOL bRefresh = TRUE);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
in Flag da impostare.

*bRefresh*<br/>
in Valore booleano che specifica se `CMFCShellTreeCtrl`  deve essere aggiornato immediatamente.

### <a name="remarks"></a>Commenti

`CMFCShellTreeCtrl`Passa tutti i flag set a [IShellFolder:: EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects). Per ulteriori informazioni sui valori di flag diversi, vedere [IShellFolder:: EnumObjects](/windows/win32/api/shobjidl_core/nf-shobjidl_core-ishellfolder-enumobjects).

## <a name="cmfcshelltreectrlsetrelatedlist"></a><a name="setrelatedlist"></a> CMFCShellTreeCtrl:: filerelated

Associa un oggetto [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md) a un oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) .

```cpp
void SetRelatedList(CMFCShellListCtrl* pShellList);
```

### <a name="parameters"></a>Parametri

*pShellList*<br/>
in Puntatore a un `CMFCShellListCtrl` oggetto.

### <a name="remarks"></a>Commenti

Questo metodo associa un oggetto a `CMFCShellListCtrl` un oggetto `CMFCShellTreeCtrl` . Questi oggetti possono essere visualizzati come una finestra simile a Esplora risorse: se l'utente seleziona un oggetto in `CMFCShellTreeCtrl` , gli elementi associati in `CMFCShellListCtrl` verranno aggiornati automaticamente.

Usare il metodo [CMFCShellTreeCtrl:: GetRelated](#getrelatedlist) per recuperare l'oggetto `CMFCShellListCtrl` associato a un oggetto `CMFCShellTreeCtrl` .

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CTreeCtrl](../../mfc/reference/ctreectrl-class.md)<br/>
[Classe CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md)
