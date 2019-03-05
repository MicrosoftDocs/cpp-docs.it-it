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
ms.openlocfilehash: ac07ff4e6bf97518e2c659a9d6df9bd721b6b806
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57291613"
---
# <a name="cmfctoolbareditboxbutton-class"></a>Classe CMFCToolBarEditBoxButton

Un pulsante della barra degli strumenti contenente un controllo di modifica ( [classe CEdit](../../mfc/reference/cedit-class.md)).

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarEditBoxButton : public CMFCToolBarButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton](#cmfctoolbareditboxbutton)|Costruisce un oggetto `CMFCToolBarEditBoxButton`.|
|`CMFCToolBarEditBoxButton::~CMFCToolBarEditBoxButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarEditBoxButton::CanBeStretched](#canbestretched)|Specifica se un utente può durare il pulsante durante la personalizzazione. (Esegue l'override [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|
|[CMFCToolBarEditBoxButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti per il pulsante corrente. (Esegue l'override [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::CreateEdit](#createedit)|Crea un nuovo controllo di modifica nel pulsante.|
|`CMFCToolBarEditBoxButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCToolBarEditBoxButton::GetByCmd](#getbycmd)|Recupera il primo `CMFCToolBarEditBoxButton` oggetto dell'applicazione con l'ID di comando specificato.|
|[CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall)|Recupera il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.|
|[CMFCToolBarEditBoxButton::GetContextMenuID](#getcontextmenuid)|Recupera l'ID risorsa del menu di scelta rapida che viene associato al pulsante.|
|[CMFCToolBarEditBoxButton::GetEditBorder](#geteditborder)|Recupera il rettangolo di delimitazione della parte modifica del pulsante di finestra di modifica.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::GetEditBox](#geteditbox)|Restituisce un puntatore al controllo di modifica che viene incorporato nel pulsante.|
|[CMFCToolBarEditBoxButton::GetHwnd](#gethwnd)|Recupera l'handle della finestra che viene associata al pulsante sulla barra degli strumenti. (Esegue l'override [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|
|[CMFCToolBarEditBoxButton::GetInvalidateRect](#getinvalidaterect)|Recupera l'area dell'area client del pulsante su cui deve essere ridisegnato. (Esegue l'override [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect).)|
|`CMFCToolBarEditBoxButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCToolBarEditBoxButton::HaveHotBorder](#havehotborder)|Determina se viene visualizzato un bordo del pulsante quando un utente fa clic sul pulsante. (Esegue l'override [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|
|[CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella modifica hanno uno stile flat.|
|[CMFCToolBarEditBoxButton::NotifyCommand](#notifycommand)|Specifica se il pulsante elabora i [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggio. (Esegue l'override [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).)|
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](#onaddtocustomizepage)|Chiamato dal framework quando il pulsante viene aggiunto a un **Personalizza** nella finestra di dialogo. (Esegue l'override [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCToolBarEditBoxButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|
|[CMFCToolBarEditBoxButton::OnCtlColor](#onctlcolor)|Chiamato dal framework quando la barra degli strumenti padre gestisce un WM_CTLCOLOR (messaggio). (Esegue l'override [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).)|
|`CMFCToolBarEditBoxButton::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili specificati e le opzioni. (Esegue l'override [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Chiamato dal framework per disegnare il pulsante di **comandi** riquadro della finestra il **Personalizza** nella finestra di dialogo. (Esegue l'override [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](#onglobalfontschanged)|Chiamato dal framework quando è stato modificato il tipo globale di carattere. (Esegue l'override [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|
|[CMFCToolBarEditBoxButton::OnMove](#onmove)|Chiamato dal framework quando si sposta la barra degli strumenti padre. (Esegue l'override [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|
|[CMFCToolBarEditBoxButton::OnShow](#onshow)|Chiamato dal framework quando il pulsante diventa visibile o invisibile. (Esegue l'override [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|
|[CMFCToolBarEditBoxButton::OnSize](#onsize)|Chiamato dal framework quando la barra degli strumenti padre viene modificato le dimensioni o posizione e questa modifica fa sì che il pulsante modificare le dimensioni. (Esegue l'override [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|
|[CMFCToolBarEditBoxButton::OnUpdateToolTip](#onupdatetooltip)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando. (Esegue l'override [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).)|
|`CMFCToolBarEditBoxButton::Serialize`|Legge l'oggetto da un archivio o lo scrive in un archivio. (Esegue l'override [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|
|`CMFCToolBarEditBoxButton::SetACCData`|Popola l'oggetto specificato `CAccessibilityData` oggetto con dati di accessibilità dal pulsante della barra degli strumenti. (Esegue l'override [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#setaccdata).)|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContents](#setcontents)|Imposta il testo nel controllo di modifica del pulsante.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall)|Consente di trovare il pulsante di controllo di modifica che ha un ID di comando specificato e imposta il testo nel controllo di modifica di tale pulsante.|
|[CMFCToolBarEditBoxButton::SetContextMenuID](#setcontextmenuid)|Specifica l'ID risorsa del menu di scelta rapida che viene associato al pulsante.|
|[CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode)|Specifica l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione.|
|`CMFCToolBarEditBoxButton::` [CMFCToolBarEditBoxButton::SetStyle](#setstyle)|Specifica lo stile del pulsante. (Esegue l'override [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).)|

## <a name="remarks"></a>Note

Per aggiungere un pulsante di finestra di modifica a una barra degli strumenti, seguire questa procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Costruire un `CMFCToolBarEditBoxButton` oggetto.

3. Nel gestore di messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR, sostituire il pulsante fittizio con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per altre informazioni, vedere [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarEditBoxButton` . Nell'esempio viene illustrato come specificare che un utente può estendere il pulsante durante la personalizzazione, specificare che venga visualizzato un bordo del pulsante quando un utente fa clic sul pulsante, impostare il testo nel controllo della casella di testo, specificare l'aspetto bidimensionale dei pulsanti della casella di modifica nella finestra di appli cazione e specificare lo stile di una barra degli strumenti di controllo casella di testo.

[!code-cpp[NVC_MFC_RibbonApp#40](../../mfc/reference/codesnippet/cpp/cmfctoolbareditboxbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

`CMFCToolBarEditBoxButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbareditboxbutton.h

##  <a name="canbestretched"></a>  CMFCToolBarEditBoxButton::CanBeStretched

Specifica se un utente può durare il pulsante durante la personalizzazione.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Note

Per impostazione predefinita, il framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)), consentendo all'utente di estendere un pulsante della barra degli strumenti finestra di modifica durante la personalizzazione.

##  <a name="cmfctoolbareditboxbutton"></a>  CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton

Costruisce un [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) oggetto.

```
CMFCToolBarEditBoxButton(
    UINT uiID,
    int iImage,
    DWORD dwStyle=ES_AUTOHSCROLL,
    int iWidth=0);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] Specifica l'ID del controllo.

*iImage*<br/>
[in] Specifica l'indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nel [classe CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) dell'oggetto che [classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) classe gestisce.

*dwStyle*<br/>
[in] Specifica lo stile del controllo di modifica.

*iWidth*<br/>
[in] Specifica la larghezza in pixel del controllo di modifica.

### <a name="remarks"></a>Note

Il costruttore predefinito imposta lo stile del controllo di modifica per le combinazioni seguenti:

WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL

La larghezza predefinita del controllo è 150 pixel.

##  <a name="copyfrom"></a>  CMFCToolBarEditBoxButton::CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti per il pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Un riferimento al pulsante di origine da cui copiare.

### <a name="remarks"></a>Note

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti per questo pulsante sulla barra degli strumenti. *src* deve essere di tipo `CMFCToolBarEditBoxButton`.

##  <a name="createedit"></a>  CMFCToolBarEditBoxButton::CreateEdit

Crea un nuovo controllo di modifica nel pulsante.

```
virtual CEdit* CreateEdit(
    CWnd* pWndParent,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
[in] Specifica la finestra padre del controllo di modifica. Non deve essere NULL.

*rect*<br/>
[in] Specifica le dimensioni e la posizione del controllo di modifica.

### <a name="return-value"></a>Valore restituito

Un puntatore al controllo di modifica appena creato. Se la creazione e l'allegato non è NULL.

### <a name="remarks"></a>Note

Si costruisce un `CMFCToolBarEditBoxButton` oggetto in due passaggi. Prima di chiamare il costruttore e quindi chiamare `CreateEdit`, che crea il controllo di modifica di Windows e lo collega al `CMFCToolBarEditBoxButton` oggetto.

##  <a name="getbycmd"></a>  CMFCToolBarEditBoxButton::GetByCmd

Recupera il primo `CMFCToolBarEditBoxButton` oggetto dell'applicazione con l'ID di comando specificato.

```
static CMFCToolBarEditBoxButton* __stdcall GetByCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] L'ID di comando del pulsante da recuperare.

### <a name="return-value"></a>Valore restituito

Il primo `CMFCToolBarEditBoxButton` oggetto dell'applicazione con l'ID di comando specificato o NULL se tale oggetto non esiste.

### <a name="remarks"></a>Note

Questo metodo di utilità condivisa viene utilizzato dai metodi, ad esempio [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall) e [CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall) impostare o ottenere il testo della barra degli strumenti prima casella di modifica controllo che ha l'ID del comando specificato.

##  <a name="getcontentsall"></a>  CMFCToolBarEditBoxButton::GetContentsAll

Recupera il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.

```
static CString __stdcall GetContentsAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] ID comando del pulsante da cui recuperare i contenuti.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` oggetto che contiene il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.

### <a name="remarks"></a>Note

Questo metodo restituisce una stringa vuota se nessun `CMFCToolBarEditBoxButton` oggetti hanno l'ID del comando specificato.

##  <a name="getcontextmenuid"></a>  CMFCToolBarEditBoxButton::GetContextMenuID

Recupera l'ID risorsa del menu di scelta rapida che viene associato al pulsante.

```
UINT GetContextMenuID();
```

### <a name="return-value"></a>Valore restituito

L'ID di risorsa di menu di scelta rapida associato con il pulsante o 0 se il pulsante non dispone di alcun menu di scelta rapida associato.

### <a name="remarks"></a>Note

Il framework utilizza l'ID risorsa per creare menu di scelta rapida quando l'utente fa clic sul pulsante.

##  <a name="geteditborder"></a>  CMFCToolBarEditBoxButton::GetEditBorder

Recupera il rettangolo di delimitazione della parte modifica del pulsante di finestra di modifica.

```
virtual void GetEditBorder(CRect& rectBorder);
```

### <a name="parameters"></a>Parametri

*rectBorder*<br/>
[out] Un riferimento al `CRect` oggetto che riceve il rettangolo di delimitazione.

### <a name="remarks"></a>Note

Questo metodo recupera il rettangolo di delimitazione del controllo di modifica nelle coordinate del client. Espande le dimensioni del rettangolo in ciascuna direzione di un pixel.

Il [CMFCVisualManager::OnDrawEditBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondraweditborder) chiama questo metodo quando disegna il bordo attorno una `CMFCToolBarEditBoxButton` oggetto.

##  <a name="geteditbox"></a>  CMFCToolBarEditBoxButton::GetEditBox

Restituisce un puntatore per il [classe CEdit](../../mfc/reference/cedit-class.md) controllo incorporato nel pulsante.

```
CEdit* GetEditBox() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il [classe CEdit](../../mfc/reference/cedit-class.md) controllo contenente il pulsante. È NULL se il `CEdit` controllo non è ancora stato creato.

### <a name="remarks"></a>Note

Si crea il `CEdit` controllo chiamando [CMFCToolBarEditBoxButton::CreateEdit](#createedit).

##  <a name="gethwnd"></a>  CMFCToolBarEditBoxButton::GetHwnd

Recupera l'handle della finestra che viene associata al pulsante sulla barra degli strumenti.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

L'handle della finestra che viene associata al pulsante.

### <a name="remarks"></a>Note

Questo metodo esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) metodo restituendo l'handle della finestra della parte del controllo di modifica del pulsante di finestra di modifica.

##  <a name="getinvalidaterect"></a>  CMFCToolBarEditBoxButton::GetInvalidateRect

Recupera l'area dell'area client del pulsante su cui deve essere ridisegnato.

```
virtual const CRect GetInvalidateRect() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` oggetto che specifica l'area in cui deve essere ridisegnato.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect), includendo nella regione l'area dell'etichetta di testo.

##  <a name="havehotborder"></a>  CMFCToolBarEditBoxButton::HaveHotBorder

Determina se viene visualizzato un bordo del pulsante quando un utente fa clic sul pulsante.

```
virtual BOOL HaveHotBorder() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un pulsante consente di visualizzare il bordo quando selezionato. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder), restituendo un valore diverso da zero se il controllo è visibile.

##  <a name="isflatmode"></a>  CMFCToolBarEditBoxButton::IsFlatMode

Determina se i pulsanti della casella modifica hanno uno stile flat.

```
static BOOL __stdcall IsFlatMode();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i pulsanti hanno uno stile flat; in caso contrario, 0.

### <a name="remarks"></a>Note

Per impostazione predefinita, i pulsanti della casella modifica hanno uno stile flat. Usare la [CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode) metodo per modificare l'aspetto bidimensionale per l'applicazione.

##  <a name="notifycommand"></a>  CMFCToolBarEditBoxButton::NotifyCommand

Specifica se il pulsante elabora i [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggio.

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*iNotifyCode*<br/>
[in] Il messaggio di notifica associato con il comando.

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante elabora il messaggio WM_COMMAND o FALSE per indicare che il messaggio deve essere gestito dalla barra degli strumenti padre.

### <a name="remarks"></a>Note

Il framework chiama questo metodo quando sta per inviare un [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggio alla finestra padre.

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) elaborando le [EN_UPDATE](/windows/desktop/Controls/en-update) notifica. Per ogni casella di modifica con lo stesso ID di comando di questo oggetto, imposta l'etichetta di testo all'etichetta di testo di questo oggetto.

##  <a name="onaddtocustomizepage"></a>  CMFCToolBarEditBoxButton::OnAddToCustomizePage

Chiamato dal framework quando il pulsante viene aggiunto a un **Personalizza** nella finestra di dialogo.

```
virtual void OnAddToCustomizePage();
```

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage)) copiando le proprietà dal controllo della casella di modifica qualsiasi sulla barra degli strumenti con lo stesso ID di comando di questo oggetto. Questo metodo non esegue alcuna operazione se nessuna barra degli strumenti dispone di un controllo casella di modifica che ha lo stesso ID di comando di questo oggetto.

Per altre informazioni sul **Personalizza** finestra di dialogo, vedere [classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

##  <a name="onchangeparentwnd"></a>  CMFCToolBarEditBoxButton::OnChangeParentWnd

Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
[in] Un puntatore a una nuova finestra padre.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando interno `CEdit` oggetto.

##  <a name="onclick"></a>  CMFCToolBarEditBoxButton::OnClick

Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in] Non usato.

*bDelay*<br/>
[in] Non usato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio; fare clic su in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)), restituendo un valore diverso da zero se l'oggetto interno `CEdit` è visibile o meno.

##  <a name="onctlcolor"></a>  CMFCToolBarEditBoxButton::OnCtlColor

Chiamato dal framework quando la barra degli strumenti padre gestisce un WM_CTLCOLOR (messaggio).

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Il contesto di dispositivo che visualizza il pulsante.

*nCtlColor*<br/>
[in] Non usato.

### <a name="return-value"></a>Valore restituito

Handle per il pennello finestra globale.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)) impostando i colori di testo e sfondo del contesto di dispositivo fornito per il testo globale e i colori di sfondo, rispettivamente.

Per altre informazioni sulle opzioni globali che sono disponibili per l'applicazione, vedere [AFX_GLOBAL_DATA (struttura)](../../mfc/reference/afx-global-data-structure.md).

##  <a name="onglobalfontschanged"></a>  CMFCToolBarEditBoxButton::OnGlobalFontsChanged

Chiamato dal framework quando è stato modificato il tipo globale di carattere.

```
virtual void OnGlobalFontsChanged();
```

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo a quello del tipo globale di carattere.

Per altre informazioni sulle opzioni globali che sono disponibili per l'applicazione, vedere [AFX_GLOBAL_DATA (struttura)](../../mfc/reference/afx-global-data-structure.md).

##  <a name="onmove"></a>  CMFCToolBarEditBoxButton::OnMove

Chiamato dal framework quando si sposta la barra degli strumenti padre.

```
virtual void OnMove();
```

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe predefinito ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)), aggiornare la posizione dell'oggetto interno `CEdit` oggetto

##  <a name="onshow"></a>  CMFCToolBarEditBoxButton::OnShow

Chiamato dal framework quando il pulsante diventa visibile o invisibile.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] Specifica se il pulsante è visibile. Se questo parametro è TRUE, il pulsante è visibile. In caso contrario, il pulsante non è visibile.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se *bMostra* è TRUE. In caso contrario, questo metodo consente di nascondere il pulsante.

##  <a name="onsize"></a>  CMFCToolBarEditBoxButton::OnSize

Chiamato dal framework quando la barra degli strumenti padre viene modificato le dimensioni o posizione e questa modifica fa sì che il pulsante modificare le dimensioni.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*iSize*<br/>
[in] La nuova larghezza del pulsante, in pixel.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe predefinito, [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize), aggiornando le dimensioni e la posizione dell'oggetto interno `CEdit` oggetto.

##  <a name="onupdatetooltip"></a>  CMFCToolBarEditBoxButton::OnUpdateToolTip

Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
[in] Non usato.

*iButtonIndex*<br/>
[in] Non usato.

*wndToolTip*<br/>
[in] Il controllo che visualizza il testo della descrizione comando.

*str*<br/>
[out] Oggetto `CString` oggetto che riceve il testo della descrizione aggiornata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo aggiorna il testo della descrizione comando. in caso contrario 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comando associato con la parte di modifica del pulsante. Se l'oggetto interno `CEdit` oggetto è NULL o l'handle della finestra di `CEdit` oggetto non identifica una finestra esistente, questo metodo non esegue alcuna operazione e restituisce FALSE.

##  <a name="setcontents"></a>  CMFCToolBarEditBoxButton::SetContents

Imposta il testo nel controllo della casella di testo.

```
virtual void SetContents(const CString& sContents);
```

### <a name="parameters"></a>Parametri

*sContents*<br/>
[in] Specifica il nuovo testo da impostare.

##  <a name="setcontentsall"></a>  CMFCToolBarEditBoxButton::SetContentsAll

Trova un [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) oggetto che ha un ID di comando specificato e imposta il testo specificato nella relativa casella di testo.

```
static BOOL SetContentsAll(
    UINT uiCmd,
    const CString& strContents);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] Specifica l'ID del controllo per il quale verrà modificato il testo del comando.

*strContents*<br/>
[in] Specifica il nuovo testo da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il testo è stato impostato. 0 se il `CMFCToolBarEditBoxButton` controllo con l'ID di comando specificato non esiste.

##  <a name="setcontextmenuid"></a>  CMFCToolBarEditBoxButton::SetContextMenuID

Specifica l'ID risorsa del menu di scelta rapida che viene associato al pulsante.

```
void SetContextMenuID(UINT uiResID);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] L'ID di risorsa di menu di scelta rapida.

### <a name="remarks"></a>Note

Il framework utilizza l'ID risorsa per creare menu di scelta rapida quando l'utente fa clic sul pulsante della barra degli strumenti.

##  <a name="setflatmode"></a>  CMFCToolBarEditBoxButton::SetFlatMode

Specifica l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione.

```
static void __stdcall SetFlatMode(BOOL bFlat = TRUE);
```

### <a name="parameters"></a>Parametri

*bFlat*<br/>
[in] Stile flat pulsanti della casella di modifica. Se questo parametro è TRUE, l'aspetto bidimensionale è abilitato. in caso contrario, l'aspetto bidimensionale è disabilitato.

### <a name="remarks"></a>Note

Lo stile flat predefinito per i pulsanti della casella modifica è TRUE. Usare la [CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode) metodo per recuperare l'aspetto bidimensionale per l'applicazione.

##  <a name="setstyle"></a>  CMFCToolBarEditBoxButton::SetStyle

Specifica lo stile di una barra degli strumenti di controllo casella di testo.

```
virtual void SetStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
[in] Un nuovo stile da impostare.

### <a name="remarks"></a>Note

Questo metodo imposta [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle) al *nStyle* viene disattivata anche la casella di testo quando l'applicazione è in modalità di personalizzazione e lo abilita quando l'applicazione non è in modalità di personalizzazione (vedere [ CMFCToolBar::SetCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#setcustomizemode) e [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)). Visualizzare [stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md) per un elenco dei flag di stile valido.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Classe CEdit](../../mfc/reference/cedit-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
