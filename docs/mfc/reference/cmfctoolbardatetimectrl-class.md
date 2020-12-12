---
description: 'Altre informazioni su: classe CMFCToolBarDateTimeCtrl'
title: Classe CMFCToolBarDateTimeCtrl
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CanBeStretched
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CopyFrom
- AFXTOOLBARDATETIMECTRL/CMFCToolBarButton::ExportToMenuButton
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetByCmd
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetHwnd
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetTime
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetTimeAll
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::HaveHotBorder
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::NotifyCommand
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnAddToCustomizePage
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnChangeParentWnd
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnClick
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnCtlColor
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnMove
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnShow
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnUpdateToolTip
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::SetTime
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::SetTimeAll
helpviewer_keywords:
- CMFCToolBarDateTimeCtrl [MFC], CMFCToolBarDateTimeCtrl
- CMFCToolBarDateTimeCtrl [MFC], CanBeStretched
- CMFCToolBarDateTimeCtrl [MFC], CopyFrom
- CMFCToolBarButton [MFC], ExportToMenuButton
- CMFCToolBarDateTimeCtrl [MFC], GetByCmd
- CMFCToolBarDateTimeCtrl [MFC], GetDateTimeCtrl
- CMFCToolBarDateTimeCtrl [MFC], GetHwnd
- CMFCToolBarDateTimeCtrl [MFC], GetTime
- CMFCToolBarDateTimeCtrl [MFC], GetTimeAll
- CMFCToolBarDateTimeCtrl [MFC], HaveHotBorder
- CMFCToolBarDateTimeCtrl [MFC], NotifyCommand
- CMFCToolBarDateTimeCtrl [MFC], OnAddToCustomizePage
- CMFCToolBarDateTimeCtrl [MFC], OnChangeParentWnd
- CMFCToolBarDateTimeCtrl [MFC], OnClick
- CMFCToolBarDateTimeCtrl [MFC], OnCtlColor
- CMFCToolBarDateTimeCtrl [MFC], OnGlobalFontsChanged
- CMFCToolBarDateTimeCtrl [MFC], OnMove
- CMFCToolBarDateTimeCtrl [MFC], OnShow
- CMFCToolBarDateTimeCtrl [MFC], OnUpdateToolTip
- CMFCToolBarDateTimeCtrl [MFC], SetTime
- CMFCToolBarDateTimeCtrl [MFC], SetTimeAll
ms.assetid: a3853cb9-8ebc-444f-a1e4-9cf905e24c18
ms.openlocfilehash: 141c2dc868f5bfc74c41cb5198daac790e23db58
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306716"
---
# <a name="cmfctoolbardatetimectrl-class"></a>Classe CMFCToolBarDateTimeCtrl

