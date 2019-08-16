---
title: Classe CMFCToolBarEditBoxButton
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarEditBoxButton
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CanBeStretched
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CopyFrom
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetByCmd
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetContentsAll
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetContextMenuID
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetEditBorder
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetHwnd
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetInvalidateRect
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::HaveHotBorder
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::IsFlatMode
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::NotifyCommand
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnAddToCustomizePage
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnChangeParentWnd
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnClick
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnCtlColor
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnGlobalFontsChanged
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnMove
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnShow
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnSize
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnUpdateToolTip
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::SetContextMenuID
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::SetFlatMode
helpviewer_keywords:
- CMFCToolBarEditBoxButton [MFC], CMFCToolBarEditBoxButton
- CMFCToolBarEditBoxButton [MFC], CanBeStretched
- CMFCToolBarEditBoxButton [MFC], CopyFrom
- CMFCToolBarEditBoxButton [MFC], GetByCmd
- CMFCToolBarEditBoxButton [MFC], GetContentsAll
- CMFCToolBarEditBoxButton [MFC], GetContextMenuID
- CMFCToolBarEditBoxButton [MFC], GetEditBorder
- CMFCToolBarEditBoxButton [MFC], GetHwnd
- CMFCToolBarEditBoxButton [MFC], GetInvalidateRect
- CMFCToolBarEditBoxButton [MFC], HaveHotBorder
- CMFCToolBarEditBoxButton [MFC], IsFlatMode
- CMFCToolBarEditBoxButton [MFC], NotifyCommand
- CMFCToolBarEditBoxButton [MFC], OnAddToCustomizePage
- CMFCToolBarEditBoxButton [MFC], OnChangeParentWnd
- CMFCToolBarEditBoxButton [MFC], OnClick
- CMFCToolBarEditBoxButton [MFC], OnCtlColor
- CMFCToolBarEditBoxButton [MFC], OnGlobalFontsChanged
- CMFCToolBarEditBoxButton [MFC], OnMove
- CMFCToolBarEditBoxButton [MFC], OnShow
- CMFCToolBarEditBoxButton [MFC], OnSize
- CMFCToolBarEditBoxButton [MFC], OnUpdateToolTip
- CMFCToolBarEditBoxButton [MFC], SetContextMenuID
- CMFCToolBarEditBoxButton [MFC], SetFlatMode
ms.assetid: b21d9b67-6bf7-4ca9-bd62-b237756e0ab3
ms.openlocfilehash: 3e988d789ca6a038ce41bca829850f6509fd9df1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504722"
---
# <a name="cmfctoolbareditboxbutton-class"></a>Classe CMFCToolBarEditBoxButton

