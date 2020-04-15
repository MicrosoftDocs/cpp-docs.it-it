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
ms.openlocfilehash: 52989f7b523bf0ba9a00da350242a968ca0db153
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360476"
---
# <a name="cmfctoolbareditboxbutton-class"></a>Classe CMFCToolBarEditBoxButton

Pulsante della barra degli strumenti che contiene un controllo di modifica ( [CEdit Class](../../mfc/reference/cedit-class.md)).

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
|[CMFCToolBarEditBoxButton::CanBeStretched](#canbestretched)|Specifica se un utente può estendere il pulsante durante la personalizzazione. (Esegue l'override di [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|
|[CMFCToolBarEditBoxButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::CreateModifica](#createedit)|Crea un nuovo controllo di modifica nel pulsante.|
|`CMFCToolBarEditBoxButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCToolBarEditBoxButton::GetByCmd](#getbycmd)|Recupera il `CMFCToolBarEditBoxButton` primo oggetto nell'applicazione con l'ID di comando specificato.|
|[CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall)|Recupera il testo del primo controllo della barra degli strumenti della casella di modifica con l'ID di comando specificato.|
|[CMFCToolBarEditBoxButton::GetContextMenuID](#getcontextmenuid)|Recupera l'ID risorsa del menu di scelta rapida associato al pulsante.|
|[CMFCToolBarEditBoxButton::GetEditBorder](#geteditborder)|Recupera il rettangolo di delimitazione della parte di modifica del pulsante della casella di modifica.|
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::GetEditBox](#geteditbox)|Restituisce un puntatore al controllo di modifica incorporato nel pulsante.|
|[CMFCToolBarEditBoxButton::GetHwnd](#gethwnd)|Recupera l'handle di finestra associato al pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|
|[CMFCToolBarEditBoxButton::GetInvalidateRect](#getinvalidaterect)|Recupera l'area dell'area client del pulsante che deve essere ridisegnata. (Esegue l'override di [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect).)|
|`CMFCToolBarEditBoxButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCToolBarEditBoxButton::HaveHotBorder](#havehotborder)|Determina se viene visualizzato un bordo del pulsante quando un utente fa clic sul pulsante. (Esegue l'override di [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|
|[CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella di modifica hanno uno stile piatto.|
|[CMFCToolBarEditBoxButton::NotifyCommand](#notifycommand)|Specifica se il pulsante elabora il messaggio [WM_COMMAND.](/windows/win32/menurc/wm-command) (Esegue l'override di [CMFCToolBarButton::NotifyCommand.)](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)|
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](#onaddtocustomizepage)|Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza.** (Esegue l'override di [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCToolBarEditBoxButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClick .)](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)|
|[CMFCToolBarEditBoxButton::OnCtlColor](#onctlcolor)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_CTLCOLOR. (Esegue l'override di [CMFCToolBarButton::OnCtlColor.)](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)|
|`CMFCToolBarEditBoxButton::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificati. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** della finestra di dialogo **Personalizza.** (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](#onglobalfontschanged)|Chiamato dal framework quando il tipo di carattere globale è stato modificato. (Esegue l'override di [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|
|[CMFCToolBarEditBoxButton::OnMove](#onmove)|Chiamato dal framework quando si sposta la barra degli strumenti padre. (OverrideS [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|
|[CMFCToolBarEditBoxButton::OnShow](#onshow)|Chiamato dal framework quando il pulsante diventa visibile o invisibile. (Esegue l'override di [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|
|[CMFCToolBarEditBoxButton::OnSize](#onsize)|Chiamato dal framework quando la barra degli strumenti padre modifica le dimensioni o la posizione e questa modifica determina la modifica delle dimensioni del pulsante. (Esegue l'override di [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|
|[Suggerimento Per CMFCToolBarEditBoxButton::OnUpdateToolCMFCToolEditBoxButton::OnUpdateToolTip](#onupdatetooltip)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comandi. (Esegue l'override di [CMFCToolBarButton::OnUpdateToolTip.)](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)|
|`CMFCToolBarEditBoxButton::Serialize`|Legge l'oggetto da un archivio o lo scrive in un archivio. (Esegue l'override di [CMFCToolBarButton::Serialize.)](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)|
|`CMFCToolBarEditBoxButton::SetACCData`|Popola `CAccessibilityData` l'oggetto fornito con i dati di accessibilità dal pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#setaccdata).)|
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::SetContents](#setcontents)|Imposta il testo nel controllo di modifica del pulsante.|
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall)|Trova il pulsante di controllo di modifica con un ID di comando specificato e imposta il testo nel controllo di modifica di tale pulsante.|
|[CMFCToolBarEditBoxButton::SetContextMenuID](#setcontextmenuid)|Specifica l'ID risorsa del menu di scelta rapida associato al pulsante.|
|[CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode)|Specifica l'aspetto dello stile piatto dei pulsanti della casella di modifica nell'applicazione.|
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::SetStyle](#setstyle)|Specifica lo stile del pulsante. (Esegue l'override di [CMFCToolBarButton::SetStyle.)](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle)|

## <a name="remarks"></a>Osservazioni

Per aggiungere un pulsante della casella di modifica a una barra degli strumenti, attenersi alla seguente procedura:

1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.

2. Costruire `CMFCToolBarEditBoxButton` un oggetto.

3. Nel gestore messaggi che elabora il messaggio AFX_WM_RESETTOOLBAR sostituire il pulsante fittizio con il pulsante della nuova casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).

Per ulteriori informazioni, vedere [Procedura dettagliata: inserimento](../../mfc/walkthrough-putting-controls-on-toolbars.md)di controlli nelle barre degli strumenti .

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarEditBoxButton` . Nell'esempio viene illustrato come specificare che un utente può allungare il pulsante durante la personalizzazione, specificare che viene visualizzato un bordo del pulsante quando un utente fa clic sul pulsante, impostare il testo nel controllo casella di testo, specificare l'aspetto dello stile piatto dei pulsanti della casella di modifica nell'applicazione e specificare lo stile di un controllo casella di modifica della barra degli strumenti.

[!code-cpp[NVC_MFC_RibbonApp#40](../../mfc/reference/codesnippet/cpp/cmfctoolbareditboxbutton-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

`CMFCToolBarEditBoxButton`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbareditboxbutton.h

## <a name="cmfctoolbareditboxbuttoncanbestretched"></a><a name="canbestretched"></a>CMFCToolBarEditBoxButton::CanBeStretched

Specifica se un utente può estendere il pulsante durante la personalizzazione.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) consentendo all'utente di estendere un pulsante della barra degli strumenti casella di modifica durante la personalizzazione.

## <a name="cmfctoolbareditboxbuttoncmfctoolbareditboxbutton"></a><a name="cmfctoolbareditboxbutton"></a>CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton

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

*iImage (immagine)*<br/>
[in] Specifica l'indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nel [CMFCToolBarImages classe](../../mfc/reference/cmfctoolbarimages-class.md) oggetto che [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md) gestisce.

*DwStyle (in stile dwStyle)*<br/>
[in] Specifica lo stile del controllo di modifica.

*ILarghezza*<br/>
[in] Specifica la larghezza in pixel del controllo di modifica.

### <a name="remarks"></a>Osservazioni

Il costruttore predefinito imposta lo stile del controllo di modifica sulla combinazione seguente:The default constructor sets the edit control style to the following combination:

WS_CHILD . PROPRIETÀ WS_VISIBLE . ES_AUTOHSCROLL

La larghezza predefinita del controllo è 150 pixel.

## <a name="cmfctoolbareditboxbuttoncopyfrom"></a><a name="copyfrom"></a>CMFCToolBarEditBoxButton::CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Un riferimento al pulsante di origine da cui copiare.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti in questo pulsante della barra degli strumenti. *src* deve essere `CMFCToolBarEditBoxButton`di tipo .

## <a name="cmfctoolbareditboxbuttoncreateedit"></a><a name="createedit"></a>CMFCToolBarEditBoxButton::CreateModifica

Crea un nuovo controllo di modifica nel pulsante.

```
virtual CEdit* CreateEdit(
    CWnd* pWndParent,
    const CRect& rect);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Specifica la finestra padre del controllo di modifica. Non deve essere NULL.

*Rect*<br/>
[in] Specifica le dimensioni e la posizione del controllo di modifica.

### <a name="return-value"></a>Valore restituito

Un puntatore al controllo di modifica appena creato; è NULL se la creazione e l'allegato del controllo hanno esito negativo.

### <a name="remarks"></a>Osservazioni

Costruire un `CMFCToolBarEditBoxButton` oggetto in due passaggi. Chiamare innanzitutto il costruttore , quindi chiamare `CreateEdit`, che crea `CMFCToolBarEditBoxButton` il controllo di modifica di Windows e lo associa all'oggetto .

## <a name="cmfctoolbareditboxbuttongetbycmd"></a><a name="getbycmd"></a>CMFCToolBarEditBoxButton::GetByCmd

Recupera il `CMFCToolBarEditBoxButton` primo oggetto nell'applicazione con l'ID di comando specificato.

```
static CMFCToolBarEditBoxButton* __stdcall GetByCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando del pulsante da recuperare.

### <a name="return-value"></a>Valore restituito

Primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato oppure NULL se tale oggetto non esiste.

### <a name="remarks"></a>Osservazioni

Questo metodo di utilità condivisa viene utilizzato da metodi quali [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall) e [CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall) per impostare o ottenere il testo del primo controllo barra degli strumenti casella di modifica con l'ID di comando specificato.

## <a name="cmfctoolbareditboxbuttongetcontentsall"></a><a name="getcontentsall"></a>CMFCToolBarEditBoxButton::GetContentsAll

Recupera il testo del primo controllo della barra degli strumenti della casella di modifica con l'ID di comando specificato.

```
static CString __stdcall GetContentsAll(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando del pulsante da cui recuperare il contenuto.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il testo del primo controllo della barra degli strumenti della casella di modifica con l'ID di comando specificato.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce la `CMFCToolBarEditBoxButton` stringa vuota se nessun oggetto ha l'ID di comando specificato.

## <a name="cmfctoolbareditboxbuttongetcontextmenuid"></a><a name="getcontextmenuid"></a>CMFCToolBarEditBoxButton::GetContextMenuID

Recupera l'ID risorsa del menu di scelta rapida associato al pulsante.

```
UINT GetContextMenuID();
```

### <a name="return-value"></a>Valore restituito

ID risorsa del menu di scelta rapida associato al pulsante oppure 0 se al pulsante non è associato alcun menu di scelta rapida.

### <a name="remarks"></a>Osservazioni

Il framework utilizza l'ID risorsa per creare il menu di scelta rapida quando l'utente fa clic con il pulsante destro del mouse sul pulsante.

## <a name="cmfctoolbareditboxbuttongeteditborder"></a><a name="geteditborder"></a>CMFCToolBarEditBoxButton::GetEditBorder

Recupera il rettangolo di delimitazione della parte di modifica del pulsante della casella di modifica.

```
virtual void GetEditBorder(CRect& rectBorder);
```

### <a name="parameters"></a>Parametri

*rectBorder*<br/>
[fuori] Riferimento all'oggetto `CRect` che riceve il rettangolo di delimitazione.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera il rettangolo di delimitazione del controllo di modifica nelle coordinate client. Espande le dimensioni del rettangolo in ogni direzione di un pixel.

Il [CMFCVisualManager::OnDrawEditBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondraweditborder) metodo chiama questo metodo quando `CMFCToolBarEditBoxButton` disegna il bordo intorno a un oggetto.

## <a name="cmfctoolbareditboxbuttongeteditbox"></a><a name="geteditbox"></a>CMFCToolBarEditBoxButton::GetEditBox

Restituisce un puntatore al [cEdit Class](../../mfc/reference/cedit-class.md) controllo incorporato nel pulsante.

```
CEdit* GetEditBox() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al [CEdit Class](../../mfc/reference/cedit-class.md) controllo che il pulsante contiene. È NULL se `CEdit` il controllo non è ancora stato creato.

### <a name="remarks"></a>Osservazioni

Per creare `CEdit` il controllo, chiamare [CMFCToolBarEditBoxButton::CreateEdit](#createedit).

## <a name="cmfctoolbareditboxbuttongethwnd"></a><a name="gethwnd"></a>CMFCToolBarEditBoxButton::GetHwnd

Recupera l'handle di finestra associato al pulsante della barra degli strumenti.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

Handle di finestra associato al pulsante.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) metodo restituendo l'handle di finestra della parte del controllo di modifica del pulsante della casella di modifica.

## <a name="cmfctoolbareditboxbuttongetinvalidaterect"></a><a name="getinvalidaterect"></a>CMFCToolBarEditBoxButton::GetInvalidateRect

Recupera l'area dell'area client del pulsante che deve essere ridisegnata.

```
virtual const CRect GetInvalidateRect() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CRect` che specifica l'area che deve essere ridisegnata.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect), includendo nell'area l'area dell'etichetta di testo.

## <a name="cmfctoolbareditboxbuttonhavehotborder"></a><a name="havehotborder"></a>CMFCToolBarEditBoxButton::HaveHotBorder

Determina se viene visualizzato un bordo del pulsante quando un utente fa clic sul pulsante.

```
virtual BOOL HaveHotBorder() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un pulsante visualizza il bordo quando selezionato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder), restituendo un valore diverso da zero se il controllo è visibile.

## <a name="cmfctoolbareditboxbuttonisflatmode"></a><a name="isflatmode"></a>CMFCToolBarEditBoxButton::IsFlatMode

Determina se i pulsanti della casella di modifica hanno uno stile piatto.

```
static BOOL __stdcall IsFlatMode();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i pulsanti hanno uno stile piatto; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, i pulsanti della casella di modifica hanno uno stile piatto. Utilizzare il [CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode) metodo per modificare l'aspetto dello stile piatto per l'applicazione.

## <a name="cmfctoolbareditboxbuttonnotifycommand"></a><a name="notifycommand"></a>CMFCToolBarEditBoxButton::NotifyCommand

Specifica se il pulsante elabora il messaggio [WM_COMMAND.](/windows/win32/menurc/wm-command)

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*Codice iNotify*<br/>
[in] Messaggio di notifica associato al comando.

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante elabora il messaggio di WM_COMMAND o FALSE per indicare che il messaggio deve essere gestito dalla barra degli strumenti padre.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando sta per inviare un [messaggio di WM_COMMAND](/windows/win32/menurc/wm-command) alla finestra padre.

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) elaborando la notifica [EN_UPDATE.](/windows/win32/Controls/en-update) Per ogni casella di modifica con lo stesso ID di comando dell'oggetto, imposta la relativa etichetta di testo sull'etichetta di testo di questo oggetto.

## <a name="cmfctoolbareditboxbuttononaddtocustomizepage"></a><a name="onaddtocustomizepage"></a>CMFCToolBarEditBoxButton::OnAddToCustomizePage

Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza.**

```
virtual void OnAddToCustomizePage();
```

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage)) copiando le proprietà dal controllo casella di modifica in qualsiasi barra degli strumenti con lo stesso ID di comando dell'oggetto. Questo metodo non esegue alcuna operazione se nessuna barra degli strumenti dispone di un controllo casella di modifica con lo stesso ID di comando di questo oggetto.

Per ulteriori informazioni sulla finestra di dialogo **Personalizza** , vedere [CMFCToolBarsCustomizeDialog (classe).](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)

## <a name="cmfctoolbareditboxbuttononchangeparentwnd"></a><a name="onchangeparentwnd"></a>CMFCToolBarEditBoxButton::OnChangeParentWnd

Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla nuova finestra padre.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando l'oggetto interno. `CEdit`

## <a name="cmfctoolbareditboxbuttononclick"></a><a name="onclick"></a>CMFCToolBarEditBoxButton::OnClick

Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Non utilizzato.

*bRitarda*<br/>
[in] Non utilizzato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)) restituendo un valore diverso da zero se l'oggetto interno `CEdit` è visibile.

## <a name="cmfctoolbareditboxbuttononctlcolor"></a><a name="onctlcolor"></a>CMFCToolBarEditBoxButton::OnCtlColor

Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_CTLCOLOR.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante.

*nCtlColore*<br/>
[in] Non utilizzato.

### <a name="return-value"></a>Valore restituito

Handle per il pennello finestra globale.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)) impostando i colori di testo e di sfondo del contesto di periferica fornito sui colori di testo e di sfondo globali, rispettivamente.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [Struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).