Pulsante della barra degli strumenti contenente un controllo selezione data e ora.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarDateTimeCtrl : public CMFCToolBarButton
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarDateTimeCtrl:: CMFCToolBarDateTimeCtrl](#cmfctoolbardatetimectrl)|Costruisce un oggetto `CMFCToolBarDateTimeCtrl`.|
|`CMFCToolBarDateTimeCtrl::~CMFCToolBarDateTimeCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCToolBarDateTimeCtrl:: CanBeStretched](#canbestretched)|Specifica se un utente può estendere il pulsante durante la personalizzazione. Esegue l'override di [CMFCToolBarButton:: CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).|
|[CMFCToolBarDateTimeCtrl:: CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente. Esegue l'override di [CMFCToolBarButton:: CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).|
|`CMFCToolBarDateTimeCtrl::DuplicateData`|Riservato per usi futuri.|
|[CMFCToolBarButton:: ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti in un menu.|
|`CMFCToolBarDateTimeCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCToolBarDateTimeCtrl:: GetByCmd](#getbycmd)|Recupera il primo `CMFCToolBarDateTimeCtrl` oggetto nell'applicazione con l'ID di comando specificato.|
|[CMFCToolBarDateTimeCtrl:: GetDateTimeCtrl](#getdatetimectrl)|Restituisce un puntatore al controllo selezione data e ora.|
|[CMFCToolBarDateTimeCtrl:: GetHwnd](#gethwnd)|Recupera l'handle di finestra associato al pulsante della barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).|
|`CMFCToolBarDateTimeCtrl::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCToolBarDateTimeCtrl:: getTime](#gettime)|Ottiene l'ora selezionata da un controllo selezione data e ora e la inserisce in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) specificata.|
|[CMFCToolBarDateTimeCtrl:: GetTimeAll](#gettimeall)|Restituisce l'ora selezionata dal pulsante di controllo selezione ora con un ID comando specificato.|
|[CMFCToolBarDateTimeCtrl:: HaveHotBorder](#havehotborder)|Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante. Esegue l'override di [CMFCToolBarButton:: HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).|
|[CMFCToolBarDateTimeCtrl:: NotifyCommand](#notifycommand)|Specifica se il pulsante elabora il messaggio di [WM_COMMAND](/windows/win32/menurc/wm-command) . Esegue l'override di [CMFCToolBarButton:: NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).|
|[CMFCToolBarDateTimeCtrl:: OnAddToCustomizePage](#onaddtocustomizepage)|Chiamata eseguita dal framework quando il pulsante viene aggiunto a una finestra di dialogo di **personalizzazione** . Esegue l'override di [CMFCToolBarButton:: OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).|
|`CMFCToolBarDateTimeCtrl::OnCalculateSize`|Chiamata eseguita dal Framework per calcolare le dimensioni del pulsante per il contesto di dispositivo e lo stato di ancoraggio specificati. Esegue l'override di [CMFCToolBarButton:: OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).|
|[CMFCToolBarDateTimeCtrl:: OnChangeParentWnd](#onchangeparentwnd)|Chiamata eseguita dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).|
|[CMFCToolBarDateTimeCtrl:: OnClick](#onclick)|Chiamata eseguita dal framework quando l'utente fa clic sul controllo. Esegue l'override di [CMFCToolBarButton:: OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).|
|[CMFCToolBarDateTimeCtrl:: OnCtlColor](#onctlcolor)|Chiamata eseguita dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_CTLCOLOR. Esegue l'override di [CMFCToolBarButton:: OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).|
|`CMFCToolBarDateTimeCtrl::OnDraw`|Chiamato dal Framework per disegnare il pulsante usando gli stili e le opzioni specificati. Esegue l'override di [CMFCToolBarButton:: onpare](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).|
|`CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList`|Viene chiamato dal Framework per creare il pulsante nel riquadro **comandi** della finestra di dialogo **Personalizza** . Esegue l'override di [CMFCToolBarButton:: OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).|
|[CMFCToolBarDateTimeCtrl:: OnGlobalFontsChanged](#onglobalfontschanged)|Chiamata eseguita dal framework quando il tipo di carattere globale è stato modificato. Esegue l'override di [CMFCToolBarButton:: OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).|
|[CMFCToolBarDateTimeCtrl:: OnMove](#onmove)|Chiamata eseguita dal framework quando la barra degli strumenti padre viene spostata. Esegue l'override di [CMFCToolBarButton:: OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).|
|[CMFCToolBarDateTimeCtrl:: OnShow](#onshow)|Chiamata eseguita dal framework quando il pulsante diventa visibile o invisibile. Esegue l'override di [CMFCToolBarButton:: OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).|
|`CMFCToolBarDateTimeCtrl::OnSize`|Chiamata eseguita dal framework quando la barra degli strumenti padre ne modifica la dimensione o la posizione e questa modifica determina la modifica delle dimensioni del pulsante. Esegue l'override di [CMFCToolBarButton:: OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).|
|[CMFCToolBarDateTimeCtrl:: OnUpdateToolTip](#onupdatetooltip)|Chiamata eseguita dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando. Esegue l'override di [CMFCToolBarButton:: OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).|
|`CMFCToolBarDateTimeCtrl::Serialize`|Legge questo oggetto da un archivio o lo scrive in un archivio, (esegue l'override di [CMFCToolBarButton:: Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|
|`CMFCToolBarDateTimeCtrl::SetStyle`|Imposta lo stile del pulsante della barra degli strumenti. Esegue l'override di [CMFCToolBarButton:: Sestyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).|
|[CMFCToolBarDateTimeCtrl:: setime](#settime)|Imposta la data e l'ora nel controllo selezione ora.|
|[CMFCToolBarDateTimeCtrl:: SetTimeAll](#settimeall)|Imposta la data e l'ora in tutte le istanze del controllo selezione ora con un ID comando specificato.|

## <a name="remarks"></a>Commenti

Per un esempio di come usare un controllo selezione data e ora, vedere il progetto di esempio ToolbarDateTimePicker. Per informazioni su come aggiungere pulsanti di controllo alle barre degli strumenti, vedere [procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbardatetimectrl. h

## <a name="cmfctoolbardatetimectrlcanbestretched"></a><a name="canbestretched"></a> CMFCToolBarDateTimeCtrl:: CanBeStretched

Specifica se un utente può estendere il pulsante durante la personalizzazione.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, il Framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) consentendo all'utente di estendere un pulsante della barra degli strumenti di data e ora durante la personalizzazione.

## <a name="cmfctoolbardatetimectrlcmfctoolbardatetimectrl"></a><a name="cmfctoolbardatetimectrl"></a> CMFCToolBarDateTimeCtrl:: CMFCToolBarDateTimeCtrl

Crea e Inizializza un oggetto [CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md) .

```
CMFCToolBarDateTimeCtrl(
    UINT uiID,
    int iImage,
    DWORD dwStyle=0,
    int iWidth=0);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
in ID del controllo.

*iImage*<br/>
in Indice dell'immagine nell'oggetto della barra degli strumenti `CMFCToolBarImages` .

*dwStyle*<br/>
in Stile della `CMFCToolBarDateTimeCtrlImpl` finestra creata quando un utente fa clic sul pulsante.

*Larghezza*<br/>
in Larghezza del controllo, in pixel.

### <a name="remarks"></a>Commenti

Questo oggetto viene inizializzato alla data e all'ora di sistema. Lo stile della finestra dell' `CMFCToolBarDateTimeCtrlImpl` oggetto interno include il parametro *dwStyle* e gli stili WS_CHILD e WS_VISIBLE. Non è possibile modificare questi stili usando `CMFCToolBarDateTimeCtrl::SetStyle` . Utilizzare `SetStyle` per modificare lo stile del `CMFCToolBarDateTimeCtrl` controllo.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCToolBarDateTimeCtrl` classe. Questo frammento di codice fa parte dell' [esempio di selezione data e ora della barra degli strumenti](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_ToolbarDateTimePicker#1](../../mfc/reference/codesnippet/cpp/cmfctoolbardatetimectrl-class_1.cpp)]

## <a name="cmfctoolbardatetimectrlcopyfrom"></a><a name="copyfrom"></a> CMFCToolBarDateTimeCtrl:: CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
in Riferimento al pulsante di origine da cui eseguire la copia.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti in questo pulsante della barra degli strumenti. *src* deve essere di tipo `CMFCToolBarDateTimeCtrl` .

## <a name="cmfctoolbardatetimectrlexporttomenubutton"></a><a name="exporttomenubutton"></a> CMFCToolBarDateTimeCtrl:: ExportToMenuButton

Copia il testo dal pulsante della barra degli strumenti in un menu.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### <a name="parameters"></a>Parametri

*menuButton*<br/>
in Riferimento al pulsante di menu di destinazione.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton:: ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) caricando la risorsa di stringa associata all'ID del comando del controllo. Per ulteriori informazioni sulle risorse di stringa, vedere [CStringT:: LoadString](../../atl-mfc-shared/reference/cstringt-class.md#loadstring).

## <a name="cmfctoolbardatetimectrlgetbycmd"></a><a name="getbycmd"></a> CMFCToolBarDateTimeCtrl:: GetByCmd

Recupera il primo `CMFCToolBarDateTimeCtrl` oggetto nell'applicazione con l'ID di comando specificato.

```
static CMFCToolBarDateTimeCtrl* __stdcall GetByCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID di comando del pulsante da recuperare.

### <a name="return-value"></a>Valore restituito

Primo `CMFCToolBarDateTimeCtrl` oggetto dell'applicazione con l'ID di comando specificato oppure null se nessun oggetto `CMFCToolBarDateTimeCtrl` ha l'ID comando specificato.

### <a name="remarks"></a>Commenti

Questo metodo di utilità condivisa viene usato da metodi quali [CMFCToolBarDateTimeCtrl:: SetTimeAll](#settimeall) e [CMFCToolBarDateTimeCtrl:: GetTimeAll](#gettimeall) per impostare o ottenere l'ora e la data di tutte le istanze del controllo selezione ora che hanno un ID comando specificato.

## <a name="cmfctoolbardatetimectrlgetdatetimectrl"></a><a name="getdatetimectrl"></a> CMFCToolBarDateTimeCtrl:: GetDateTimeCtrl

Restituisce un puntatore al controllo selezione data e ora.

```
CDateTimeCtrl* GetDateTimeCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al controllo selezione data e ora; o NULL se il controllo non esiste.

### <a name="remarks"></a>Commenti

La `CMFCToolBarDateTimeCtrl` classe inizializza il `m_pWndDateTime` membro dati quando si inserisce un `CMFCToolBarDateTimeCtrl` oggetto in una barra degli strumenti.

## <a name="cmfctoolbardatetimectrlgethwnd"></a><a name="gethwnd"></a> CMFCToolBarDateTimeCtrl:: GetHwnd

Recupera l'handle di finestra associato al pulsante della barra degli strumenti.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

Handle della finestra associato al pulsante della barra degli strumenti di data e ora.

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override del metodo [CMFCToolBarButton:: GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) .

## <a name="cmfctoolbardatetimectrlgettime"></a><a name="gettime"></a> CMFCToolBarDateTimeCtrl:: getTime

Ottiene l'ora selezionata dal controllo selezione data e ora associato e la inserisce in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) specificata.

```
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;
```

### <a name="parameters"></a>Parametri

*più a tempo*<br/>
out Nel primo overload, oggetto della [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) che riceverà le informazioni sull'ora di sistema. Nel secondo overload, oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
out Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere le informazioni sull'ora di sistema. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Nel primo overload, diverso da zero se l'ora viene scritta correttamente nell'oggetto [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) ; in caso contrario, 0. Nel secondo e nel terzo overload, il valore restituito è un DWORD uguale al membro dwFlag impostato nella struttura [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) .

### <a name="remarks"></a>Commenti

Il metodo imposta l'oggetto dwFlags del membro della struttura [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) per indicare se il selettore di data e ora è impostato su una data e un'ora. Se il valore è uguale a GDT_NONE, il controllo viene impostato `no date` sullo stato e utilizza lo stile DTS_SHOWNONE. Se il valore restituito è uguale a GDT_VALID, l'ora di sistema viene archiviata correttamente nel percorso di destinazione.

## <a name="cmfctoolbardatetimectrlgettimeall"></a><a name="gettimeall"></a> CMFCToolBarDateTimeCtrl:: GetTimeAll

Restituisce l'ora selezionata dall'utente dal pulsante di controllo selezione ora con un ID comando specificato.

```
static BOOL GetTimeAll(
    UINT uiCmd,
    COleDateTime& timeDest);

static DWORD GetTimeAll(
    UINT uiCmd,
    CTime& timeDest);

static DWORD GetTimeAll(
    UINT uiCmd,
    LPSYSTEMTIME pTimeDest);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in Specifica l'ID comando di un pulsante della barra degli strumenti.

*più a tempo*<br/>
out Nel primo overload, oggetto della [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) che riceverà le informazioni sull'ora di sistema. Nel secondo overload, oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
out Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere le informazioni sull'ora di sistema. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Se il Framework non riesce a trovare un pulsante della barra degli strumenti che corrisponde all'ID di comando *uiCmd*, il valore restituito è zero nel primo overload e GDT_NONE negli altri overload. Se viene trovato il pulsante della barra degli strumenti, il valore restituito è lo stesso del valore restituito da una chiamata a [CMFCToolBarDateTimeCtrl:: GetTime](#gettime) su tale pulsante. Un valore restituito pari a zero o GDT_NONE può verificarsi quando si trova il pulsante, a indicare che la chiamata a non `GetTime` ha restituito una data valida per un altro motivo.

### <a name="remarks"></a>Commenti

Questo metodo cerca un pulsante della barra degli strumenti con l'ID di comando specificato e chiama il metodo [CMFCToolBarDateTimeCtrl:: GetTime](#gettime) su tale pulsante.

## <a name="cmfctoolbardatetimectrlhavehotborder"></a><a name="havehotborder"></a> CMFCToolBarDateTimeCtrl:: HaveHotBorder

Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante.

```
virtual BOOL HaveHotBorder() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un pulsante Visualizza il bordo se selezionato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo restituisce un valore diverso da zero se il controllo è visibile.

## <a name="cmfctoolbardatetimectrlnotifycommand"></a><a name="notifycommand"></a> CMFCToolBarDateTimeCtrl:: NotifyCommand

Specifica se il pulsante elabora il messaggio di [WM_COMMAND](/windows/win32/menurc/wm-command) .

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*iNotifyCode*<br/>
in Messaggio di notifica associato al comando.

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante elabora il messaggio di WM_COMMAND o FALSE per indicare che il messaggio deve essere gestito dalla barra degli strumenti padre.

### <a name="remarks"></a>Commenti

Il Framework chiama questo metodo quando sta per inviare un messaggio di [WM_COMMAND](/windows/win32/menurc/wm-command) alla finestra padre.

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) elaborando la notifica [DTN_DATETIMECHANGE](/windows/win32/Controls/dtn-datetimechange) . Aggiorna lo stato di ora interno e aggiorna la proprietà dell'ora di tutti `CMFCToolBarDateTimeCtrl` gli oggetti con lo stesso ID di comando.

## <a name="cmfctoolbardatetimectrlonaddtocustomizepage"></a><a name="onaddtocustomizepage"></a> CMFCToolBarDateTimeCtrl:: OnAddToCustomizePage

Chiamata eseguita dal framework quando il pulsante viene aggiunto a una finestra di dialogo di **personalizzazione** .

```
virtual void OnAddToCustomizePage();
```

### <a name="remarks"></a>Commenti

Questo metodo estende l'implementazione della classe di base, [CMFCToolBarButton:: OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage), copiando le proprietà dal primo controllo di data e ora in una barra degli strumenti con lo stesso ID comando di questo oggetto. Questo metodo non esegue alcuna operazione se nessun barra degli strumenti dispone di un controllo di data e ora con lo stesso ID di comando di questo oggetto.

Per ulteriori informazioni sulla finestra di dialogo **Personalizza** , vedere [classe CMFCToolBarsCustomizeDialog](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

## <a name="cmfctoolbardatetimectrlonchangeparentwnd"></a><a name="onchangeparentwnd"></a> CMFCToolBarDateTimeCtrl:: OnChangeParentWnd

Chiamata eseguita dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Nuova finestra padre.

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override dell'implementazione della classe di base ( [CMFCToolBarButton:: OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando l' `CMFCToolBarDateTimeCtrlImpl` oggetto interno.

## <a name="cmfctoolbardatetimectrlonclick"></a><a name="onclick"></a> CMFCToolBarDateTimeCtrl:: OnClick

Chiamata eseguita dal framework quando l'utente fa clic sul controllo.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in] Non utilizzato.

*bDelay*<br/>
[in] Non utilizzato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il pulsante elabora il messaggio di clic; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override dell'implementazione della classe di base, [CMFCToolBarButton:: OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), restituendo un valore diverso da zero se l' `CMFCToolBarDateTimeCtrlImpl` oggetto interno è visibile.

## <a name="cmfctoolbardatetimectrlonctlcolor"></a><a name="onctlcolor"></a> CMFCToolBarDateTimeCtrl:: OnCtlColor

Chiamata eseguita dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_CTLCOLOR.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Contesto di dispositivo in cui viene visualizzato il pulsante.

*nCtlColor*<br/>
[in] Non utilizzato.

### <a name="return-value"></a>Valore restituito

Handle per il pennello globale utilizzato dal Framework per disegnare lo sfondo del pulsante.

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override dell'implementazione della classe di base, [CMFCToolBarButton:: OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor), impostando rispettivamente il testo e i colori di sfondo del contesto di dispositivo specificato sul testo globale e i colori di sfondo.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).

## <a name="cmfctoolbardatetimectrlonglobalfontschanged"></a><a name="onglobalfontschanged"></a> CMFCToolBarDateTimeCtrl:: OnGlobalFontsChanged

Chiamata eseguita dal framework quando il tipo di carattere globale è stato modificato.

```
virtual void OnGlobalFontsChanged();
```

### <a name="remarks"></a>Commenti

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo su quello del tipo di carattere globale.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).

## <a name="cmfctoolbardatetimectrlonmove"></a><a name="onmove"></a> CMFCToolBarDateTimeCtrl:: OnMove

Chiamata eseguita dal framework quando la barra degli strumenti padre viene spostata.

```
virtual void OnMove();
```

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override dell'implementazione della classe predefinita ( [CMFCToolBarButton:: OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)) aggiornando la posizione dell' `CMFCToolBarDateTimeCtrlImpl` oggetto interno.

## <a name="cmfctoolbardatetimectrlonshow"></a><a name="onshow"></a> CMFCToolBarDateTimeCtrl:: OnShow

Chiamata eseguita dal framework quando il pulsante diventa visibile o invisibile.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
in Specifica se il pulsante è visibile. Se questo parametro è TRUE, il pulsante è visibile. In caso contrario, il pulsante non è visibile.

### <a name="remarks"></a>Commenti

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se *bShow* è true. In caso contrario, questo metodo nasconde il pulsante.

## <a name="cmfctoolbardatetimectrlonsize"></a><a name="onsize"></a> CMFCToolBarDateTimeCtrl:: OnSize

Chiamata eseguita dal framework quando la barra degli strumenti padre ne modifica la dimensione o la posizione e questa modifica determina la modifica delle dimensioni del pulsante.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*iSize*<br/>
in Nuova larghezza del pulsante, in pixel.

### <a name="remarks"></a>Commenti

Questo metodo esegue l'override dell'implementazione della classe predefinita ( [CMFCToolBarButton:: OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize)) aggiornando le dimensioni e la posizione dell' `CMFCToolBarDateTimeCtrlImpl` oggetto interno.

## <a name="cmfctoolbardatetimectrlonupdatetooltip"></a><a name="onupdatetooltip"></a> CMFCToolBarDateTimeCtrl:: OnUpdateToolTip

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
in Finestra padre.

*iButtonIndex*<br/>
in Indice in base zero del pulsante nell'insieme di pulsanti padre.

*wndToolTip*<br/>
in Controllo che Visualizza il testo della descrizione comando.

*str*<br/>
out `CString` Oggetto che riceve il testo della descrizione comando aggiornato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo aggiorna il testo della descrizione comando; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questo metodo estende l'implementazione della classe di base ( [CMFCToolBarButton:: OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comando associato al pulsante. Se il pulsante non è ancorato orizzontalmente, questo metodo non esegue alcuna operazione e restituisce FALSE.

## <a name="cmfctoolbardatetimectrlsettime"></a><a name="settime"></a> CMFCToolBarDateTimeCtrl:: setime

Imposta la data e l'ora nel controllo selezione ora.

```
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* timeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew=NULL);
```

### <a name="parameters"></a>Parametri

*timeNew*<br/>
in Nella prima versione, un riferimento a un oggetto della [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) che contiene l'ora in cui verrà impostato il controllo. Nella seconda versione, un puntatore a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che contiene l'ora in cui verrà impostato il controllo.

*pTimeNew*<br/>
in Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che contiene l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Imposta l'ora in un controllo selezione data e ora chiamando [CDateTimeCtrl:: setime](../../mfc/reference/cdatetimectrl-class.md#settime).

## <a name="cmfctoolbardatetimectrlsettimeall"></a><a name="settimeall"></a> CMFCToolBarDateTimeCtrl:: SetTimeAll

Imposta la data e l'ora in tutte le istanze del controllo selezione ora con un ID comando specificato.

```
static BOOL SetTimeAll(
    UINT uiCmd,
    const COleDateTime& timeNew);

static BOOL SetTimeAll(
    UINT uiCmd,
    const CTime* pTimeNew);

static BOOL SetTimeAll(
    UINT uiCmd,
    LPSYSTEMTIME pTimeNew=NULL);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in Specifica l'ID comando di un pulsante della barra degli strumenti.

*timeNew*<br/>
in Nella prima versione, oggetto [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) che contiene l'ora in cui verrà impostato il controllo. Nella seconda versione, un puntatore a un oggetto [CTime](../../atl-mfc-shared/reference/ctime-class.md) che contiene l'ora in cui verrà impostato il controllo.

*pTimeNew*<br/>
in Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che contiene l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Cerca un pulsante della barra degli strumenti con l'ID di comando specificato e imposta l'ora in un controllo selezione data e ora chiamando [CMFCToolBarDateTimeCtrl:: setime](#settime).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