Pulsante della barra degli strumenti che contiene un controllo di modifica ( [classe CEdit](../../mfc/reference/cedit-class.md)).

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarEditBoxButton : public CMFCToolBarButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton](#cmfctoolbareditboxbutton)|Costruisce un oggetto `CMFCToolBarEditBoxButton`.|
|`CMFCToolBarEditBoxButton::~CMFCToolBarEditBoxButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CMFCToolBarEditBoxButton::CanBeStretched](#canbestretched)|Specifica se un utente può estendere il pulsante durante la personalizzazione. Esegue l'override di [CMFCToolBarButton:: CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).|
|[CMFCToolBarEditBoxButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente. Esegue l'override di [CMFCToolBarButton:: CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::CreateEdit](#createedit)|Crea un nuovo controllo di modifica nel pulsante.|
|`CMFCToolBarEditBoxButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCToolBarEditBoxButton::GetByCmd](#getbycmd)|Recupera il primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato.|
|[CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall)|Recupera il testo del primo controllo barra degli strumenti della casella di modifica con l'ID di comando specificato.|
|[CMFCToolBarEditBoxButton::GetContextMenuID](#getcontextmenuid)|Recupera l'ID di risorsa del menu di scelta rapida associato al pulsante.|
|[CMFCToolBarEditBoxButton::GetEditBorder](#geteditborder)|Recupera il rettangolo di delimitazione della parte di modifica del pulsante della casella di modifica.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::GetEditBox](#geteditbox)|Restituisce un puntatore al controllo di modifica incorporato nel pulsante.|
|[CMFCToolBarEditBoxButton::GetHwnd](#gethwnd)|Recupera l'handle di finestra associato al pulsante della barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).|
|[CMFCToolBarEditBoxButton::GetInvalidateRect](#getinvalidaterect)|Recupera l'area dell'area client del pulsante che deve essere ridisegnato. Esegue l'override di [CMFCToolBarButton:: GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect).|
|`CMFCToolBarEditBoxButton::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCToolBarEditBoxButton::HaveHotBorder](#havehotborder)|Determina se un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante. Esegue l'override di [CMFCToolBarButton:: HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).|
|[CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella di modifica hanno uno stile flat.|
|[CMFCToolBarEditBoxButton::NotifyCommand](#notifycommand)|Specifica se il pulsante elabora il messaggio [WM_COMMAND](/windows/win32/menurc/wm-command) . Esegue l'override di [CMFCToolBarButton:: NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).|
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](#onaddtocustomizepage)|Chiamata eseguita dal framework quando il pulsante viene aggiunto a una finestra di dialogo di **personalizzazione** . Esegue l'override di [CMFCToolBarButton:: OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).|
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Chiamata eseguita dal Framework per calcolare le dimensioni del pulsante per il contesto di dispositivo e lo stato di ancoraggio specificati. Esegue l'override di [CMFCToolBarButton:: OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).|
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamata eseguita dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).|
|[CMFCToolBarEditBoxButton::OnClick](#onclick)|Chiamata eseguita dal framework quando l'utente fa clic con il pulsante del mouse. Esegue l'override di [CMFCToolBarButton:: OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).|
|[CMFCToolBarEditBoxButton::OnCtlColor](#onctlcolor)|Chiamata eseguita dal framework quando la barra degli strumenti padre gestisce un messaggio WM_CTLCOLOR. Esegue l'override di [CMFCToolBarButton:: OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).|
|`CMFCToolBarEditBoxButton::OnDraw`|Chiamato dal Framework per disegnare il pulsante usando gli stili e le opzioni specificati. Esegue l'override di [CMFCToolBarButton:: onpare](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).|
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Viene chiamato dal Framework per creare il pulsante nel riquadro **comandi** della finestra di dialogo **Personalizza** . Esegue l'override di [CMFCToolBarButton:: OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).|
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](#onglobalfontschanged)|Chiamata eseguita dal framework quando il tipo di carattere globale è stato modificato. Esegue l'override di [CMFCToolBarButton:: OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).|
|[CMFCToolBarEditBoxButton::OnMove](#onmove)|Chiamata eseguita dal framework quando la barra degli strumenti padre viene spostata. Esegue l'override di [CMFCToolBarButton:: OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).|
|[CMFCToolBarEditBoxButton::OnShow](#onshow)|Chiamata eseguita dal framework quando il pulsante diventa visibile o invisibile. Esegue l'override di [CMFCToolBarButton:: OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).|
|[CMFCToolBarEditBoxButton::OnSize](#onsize)|Chiamata eseguita dal framework quando la barra degli strumenti padre ne modifica la dimensione o la posizione e questa modifica determina la modifica delle dimensioni del pulsante. Esegue l'override di [CMFCToolBarButton:: OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).|
|[CMFCToolBarEditBoxButton::OnUpdateToolTip](#onupdatetooltip)|Chiamata eseguita dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando. Esegue l'override di [CMFCToolBarButton:: OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).|
|`CMFCToolBarEditBoxButton::Serialize`|Legge questo oggetto da un archivio o lo scrive in un archivio. Esegue l'override di [CMFCToolBarButton:: Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).|
|`CMFCToolBarEditBoxButton::SetACCData`|Popola l'oggetto fornito `CAccessibilityData` con i dati di accessibilità dal pulsante della barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#setaccdata).|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContents](#setcontents)|Imposta il testo nel controllo di modifica del pulsante.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall)|Trova il pulsante modifica controllo con un ID comando specificato e imposta il testo nel controllo di modifica di tale pulsante.|
|[CMFCToolBarEditBoxButton::SetContextMenuID](#setcontextmenuid)|Specifica l'ID risorsa del menu di scelta rapida associato al pulsante.|
|[CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode)|Specifica l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetStyle](#setstyle)|Specifica lo stile del pulsante. Esegue l'override di [CMFCToolBarButton:: Sestyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).|

## <a name="remarks"></a>Note

Per aggiungere un pulsante della casella di modifica a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Costruisce `CMFCToolBarEditBoxButton` un oggetto.

3. Nel gestore di messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR sostituire il pulsante fittizio con il nuovo pulsante della casella combinata tramite [CMFCToolBar:: ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per altre informazioni, vedere [Procedura dettagliata: Inserimento di controlli nelle barre](../../mfc/walkthrough-putting-controls-on-toolbars.md)degli strumenti.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarEditBoxButton` . Nell'esempio viene illustrato come specificare che un utente può estendere il pulsante durante la personalizzazione, specificare che un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante, impostare il testo nel controllo casella di testo, specificare l'aspetto Flat dei pulsanti della casella di modifica nell'oggetto di applicazione e specificare lo stile di un controllo casella di modifica della barra degli strumenti.

[!code-cpp[NVC_MFC_RibbonApp#40](../../mfc/reference/codesnippet/cpp/cmfctoolbareditboxbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

`CMFCToolBarEditBoxButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbareditboxbutton. h

##  <a name="canbestretched"></a>  CMFCToolBarEditBoxButton::CanBeStretched

Specifica se un utente può estendere il pulsante durante la personalizzazione.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Note

Per impostazione predefinita, il Framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) consentendo all'utente di estendere un pulsante della barra degli strumenti della casella di modifica durante la personalizzazione.

##  <a name="cmfctoolbareditboxbutton"></a>  CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton

Costruisce un oggetto [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) .

```
CMFCToolBarEditBoxButton(
    UINT uiID,
    int iImage,
    DWORD dwStyle=ES_AUTOHSCROLL,
    int iWidth=0);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in Specifica l'ID del controllo.

*iImage*<br/>
in Specifica l'indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nell'oggetto della [classe CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) che la classe di [classe di CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) gestisce.

*dwStyle*<br/>
in Specifica lo stile del controllo di modifica.

*iWidth*<br/>
in Specifica la larghezza in pixel del controllo di modifica.

### <a name="remarks"></a>Note

Il costruttore predefinito imposta lo stile del controllo di modifica sulla combinazione seguente:

WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL

La larghezza predefinita del controllo è 150 pixel.

##  <a name="copyfrom"></a>CMFCToolBarEditBoxButton:: CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Riferimento al pulsante di origine da cui eseguire la copia.

### <a name="remarks"></a>Note

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti in questo pulsante della barra degli strumenti. *src* deve essere di tipo `CMFCToolBarEditBoxButton`.

##  <a name="createedit"></a>  CMFCToolBarEditBoxButton::CreateEdit

Crea un nuovo controllo di modifica nel pulsante.

```
virtual CEdit* CreateEdit(
    CWnd* pWndParent,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Specifica la finestra padre del controllo di modifica. Non deve essere NULL.

*rect*<br/>
in Specifica la posizione e le dimensioni del controllo di modifica.

### <a name="return-value"></a>Valore restituito

Puntatore al controllo di modifica appena creato; è NULL se la creazione e l'allegato del controllo hanno esito negativo.

### <a name="remarks"></a>Note

Si costruisce `CMFCToolBarEditBoxButton` un oggetto in due passaggi. Chiamare prima il costruttore, quindi chiamare `CreateEdit`, che crea il controllo `CMFCToolBarEditBoxButton` di modifica di Windows e lo collega all'oggetto.

##  <a name="getbycmd"></a>  CMFCToolBarEditBoxButton::GetByCmd

Recupera il primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato.

```
static CMFCToolBarEditBoxButton* __stdcall GetByCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID di comando del pulsante da recuperare.

### <a name="return-value"></a>Valore restituito

Primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato oppure null se tale oggetto non esiste.

### <a name="remarks"></a>Note

Questo metodo di utilità condivisa viene usato da metodi quali [CMFCToolBarEditBoxButton:: SetContentsAll](#setcontentsall) e [CMFCToolBarEditBoxButton:: GetContentsAll](#getcontentsall) per impostare o ottenere il testo del primo controllo barra degli strumenti della casella di modifica con l'ID di comando specificato.

##  <a name="getcontentsall"></a>CMFCToolBarEditBoxButton:: GetContentsAll

Recupera il testo del primo controllo barra degli strumenti della casella di modifica con l'ID di comando specificato.

```
static CString __stdcall GetContentsAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID di comando del pulsante da cui recuperare il contenuto.

### <a name="return-value"></a>Valore restituito

`CString` Oggetto che contiene il testo del primo controllo Toolbar della casella di modifica con l'ID di comando specificato.

### <a name="remarks"></a>Note

Questo metodo restituisce una stringa vuota se nessun `CMFCToolBarEditBoxButton` oggetto ha l'ID comando specificato.

##  <a name="getcontextmenuid"></a>CMFCToolBarEditBoxButton:: GetContextMenuID

Recupera l'ID di risorsa del menu di scelta rapida associato al pulsante.

```
UINT GetContextMenuID();
```

### <a name="return-value"></a>Valore restituito

ID risorsa del menu di scelta rapida associato al pulsante o 0 se al pulsante non è associato alcun menu di scelta rapida.

### <a name="remarks"></a>Note

Il Framework usa l'ID risorsa per creare il menu di scelta rapida quando l'utente fa clic con il pulsante destro del mouse sul pulsante.

##  <a name="geteditborder"></a>CMFCToolBarEditBoxButton:: GetEditBorder

Recupera il rettangolo di delimitazione della parte di modifica del pulsante della casella di modifica.

```
virtual void GetEditBorder(CRect& rectBorder);
```

### <a name="parameters"></a>Parametri

*rectBorder*<br/>
out Riferimento all' `CRect` oggetto che riceve il rettangolo di delimitazione.

### <a name="remarks"></a>Note

Questo metodo recupera il rettangolo di delimitazione del controllo di modifica nelle coordinate del client. Espande le dimensioni del rettangolo in ogni direzione di un pixel.

Il metodo [CMFCVisualManager:: OnDrawEditBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondraweditborder) chiama questo metodo quando disegna il bordo intorno a un `CMFCToolBarEditBoxButton` oggetto.

##  <a name="geteditbox"></a>CMFCToolBarEditBoxButton:: GetEditBox

Restituisce un puntatore al controllo della [classe CEdit](../../mfc/reference/cedit-class.md) incorporato nel pulsante.

```
CEdit* GetEditBox() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al controllo della [classe CEdit](../../mfc/reference/cedit-class.md) contenente il pulsante. È null se il `CEdit` controllo non è ancora stato creato.

### <a name="remarks"></a>Note

Per creare il `CEdit` controllo, chiamare [CMFCToolBarEditBoxButton:: CreateEdit](#createedit).

##  <a name="gethwnd"></a>CMFCToolBarEditBoxButton:: GetHwnd

Recupera l'handle di finestra associato al pulsante della barra degli strumenti.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

Handle della finestra associato al pulsante.

### <a name="remarks"></a>Note

Questo metodo esegue l'override del metodo [CMFCToolBarButton:: GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) restituendo l'handle della finestra della parte del controllo di modifica del pulsante della casella di modifica.

##  <a name="getinvalidaterect"></a>  CMFCToolBarEditBoxButton::GetInvalidateRect

Recupera l'area dell'area client del pulsante che deve essere ridisegnato.

```
virtual const CRect GetInvalidateRect() const;
```

### <a name="return-value"></a>Valore restituito

`CRect` Oggetto che specifica l'area che deve essere ridisegnato.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base, [CMFCToolBarButton:: GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect), includendo nell'area l'area dell'etichetta di testo.

##  <a name="havehotborder"></a>  CMFCToolBarEditBoxButton::HaveHotBorder

Determina se un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante.

```
virtual BOOL HaveHotBorder() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un pulsante Visualizza il bordo se selezionato; in caso contrario, 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base, [CMFCToolBarButton:: HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder), restituendo un valore diverso da zero se il controllo è visibile.

##  <a name="isflatmode"></a>  CMFCToolBarEditBoxButton::IsFlatMode

Determina se i pulsanti della casella di modifica hanno uno stile flat.

```
static BOOL __stdcall IsFlatMode();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i pulsanti hanno uno stile Flat; in caso contrario, 0.

### <a name="remarks"></a>Note

Per impostazione predefinita, i pulsanti della casella di modifica hanno uno stile flat. Usare il metodo [CMFCToolBarEditBoxButton:: SetFlatMode](#setflatmode) per modificare l'aspetto dello stile flat per l'applicazione.

##  <a name="notifycommand"></a>CMFCToolBarEditBoxButton:: NotifyCommand

Specifica se il pulsante elabora il messaggio [WM_COMMAND](/windows/win32/menurc/wm-command) .

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*iNotifyCode*<br/>
in Messaggio di notifica associato al comando.

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante elabora il messaggio WM_COMMAND o FALSE per indicare che il messaggio deve essere gestito dalla barra degli strumenti padre.

### <a name="remarks"></a>Note

Il Framework chiama questo metodo quando sta per inviare un messaggio [WM_COMMAND](/windows/win32/menurc/wm-command) alla finestra padre.

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) elaborando la notifica [EN_UPDATE](/windows/win32/Controls/en-update) . Per ogni casella di modifica con lo stesso ID comando di questo oggetto, imposta la relativa etichetta di testo sull'etichetta di testo di questo oggetto.

##  <a name="onaddtocustomizepage"></a>CMFCToolBarEditBoxButton:: OnAddToCustomizePage

Chiamata eseguita dal framework quando il pulsante viene aggiunto a una finestra di dialogo di **personalizzazione** .

```
virtual void OnAddToCustomizePage();
```

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage)) copiando le proprietà dal controllo casella di modifica in una barra degli strumenti con lo stesso ID comando di questo oggetto. Questo metodo non esegue alcuna operazione se nessun barra degli strumenti dispone di un controllo casella di modifica con lo stesso ID comando di questo oggetto.

Per ulteriori informazioni sulla finestra di dialogo **Personalizza** , vedere [classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

##  <a name="onchangeparentwnd"></a>CMFCToolBarEditBoxButton:: OnChangeParentWnd

Chiamata eseguita dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla nuova finestra padre.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton:: OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando l'oggetto interno `CEdit` .

##  <a name="onclick"></a>CMFCToolBarEditBoxButton:: OnClick

Chiamata eseguita dal framework quando l'utente fa clic con il pulsante del mouse.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Inutilizzati.

*bDelay*<br/>
in Inutilizzati.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario, 0.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton:: OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)) restituendo un valore diverso `CEdit` da zero se l'oggetto interno è visibile.

##  <a name="onctlcolor"></a>  CMFCToolBarEditBoxButton::OnCtlColor

Chiamata eseguita dal framework quando la barra degli strumenti padre gestisce un messaggio WM_CTLCOLOR.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante.

*nCtlColor*<br/>
in Inutilizzati.

### <a name="return-value"></a>Valore restituito

Handle per il pennello della finestra globale.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton:: OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)) impostando rispettivamente il testo e i colori di sfondo del contesto di dispositivo specificato sul testo globale e i colori di sfondo.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).

##  <a name="onglobalfontschanged"></a>  CMFCToolBarEditBoxButton::OnGlobalFontsChanged

Chiamata eseguita dal framework quando il tipo di carattere globale è stato modificato.

```
virtual void OnGlobalFontsChanged();
```

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo su quello del tipo di carattere globale.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).

##  <a name="onmove"></a>CMFCToolBarEditBoxButton:: OnMove

Chiamata eseguita dal framework quando la barra degli strumenti padre viene spostata.

```
virtual void OnMove();
```

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe predefinita ( [CMFCToolBarButton:: OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)) aggiornando la posizione `CEdit` dell'oggetto interno.

##  <a name="onshow"></a>CMFCToolBarEditBoxButton:: OnShow

Chiamata eseguita dal framework quando il pulsante diventa visibile o invisibile.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
in Specifica se il pulsante è visibile. Se questo parametro è TRUE, il pulsante è visibile. In caso contrario, il pulsante non è visibile.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se *bShow* è true. In caso contrario, questo metodo nasconde il pulsante.

##  <a name="onsize"></a>  CMFCToolBarEditBoxButton::OnSize

Chiamata eseguita dal framework quando la barra degli strumenti padre ne modifica la dimensione o la posizione e questa modifica determina la modifica delle dimensioni del pulsante.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*iSize*<br/>
in Nuova larghezza del pulsante, in pixel.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe predefinita, [CMFCToolBarButton:: OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize), aggiornando le dimensioni e la `CEdit` posizione dell'oggetto interno.

##  <a name="onupdatetooltip"></a>  CMFCToolBarEditBoxButton::OnUpdateToolTip

Chiamata eseguita dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Inutilizzati.

*iButtonIndex*<br/>
in Inutilizzati.

*wndToolTip*<br/>
in Controllo che Visualizza il testo della descrizione comando.

*str*<br/>
out `CString` Oggetto che riceve il testo della descrizione comando aggiornato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo aggiorna il testo della descrizione comando; in caso contrario, 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comando associato alla parte di modifica del pulsante. Se l'oggetto `CEdit` interno è null o l'handle `CEdit` di finestra dell'oggetto non identifica una finestra esistente, questo metodo non esegue alcuna operazione e restituisce false.

##  <a name="setcontents"></a>CMFCToolBarEditBoxButton:: fileContents

Imposta il testo nel controllo casella di testo.

```
virtual void SetContents(const CString& sContents);
```

### <a name="parameters"></a>Parametri

*sContents*<br/>
in Specifica il nuovo testo da impostare.

##  <a name="setcontentsall"></a>  CMFCToolBarEditBoxButton::SetContentsAll

Trova un oggetto [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) con un ID di comando specificato e imposta il testo specificato all'interno della casella di testo.

```
static BOOL SetContentsAll(
    UINT uiCmd,
    const CString& strContents);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in Specifica l'ID di comando del controllo per il quale verrà modificato il testo.

*strContents*<br/>
in Specifica il nuovo testo da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il testo è stato impostato; 0 se il `CMFCToolBarEditBoxButton` controllo con l'ID di comando specificato non esiste.

##  <a name="setcontextmenuid"></a>  CMFCToolBarEditBoxButton::SetContextMenuID

Specifica l'ID risorsa del menu di scelta rapida associato al pulsante.

```
void SetContextMenuID(UINT uiResID);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID risorsa del menu di scelta rapida.

### <a name="remarks"></a>Note

Il Framework usa l'ID risorsa per creare il menu di scelta rapida quando l'utente fa clic con il pulsante destro del mouse sul pulsante della barra degli strumenti.

##  <a name="setflatmode"></a>CMFCToolBarEditBoxButton:: SetFlatMode

Specifica l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione.

```
static void __stdcall SetFlatMode(BOOL bFlat = TRUE);
```

### <a name="parameters"></a>Parametri

*bFlat*<br/>
in Stile flat per i pulsanti della casella di modifica. Se questo parametro è TRUE, l'aspetto dello stile Flat è abilitato; in caso contrario, l'aspetto dello stile Flat è Disabled.

### <a name="remarks"></a>Note

Lo stile flat predefinito per i pulsanti della casella di modifica è TRUE. Usare il metodo [CMFCToolBarEditBoxButton:: IsFlatMode](#isflatmode) per recuperare l'aspetto dello stile flat per l'applicazione.

##  <a name="setstyle"></a>CMFCToolBarEditBoxButton:: Sestyle

Specifica lo stile di un controllo casella di modifica della barra degli strumenti.

```
virtual void SetStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
in Nuovo stile da impostare.

### <a name="remarks"></a>Note

Questo metodo imposta [CMFCToolBarButton:: m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle) su *nStyle* Disabilita anche la casella di testo quando l'applicazione è in modalità di personalizzazione e la Abilita quando l'applicazione non è in modalità di personalizzazione (vedere [CMFCToolBar:: SetCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#setcustomizemode) e Metodo [CMFCToolBar:: IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)). Vedere [stili di controllo della barra degli strumenti](../../mfc/reference/toolbar-control-styles.md) per un elenco di flag di stile validi.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: Inserimento di controlli sulle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
