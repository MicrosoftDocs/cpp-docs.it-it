---
title: CMFCDesktopAlertWnd Class
ms.date: 10/18/2018
f1_keywords:
- CMFCDesktopAlertWnd
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::Create
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAnimationSpeed
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAnimationType
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetAutoCloseTime
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetCaptionHeight
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetDialogSize
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetLastPos
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::GetTransparency
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::HasSmallCaption
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnBeforeShow
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnClickLinkButton
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnCommand
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::OnDraw
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::ProcessCommand
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAnimationSpeed
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAnimationType
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetAutoCloseTime
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetSmallCaption
- AFXDESKTOPALERTWND/CMFCDesktopAlertWnd::SetTransparency
helpviewer_keywords:
- CMFCDesktopAlertWnd [MFC], Create
- CMFCDesktopAlertWnd [MFC], GetAnimationSpeed
- CMFCDesktopAlertWnd [MFC], GetAnimationType
- CMFCDesktopAlertWnd [MFC], GetAutoCloseTime
- CMFCDesktopAlertWnd [MFC], GetCaptionHeight
- CMFCDesktopAlertWnd [MFC], GetDialogSize
- CMFCDesktopAlertWnd [MFC], GetLastPos
- CMFCDesktopAlertWnd [MFC], GetTransparency
- CMFCDesktopAlertWnd [MFC], HasSmallCaption
- CMFCDesktopAlertWnd [MFC], OnBeforeShow
- CMFCDesktopAlertWnd [MFC], OnClickLinkButton
- CMFCDesktopAlertWnd [MFC], OnCommand
- CMFCDesktopAlertWnd [MFC], OnDraw
- CMFCDesktopAlertWnd [MFC], ProcessCommand
- CMFCDesktopAlertWnd [MFC], SetAnimationSpeed
- CMFCDesktopAlertWnd [MFC], SetAnimationType
- CMFCDesktopAlertWnd [MFC], SetAutoCloseTime
- CMFCDesktopAlertWnd [MFC], SetSmallCaption
- CMFCDesktopAlertWnd [MFC], SetTransparency
ms.assetid: 73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425
ms.openlocfilehash: f9c59258cf757b5468985a954640ccec1543512b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367644"
---
# <a name="cmfcdesktopalertwnd-class"></a>CMFCDesktopAlertWnd Class

La `CMFCDesktopAlertWnd` classe implementa la funzionalità di una finestra di dialogo non modale visualizzata sullo schermo per informare l'utente su un evento.

