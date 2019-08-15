---
title: Classe CMFCDropDownToolbarButton
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
ms.openlocfilehash: fcfb521e309463da81d0064451297b3b73610d2f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505326"
---
# <a name="cmfcdropdowntoolbarbutton-class"></a>Classe CMFCDropDownToolbarButton

Tipo di pulsante della barra degli strumenti che, quando viene selezionato, si comporta come un pulsante normale. Tuttavia, apre una barra degli strumenti a discesa ( [classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md) se l'utente preme e tiene premuto il pulsante della barra degli strumenti.

## <a name="syntax"></a>Sintassi

```
class CMFCDropDownToolbarButton : public CMFCToolBarButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](#cmfcdropdowntoolbarbutton)|Costruisce un oggetto `CMFCDropDownToolbarButton`.|
|`CMFCDropDownToolbarButton::~CMFCDropDownToolbarButton`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolbarButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente. Esegue l'override di [CMFCToolBarButton:: CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).|
|`CMFCDropDownToolbarButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCDropDownToolbarButton::DropDownToolbar](#dropdowntoolbar)|Apre una barra degli strumenti a discesa.|
|[CMFCDropDownToolbarButton::ExportToMenuButton](#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti in un menu. Esegue l'override di [CMFCToolBarButton:: ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton).|
|[CMFCDropDownToolbarButton::GetDropDownToolBar](#getdropdowntoolbar)|Recupera la barra degli strumenti a discesa associata al pulsante.|
|`CMFCDropDownToolbarButton::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCDropDownToolbarButton::IsDropDown](#isdropdown)|Determina se la barra degli strumenti a discesa è attualmente aperta.|
|[CMFCDropDownToolbarButton::IsExtraSize](#isextrasize)|Determina se il pulsante può essere visualizzato con un bordo esteso. Esegue l'override di [CMFCToolBarButton:: IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).|
|[CMFCDropDownToolbarButton::OnCalculateSize](#oncalculatesize)|Chiamata eseguita dal Framework per calcolare le dimensioni del pulsante per il contesto di dispositivo e lo stato di ancoraggio specificati. Esegue l'override di [CMFCToolBarButton:: OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).|
|`CMFCDropDownToolbarButton::OnCancelMode`|Chiamata eseguita dal Framework per gestire il messaggio [WM_CANCELMODE](/windows/win32/winmsg/wm-cancelmode) . Esegue l'override di `CMCToolBarButton::OnCancelMode`.|
|[CMFCDropDownToolbarButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamata eseguita dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).|
|[CMFCDropDownToolbarButton::OnClick](#onclick)|Chiamata eseguita dal framework quando l'utente fa clic con il pulsante del mouse. Esegue l'override di [CMFCToolBarButton:: OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).|
|[CMFCDropDownToolbarButton::OnClickUp](#onclickup)|Chiamata eseguita dal framework quando l'utente rilascia il pulsante del mouse. Esegue l'override di [CMFCToolBarButton:: OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup).|
|[CMFCDropDownToolbarButton::OnContextHelp](#oncontexthelp)|Chiamata eseguita dal framework quando la barra degli strumenti padre gestisce un messaggio WM_HELPHITTEST. Esegue l'override di [CMFCToolBarButton:: OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp).|
|[CMFCDropDownToolbarButton::OnCustomizeMenu](#oncustomizemenu)|Modifica il menu fornito quando l'applicazione visualizza un menu di scelta rapida sulla barra degli strumenti padre. Esegue l'override di [CMFCToolBarButton:: OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu).|
|[CMFCDropDownToolbarButton:: onpare](#ondraw)|Chiamato dal Framework per disegnare il pulsante usando gli stili e le opzioni specificati. Esegue l'override di [CMFCToolBarButton:: onpare](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).|
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](#ondrawoncustomizelist)|Viene chiamato dal Framework per creare il pulsante nel riquadro **comandi** della finestra di dialogo **Personalizza** . Esegue l'override di [CMFCToolBarButton:: OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).|
|[CMFCDropDownToolbarButton::Serialize](#serialize)|Legge questo oggetto da un archivio o lo scrive in un archivio. Esegue l'override di [CMFCToolBarButton:: Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).|
|[CMFCDropDownToolbarButton::SetDefaultCommand](#setdefaultcommand)|Imposta il comando predefinito utilizzato dal framework quando un utente fa clic sul pulsante.|

### <a name="data-members"></a>Membri di dati

|NOME|Descrizione|
|----------|-----------------|
|[CMFCDropDownToolbarButton::m_uiShowBarDelay](#m_uishowbardelay)|Specifica il periodo di tempo in cui un utente deve mantenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti a discesa.|

## <a name="remarks"></a>Note

Un `CMFCDropDownToolBarButton` oggetto è diverso da un pulsante ordinario perché contiene una piccola freccia nell'angolo in basso a destra del pulsante. Dopo che l'utente ha selezionato un pulsante dalla barra degli strumenti a discesa, il Framework Visualizza la relativa icona sul pulsante della barra degli strumenti di primo livello (il pulsante con la piccola freccia nell'angolo inferiore destro).

Per informazioni sull'implementazione di una barra degli strumenti a discesa, vedere [classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md).

L' `CMFCDropDownToolBarButton` oggetto può essere esportato in un oggetto della [Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) e visualizzato come pulsante di menu con un menu a comparsa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdropdowntoolbar.h

##  <a name="copyfrom"></a>CMFCDropDownToolbarButton:: CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Riferimento al pulsante di origine da cui eseguire la copia.

### <a name="remarks"></a>Note

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti in questo pulsante della barra degli strumenti. *src* deve essere di tipo `CMFCDropDownToolbarButton`.

##  <a name="cmfcdropdowntoolbarbutton"></a>CMFCDropDownToolbarButton:: CMFCDropDownToolbarButton

Costruisce un oggetto `CMFCDropDownToolbarButton`.

```
CMFCDropDownToolbarButton();

CMFCDropDownToolbarButton(
    LPCTSTR lpszName,
    CMFCDropDownToolBar* pToolBar);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
in Testo predefinito del pulsante.

*pToolBar*<br/>
in Puntatore all' `CMFCDropDownToolBar` oggetto visualizzato quando l'utente preme il pulsante.

### <a name="remarks"></a>Note

Il secondo overload del costruttore copia nel pulsante a discesa il primo pulsante dalla barra degli strumenti specificata da *pToolBar* .

In genere, un pulsante della barra degli strumenti a discesa Usa il testo del pulsante usato più di recente nella barra degli strumenti specificata da *pToolBar* . Usa il testo specificato da *lpszName* quando il pulsante viene convertito in un pulsante di menu o viene visualizzato nella scheda **comandi** della finestra di dialogo **Personalizza** . Per ulteriori informazioni sulla finestra di dialogo **Personalizza** , vedere [classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCDropDownToolbarButton` classe. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#31](../../mfc/codesnippet/cpp/cmfcdropdowntoolbarbutton-class_1.cpp)]

##  <a name="dropdowntoolbar"></a>CMFCDropDownToolbarButton::D ropDownToolbar

Apre una barra degli strumenti a discesa.

```
BOOL DropDownToolbar(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Finestra padre del frame a discesa oppure NULL per utilizzare la finestra padre del pulsante della barra degli strumenti a discesa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Il metodo [CMFCDropDownToolbarButton:: OnClick](#onclick) chiama questo metodo per aprire la barra degli strumenti a discesa quando l'utente preme e tiene premuto il pulsante della barra degli strumenti.

Questo metodo crea la barra degli strumenti a discesa usando il metodo [CMFCDropDownFrame:: create](../../mfc/reference/cmfcdropdownframe-class.md#create) . Se la barra degli strumenti padre è ancorata verticalmente, questo metodo posiziona la barra degli strumenti a discesa sul lato sinistro o destro della barra degli strumenti padre, a seconda dell'adattamento. In caso contrario, questo metodo posiziona la barra degli strumenti a discesa sotto la barra degli strumenti padre.

Questo metodo ha esito negativo se *pWnd* è null e il pulsante della barra degli strumenti a discesa non dispone di una finestra padre.

##  <a name="exporttomenubutton"></a>CMFCDropDownToolbarButton:: ExportToMenuButton

Copia il testo dal pulsante della barra degli strumenti in un menu.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### <a name="parameters"></a>Parametri

*menuButton*<br/>
in Riferimento al pulsante di menu di destinazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, zero.

### <a name="remarks"></a>Note

Questo metodo chiama l'implementazione della classe di base ( [CMFCToolBarButton:: ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) e quindi aggiunge al pulsante di menu di destinazione un menu a comparsa che contiene ogni voce di menu della barra degli strumenti in questo pulsante. Questo metodo non aggiunge sottomenu al menu di scelta rapida.

Questo metodo ha esito negativo se la `m_pToolBar`barra degli strumenti padre è null o se l'implementazione della classe di base restituisce false.

##  <a name="getdropdowntoolbar"></a>CMFCDropDownToolbarButton:: GetDropDownToolBar

Recupera la barra degli strumenti a discesa associata al pulsante.

```
CMFCToolBar* GetDropDownToolBar() const;
```

### <a name="return-value"></a>Valore restituito

Barra degli strumenti a discesa associata al pulsante.

### <a name="remarks"></a>Note

Questo metodo restituisce il `m_pToolBar` membro dati.

##  <a name="isdropdown"></a>CMFCDropDownToolbarButton:: elenco a discesa

Determina se la barra degli strumenti a discesa è attualmente aperta.

```
BOOL IsDropDown() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra degli strumenti a discesa è attualmente aperta; in caso contrario, 0.

### <a name="remarks"></a>Note

Il Framework apre la barra degli strumenti a discesa usando il metodo [CMFCDropDownToolbarButton::D ropdowntoolbar](#dropdowntoolbar) . Il Framework chiude la barra degli strumenti a discesa quando l'utente preme il pulsante sinistro del mouse nell'area non client della barra degli strumenti a discesa.

##  <a name="isextrasize"></a>  CMFCDropDownToolbarButton::IsExtraSize

Determina se il pulsante può essere visualizzato con un bordo esteso.

```
virtual BOOL IsExtraSize() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante della barra degli strumenti può essere visualizzato con un bordo esteso; in caso contrario, 0.

### <a name="remarks"></a>Note

Per ulteriori informazioni sui bordi estesi, vedere [CMFCToolBarButton:: IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#isextrasize).

##  <a name="m_uishowbardelay"></a>  CMFCDropDownToolbarButton::m_uiShowBarDelay

Specifica il periodo di tempo in cui un utente deve mantenere premuto il pulsante del mouse prima che venga visualizzata la barra degli strumenti a discesa.

```
static UINT m_uiShowBarDelay;
```

### <a name="remarks"></a>Note

Il tempo di ritardo viene misurato in millisecondi. Il valore predefinito è 500. È possibile impostare un altro ritardo modificando il valore di questo membro dati condiviso.

##  <a name="oncalculatesize"></a>CMFCDropDownToolbarButton:: OnCalculateSize

Chiamata eseguita dal Framework per calcolare le dimensioni del pulsante per il contesto di dispositivo e lo stato di ancoraggio specificati.

```
virtual SIZE OnCalculateSize(
    CDC* pDC,
    const CSize& sizeDefault,
    BOOL bHorz);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante.

*sizeDefault*<br/>
in Dimensioni predefinite del pulsante.

*bHorz*<br/>
in Stato di ancoraggio della barra degli strumenti padre. Questo parametro è TRUE se la barra degli strumenti è ancorata orizzontalmente o è mobile oppure FALSE se la barra degli strumenti è ancorata verticalmente.

### <a name="return-value"></a>Valore restituito

`SIZE` Struttura che contiene le dimensioni del pulsante, in pixel.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize)) aggiungendo la larghezza della freccia a discesa alla dimensione orizzontale delle dimensioni del pulsante.

##  <a name="onchangeparentwnd"></a>CMFCDropDownToolbarButton:: OnChangeParentWnd

Chiamata eseguita dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Nuova finestra padre.

### <a name="remarks"></a>Note

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton:: OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) cancellando l'etichetta di testo ( [CMFCToolBarButton:: m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext)) e impostando [CMFCToolBarButton:: m_bText](../../mfc/reference/cmfctoolbarbutton-class.md#m_btext) e [CMFCToolBarButton :: m_bUserButton](../../mfc/reference/cmfctoolbarbutton-class.md#m_buserbutton) i membri dati in false.

##  <a name="onclick"></a>CMFCDropDownToolbarButton:: OnClick

Chiamata eseguita dal framework quando l'utente fa clic con il pulsante del mouse.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in La finestra padre del pulsante della barra degli strumenti.

*bDelay*<br/>
in TRUE se il messaggio deve essere gestito con un ritardo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario, 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base, [CMFCToolBarButton:: OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), aggiornando lo stato della barra degli strumenti a discesa.

Quando un utente fa clic sul pulsante della barra degli strumenti, questo metodo crea un timer che attende il periodo di tempo specificato dal membro dati [CMFCDropDownToolbarButton:: m_uiShowBarDelay](#m_uishowbardelay) e quindi apre la barra degli strumenti a discesa usando [CMFCDropDownToolbarButton ::D Metodo ropDownToolbar](#dropdowntoolbar) . Questo metodo chiude la barra degli strumenti a discesa la seconda volta che l'utente fa clic sul pulsante della barra degli strumenti.

##  <a name="onclickup"></a>CMFCDropDownToolbarButton:: OnClickUp

Chiamata eseguita dal framework quando l'utente rilascia il pulsante del mouse.

```
virtual BOOL OnClickUp();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario, 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base, [CMFCToolBarButton:: OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#onclickup), aggiornando lo stato della barra degli strumenti a discesa.

Questo metodo arresta il timer della barra degli strumenti a discesa se è attivo. Se aperto, chiude la barra degli strumenti a discesa.

Per ulteriori informazioni sulla barra degli strumenti a discesa e sul timer della barra degli strumenti a discesa, vedere [CMFCDropDownToolbarButton:: OnClick](#onclick).

##  <a name="oncontexthelp"></a>CMFCDropDownToolbarButton:: OnContextHelp

Chiamata eseguita dal framework quando la barra degli strumenti padre gestisce un messaggio WM_HELPHITTEST.

```
virtual BOOL OnContextHelp(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in La finestra padre del pulsante della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio della Guida; in caso contrario, 0.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#oncontexthelp)) chiamando il metodo [CMFCDropDownToolbarButton:: OnClick](#onclick) con *bDelay* impostato su false. Questo metodo restituisce il valore restituito da [CMFCDropDownToolbarButton:: OnClick](#onclick).

Per ulteriori informazioni sul messaggio WM_HELPHITTEST, vedere [TN028: Supporto](../../mfc/tn028-context-sensitive-help-support.md)della Guida sensibile al contesto.

##  <a name="oncustomizemenu"></a>CMFCDropDownToolbarButton:: OnCustomizeMenu

Modifica il menu fornito quando l'applicazione visualizza un menu di scelta rapida sulla barra degli strumenti padre.

```
virtual BOOL OnCustomizeMenu(CMenu* pMenu);
```

### <a name="parameters"></a>Parametri

*pMenu*<br/>
in Menu da personalizzare.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#oncustomizemenu)) disabilitando le voci di menu seguenti:

- **Copia immagine pulsante**

- **Aspetto del pulsante**

- **Immagine**

- **Text**

- **Immagine e testo**

Eseguire l'override di questo metodo per modificare il menu di scelta rapida visualizzato dal Framework in modalità di personalizzazione.

##  <a name="ondraw"></a>CMFCDropDownToolbarButton:: onpare

Chiamato dal Framework per disegnare il pulsante usando gli stili e le opzioni specificati.

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
in Contesto di dispositivo in cui viene visualizzato il pulsante.

*rect*<br/>
in Rettangolo delimitatore del pulsante.

*pImages*<br/>
in Raccolta di immagini della barra degli strumenti associata al pulsante.

*bHorz*<br/>
in Stato di ancoraggio della barra degli strumenti padre. Questo parametro è TRUE quando il pulsante è ancorato orizzontalmente e FALSE quando il pulsante è ancorato verticalmente.

*bCustomizeMode*<br/>
in Specifica se la barra degli strumenti è in modalità di personalizzazione. Questo parametro è TRUE se la barra degli strumenti è in modalità di personalizzazione e FALSE quando la barra degli strumenti non è in modalità di personalizzazione.

*bHighlight*<br/>
in Specifica se il pulsante è evidenziato. Questo parametro è TRUE quando il pulsante è evidenziato e FALSE quando il pulsante non è evidenziato.

*bDrawBorder*<br/>
in Specifica se il pulsante deve visualizzare il bordo. Questo parametro è TRUE quando il pulsante deve visualizzare il bordo e FALSE quando il pulsante non deve visualizzarne il bordo.

*bGrayDisabledButtons*<br/>
in Specifica se ombreggiare i pulsanti disabilitati o usare la raccolta di immagini disabilitate. Questo parametro è TRUE quando i pulsanti disabilitati devono essere ombreggiati e FALSE quando il metodo deve usare la raccolta di immagini disabilitate.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per personalizzare il disegno pulsante della barra degli strumenti.

##  <a name="ondrawoncustomizelist"></a>CMFCDropDownToolbarButton:: OnDrawOnCustomizeList

Viene chiamato dal Framework per creare il pulsante nel riquadro **comandi** della finestra di dialogo **Personalizza** .

```
virtual int OnDrawOnCustomizeList(
    CDC* pDC,
    const CRect& rect,
    BOOL bSelected);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante.

*rect*<br/>
in Rettangolo delimitatore del pulsante.

*bSelected*<br/>
in Indica se il pulsante è selezionato. Se questo parametro è TRUE, il pulsante è selezionato. Se questo parametro è FALSE, il pulsante non è selezionato.

### <a name="return-value"></a>Valore restituito

Larghezza, in pixel, del pulsante nel contesto di dispositivo specificato.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dalla finestra di dialogo di personalizzazione (scheda **comandi** ) quando il pulsante è necessario per visualizzare se stesso nella casella di riepilogo creata dal proprietario.

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist)) modificando l'etichetta di testo del pulsante sul nome del pulsante, ovvero sul valore del parametro *lpszName* passato al costruttore. ).

##  <a name="serialize"></a>CMFCDropDownToolbarButton:: Serialize

Legge questo oggetto da un archivio o lo scrive in un archivio.

```
virtual void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
in `CArchive` Oggetto da cui o a cui serializzare.

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize)) serializzando l'ID risorsa della barra degli strumenti padre. Quando si carica l'archivio ( [CArchive:: il caricamento](../../mfc/reference/carchive-class.md#isloading) restituisce un valore diverso da zero), questo metodo imposta il `m_pToolBar` membro dati sulla barra degli strumenti che contiene l'ID della risorsa serializzata.

##  <a name="setdefaultcommand"></a>CMFCDropDownToolbarButton:: SetDefaultCommand

Imposta il comando predefinito utilizzato dal framework quando un utente fa clic sul pulsante.

```
void SetDefaultCommand(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando predefinito.

### <a name="remarks"></a>Note

Chiamare questo metodo per specificare un comando predefinito eseguito dal framework quando l'utente fa clic sul pulsante. Un elemento con l'ID di comando specificato da *uiCmd* deve trovarsi nella barra degli strumenti a discesa padre.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)<br/>
[Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)<br/>
[Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)<br/>
[Procedura dettagliata: Inserimento di controlli sulle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
