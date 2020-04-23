---
title: CMFCColorPopupMenu (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CMFCColorPopupMenu
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::CreateTearOffBar
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::GetMenuBar
- AFXCOLORPOPUPMENU/CMFCColorPopupMenu::SetPropList
helpviewer_keywords:
- CMFCColorPopupMenu [MFC], CMFCColorPopupMenu
- CMFCColorPopupMenu [MFC], CreateTearOffBar
- CMFCColorPopupMenu [MFC], GetMenuBar
- CMFCColorPopupMenu [MFC], SetPropList
ms.assetid: 0bf9efe8-aed5-4ab7-b23b-eb284b4668be
ms.openlocfilehash: 901a44c8f5fdecd1b277ebdecc995722a3afe9a3
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752497"
---
# <a name="cmfccolorpopupmenu-class"></a>CMFCColorPopupMenu (classe)

Rappresenta un menu a comparsa utilizzato dagli utenti per selezionare i colori in un documento o in un'applicazione.

## <a name="syntax"></a>Sintassi

```
class CMFCColorPopupMenu : public CMFCPopupMenu
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCColorPopupMenu::CMFCColorPopupMenu](#cmfccolorpopupmenu)|Costruisce un oggetto `CMFCColorPopupMenu`.|
|`CMFCColorPopupMenu::~CMFCColorPopupMenu`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCColorPopupMenu::CreateTearOffBar](#createtearoffbar)|Crea una barra dei colori di strappo ancorabile. (Esegue l'override di [CMFCPopupMenu::CreateTearOffBar](../../mfc/reference/cmfcpopupmenu-class.md#createtearoffbar).)|
|[CMFCColorPopupMenu::GetMenuBar](#getmenubar)|Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato all'interno del menu a comparsa. (Esegue l'override [di CMFCPopupMenu::GetMenuBar](../../mfc/reference/cmfcpopupmenu-class.md#getmenubar).)|
|`CMFCColorPopupMenu::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCColorPopupMenu::SetPropList](#setproplist)|Imposta l'oggetto controllo griglia `CMFCColorBar` delle proprietà dell'oggetto incorporato.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|`m_bEnabledInCustomizeMode`|Valore booleano che determina se visualizzare la barra dei colori.|
|`m_wndColorBar`|Oggetto `CMFCColorBar` che fornisce la selezione del colore.|

### <a name="remarks"></a>Osservazioni

Questa classe eredita la funzionalità del `CMFCPopupMenu` menu a comparsa della classe e gestisce un `CMFCColorBar` oggetto che fornisce la selezione del colore. Quando il framework della barra `m_bEnabledInCustomizeMode` degli strumenti è in modalità di personalizzazione e il membro è impostato su FALSE, l'oggetto barra dei colori non viene visualizzato. Per altre informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeModeFor more information about customization mode, see CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)

Per ulteriori `CMFCColorBar`informazioni su , vedere [CMFCColorBar (classe).](../../mfc/reference/cmfccolorbar-class.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

[CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorpopupmenu.h

## <a name="cmfccolorpopupmenucmfccolorpopupmenu"></a><a name="cmfccolorpopupmenu"></a>CMFCColorPopupMenu::CMFCColorPopupMenu

Costruisce un oggetto `CMFCColorPopupMenu`.

```
CMFCColorPopupMenu(
    const CArray<COLORREF, COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,
    int nColumns,
    int nHorzDockRows,
    int nVertDockColumns,
    COLORREF colorAutomatic,
    UINT uiCommandID,
    BOOL bStdColorDlg = FALSE);

CMFCColorPopupMenu(
    CMFCColorButton* pParentBtn,
    const CArray<COLORREF, COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,
    int nColumns,
    COLORREF colorAutomatic);

CMFCColorPopupMenu(
    CMFCRibbonColorButton* pParentBtn,
    const CArray<COLORREF, COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors, CList<COLORREF, COLORREF>& lstDocColors,
    int nColumns,
    COLORREF colorAutomatic,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*Colori*<br/>
[in] Matrice di colori visualizzati dal framework nel menu a comparsa.

*Colore*<br/>
[in] Colore selezionato predefinito.

*lpszAutoColor (colore di lpszAuto*<br/>
[in] Etichetta di testo *del* pulsante automatico (predefinito) del colore o NULL.

L'etichetta standard per il pulsante automatico è **Automatico**.

*lpszOtherColor (colore)*<br/>
[in] Etichetta di testo *dell'altro* pulsante, che visualizza più scelte di colore, o NULL.

L'etichetta standard per l'altro pulsante è **Altri colori...**.

*lpszDocColori*<br/>
[in] Etichetta di testo del pulsante Colori del documento. La tavolozza dei colori del documento elenca tutti i colori attualmente utilizzati dal documento.

*LstDocColori*<br/>
[in] Elenco di colori attualmente utilizzati dal documento.

*nColumns*<br/>
[in] Il numero di colonne della matrice di colori.

*nHorzDockRows*<br/>
[in] Il numero di righe che la barra dei colori ha quando è ancorata orizzontalmente.

*nVertDockColumns*<br/>
[in] Il numero di colonne che la barra dei colori ha quando è ancorata verticalmente.

*colorAutomatic*<br/>
[in] Colore predefinito applicato dal framework quando si fa clic sul pulsante automatico.

*uiCommandID (idComando)*<br/>
[in] ID comando di controllo barra dei colori.

*bStdColorDlg (in cui è stato utilizzato un file BDColorDlg)*<br/>
[in] Valore booleano che indica se visualizzare la finestra di dialogo del colore di sistema standard o la finestra di dialogo [CMFCColorDialog.](../../mfc/reference/cmfccolordialog-class.md)

*pParentBtn (instile)*<br/>
[in] Puntatore a un pulsante padre.

*nID*<br/>
[in] ID del comando.

### <a name="remarks"></a>Osservazioni

Ogni costruttore di `m_bEnabledInCustomizeMode` overload imposta il membro su FALSE.

### <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCColorPopupMenu` illustrato come costruire un oggetto.

[!code-cpp[NVC_MFC_RibbonApp#34](../../mfc/reference/codesnippet/cpp/cmfccolorpopupmenu-class_1.cpp)]

## <a name="cmfccolorpopupmenucreatetearoffbar"></a><a name="createtearoffbar"></a>CMFCColorPopupMenu::CreateTearOffBar

Crea una barra dei colori di strappo ancorabile.

```
virtual CPane* CreateTearOffBar(
    CFrameWnd* pWndMain,
    UINT uiID,
    LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*pWndMain (informazioni in stato in stato in stato di*|[in] Puntatore alla finestra padre della barra di strappo.|
|*uiID*|[in] ID di comando della barra di sblocco.|
|*lpszName*|[in] Testo della finestra della barra di strappo.|

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo oggetto barra di controllo tear-off.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un [CMFCColorBar classe](../../mfc/reference/cmfccolorbar-class.md) oggetto e ne esegue il cast a un [CPane classe](../../mfc/reference/cpane-class.md) puntatore. È possibile eseguire il cast di questo valore a un [CMFCColorBar puntatore alla classe](../../mfc/reference/cmfccolorbar-class.md) utilizzando una delle macro di cast descritte in [Cast di tipo di oggetti di classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md).

## <a name="cmfccolorpopupmenugetmenubar"></a><a name="getmenubar"></a>CMFCColorPopupMenu::GetMenuBar

Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato all'interno del menu a comparsa.

```
virtual CMFCPopupMenuBar* GetMenuBar();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto incorporato. `CMFCPopupMenuBar`

### <a name="remarks"></a>Osservazioni

Il menu a comparsa di colore dispone di un oggetto incorporato [CMFCPopupMenuBar Classe](../../mfc/reference/cmfcpopupmenubar-class.md) oggetto. Eseguire l'override di questo metodo in una classe derivata se l'applicazione utilizza un tipo incorporato diverso.

## <a name="cmfccolorpopupmenusetproplist"></a><a name="setproplist"></a>CMFCColorPopupMenu::SetPropList

Imposta l'oggetto controllo griglia `CMFCColorBar` delle proprietà dell'oggetto incorporato.

```cpp
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```

### <a name="parameters"></a>Parametri

*pWndList (in questo elenco)*<br/>
[in] Puntatore a un oggetto controllo griglia delle proprietà.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
