---
title: CMFCDropDownToolbarButton (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCDropDownToolbarButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::CMFCDropDownToolbarButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::CopyFrom
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::DropDownToolbar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::ExportToMenuButton
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::GetDropDownToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::IsDropDown
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::IsExtraSize
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnCalculateSize
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnChangeParentWnd
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnClick
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnClickUp
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnContextHelp
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnCustomizeMenu
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnDraw
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::OnDrawOnCustomizeList
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::Serialize
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::SetDefaultCommand
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolbarButton::m_uiShowBarDelay
helpviewer_keywords:
- CMFCDropDownToolbarButton [MFC], CMFCDropDownToolbarButton
- CMFCDropDownToolbarButton [MFC], CopyFrom
- CMFCDropDownToolbarButton [MFC], DropDownToolbar
- CMFCDropDownToolbarButton [MFC], ExportToMenuButton
- CMFCDropDownToolbarButton [MFC], GetDropDownToolBar
- CMFCDropDownToolbarButton [MFC], IsDropDown
- CMFCDropDownToolbarButton [MFC], IsExtraSize
- CMFCDropDownToolbarButton [MFC], OnCalculateSize
- CMFCDropDownToolbarButton [MFC], OnChangeParentWnd
- CMFCDropDownToolbarButton [MFC], OnClick
- CMFCDropDownToolbarButton [MFC], OnClickUp
- CMFCDropDownToolbarButton [MFC], OnContextHelp
- CMFCDropDownToolbarButton [MFC], OnCustomizeMenu
- CMFCDropDownToolbarButton [MFC], OnDraw
- CMFCDropDownToolbarButton [MFC], OnDrawOnCustomizeList
- CMFCDropDownToolbarButton [MFC], Serialize
- CMFCDropDownToolbarButton [MFC], SetDefaultCommand
- CMFCDropDownToolbarButton [MFC], m_uiShowBarDelay
ms.assetid: bc9d69e6-bd3e-4c15-9368-e80a504a0ba7
ms.openlocfilehash: f09a2f3fe66abb86a8f220dbdf6744813ad9db0d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752401"
---
# <a name="cmfcdropdowntoolbarbutton-class"></a>CMFCDropDownToolbarButton (classe)

Tipo di pulsante della barra degli strumenti che, quando viene selezionato, si comporta come un pulsante normale. Tuttavia, si apre una barra degli strumenti a discesa ( [CMFCDropDownToolBar classe](../../mfc/reference/cmfcdropdowntoolbar-class.md) se l'utente preme e tiene premuto il pulsante della barra degli strumenti verso il basso.

## <a name="syntax"></a>Sintassi

```
class CMFCDropDownToolbarButton : public CMFCToolBarButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](#cmfcdropdowntoolbarbutton)|Costruisce un oggetto `CMFCDropDownToolbarButton`.|
|`CMFCDropDownToolbarButton::~CMFCDropDownToolbarButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolbarButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCDropDownToolbarButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar)|Apre una barra degli strumenti a discesa.|
|[CMFCDropDownToolbarButton::ExportToMenuButton](#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti in un menu. (Esegue l'override di [CMFCToolBarButton::ExportToMenuButton.)](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)|
|[CMFCDropDownToolbarButton::GetDropDownToolBar](#getdropdowntoolbar)|Recupera la barra degli strumenti a discesa associata al pulsante.|
|`CMFCDropDownToolbarButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCDropDownToolbarButton::IsDropDown](#isdropdown)|Determina se la barra degli strumenti a discesa è attualmente aperta.|
|[CMFCDropDownToolbarButton::IsExtraSize](#isextrasize)|Determina se il pulsante può essere visualizzato con un bordo esteso. (Esegue l'override di [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).)|
|[CMFCDropDownToolbarButton::OnCalculateSize](#oncalculatesize)|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|`CMFCDropDownToolbarButton::OnCancelMode`|Chiamato dal framework per gestire il [messaggio di WM_CANCELMODE.](/windows/win32/winmsg/wm-cancelmode) Esegue l'override di `CMCToolBarButton::OnCancelMode`.|
|[CMFCDropDownToolbarButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCDropDownToolbarButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClick .)](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)|
|[CMFCDropDownToolbarButton::OnClickUp](#onclickup)|Chiamato dal framework quando l'utente rilascia il pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup).)|
|[CMFCDropDownToolbarButton::OnContextHelp](#oncontexthelp)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_HELPHITTEST. (Esegue l'override di [CMFCToolBarButton::OnContextHelp.)](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp)|
|[CMFCDropDownToolbarButton::OnCustomizeMenu](#oncustomizemenu)|Modifica il menu fornito quando l'applicazione visualizza un menu di scelta rapida sulla barra degli strumenti padre. (Esegue l'override di [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu).)|
|[CMFCDropDownToolbarButton::OnDraw](#ondraw)|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificati. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** della finestra di dialogo **Personalizza.** (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCDropDownToolbarButton::Serialize (Pulsante di controllo)](#serialize)|Legge l'oggetto da un archivio o lo scrive in un archivio. (Esegue l'override di [CMFCToolBarButton::Serialize.)](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)|
|[CMFCDropDownToolbarButton::SetDefaultCommand](#setdefaultcommand)|Imposta il comando predefinito utilizzato dal framework quando un utente fa clic sul pulsante.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay)|Specifica il periodo di tempo in cui un utente deve tenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti a discesa.|

## <a name="remarks"></a>Osservazioni

Un `CMFCDropDownToolBarButton` pulsante differisce da un normale pulsante in quanto ha una piccola freccia nell'angolo inferiore destro del pulsante. Dopo che l'utente seleziona un pulsante dalla barra degli strumenti a discesa, il framework visualizza la propria icona sul pulsante della barra degli strumenti di livello superiore (il pulsante con la piccola freccia nell'angolo inferiore destro).

Per informazioni su come implementare una barra degli strumenti a discesa, vedere [CMFCDropDownToolBar (classe).](../../mfc/reference/cmfcdropdowntoolbar-class.md)

L'oggetto `CMFCDropDownToolBarButton` può essere esportato in un [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md) oggetto e visualizzato come un pulsante di menu con un menu a comparsa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdropdowntoolbar.h

## <a name="cmfcdropdowntoolbarbuttoncopyfrom"></a><a name="copyfrom"></a>CMFCDropDownToolbarButton::CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Un riferimento al pulsante di origine da cui copiare.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti in questo pulsante della barra degli strumenti. *src* deve essere `CMFCDropDownToolbarButton`di tipo .

## <a name="cmfcdropdowntoolbarbuttoncmfcdropdowntoolbarbutton"></a><a name="cmfcdropdowntoolbarbutton"></a>CMFCDropDownToolbarButton::CMFCDropDownToolbarButton

Costruisce un oggetto `CMFCDropDownToolbarButton`.

```
CMFCDropDownToolbarButton();

CMFCDropDownToolbarButton(
    LPCTSTR lpszName,
    CMFCDropDownToolBar* pToolBar);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
[in] Testo predefinito del pulsante.

*pToolBar (barra degli strumenti)*<br/>
[in] Puntatore all'oggetto `CMFCDropDownToolBar` visualizzato quando l'utente preme il pulsante.

### <a name="remarks"></a>Osservazioni

Il secondo overload del costruttore copia nel pulsante a discesa il primo pulsante dalla barra degli strumenti specificato da *pToolBar.*

In genere, un pulsante a discesa della barra degli strumenti utilizza il testo del pulsante utilizzato più di recente nella barra degli strumenti specificato da *pToolBar.* Utilizza il testo specificato da *lpszName* quando il pulsante viene convertito in un pulsante di menu o viene visualizzato nella scheda **Comandi** della finestra di dialogo **Personalizza.** Per ulteriori informazioni sulla finestra di dialogo **Personalizza** , vedere [CMFCToolBarsCustomizeDialog (classe).](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)

### <a name="example"></a>Esempio

Nell'esempio `CMFCDropDownToolbarButton` seguente viene illustrato come costruire un oggetto della classe. Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#31](../../mfc/codesnippet/cpp/cmfcdropdowntoolbarbutton-class_1.cpp)]

## <a name="cmfcdropdowntoolbarbuttondropdowntoolbar"></a><a name="dropdowntoolbar"></a>CMFCDropDownToolbarButton::DropDownToolbar

Apre una barra degli strumenti a discesa.

```
BOOL DropDownToolbar(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Finestra padre del frame a discesa oppure NULL per utilizzare la finestra padre del pulsante della barra degli strumenti a discesa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il [CMFCDropDownToolbarButtonButton::OnClick](#onclick) metodo chiama questo metodo per aprire la barra degli strumenti a discesa quando l'utente preme e tiene premuto il pulsante della barra degli strumenti.

Questo metodo crea la barra degli strumenti a discesa utilizzando il [CMFCDropDownFrame::Create](../../mfc/reference/cmfcdropdownframe-class.md#create) metodo. Se la barra degli strumenti padre è ancorata verticalmente, questo metodo posiziona la barra degli strumenti a discesa sul lato sinistro o destro della barra degli strumenti padre, a seconda dell'adattamento. In caso contrario, questo metodo posiziona la barra degli strumenti a discesa sotto la barra degli strumenti padre.

Questo metodo ha esito negativo se *pWnd* è NULL e il pulsante della barra degli strumenti a discesa non dispone di una finestra padre.

## <a name="cmfcdropdowntoolbarbuttonexporttomenubutton"></a><a name="exporttomenubutton"></a>CMFCDropDownToolbarButton::ExportToMenuButton

Copia il testo dal pulsante della barra degli strumenti in un menu.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### <a name="parameters"></a>Parametri

*menuButton*<br/>
[in] Un riferimento al pulsante del menu di destinazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama l'implementazione della classe base ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) e quindi aggiunge al pulsante di menu di destinazione un menu a comparsa che contiene ogni voce di menu della barra degli strumenti in questo pulsante. Questo metodo non aggiunge sottomenu al menu a comparsa.

Questo metodo ha esito `m_pToolBar`negativo se la barra degli strumenti padre, , è NULL o l'implementazione della classe base restituisce FALSE.

## <a name="cmfcdropdowntoolbarbuttongetdropdowntoolbar"></a><a name="getdropdowntoolbar"></a>CMFCDropDownToolbarButton::GetDropDownToolBar

Recupera la barra degli strumenti a discesa associata al pulsante.

```
CMFCToolBar* GetDropDownToolBar() const;
```

### <a name="return-value"></a>Valore restituito

Barra degli strumenti a discesa associata al pulsante.

### <a name="remarks"></a>Osservazioni

Questo metodo `m_pToolBar` restituisce il membro dati.

## <a name="cmfcdropdowntoolbarbuttonisdropdown"></a><a name="isdropdown"></a>CMFCDropDownToolbarButton::IsDropDown

Determina se la barra degli strumenti a discesa è attualmente aperta.

```
BOOL IsDropDown() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra degli strumenti a discesa è attualmente aperta; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il framework apre la barra degli strumenti a discesa utilizzando il [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) metodo. Il framework chiude la barra degli strumenti a discesa quando l'utente preme il pulsante sinistro del mouse nell'area non client della barra degli strumenti a discesa.

## <a name="cmfcdropdowntoolbarbuttonisextrasize"></a><a name="isextrasize"></a>CMFCDropDownToolbarButton::IsExtraSize

Determina se il pulsante può essere visualizzato con un bordo esteso.

```
virtual BOOL IsExtraSize() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante della barra degli strumenti può essere visualizzato con un bordo esteso; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui bordi estesi, vedere [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).

## <a name="cmfcdropdowntoolbarbuttonm_uishowbardelay"></a><a name="m_uishowbardelay"></a>CMFCDropDownToolbarButton::m_uiShowBarDelay

Specifica il periodo di tempo in cui un utente deve tenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti a discesa.

```
static UINT m_uiShowBarDelay;
```

### <a name="remarks"></a>Osservazioni

Il tempo di ritardo viene misurato in millisecondi. Il valore predefinito è 500. È possibile impostare un altro ritardo modificando il valore di questo membro dati condiviso.

## <a name="cmfcdropdowntoolbarbuttononcalculatesize"></a><a name="oncalculatesize"></a>CMFCDropDownToolbarButton::OnCalculateSize

Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio.

```
virtual SIZE OnCalculateSize(
    CDC* pDC,
    const CSize& sizeDefault,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante.

*sizeDefault (Impostazione predefinita)*<br/>
[in] Dimensioni predefinite del pulsante.

*bHorz*<br/>
[in] Stato di ancoraggio della barra degli strumenti padre. Questo parametro è TRUE se la barra degli strumenti è ancorata orizzontalmente o è mobile oppure FALSE se la barra degli strumenti è ancorata verticalmente.

### <a name="return-value"></a>Valore restituito

Struttura `SIZE` che contiene le dimensioni del pulsante, in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize)) aggiungendo la larghezza della freccia a discesa alla dimensione orizzontale della dimensione del pulsante.

## <a name="cmfcdropdowntoolbarbuttononchangeparentwnd"></a><a name="onchangeparentwnd"></a>CMFCDropDownToolbarButton::OnChangeParentWnd

Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Nuova finestra padre.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) cancellando l'etichetta di testo ( [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext)) e impostando i membri dati [CMFCToolBarButton::m_bText](../../mfc/reference/cmfctoolbarbutton-class.md#m_btext) e [CMFCToolBarButton::m_bUserButton](../../mfc/reference/cmfctoolbarbutton-class.md#m_buserbutton) su FALSE.

## <a name="cmfcdropdowntoolbarbuttononclick"></a><a name="onclick"></a>CMFCDropDownToolbarButton::OnClick

Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Finestra padre del pulsante della barra degli strumenti.

*bRitarda*<br/>
[in] TRUESe il messaggio deve essere gestito con un ritardo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), aggiornando lo stato della barra degli strumenti a discesa.