Per ulteriori dettagli, vedere il codice sorgente che si trova nella cartella **\\\\mfc di VC atlmfc\\** dell'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCDesktopAlertWnd : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDesktopAlertWnd::Create](#create)|Crea e inizializza la finestra di avviso del desktop.|
|[CMFCDesktopAlertWnd::GetAnimationSpeed](#getanimationspeed)|Restituisce la velocità dell'animazione.|
|[CMFCDesktopAlertWnd::GetAnimationType](#getanimationtype)|Restituisce il tipo di animazione.|
|[CMFCDesktopAlertWnd::GetAutoCloseTime](#getautoclosetime)|Restituisce il timeout di chiusura automatica.|
|[CMFCDesktopAlertWnd::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia.|
|[CMFCDesktopAlertWnd::GetDialogSize](#getdialogsize)||
|[CMFCDesktopAlertWnd::GetLastPosCMFCDesktopAlertWnd::GetLastPos](#getlastpos)|Restituisce l'ultima posizione valida della finestra di avviso del desktop sullo schermo.|
|[CMFCDesktopAlertWnd::GetTransparency](#gettransparency)|Restituisce il livello di trasparenza.|
|[CMFCDesktopAlertWnd::HasSmallCaption](#hassmallcaption)|Determina se la finestra di avviso del desktop viene visualizzata con la didascalia piccola.|
|[CMFCDesktopAlertWnd::OnBeforeShow](#onbeforeshow)||
|[CMFCDesktopAlertWnd::OnClickLinkButton](#onclicklinkbutton)|Chiamato dal framework quando l'utente fa clic su un pulsante di collegamento situato nel menu di avviso del desktop.|
|[CMFCDesktopAlertWnd::OnCommand](#oncommand)|Il framework chiama questa funzione membro quando l'utente seleziona una voce da un menu, quando un controllo figlio invia un messaggio di notifica o quando viene tradotta una sequenza di tasti di scelta rapida. (Esegue l'override di [CWnd::OnCommand](../../mfc/reference/cwnd-class.md#oncommand).)|
|[CMFCDesktopAlertWnd::OnDraw](#ondraw)||
|[CMFCDesktopAlertWnd::ProcessCommand](#processcommand)||
|[CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed)|Imposta la nuova velocità di animazione.|
|[CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype)|Imposta il tipo di animazione.|
|[CMFCDesktopAlertWnd::SetAutoCloseTime](#setautoclosetime)|Imposta il timeout di chiusura automatica.|
|[CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption)|Consente di passare da un titolo di didascalia piccola a uno normale e viceversa.|
|[CMFCDesktopAlertWnd::SetTransparency](#settransparency)|Imposta il livello di trasparenza.|

## <a name="remarks"></a>Osservazioni

Una finestra di avviso per il desktop può essere trasparente, può apparire con effetti di animazione e può scomparire (dopo un ritardo specificato o quando l'utente la chiude facendo clic sul pulsante di chiusura).

Una finestra di avviso per il desktop può anche contenere una finestra di dialogo predefinita che a sua volta contiene un'icona, il testo del messaggio (un'etichetta) e un collegamento. In alternativa, una finestra di avviso per il desktop può contenere una finestra di dialogo personalizzata dalle risorse dell'applicazione.

Creare una finestra di avviso del desktop in due passaggi. In primo luogo, chiamare `CMFCDesktopAlertWnd` il costruttore per costruire l'oggetto. In secondo luogo, chiamare il [CMFCDesktopAlertWnd::Create](#create) funzione membro `CMFCDesktopAlertWnd` per creare la finestra e associarlo all'oggetto.

L'oggetto `CMFCDesktopAlertWnd` crea una finestra di dialogo figlio speciale che riempie l'area client della finestra di avviso del desktop. La finestra di dialogo è proprietaria di tutti i controlli posizionati su di esso.

Per visualizzare una finestra di dialogo personalizzata nella finestra popup, attenersi alla seguente procedura:

1. Derivare una classe da `CMFCDesktopAlertDialog`.

1. Creare un modello di finestra di dialogo figlio nelle risorse.

1. Chiamare [CMFCDesktopAlertWnd::Create](#create) utilizzando l'ID risorsa del modello di finestra di dialogo e un puntatore alle informazioni sulla classe di runtime della classe derivata.

1. Programmare la finestra di dialogo personalizzata per gestire tutte le notifiche provenienti dai controlli ospitati o programmare i controlli ospitati per gestire direttamente queste notifiche.

Utilizzare le seguenti funzioni per controllare il comportamento della finestra di avviso del desktop:

- Impostare il tipo di animazione chiamando [CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype). Le opzioni valide includono dispiegata, diapositiva e dissolvenza.

- Impostare la velocità del fotogramma dell'animazione chiamando [CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed).

- Impostare il livello di trasparenza chiamando [CMFCDesktopAlertWnd::SetTransparency](#settransparency).

- Modificare le dimensioni della didascalia in piccole chiamando [CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption). La didascalia piccola è alta 7 pixel.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CMFCDesktopAlertWnd` utilizzare vari `CMFCDesktopAlertWnd` metodi nella classe per configurare un oggetto. Nell'esempio viene illustrato come impostare un tipo di animazione, impostare la trasparenza della finestra popup, specificare che nella finestra di avviso viene visualizzata una piccola didascalia e impostare il tempo che trascorre prima che la finestra di avviso si chiuda automaticamente. Nell'esempio viene inoltre illustrato come creare e inizializzare la finestra di avviso del desktop. Questo frammento di codice fa parte [dell'esempio Desktop Alert Demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#1](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwnd-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDesktopAlertWnd.h

## <a name="cmfcdesktopalertwndcreate"></a><a name="create"></a>CMFCDesktopAlertWnd::Create

Crea e inizializza la finestra di avviso del desktop.

```
virtual BOOL Create(
    CWnd* pWndOwner,
    UINT uiDlgResID,
    HMENU hMenu = NULL,
    CPoint ptPos = CPoint(-1,-1),
    CRuntimeClass* pRTIDlgBar = RUNTIME_CLASS(CMFCDesktopAlertDialog));

virtual BOOL Create(
    CWnd* pWndOwner,
    CMFCDesktopAlertWndInfo& params,
    HMENU hMenu = NULL,
    CPoint ptPos = CPoint(-1,-1));
```

### <a name="parameters"></a>Parametri

*pWndProprietario*<br/>
[in, out] Specifica il proprietario della finestra di avviso. Tale proprietario riceverà quindi tutte le notifiche per la finestra di avviso del desktop. Questo valore non può essere NULL.

*uiDlgResID (id)goDlgResID (informazioni in cui è in*<br/>
[in] Specifica l'ID risorsa della finestra di avviso.

*Hmenu*<br/>
[in] Specifica il menu che viene visualizzato quando l'utente fa clic sul pulsante di menu. Se NULL, il pulsante di menu non viene visualizzato.

*PtPos*<br/>
[in] Specifica la posizione iniziale in cui viene visualizzata la finestra di avviso, utilizzando le coordinate dello schermo. Se questo parametro è (-1, -1), la finestra di avviso viene visualizzata nell'angolo inferiore destro dello schermo.

*PRTIDlgBar*<br/>
[in] Informazioni sulla classe di runtime per una classe di finestra di dialogo personalizzata che copre l'area client della finestra di avviso.

*params*<br/>
[in] Specifica i parametri utilizzati per creare una finestra di avviso.

### <a name="return-value"></a>Valore restituito

TRUESe la finestra di avviso è stata creata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per creare una finestra di avviso. L'area client della finestra di avviso contiene una finestra di dialogo figlio che ospita tutti i controlli visualizzati all'utente.

Il primo overload del metodo crea una finestra di avviso che contiene una finestra di dialogo figlio che viene caricata dalle risorse dell'applicazione. Il primo overload del metodo può anche specificare informazioni sulla classe di runtime per una classe di finestre di dialogo personalizzate.

Il secondo overload del metodo crea una finestra di avviso che contiene i controlli predefiniti. È possibile specificare i controlli da visualizzare modificando la [classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md).

## <a name="cmfcdesktopalertwndgetanimationspeed"></a><a name="getanimationspeed"></a>CMFCDesktopAlertWnd::GetAnimationSpeed

Restituisce la velocità dell'animazione.

```
UINT GetAnimationSpeed() const;
```

### <a name="return-value"></a>Valore restituito

Velocità di animazione della finestra di avviso, in millisecondi.

### <a name="remarks"></a>Osservazioni

La velocità di animazione descrive la velocità di apertura e chiusura della finestra di avviso.

## <a name="cmfcdesktopalertwndgetanimationtype"></a><a name="getanimationtype"></a>CMFCDesktopAlertWnd::GetAnimationType

Restituisce il tipo di animazione.

```
CMFCPopupMenu::ANIMATION_TYPE GetAnimationType();
```

### <a name="return-value"></a>Valore restituito

Uno dei seguenti tipi di animazione:

- NO_ANIMATION

- Spiegare

- Diapositiva

- Dissolvenza

- SYSTEM_DEFAULT_ANIMATION

## <a name="cmfcdesktopalertwndgetautoclosetime"></a><a name="getautoclosetime"></a>CMFCDesktopAlertWnd::GetAutoCloseTime

Restituisce il timeout di chiusura automatica.

```
int GetAutoCloseTime() const;
```

### <a name="return-value"></a>Valore restituito

Tempo, in millisecondi, dopo il quale la finestra di avviso verrà chiusa automaticamente.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per determinare quanto tempo deve trascorrere prima che la finestra di avviso venga chiusa automaticamente.

## <a name="cmfcdesktopalertwndgetcaptionheight"></a><a name="getcaptionheight"></a>CMFCDesktopAlertWnd::GetCaptionHeight

Restituisce l'altezza della didascalia.

```
virtual int GetCaptionHeight();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, della didascalia.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere sottoposto a override in una classe derivata. L'implementazione predefinita: restituisce il valore di altezza della didascalia piccola (7 pixel) se `GetSystemMetrics(SM_CYSMCAPTION)`nella finestra popup deve visualizzare la didascalia piccola o il valore ottenuto dalla funzione API di Windows .

## <a name="cmfcdesktopalertwndgetlastpos"></a><a name="getlastpos"></a>CMFCDesktopAlertWnd::GetLastPosCMFCDesktopAlertWnd::GetLastPos

Restituisce l'ultima posizione della finestra di avviso del desktop sullo schermo.

```
CPoint GetLastPos() const;
```

### <a name="return-value"></a>Valore restituito

Un punto, in coordinate dello schermo.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce l'ultima posizione valida della finestra di avviso sullo schermo.

## <a name="cmfcdesktopalertwndgettransparency"></a><a name="gettransparency"></a>CMFCDesktopAlertWnd::GetTransparency

Restituisce il livello di trasparenza.

```
BYTE GetTransparency() const;
```

### <a name="return-value"></a>Valore restituito

Livello di trasparenza compreso tra 0 e 255, inclusi. Maggiore è il valore, più opaca è la finestra.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per recuperare il livello di trasparenza corrente della finestra di avviso.

## <a name="cmfcdesktopalertwndhassmallcaption"></a><a name="hassmallcaption"></a>CMFCDesktopAlertWnd::HasSmallCaption

Determina se la finestra di avviso del desktop ha una didascalia piccola o una didascalia di dimensioni normali.

```
BOOL HasSmallCaption() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra popup viene visualizzata con una didascalia piccola; FALSE se la finestra popup viene visualizzata con una didascalia di dimensioni normali.

### <a name="remarks"></a>Osservazioni

Utilizzate questo metodo per determinare se la finestra popup ha una didascalia piccola o una didascalia di dimensioni normali. Per impostazione predefinita, la didascalia piccola è alta 7 pixel. È possibile ottenere l'altezza della didascalia di `GetSystemMetrics(SM_CYCAPTION)`dimensioni normali chiamando la funzione API di Windows .

## <a name="cmfcdesktopalertwndonbeforeshow"></a><a name="onbeforeshow"></a>CMFCDesktopAlertWnd::OnBeforeShow

```
virtual BOOL OnBeforeShow(CPoint&);
```

### <a name="parameters"></a>Parametri

[in] *&CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdesktopalertwndonclicklinkbutton"></a><a name="onclicklinkbutton"></a>CMFCDesktopAlertWnd::OnClickLinkButton

Chiamato dal framework quando l'utente fa clic su un pulsante di collegamento situato nel menu di avviso del desktop.

```
virtual BOOL OnClickLinkButton(UINT uiCmdID);
```

### <a name="parameters"></a>Parametri

*uiCmdID (informazioni in questo icomando)*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata se si desidera ricevere una notifica quando un utente fa clic sul collegamento nella finestra di avviso.

## <a name="cmfcdesktopalertwndoncommand"></a><a name="oncommand"></a>CMFCDesktopAlertWnd::OnCommand

```
virtual BOOL OnCommand(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

[in] *wParam (mcParam)*<br/>

[in] *lParam*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdesktopalertwndondraw"></a><a name="ondraw"></a>CMFCDesktopAlertWnd::OnDraw

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdesktopalertwndprocesscommand"></a><a name="processcommand"></a>CMFCDesktopAlertWnd::ProcessCommand

```
BOOL ProcessCommand(HWND hwnd);
```

### <a name="parameters"></a>Parametri

[in] *hwnd*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="cmfcdesktopalertwndsetanimationspeed"></a><a name="setanimationspeed"></a>CMFCDesktopAlertWnd::SetAnimationSpeed

Imposta la nuova velocità di animazione.

```
void SetAnimationSpeed(UINT nSpeed);
```

### <a name="parameters"></a>Parametri

*nVelocità*<br/>
[in] Specifica la nuova velocità di animazione, in millisecondi.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per impostare la velocità di animazione per la finestra di avviso. La velocità di animazione predefinita è 30 millisecondi.

## <a name="cmfcdesktopalertwndsetanimationtype"></a><a name="setanimationtype"></a>CMFCDesktopAlertWnd::SetAnimationType

Imposta il tipo di animazione.

```
void SetAnimationType(CMFCPopupMenu::ANIMATION_TYPE type);
```

### <a name="parameters"></a>Parametri

*type*<br/>
[in] Specifica il tipo di animazione.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per impostare il tipo di animazione. È possibile specificare uno dei valori seguenti:

- NO_ANIMATION

- Spiegare

- Diapositiva

- Dissolvenza

- SYSTEM_DEFAULT_ANIMATION

## <a name="cmfcdesktopalertwndsetautoclosetime"></a><a name="setautoclosetime"></a>CMFCDesktopAlertWnd::SetAutoCloseTime

Imposta il timeout di chiusura automatica.

```
void SetAutoCloseTime(int nTime);
```

### <a name="parameters"></a>Parametri

*nOra*<br/>
[in] Tempo, in millisecondi, che trascorre prima che la finestra di avviso si chiuda automaticamente.

### <a name="remarks"></a>Osservazioni

La finestra di avviso viene chiusa automaticamente dopo l'ora specificata se l'utente non interagisce con la finestra.

## <a name="cmfcdesktopalertwndsetsmallcaption"></a><a name="setsmallcaption"></a>CMFCDesktopAlertWnd::SetSmallCaption

Consente di passare da una didascalia di dimensioni ridotte a una a una e a una normale.

```
void SetSmallCaption(BOOL bSmallCaption = TRUE);
```

### <a name="parameters"></a>Parametri

*bDidascaliadiina*<br/>
[in] TRUE per specificare che nella finestra di avviso viene visualizzata una piccola didascalia. in caso contrario, FALSE per specificare che nella finestra di avviso viene visualizzata una didascalia di dimensioni normali.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per visualizzare la didascalia di dimensioni ridotte o normali. Per impostazione predefinita, la didascalia piccola è alta 7 pixel. È possibile ottenere la dimensione della didascalia `GetSystemMetrics(SM_CYCAPTION)`regolare chiamando la funzione API di Windows .

## <a name="cmfcdesktopalertwndsettransparency"></a><a name="settransparency"></a>CMFCDesktopAlertWnd::SetTransparency

Imposta il livello di trasparenza della finestra popup.

```
void SetTransparency(BYTE nTransparency);
```

### <a name="parameters"></a>Parametri

*nTrasparenza*<br/>
[in] Specifica il livello di trasparenza. Questo valore deve essere compreso tra 0 e 255 inclusi. Maggiore è il valore, più opaca è la finestra.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare il livello di trasparenza della finestra popup.

## <a name="cmfcdesktopalertwndgetdialogsize"></a><a name="getdialogsize"></a>CMFCDesktopAlertWnd::GetDialogSize

```
virtual CSize GetDialogSize();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCDesktopAlertWndInfo (classe)](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