## <a name="cmfctoolbareditboxbuttononglobalfontschanged"></a><a name="onglobalfontschanged"></a>CMFCToolBarEditBoxButton::OnGlobalFontsChanged

Chiamato dal framework quando il tipo di carattere globale è stato modificato.

```
virtual void OnGlobalFontsChanged();
```

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo in quello del tipo di carattere globale.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [Struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).

## <a name="cmfctoolbareditboxbuttononmove"></a><a name="onmove"></a>CMFCToolBarEditBoxButton::OnMove

Chiamato dal framework quando si sposta la barra degli strumenti padre.

```
virtual void OnMove();
```

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe predefinita ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)) aggiornando la posizione dell'oggetto interno `CEdit`

## <a name="cmfctoolbareditboxbuttononshow"></a><a name="onshow"></a>CMFCToolBarEditBoxButton::OnShow

Chiamato dal framework quando il pulsante diventa visibile o invisibile.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] Specifica se il pulsante è visibile. Se questo parametro è TRUE, il pulsante è visibile. In caso contrario, il pulsante non è visibile.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se *bShow* è TRUE. In caso contrario, questo metodo nasconde il pulsante.

## <a name="cmfctoolbareditboxbuttononsize"></a><a name="onsize"></a>CMFCToolBarEditBoxButton::OnSize