Quando un utente fa clic sul pulsante della barra degli strumenti, questo metodo crea un timer che attende il periodo di tempo specificato dal [CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay) membro dati e quindi apre la barra degli strumenti a discesa utilizzando il [CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar) metodo. Questo metodo chiude la barra degli strumenti a discesa la seconda volta che l'utente fa clic sul pulsante della barra degli strumenti.

## <a name="cmfcdropdowntoolbarbuttononclickup"></a><a name="onclickup"></a>CMFCDropDownToolbarButton::OnClickUp

Chiamato dal framework quando l'utente rilascia il pulsante del mouse.

```
virtual BOOL OnClickUp();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup), aggiornando lo stato della barra degli strumenti a discesa.

Questo metodo arresta il timer della barra degli strumenti a discesa se è attivo. Chiude la barra degli strumenti a discesa se è aperta.

Per ulteriori informazioni sulla barra degli strumenti a discesa e sul timer della barra degli strumenti a discesa, vedere [CMFCDropDownToolbarButton::OnClick](#onclick).

## <a name="cmfcdropdowntoolbarbuttononcontexthelp"></a><a name="oncontexthelp"></a>CMFCDropDownToolbarButton::OnContextHelp

Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_HELPHITTEST.

```
virtual BOOL OnContextHelp(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Finestra padre del pulsante della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio della Guida; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp)) chiamando il [CMFCDropDownToolbarButton::OnClick](#onclick) metodo con *bDelay* impostato su FALSE. Questo metodo restituisce il valore restituito da [CMFCDropDownToolbarButton::OnClick](#onclick).

Per ulteriori informazioni sul messaggio di WM_HELPHITTEST, vedere [TN028: Supporto della Guida sensibile al contesto](../../mfc/tn028-context-sensitive-help-support.md).

## <a name="cmfcdropdowntoolbarbuttononcustomizemenu"></a><a name="oncustomizemenu"></a>CMFCDropDownToolbarButton::OnCustomizeMenu

Modifica il menu fornito quando l'applicazione visualizza un menu di scelta rapida sulla barra degli strumenti padre.

```
virtual BOOL OnCustomizeMenu(CMenu* pMenu);
```

### <a name="parameters"></a>Parametri

*pMenu (Menu)*<br/>
[in] Menu da personalizzare.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu)) disabilitando le seguenti voci di menu:

