---
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
ms.openlocfilehash: 5e5ac6c923640b7584d89a9c6f75d941deadddf3
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754075"
---
# <a name="cmfcribbonminitoolbar-class"></a>Classe CMFCRibbonMiniToolBar

Implementa una barra degli strumenti popup contestuale.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonMiniToolBar : public CMFCRibbonPanelMenu
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonMiniToolBar::CMFCRibbonMiniToolBar`|Costruttore predefinito.|
|`CMFCRibbonMiniToolBar::~CMFCRibbonMiniToolBar`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCRibbonMiniToolBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonMiniToolBar::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonMiniToolBar::IsContextMenuMode](#iscontextmenumode)||
|[CMFCRibbonMiniToolBar::IsRibbonMiniToolBar](#isribbonminitoolbar)|Esegue l'override di `CMFCPopupMenu::IsRibbonMiniToolBar`.|
|[CMFCRibbonMiniToolBar::SetCommands](#setcommands)|Imposta l'elenco di comandi da visualizzare sulla barra degli strumenti.|
|[CMFCRibbonMiniToolBar::Show](#show)|Visualizza la barra di formattazione rapida in coordinate dello schermo specificate.|
|[CMFCRibbonMiniToolBar::ShowWithContextMenu](#showwithcontextmenu)|Visualizza la barra di formattazione rapida con un menu di scelta rapida.|

## <a name="remarks"></a>Osservazioni

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

**Intestazione:** afxRibbonMiniToolBar.h

## <a name="cmfcribbonminitoolbarsetcommands"></a><a name="setcommands"></a>CMFCRibbonMiniToolBar::SetCommands

Imposta l'elenco di comandi da visualizzare sulla barra degli strumenti.

```cpp
void SetCommands(
    CMFCRibbonBar* pRibbonBar,
    const CList<UINT,UINT>& lstCommands);
```

### <a name="parameters"></a>Parametri

*pRibbonBar (barra multifunzione)*<br/>
[in] Barra multifunzione che la barra di formattazione rapida cerca i pulsanti da visualizzare.

*lstCommands (Comandi lst)lestCommands*<br/>
[in] Elenco dei comandi da visualizzare sulla barra di formattazione rapida. La ricerca viene eseguita in tutte le categorie della barra multifunzione per trovare i pulsanti associati.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per impostare l'elenco dei comandi da visualizzare nella barra di formattazione rapida.

### <a name="example"></a>Esempio

Nell'esempio riportato di `SetCommands` seguito `CMFCRibbonMiniToolBar` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte dell'esempio Demo di [MS Office 2007.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_MSOffice2007Demo#9](../../mfc/reference/codesnippet/cpp/cmfcribbonminitoolbar-class_1.cpp)]

## <a name="cmfcribbonminitoolbarshow"></a><a name="show"></a>CMFCRibbonMiniToolBar::Mostra

Visualizza la barra di formattazione rapida in coordinate dello schermo specificate.

```
BOOL Show(
    int x,
    int y);
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Specifica la posizione orizzontale della barra di formattazione rapida in coordinate dello schermo.

*Y*<br/>
[in] Specifica la posizione verticale della barra di formattazione rapida in coordinate dello schermo.

### <a name="return-value"></a>Valore restituito

TRUESe la barra di formattazione rapida è stata visualizzata correttamente. in caso contrario, FALSE.

## <a name="cmfcribbonminitoolbarshowwithcontextmenu"></a><a name="showwithcontextmenu"></a>CMFCRibbonMiniToolBar::ShowWithContextMenu

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
[in] Specifica la posizione orizzontale del menu di scelta rapida in coordinate dello schermo.

*Y*<br/>
[in] Specifica la posizione verticale del menu di scelta rapida in coordinate dello schermo.

*uiMenuResID (informazioni in questo stato in stato di un'applicazione di*<br/>
[in] Specifica l'ID risorsa del menu di scelta rapida da visualizzare.

*pWndProprietario*<br/>
[in] Identifica la finestra che riceve i messaggi dal menu di scelta rapida.

### <a name="return-value"></a>Valore restituito

TRUESe il menu di scelta rapida è stato visualizzato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per visualizzare una barra di formattazione rapida con un menu di scelta rapida. Il menu contestuale è posizionato 15 pixel sotto la barra degli strumenti mini.

## <a name="cmfcribbonminitoolbariscontextmenumode"></a><a name="iscontextmenumode"></a>CMFCRibbonMiniToolBar::IsContextMenuMode

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
BOOL IsContextMenuMode() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcribbonminitoolbarisribbonminitoolbar"></a><a name="isribbonminitoolbar"></a>CMFCRibbonMiniToolBar::IsRibbonMiniToolBar

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

```
virtual BOOL IsRibbonMiniToolBar() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