Chiamato dal framework quando la barra degli strumenti padre modifica le dimensioni o la posizione e questa modifica determina la modifica delle dimensioni del pulsante.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*IDimensioni*<br/>
[in] Nuova larghezza del pulsante, in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe predefinita, [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize), aggiornando le dimensioni e la posizione dell'oggetto interno. `CEdit`

## <a name="cmfctoolbareditboxbuttononupdatetooltip"></a><a name="onupdatetooltip"></a>Suggerimento Per CMFCToolBarEditBoxButton::OnUpdateToolCMFCToolEditBoxButton::OnUpdateToolTip

Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comandi.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Non utilizzato.

*Indice iButton*<br/>
[in] Non utilizzato.

*WndToolTip (suggerimento su WNdTool)*<br/>
[in] Controllo che visualizza il testo della descrizione comandi.

*Str*<br/>
[fuori] Oggetto `CString` che riceve il testo della descrizione comando aggiornato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo aggiorna il testo della descrizione comando; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comando associato alla parte di modifica del pulsante. Se l'oggetto interno `CEdit` è NULL `CEdit` o l'handle di finestra dell'oggetto non identifica una finestra esistente, questo metodo non esegue alcuna operazione e restituisce FALSE.

## <a name="cmfctoolbareditboxbuttonsetcontents"></a><a name="setcontents"></a>CMFCToolBarEditBoxButton::SetContents

