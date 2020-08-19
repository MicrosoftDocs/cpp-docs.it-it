---
title: Classe CMFCColorPopupMenu
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
ms.openlocfilehash: d668a7bd2b5226de906ca146c7b7e882b97f4640
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560985"
---
# <a name="cmfccolorpopupmenu-class"></a>Classe CMFCColorPopupMenu

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
|[CMFCColorPopupMenu:: CMFCColorPopupMenu](#cmfccolorpopupmenu)|Costruisce un oggetto `CMFCColorPopupMenu`.|
|`CMFCColorPopupMenu::~CMFCColorPopupMenu`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCColorPopupMenu:: CreateTearOffBar](#createtearoffbar)|Crea una barra di colore tear-off ancorabile. Esegue l'override di [CMFCPopupMenu:: CreateTearOffBar](../../mfc/reference/cmfcpopupmenu-class.md#createtearoffbar).|
|[CMFCColorPopupMenu:: getbarra dei menu](#getmenubar)|Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato nel menu a comparsa. Esegue l'override di [CMFCPopupMenu:: Getbarra dei menu](../../mfc/reference/cmfcpopupmenu-class.md#getmenubar).|
|`CMFCColorPopupMenu::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCColorPopupMenu:: sepropin](#setproplist)|Imposta l'oggetto controllo griglia proprietà dell'oggetto incorporato `CMFCColorBar` .|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|Nome|Descrizione|
|`m_bEnabledInCustomizeMode`|Valore booleano che determina se visualizzare la barra dei colori.|
|`m_wndColorBar`|`CMFCColorBar`Oggetto che fornisce la selezione dei colori.|

### <a name="remarks"></a>Osservazioni

Questa classe eredita la funzionalità del menu popup della `CMFCPopupMenu` classe e gestisce un `CMFCColorBar` oggetto che fornisce la selezione dei colori. Quando il Framework della barra degli strumenti è in modalità di personalizzazione e il `m_bEnabledInCustomizeMode` membro è impostato su false, l'oggetto della barra dei colori non viene visualizzato. Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)

Per ulteriori informazioni su `CMFCColorBar` , vedere la [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CFrameWnd](../../mfc/reference/cframewnd-class.md)

[CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)

[CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)

[CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorpopupmenu. h

## <a name="cmfccolorpopupmenucmfccolorpopupmenu"></a><a name="cmfccolorpopupmenu"></a> CMFCColorPopupMenu:: CMFCColorPopupMenu

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

*colori*<br/>
in Matrice di colori visualizzata dal Framework nel menu a comparsa.

*color*<br/>
in Colore predefinito selezionato.

*lpszAutoColor*<br/>
in Etichetta di testo del pulsante di colore *automatico* (predefinito) o null.

L'etichetta standard del pulsante automatico è **automatica**.

*lpszOtherColor*<br/>
in Etichetta di testo dell' *altro* pulsante, che Visualizza più opzioni di colore o null.

L'etichetta standard per l'altro pulsante è **più colori...**.

*lpszDocColors*<br/>
in Etichetta di testo del pulsante colori del documento. Nella tavolozza colori documento sono elencati tutti i colori attualmente utilizzati dal documento.

*lstDocColors*<br/>
in Elenco di colori attualmente utilizzato dal documento.

*nColumns*<br/>
in Numero di colonne con la matrice di colori.

*nHorzDockRows*<br/>
in Il numero di righe che la barra dei colori ha quando è ancorata orizzontalmente.

*nVertDockColumns*<br/>
in Numero di colonne che la barra dei colori ha quando è ancorata verticalmente.

*colorAutomatic*<br/>
in Colore predefinito applicato dal framework quando si fa clic sul pulsante automatico.

*uiCommandID*<br/>
in ID del comando di controllo della barra dei colori.

*bStdColorDlg*<br/>
in Valore booleano che indica se visualizzare la finestra di dialogo colore di sistema standard o la finestra di dialogo [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) .

*pParentBtn*<br/>
in Puntatore a un pulsante padre.

*nID*<br/>
in ID di comando.

### <a name="remarks"></a>Osservazioni

Ogni costruttore di overload imposta il `m_bEnabledInCustomizeMode` membro su false.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCColorPopupMenu` oggetto.

[!code-cpp[NVC_MFC_RibbonApp#34](../../mfc/reference/codesnippet/cpp/cmfccolorpopupmenu-class_1.cpp)]

## <a name="cmfccolorpopupmenucreatetearoffbar"></a><a name="createtearoffbar"></a> CMFCColorPopupMenu:: CreateTearOffBar

Crea una barra di colore tear-off ancorabile.

```
virtual CPane* CreateTearOffBar(
    CFrameWnd* pWndMain,
    UINT uiID,
    LPCTSTR lpszName);
```

### <a name="parameters"></a>Parametri

*pWndMain*\
in Puntatore alla finestra padre della barra di strappo.

*uiID*\
in ID del comando della barra di strappo.

*lpszName*\
in Testo della finestra della barra di strappo.

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo oggetto della barra di controllo tear-off.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un oggetto della [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) e ne esegue il cast a un puntatore della [classe CPane](../../mfc/reference/cpane-class.md) . È possibile eseguire il cast di questo valore a un puntatore della [classe CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md) usando una delle macro di cast descritte nel [cast dei tipi di oggetti della classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md).

## <a name="cmfccolorpopupmenugetmenubar"></a><a name="getmenubar"></a> CMFCColorPopupMenu:: getbarra dei menu

Restituisce il [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato nel menu a comparsa.

```
virtual CMFCPopupMenuBar* GetMenuBar();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto incorporato `CMFCPopupMenuBar` .

### <a name="remarks"></a>Osservazioni

Il menu a comparsa colori include un oggetto [classe CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato. Eseguire l'override di questo metodo in una classe derivata se l'applicazione usa un tipo incorporato diverso.

## <a name="cmfccolorpopupmenusetproplist"></a><a name="setproplist"></a> CMFCColorPopupMenu:: sepropin

Imposta l'oggetto controllo griglia proprietà dell'oggetto incorporato `CMFCColorBar` .

```cpp
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```

### <a name="parameters"></a>Parametri

*pWndList*<br/>
in Puntatore a un oggetto controllo griglia Proprietà.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