- **Immagine del pulsante Copia**

- **Aspetto pulsante**

- **Immagine**

- **Text**

- **Immagine e testo**

Eseguire l'override di questo metodo per modificare il menu di scelta rapida che il framework visualizza in modalità di personalizzazione.

## <a name="cmfcdropdowntoolbarbuttonondraw"></a><a name="ondraw"></a>CMFCDropDownToolbarButton::OnDraw

Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificati.

```
virtual void OnDraw(
    CDC* pDC,
    const CRect& rect,
    CMFCToolBarImages* pImages,
    BOOL bHorz = TRUE,
    BOOL bCustomizeMode = FALSE,
    BOOL bHighlight = FALSE,
    BOOL bDrawBorder = TRUE,
    BOOL bGrayDisabledButtons = TRUE);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante.

*pImmagini*<br/>
[in] Raccolta di immagini della barra degli strumenti associate al pulsante.

*bHorz*<br/>
[in] Stato di ancoraggio della barra degli strumenti padre. Questo parametro è TRUE quando il pulsante è ancorato orizzontalmente e FALSE quando il pulsante è ancorato verticalmente.

*bCustomizeMode (Modalità di personalizzazione)*<br/>
[in] Specifica se la barra degli strumenti è in modalità di personalizzazione. Questo parametro è TRUE quando la barra degli strumenti è in modalità di personalizzazione e FALSE quando la barra degli strumenti non è in modalità di personalizzazione.

*bEvidenziare*<br/>
[in] Specifica se il pulsante è evidenziato. Questo parametro è TRUE quando il pulsante è evidenziato e FALSE quando il pulsante non è evidenziato.

*bDrawBorder*<br/>
[in] Specifica se il pulsante deve visualizzare il bordo. Questo parametro è TRUE quando il pulsante deve visualizzare il bordo e FALSE quando il pulsante non deve visualizzare il bordo.

*bGrayDisabledButtons (Pulsanti)*<br/>
[in] Specifica se ombreggiare i pulsanti disabilitati o utilizzare la raccolta di immagini disabilitate. Questo parametro è TRUE quando i pulsanti disabilitati devono essere ombreggiati e FALSE quando questo metodo deve utilizzare la raccolta di immagini disabilitate.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per personalizzare il disegno del pulsante della barra degli strumenti.

## <a name="cmfcdropdowntoolbarbuttonondrawoncustomizelist"></a><a name="ondrawoncustomizelist"></a>CMFCDropDownToolbarButton::OnDrawOnCustomizeList

Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** della finestra di dialogo **Personalizza.**

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Contesto di dispositivo che visualizza il pulsante.

*Rect*<br/>
[in] Rettangolo di delimitazione del pulsante.

*bSelezionato*<br/>
[in] Se il pulsante è selezionato. Se questo parametro è TRUE, il pulsante è selezionato. Se questo parametro è FALSE, il pulsante non è selezionato.

### <a name="return-value"></a>Valore restituito

Larghezza, in pixel, del pulsante nel contesto di dispositivo specificato.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dalla finestra di dialogo di personalizzazione (scheda **Comandi)** quando il pulsante è necessario per visualizzarlo nella casella di riepilogo di disegno del proprietario.

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist)) modificando l'etichetta di testo del pulsante con il nome del pulsante, ovvero il valore del parametro *lpszName* passato al costruttore.

## <a name="cmfcdropdowntoolbarbuttonserialize"></a><a name="serialize"></a>CMFCDropDownToolbarButton::Serialize (Pulsante di controllo)

Legge l'oggetto da un archivio o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
[in] Oggetto `CArchive` da cui o in cui eseguire la serializzazione.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)) serializzando l'ID risorsa della barra degli strumenti padre. Quando l'archivio viene caricato ( [CArchive::IsLoading](../../mfc/reference/carchive-class.md#isloading) restituisce `m_pToolBar` un valore diverso da zero), questo metodo imposta il membro dati sulla barra degli strumenti che contiene l'ID risorsa serializzata.

## <a name="cmfcdropdowntoolbarbuttonsetdefaultcommand"></a><a name="setdefaultcommand"></a>CMFCDropDownToolbarButton::SetDefaultCommand

Imposta il comando predefinito utilizzato dal framework quando un utente fa clic sul pulsante.

```cpp
void SetDefaultCommand(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID del comando predefinito.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per specificare un comando predefinito che il framework viene eseguito quando l'utente fa clic sul pulsante. Un elemento con l'ID di comando specificato da *uiCmd* deve trovarsi nella barra degli strumenti a discesa padre.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)<br/>
[CMFCToolBar (classe)](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
