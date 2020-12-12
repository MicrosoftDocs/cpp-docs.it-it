---
description: 'Altre informazioni su: classe CMFCRibbonMiniToolBar'
title: Classe CMFCRibbonMiniToolBar
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonMiniToolBar
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::IsContextMenuMode
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::IsRibbonMiniToolBar
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::SetCommands
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::Show
- AFXRIBBONMINITOOLBAR/CMFCRibbonMiniToolBar::ShowWithContextMenu
helpviewer_keywords:
- CMFCRibbonMiniToolBar [MFC], IsContextMenuMode
- CMFCRibbonMiniToolBar [MFC], IsRibbonMiniToolBar
- CMFCRibbonMiniToolBar [MFC], SetCommands
- CMFCRibbonMiniToolBar [MFC], Show
- CMFCRibbonMiniToolBar [MFC], ShowWithContextMenu
ms.assetid: 7017e963-aeaf-4fe9-b540-e15a7ed41e94
ms.openlocfilehash: 7215349323f8039bccb24860e4e5ad663bd24bcd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273943"
---
# <a name="cmfcribbonminitoolbar-class"></a>Classe CMFCRibbonMiniToolBar

Implementa una barra degli strumenti popup contestuale.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonMiniToolBar : public CMFCRibbonPanelMenu
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCRibbonMiniToolBar::CMFCRibbonMiniToolBar`|Costruttore predefinito.|
|`CMFCRibbonMiniToolBar::~CMFCRibbonMiniToolBar`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCRibbonMiniToolBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonMiniToolBar::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonMiniToolBar::IsContextMenuMode](#iscontextmenumode)||
|[CMFCRibbonMiniToolBar::IsRibbonMiniToolBar](#isribbonminitoolbar)|Esegue l'override di `CMFCPopupMenu::IsRibbonMiniToolBar`.|
|[CMFCRibbonMiniToolBar::SetCommands](#setcommands)|Imposta l'elenco di comandi da visualizzare sulla barra degli strumenti.|
|[CMFCRibbonMiniToolBar::Show](#show)|Visualizza la barra di formattazione rapida in coordinate dello schermo specificate.|
|[CMFCRibbonMiniToolBar::ShowWithContextMenu](#showwithcontextmenu)|Visualizza la barra di formattazione rapida con un menu di scelta rapida.|

## <a name="remarks"></a>Commenti

La barra di formattazione rapida viene in genere visualizzata dopo che l'utente seleziona un oggetto in un documento. Ad esempio, quando l'utente seleziona un blocco di testo in un programma di elaborazione, l'applicazione visualizza una barra di formattazione rapida che contiene i comandi di formattazione del testo.

La barra di formattazione rapida diventa trasparente quando il puntatore del mouse è fuori dei limiti della barra di formattazione rapida.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

`CMFCRibbonPanelMenu`

[CMFCRibbonMiniToolBar](../../mfc/reference/cmfcribbonminitoolbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxRibbonMiniToolBar. h

## <a name="cmfcribbonminitoolbarsetcommands"></a><a name="setcommands"></a> CMFCRibbonMiniToolBar:: secommands

Imposta l'elenco di comandi da visualizzare sulla barra degli strumenti.

```cpp
void SetCommands(
    CMFCRibbonBar* pRibbonBar,
    const CList<UINT,UINT>& lstCommands);
```

### <a name="parameters"></a>Parametri

*pRibbonBar*<br/>
in Barra multifunzione che la barra degli strumenti mini Cerca i pulsanti da visualizzare.

*lstCommands*<br/>
in Elenco di comandi da visualizzare sulla barra degli strumenti mini. Viene eseguita la ricerca di tutte le categorie della barra multifunzione per trovare i pulsanti associati.

### <a name="remarks"></a>Commenti

Usare questa funzione per impostare l'elenco di comandi da visualizzare nella barra degli strumenti mini.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `SetCommands` metodo della `CMFCRibbonMiniToolBar` classe. Questo frammento di codice fa parte dell' [esempio Microsoft Office 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#9](../../mfc/reference/codesnippet/cpp/cmfcribbonminitoolbar-class_1.cpp)]

## <a name="cmfcribbonminitoolbarshow"></a><a name="show"></a> CMFCRibbonMiniToolBar:: Show

Visualizza la barra di formattazione rapida in coordinate dello schermo specificate.

```
BOOL Show(
    int x,
    int y);
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Specifica la posizione orizzontale della barra degli strumenti mini nelle coordinate dello schermo.

*y*<br/>
in Specifica la posizione verticale della barra degli strumenti mini nelle coordinate dello schermo.

### <a name="return-value"></a>Valore restituito

TRUE se la barra degli strumenti mini è stata visualizzata correttamente; in caso contrario, FALSE.

## <a name="cmfcribbonminitoolbarshowwithcontextmenu"></a><a name="showwithcontextmenu"></a> CMFCRibbonMiniToolBar::ShowWithContextMenu

Visualizza la barra di formattazione rapida con un menu di scelta rapida.

```
BOOL ShowWithContextMenu(
    int x,
    int y,
    UINT uiMenuResID,
    CWnd* pWndOwner);
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Specifica la posizione orizzontale del menu di scelta rapida nelle coordinate dello schermo.

*y*<br/>
in Specifica la posizione verticale del menu di scelta rapida nelle coordinate dello schermo.

*uiMenuResID*<br/>
in Specifica l'ID di risorsa del menu di scelta rapida da visualizzare.

*pWndOwner*<br/>
in Identifica la finestra che riceve i messaggi dal menu di scelta rapida.

### <a name="return-value"></a>Valore restituito

TRUE se il menu di scelta rapida è stato visualizzato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per visualizzare una mini barra degli strumenti con un menu di scelta rapida. Il menu di scelta rapida è posizionato a 15 pixel sotto la barra degli strumenti mini.

## <a name="cmfcribbonminitoolbariscontextmenumode"></a><a name="iscontextmenumode"></a> CMFCRibbonMiniToolBar::IsContextMenuMode

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
BOOL IsContextMenuMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcribbonminitoolbarisribbonminitoolbar"></a><a name="isribbonminitoolbar"></a> CMFCRibbonMiniToolBar::IsRibbonMiniToolBar

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual BOOL IsRibbonMiniToolBar() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