Imposta il testo nel controllo casella di testo.

```
virtual void SetContents(const CString& sContents);
```

### <a name="parameters"></a>Parametri

*sContenuto*<br/>
[in] Specifica il nuovo testo da impostare.

## <a name="cmfctoolbareditboxbuttonsetcontentsall"></a><a name="setcontentsall"></a>CMFCToolBarEditBoxButton::SetContentsAll

Trova un [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) oggetto che dispone di un ID di comando specificato e imposta il testo specificato all'interno della casella di testo.

```
static BOOL SetContentsAll(
    UINT uiCmd,
    const CString& strContents);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] Specifica l'ID di comando del controllo per il quale verrà modificato il testo.

*strContents (contenuto in sesto*<br/>
[in] Specifica il nuovo testo da impostare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il testo è stato impostato; 0 se `CMFCToolBarEditBoxButton` il controllo con l'ID di comando specificato non esiste.

## <a name="cmfctoolbareditboxbuttonsetcontextmenuid"></a><a name="setcontextmenuid"></a>CMFCToolBarEditBoxButton::SetContextMenuID

Specifica l'ID risorsa del menu di scelta rapida associato al pulsante.

```
void SetContextMenuID(UINT uiResID);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID risorsa del menu di scelta rapida.

### <a name="remarks"></a>Osservazioni

