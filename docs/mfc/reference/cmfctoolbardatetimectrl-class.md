---
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
ms.openlocfilehash: 9aebd55f19a6687554d8d8378ef84ed5932025a2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372170"
---
# <a name="cmfctoolbardatetimectrl-class"></a>Classe CMFCToolBarDateTimeCtrl

Pulsante della barra degli strumenti che contiene un controllo selezione data e ora.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarDateTimeCtrl : public CMFCToolBarButton
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl](#cmfctoolbardatetimectrl)|Costruisce un oggetto `CMFCToolBarDateTimeCtrl`.|
|`CMFCToolBarDateTimeCtrl::~CMFCToolBarDateTimeCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarDateTimeCtrl::CanBeStretched](#canbestretched)|Specifica se un utente può estendere il pulsante durante la personalizzazione. (Esegue l'override di [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|
|[CMFCToolBarDateTimeCtrl::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCToolBarDateTimeCtrl::DuplicateData`|Riservato per utilizzi futuri.|
|[CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti in un menu.|
|`CMFCToolBarDateTimeCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCToolBarDateTimeCtrl::GetByCmd](#getbycmd)|Recupera il `CMFCToolBarDateTimeCtrl` primo oggetto nell'applicazione con l'ID di comando specificato.|
|[CMFCToolBarDateTimeCtrl::GetDateTimeCtrl](#getdatetimectrl)|Restituisce un puntatore al controllo selezione data e ora.|
|[CMFCToolBarDateTimeCtrl::GetHwnd](#gethwnd)|Recupera l'handle di finestra associato al pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|
|`CMFCToolBarDateTimeCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCToolBarDateTimeCtrl::GetTime](#gettime)|Ottiene l'ora selezionata da un controllo selezione data e ora e la inserisce in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) specificata.|
|[CMFCToolBarDateTimeCtrl::GetTimeAll](#gettimeall)|Restituisce l'ora selezionata dal pulsante di controllo selezione ora con un ID di comando specificato.|
|[CMFCToolBarDateTimeCtrl::HaveHotBorder](#havehotborder)|Determina se viene visualizzato un bordo del pulsante quando un utente seleziona il pulsante. (Esegue l'override di [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|
|[CMFCToolBarDateTimeCtrl::NotifyCommand](#notifycommand)|Specifica se il pulsante elabora il messaggio [WM_COMMAND.](/windows/win32/menurc/wm-command) (Esegue l'override di [CMFCToolBarButton::NotifyCommand.)](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)|
|[CMFCToolBarDateTimeCtrl::OnAddToCustomizePage](#onaddtocustomizepage)|Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza.** (Esegue l'override di [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|
|`CMFCToolBarDateTimeCtrl::OnCalculateSize`|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|[CMFCToolBarDateTimeCtrl::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCToolBarDateTimeCtrl::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul controllo. (Esegue l'override di [CMFCToolBarButton::OnClick .)](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)|
|[CMFCToolBarDateTimeCtrl::OnCtlColor](#onctlcolor)|Chiamato dal framework quando la barra degli strumenti padre gestisce un messaggio di WM_CTLCOLOR. (Esegue l'override di [CMFCToolBarButton::OnCtlColor.)](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)|
|`CMFCToolBarDateTimeCtrl::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili e le opzioni specificati. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|`CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList`|Chiamato dal framework per disegnare il pulsante nel riquadro **Comandi** della finestra di dialogo **Personalizza.** (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged](#onglobalfontschanged)|Chiamato dal framework quando il tipo di carattere globale è stato modificato. (Esegue l'override di [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|
|[CMFCToolBarDateTimeCtrl::OnMove](#onmove)|Chiamato dal framework quando si sposta la barra degli strumenti padre. (OverrideS [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|
|[CMFCToolBarDateTimeCtrl::OnShow](#onshow)|Chiamato dal framework quando il pulsante diventa visibile o invisibile. (Esegue l'override di [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|
|`CMFCToolBarDateTimeCtrl::OnSize`|Chiamato dal framework quando la barra degli strumenti padre modifica le dimensioni o la posizione e questa modifica determina la modifica delle dimensioni del pulsante. (Esegue l'override di [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|
|[Suggerimento CMFCToolBarDateTimeCtrl::OnUpdateTool](#onupdatetooltip)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comandi. (Esegue l'override di [CMFCToolBarButton::OnUpdateToolTip.)](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)|
|`CMFCToolBarDateTimeCtrl::Serialize`|Legge questo oggetto da un archivio o lo scrive in un archivio (esegue l'override [di CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|
|`CMFCToolBarDateTimeCtrl::SetStyle`|Imposta lo stile del pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::SetStyle.)](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle)|
|[CMFCToolBarDateTimeCtrl::SetTime](#settime)|Imposta l'ora e la data nel controllo selezione ora.|
|[CMFCToolBarDateTimeCtrl::SetTimeAll](#settimeall)|Imposta l'ora e la data in tutte le istanze del controllo selezione ora con un ID di comando specificato.|

## <a name="remarks"></a>Osservazioni

Per un esempio di come usare un controllo selezione data e ora, vedere il progetto di esempio ToolbarDateTimePicker.For an example of how to use a date and time picker control, see the ToolbarDateTimePicker sample project. Per informazioni su come aggiungere pulsanti di controllo alle barre degli strumenti, vedere [Procedura dettagliata: inserimento](../../mfc/walkthrough-putting-controls-on-toolbars.md)di controlli nelle barre degli strumenti .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbardatetimectrl.h

## <a name="cmfctoolbardatetimectrlcanbestretched"></a><a name="canbestretched"></a>CMFCToolBarDateTimeCtrl::CanBeStretched

Specifica se un utente può estendere il pulsante durante la personalizzazione.

```
virtual BOOL CanBeStretched() const;
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) consentendo all'utente di estendere un pulsante della barra degli strumenti di data e ora durante la personalizzazione.

## <a name="cmfctoolbardatetimectrlcmfctoolbardatetimectrl"></a><a name="cmfctoolbardatetimectrl"></a>CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl

Crea e inizializza un [cMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md) oggetto.

```
CMFCToolBarDateTimeCtrl(
    UINT uiID,
    int iImage,
    DWORD dwStyle=0,
    int iWidth=0);
```

### <a name="parameters"></a>Parametri

*uiID*<br/>
[in] ID del controllo.

*iImage (immagine)*<br/>
[in] Indice dell'immagine nell'oggetto `CMFCToolBarImages` della barra degli strumenti.

*DwStyle (in stile dwStyle)*<br/>
[in] Stile della `CMFCToolBarDateTimeCtrlImpl` finestra creata quando un utente fa clic sul pulsante.

*ILarghezza*<br/>
[in] Larghezza del controllo, in pixel.

### <a name="remarks"></a>Osservazioni

Questo oggetto viene inizializzato sulla data e sull'ora di sistema. Lo stile della `CMFCToolBarDateTimeCtrlImpl` finestra dell'oggetto interno include il parametro *dwStyle* e gli stili WS_CHILD e WS_VISIBLE. Non è possibile modificare `CMFCToolBarDateTimeCtrl::SetStyle`questi stili utilizzando . Utilizzare `SetStyle` per modificare lo `CMFCToolBarDateTimeCtrl` stile del controllo.

### <a name="example"></a>Esempio

Nell'esempio `CMFCToolBarDateTimeCtrl` seguente viene illustrato come costruire un oggetto della classe. Questo frammento di codice fa parte [dell'esempio selezione data e ora della barra degli strumenti.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_ToolbarDateTimePicker#1](../../mfc/reference/codesnippet/cpp/cmfctoolbardatetimectrl-class_1.cpp)]

## <a name="cmfctoolbardatetimectrlcopyfrom"></a><a name="copyfrom"></a>CMFCToolBarDateTimeCtrl::CopyFrom

Copia le proprietà di un altro pulsante della barra degli strumenti nel pulsante corrente.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### <a name="parameters"></a>Parametri

*src*<br/>
[in] Un riferimento al pulsante di origine da cui copiare.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti in questo pulsante della barra degli strumenti. *src* deve essere `CMFCToolBarDateTimeCtrl`di tipo .

## <a name="cmfctoolbardatetimectrlexporttomenubutton"></a><a name="exporttomenubutton"></a>CMFCToolBarDateTimeCtrl::ExportToMenuButton

Copia il testo dal pulsante della barra degli strumenti in un menu.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### <a name="parameters"></a>Parametri

*menuButton*<br/>
[in] Un riferimento al pulsante del menu di destinazione.

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce TRUE.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) caricando la risorsa stringa associata all'ID di comando del controllo. Per ulteriori informazioni sulle risorse stringa, vedere [CStringT::LoadString](../../atl-mfc-shared/reference/cstringt-class.md#loadstring).

## <a name="cmfctoolbardatetimectrlgetbycmd"></a><a name="getbycmd"></a>CMFCToolBarDateTimeCtrl::GetByCmd

Recupera il `CMFCToolBarDateTimeCtrl` primo oggetto nell'applicazione con l'ID di comando specificato.

```
static CMFCToolBarDateTimeCtrl* __stdcall GetByCmd(UINT uiCmd);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID di comando del pulsante da recuperare.

### <a name="return-value"></a>Valore restituito

Il `CMFCToolBarDateTimeCtrl` primo oggetto nell'applicazione con l'ID di `CMFCToolBarDateTimeCtrl` comando specificato oppure NULL se nessun oggetto ha l'ID di comando specificato.

### <a name="remarks"></a>Osservazioni

Questo metodo di utilità condivisa viene utilizzato da metodi quali [CMFCToolBarDateTimeCtrl::SetTimeAll](#settimeall) e [CMFCToolBarDateTimeCtrl::GetTimeAll](#gettimeall) per impostare o ottenere l'ora e la data di tutte le istanze del controllo selezione ora che dispongono di un ID di comando specificato.

## <a name="cmfctoolbardatetimectrlgetdatetimectrl"></a><a name="getdatetimectrl"></a>CMFCToolBarDateTimeCtrl::GetDateTimeCtrl

Restituisce un puntatore al controllo selezione data e ora.

```
CDateTimeCtrl* GetDateTimeCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore al controllo selezione data e ora; o NULL se il controllo non esiste.

### <a name="remarks"></a>Osservazioni

La `CMFCToolBarDateTimeCtrl` classe inizializza `m_pWndDateTime` il membro dati `CMFCToolBarDateTimeCtrl` quando si inserisce un oggetto in una barra degli strumenti.

## <a name="cmfctoolbardatetimectrlgethwnd"></a><a name="gethwnd"></a>CMFCToolBarDateTimeCtrl::GetHwnd

Recupera l'handle di finestra associato al pulsante della barra degli strumenti.

```
virtual HWND GetHwnd();
```

### <a name="return-value"></a>Valore restituito

Handle di finestra associato al pulsante della barra degli strumenti di data e ora.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) metodo.

## <a name="cmfctoolbardatetimectrlgettime"></a><a name="gettime"></a>CMFCToolBarDateTimeCtrl::GetTime

Ottiene l'ora selezionata dal controllo selezione data e ora associato e la inserisce in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) specificata

```
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;
```

### <a name="parameters"></a>Parametri

*timeDest*<br/>
[fuori] Nel primo overload, un [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nel secondo overload, un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
[fuori] Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere le informazioni sull'ora di sistema. Non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Nel primo overload, diverso da zero se l'ora viene scritta correttamente [nel COleDateTime Classe](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto; in caso contrario 0. Nel secondo e terzo overload, il valore restituito è un DWORD uguale al membro dwFlag impostato nella struttura [NMDATETIMECHANGE.](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange)

### <a name="remarks"></a>Osservazioni

Il metodo imposta il [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) membro della struttura dwFlags per indicare se la selezione data e ora è impostata su una data e ora. Se il valore è uguale a `no date` GDT_NONE, il controllo viene impostato sullo stato e utilizza lo stile DTS_SHOWNONE. Se il valore restituito è uguale a GDT_VALID, l'ora di sistema viene archiviata correttamente nel percorso di destinazione.

## <a name="cmfctoolbardatetimectrlgettimeall"></a><a name="gettimeall"></a>CMFCToolBarDateTimeCtrl::GetTimeAll

Restituisce l'ora selezionata dall'utente dal pulsante di controllo selezione ora con un ID di comando specificato.

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

*uiCmd (informazioni in stato in questo*<br/>
[in] Specifica l'ID di comando di un pulsante della barra degli strumenti.

*timeDest*<br/>
[fuori] Nel primo overload, un [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nel secondo overload, un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.

*pTimeDest*<br/>
[fuori] Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere le informazioni sull'ora di sistema. Non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Se il framework non riesce a trovare un pulsante della barra degli strumenti corrispondente all'ID di comando *uiCmd*, il valore restituito è zero nel primo overload e GDT_NONE negli altri overload. Se il pulsante della barra degli strumenti viene trovato, il valore restituito è lo stesso valore restituito da una chiamata a [CMFCToolBarDateTimeCtrl::GetTime](#gettime) su tale pulsante. Un valore restituito pari a zero o GDT_NONE può verificarsi quando `GetTime` viene trovato il pulsante, che indica che la chiamata a non ha restituito una data valida per altri motivi.

### <a name="remarks"></a>Osservazioni

Questo metodo cerca un pulsante della barra degli strumenti con l'ID di comando specificato e chiama [CMFCToolBarDateTimeCtrl::GetTime](#gettime) metodo su tale pulsante.

## <a name="cmfctoolbardatetimectrlhavehotborder"></a><a name="havehotborder"></a>CMFCToolBarDateTimeCtrl::HaveHotBorder

Determina se viene visualizzato un bordo del pulsante quando un utente seleziona il pulsante.

```
virtual BOOL HaveHotBorder() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se un pulsante visualizza il bordo quando selezionato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce un valore diverso da zero se il controllo è visibile.

## <a name="cmfctoolbardatetimectrlnotifycommand"></a><a name="notifycommand"></a>CMFCToolBarDateTimeCtrl::NotifyCommand

Specifica se il pulsante elabora il messaggio [WM_COMMAND.](/windows/win32/menurc/wm-command)

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### <a name="parameters"></a>Parametri

*Codice iNotify*<br/>
[in] Messaggio di notifica associato al comando.

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante elabora il WM_COMMAND messaggio oppure FALSE per indicare che il messaggio deve essere gestito dalla barra degli strumenti padre.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando sta per inviare un [messaggio di WM_COMMAND](/windows/win32/menurc/wm-command) alla finestra padre.

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) elaborando la notifica [di DTN_DATETIMECHANGE.](/windows/win32/Controls/dtn-datetimechange) Aggiorna lo stato dell'ora interna e `CMFCToolBarDateTimeCtrl` aggiorna la proprietà time di tutti gli oggetti con lo stesso ID di comando.

## <a name="cmfctoolbardatetimectrlonaddtocustomizepage"></a><a name="onaddtocustomizepage"></a>CMFCToolBarDateTimeCtrl::OnAddToCustomizePage

Chiamato dal framework quando il pulsante viene aggiunto a una finestra di dialogo **Personalizza.**

```
virtual void OnAddToCustomizePage();
```

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage), copiando le proprietà dal primo controllo data e ora in qualsiasi barra degli strumenti con lo stesso ID di comando dell'oggetto. Questo metodo non esegue alcuna operazione se nessuna barra degli strumenti dispone di un controllo di data e ora con lo stesso ID di comando di questo oggetto.

Per ulteriori informazioni sulla finestra di dialogo **Personalizza** , vedere [CMFCToolBarsCustomizeDialog (classe).](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)

## <a name="cmfctoolbardatetimectrlonchangeparentwnd"></a><a name="onchangeparentwnd"></a>CMFCToolBarDateTimeCtrl::OnChangeParentWnd

Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Nuova finestra padre.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando l'oggetto interno. `CMFCToolBarDateTimeCtrlImpl`

## <a name="cmfctoolbardatetimectrlonclick"></a><a name="onclick"></a>CMFCToolBarDateTimeCtrl::OnClick

Chiamato dal framework quando l'utente fa clic sul controllo.

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

Questo metodo esegue l'override dell'implementazione della classe base, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), restituendo un valore diverso da zero se l'oggetto interno `CMFCToolBarDateTimeCtrlImpl` è visibile.

## <a name="cmfctoolbardatetimectrlonctlcolor"></a><a name="onctlcolor"></a>CMFCToolBarDateTimeCtrl::OnCtlColor

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

Handle per il pennello globale utilizzato dal framework per disegnare lo sfondo del pulsante.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe base, [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor), impostando rispettivamente i colori di testo e di sfondo del contesto di periferica fornito sui colori globali del testo e dello sfondo.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [Struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).

## <a name="cmfctoolbardatetimectrlonglobalfontschanged"></a><a name="onglobalfontschanged"></a>CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged

Chiamato dal framework quando il tipo di carattere globale è stato modificato.

```
virtual void OnGlobalFontsChanged();
```

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo in quello del tipo di carattere globale.

Per ulteriori informazioni sulle opzioni globali disponibili per l'applicazione, vedere [Struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).

## <a name="cmfctoolbardatetimectrlonmove"></a><a name="onmove"></a>CMFCToolBarDateTimeCtrl::OnMove

Chiamato dal framework quando si sposta la barra degli strumenti padre.

```
virtual void OnMove();
```

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe predefinita ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)) aggiornando la posizione dell'oggetto interno. `CMFCToolBarDateTimeCtrlImpl`

## <a name="cmfctoolbardatetimectrlonshow"></a><a name="onshow"></a>CMFCToolBarDateTimeCtrl::OnShow

Chiamato dal framework quando il pulsante diventa visibile o invisibile.

```
virtual void OnShow(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] Specifica se il pulsante è visibile. Se questo parametro è TRUE, il pulsante è visibile. In caso contrario, il pulsante non è visibile.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se *bShow* è TRUE. In caso contrario, questo metodo nasconde il pulsante.

## <a name="cmfctoolbardatetimectrlonsize"></a><a name="onsize"></a>CMFCToolBarDateTimeCtrl::OnSize

Chiamato dal framework quando la barra degli strumenti padre modifica le dimensioni o la posizione e questa modifica determina la modifica delle dimensioni del pulsante.

```
virtual void OnSize(int iSize);
```

### <a name="parameters"></a>Parametri

*IDimensioni*<br/>
[in] Nuova larghezza del pulsante, in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override dell'implementazione della classe predefinita ( [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize)) aggiornando le dimensioni e la posizione dell'oggetto interno. `CMFCToolBarDateTimeCtrlImpl`

## <a name="cmfctoolbardatetimectrlonupdatetooltip"></a><a name="onupdatetooltip"></a>Suggerimento CMFCToolBarDateTimeCtrl::OnUpdateTool

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
[in] Finestra padre.

*Indice iButton*<br/>
[in] Indice in base zero del pulsante nella raccolta di pulsanti padre.

*WndToolTip (suggerimento su WNdTool)*<br/>
[in] Controllo che visualizza il testo della descrizione comandi.

*Str*<br/>
[fuori] Oggetto `CString` che riceve il testo della descrizione comando aggiornato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo aggiorna il testo della descrizione comando; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comando associato al pulsante. Se il pulsante non è ancorato orizzontalmente, questo metodo non esegue alcuna operazione e restituisce FALSE.

## <a name="cmfctoolbardatetimectrlsettime"></a><a name="settime"></a>CMFCToolBarDateTimeCtrl::SetTime

Imposta l'ora e la data nel controllo selezione ora.

```
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* timeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew=NULL);
```

### <a name="parameters"></a>Parametri

*timeNew*<br/>
[in] Nella prima versione, un riferimento a un [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo. Nella seconda versione, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo.

*pTimeNuovo*<br/>
[in] Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che contiene l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Imposta l'ora in un controllo selezione data e ora chiamando [CDateTimeCtrl::SetTime](../../mfc/reference/cdatetimectrl-class.md#settime).

## <a name="cmfctoolbardatetimectrlsettimeall"></a><a name="settimeall"></a>CMFCToolBarDateTimeCtrl::SetTimeAll

Imposta l'ora e la data in tutte le istanze del controllo selezione ora con un ID di comando specificato.

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

*uiCmd (informazioni in stato in questo*<br/>
[in] Specifica l'ID di comando di un pulsante della barra degli strumenti.

*timeNew*<br/>
[in] Nella prima versione, un [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo. Nella seconda versione, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo.

*pTimeNuovo*<br/>
[in] Puntatore alla struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che contiene l'ora in cui verrà impostato il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Cerca un pulsante della barra degli strumenti con l'ID di comando specificato e imposta l'ora in un controllo selezione data e ora chiamando [CMFCToolBarDateTimeCtrl::SetTime](#settime).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)