Il framework utilizza l'ID risorsa per creare il menu di scelta rapida quando l'utente fa clic con il pulsante destro del mouse sul pulsante della barra degli strumenti.

## <a name="cmfctoolbareditboxbuttonsetflatmode"></a><a name="setflatmode"></a>CMFCToolBarEditBoxButton::SetFlatMode

Specifica l'aspetto dello stile piatto dei pulsanti della casella di modifica nell'applicazione.

```
static void __stdcall SetFlatMode(BOOL bFlat = TRUE);
```

### <a name="parameters"></a>Parametri

*bPiatto*<br/>
[in] Stile piatto per i pulsanti della casella di modifica. Se questo parametro è TRUE, l'aspetto dello stile piatto è abilitato; in caso contrario, l'aspetto dello stile piatto è disabilitato.

### <a name="remarks"></a>Osservazioni

Lo stile piatto predefinito per i pulsanti della casella di modifica è TRUE. Utilizzare il [CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode) metodo per recuperare l'aspetto dello stile piatto per l'applicazione.

## <a name="cmfctoolbareditboxbuttonsetstyle"></a><a name="setstyle"></a>CMFCToolBarEditBoxButton::SetStyle

Specifica lo stile di un controllo casella di modifica della barra degli strumenti.

```
virtual void SetStyle(UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
[in] Un nuovo stile da impostare.

### <a name="remarks"></a>Osservazioni

Questo metodo imposta [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle) su *nStyle* Disabilita anche la casella di testo quando l'applicazione è in modalità di personalizzazione e la abilita quando l'applicazione non è in modalità di personalizzazione (vedere [CMFCToolBar::SetCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#setcustomizemode) e [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)). Vedere [Stili del controllo ToolBar](../../mfc/reference/toolbar-control-styles.md) per un elenco di flag di stile validi.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[CEdit Class](../../mfc/reference/cedit-class.md)<br/>
[CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
