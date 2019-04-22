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
ms.openlocfilehash: 3ff74f5025d888077b51f8191f043237597dfdbe
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58776973"
---
# <a name="cmfcdesktopalertwnd-class"></a>CMFCDesktopAlertWnd Class

Il `CMFCDesktopAlertWnd` classe implementa la funzionalità di una finestra di dialogo non modale visualizzata sullo schermo per informare l'utente su un evento.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella cartella **VC\\atlmfc\\src\\mfc** dell'installazione di Visual Studio.
## <a name="syntax"></a>Sintassi

```
class CMFCDesktopAlertWnd : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCDesktopAlertWnd::Create](#create)|Crea e inizializza la finestra di avviso.|
|[CMFCDesktopAlertWnd::GetAnimationSpeed](#getanimationspeed)|Restituisce la velocità dell'animazione.|
|[CMFCDesktopAlertWnd::GetAnimationType](#getanimationtype)|Restituisce il tipo di animazione.|
|[CMFCDesktopAlertWnd::GetAutoCloseTime](#getautoclosetime)|Restituisce il valore di timeout di chiusura automatica.|
|[CMFCDesktopAlertWnd::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia.|
|[CMFCDesktopAlertWnd::GetDialogSize](#getdialogsize)||
|[CMFCDesktopAlertWnd::GetLastPos](#getlastpos)|Restituisce l'ultima posizione valida della finestra di avviso nella schermata.|
|[CMFCDesktopAlertWnd::GetTransparency](#gettransparency)|Restituisce il livello di trasparenza.|
|[CMFCDesktopAlertWnd::HasSmallCaption](#hassmallcaption)|Determina se la finestra di avviso viene visualizzata con la didascalia di piccole dimensioni.|
|[CMFCDesktopAlertWnd::OnBeforeShow](#onbeforeshow)||
|[CMFCDesktopAlertWnd::OnClickLinkButton](#onclicklinkbutton)|Chiamato dal framework quando l'utente fa clic su un pulsante di collegamento nel menu avvisi del desktop.|
|[CMFCDesktopAlertWnd::OnCommand](#oncommand)|Il framework chiama questa funzione membro quando l'utente seleziona un elemento da un menu, quando un controllo figlio invia un messaggio di notifica o quando viene convertita una sequenza di tasti di scelta rapida. (Esegue l'override [CWnd:: OnCommand](../../mfc/reference/cwnd-class.md#oncommand).)|
|[CMFCDesktopAlertWnd::OnDraw](#ondraw)||
|[CMFCDesktopAlertWnd::ProcessCommand](#processcommand)||
|[CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed)|Imposta la nuova velocità dell'animazione.|
|[CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype)|Imposta il tipo di animazione.|
|[CMFCDesktopAlertWnd::SetAutoCloseTime](#setautoclosetime)|Imposta il valore di timeout di chiusura automatica.|
|[CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption)|Passa tra le didascalie di piccole e normale.|
|[CMFCDesktopAlertWnd::SetTransparency](#settransparency)|Imposta il livello di trasparenza.|

## <a name="remarks"></a>Note

Una finestra di avviso può essere trasparente e può essere visualizzato con gli effetti di animazione possibile scompaiono (dopo un periodo di tempo o quando l'utente rifiuta facendo clic sul pulsante Chiudi).

Una finestra di avviso può contenere anche una finestra di dialogo predefinita che a sua volta contiene un'icona, testo del messaggio (etichetta) e un collegamento. In alternativa, una finestra di avviso può contenere una finestra di dialogo personalizzata dalle risorse dell'applicazione.

Si crea una finestra di avviso in due passaggi. In primo luogo, chiamare il costruttore per costruire il `CMFCDesktopAlertWnd` oggetto. In secondo luogo, chiamare il [cmfcdesktopalertwnd:: Create](#create) funzione di membro per creare la finestra e collegarla al `CMFCDesktopAlertWnd` oggetto.

Il `CMFCDesktopAlertWnd` oggetto crea una finestra di dialogo figlio speciali che riempie l'area client della finestra di avviso. La finestra di dialogo possiede tutti i controlli vengono posizionati su di esso.

Per visualizzare una finestra di dialogo personalizzata nella finestra popup, seguire questa procedura:

1. Derivare una classe da `CMFCDesktopAlertDialog`.

1. Creare un modello di finestra di dialogo figlio nelle risorse.

1. Chiamare [cmfcdesktopalertwnd:: Create](#create) utilizzando l'ID risorsa del modello della finestra di dialogo e un puntatore per le informazioni sulla classe di runtime della classe derivata.

1. Programmare la finestra di dialogo personalizzate per gestire tutte le notifiche provenienti dai controlli ospitati oppure programmare i controlli ospitati per gestire direttamente queste notifiche.

Utilizzare le funzioni seguenti per controllare il comportamento della finestra di avviso:

- Impostare il tipo di animazione chiamando [CMFCDesktopAlertWnd::SetAnimationType](#setanimationtype). I valori validi includono Espandi, far scorrere e dissolvenza in entrata.

- Impostare la velocità di frame di animazione chiamando [CMFCDesktopAlertWnd::SetAnimationSpeed](#setanimationspeed).

- Impostare il livello di trasparenza chiamando [CMFCDesktopAlertWnd::SetTransparency](#settransparency).

- Modificare le dimensioni della didascalia di piccole dimensioni chiamando [CMFCDesktopAlertWnd::SetSmallCaption](#setsmallcaption). Didascalia di piccole dimensioni è 7 pixel di altezza.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella `CMFCDesktopAlertWnd` classe per configurare un `CMFCDesktopAlertWnd` oggetto. Nell'esempio viene illustrato come impostare un tipo di animazione, impostare la trasparenza della finestra popup, specificare che la finestra di avviso Visualizza una didascalia di piccole dimensioni e impostare il tempo che deve trascorrere prima che la finestra di avviso deve essere chiuso automaticamente. Nell'esempio viene inoltre illustrato come creare e inizializzare la finestra di avviso. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#1](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwnd-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDesktopAlertWnd.h

##  <a name="create"></a>  CMFCDesktopAlertWnd::Create

Crea e inizializza la finestra di avviso.

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

*pWndOwner*<br/>
[in, out] Specifica il proprietario della finestra di avviso. Tale proprietario riceverà tutte le notifiche per la finestra di avviso. Questo valore non può essere NULL.

*uiDlgResID*<br/>
[in] Specifica l'ID risorsa della finestra di avviso.

*hMenu*<br/>
[in] Specifica il menu che viene visualizzato quando l'utente fa clic sul pulsante di menu. Se NULL, non viene visualizzato il pulsante di menu.

*ptPos*<br/>
[in] Specifica la posizione iniziale in cui viene visualizzata la finestra di avviso, usando le coordinate dello schermo. Se questo parametro (-1, -1), verrà visualizzata la finestra di avviso nell'angolo inferiore destro della schermata.

*pRTIDlgBar*<br/>
[in] Informazioni sulle classi di runtime per una classe di finestra di dialogo personalizzata relativa area client della finestra dell'avviso.

*params*<br/>
[in] Specifica i parametri che vengono usati per creare una finestra di avviso.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di avviso è stata creata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questo metodo per creare una finestra di avviso. L'area client della finestra di avviso contiene una finestra di dialogo figlio che ospita tutti i controlli che vengono visualizzati all'utente.

Il primo overload di metodo crea una finestra di avviso che contiene una finestra di dialogo figlio che viene caricata da risorse dell'applicazione. Il primo overload del metodo è anche possibile specificare informazioni sulla classe di runtime per una classe di finestra di dialogo personalizzate.

Il secondo overload del metodo crea una finestra di avviso che contiene i controlli predefiniti. È possibile specificare quali controlli per visualizzare, modificare il [classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md).

##  <a name="getanimationspeed"></a>  CMFCDesktopAlertWnd::GetAnimationSpeed

Restituisce la velocità dell'animazione.

```
UINT GetAnimationSpeed() const;
```

### <a name="return-value"></a>Valore restituito

La velocità dell'animazione della finestra di avviso, espresso in millisecondi.

### <a name="remarks"></a>Note

La velocità dell'animazione descrive la velocità di apre e chiude la finestra di avviso.

##  <a name="getanimationtype"></a>  CMFCDesktopAlertWnd::GetAnimationType

Restituisce il tipo di animazione.

```
CMFCPopupMenu::ANIMATION_TYPE GetAnimationType();
```

### <a name="return-value"></a>Valore restituito

Uno dei tipi di animazione seguente:

- NO_ANIMATION

- ESPANDI

- DIAPOSITIVA

- DISSOLVENZA IN ENTRATA

- SYSTEM_DEFAULT_ANIMATION

##  <a name="getautoclosetime"></a>  CMFCDesktopAlertWnd::GetAutoCloseTime

Restituisce il valore di timeout di chiusura automatica.

```
int GetAutoCloseTime() const;
```

### <a name="return-value"></a>Valore restituito

Il tempo, espresso in millisecondi, dopo il quale l'avviso finestra verrà chiusa automaticamente.

### <a name="remarks"></a>Note

Utilizzare questo metodo per determinare quanto tempo deve trascorrere prima che la finestra di avviso verrà chiusa automaticamente.

##  <a name="getcaptionheight"></a>  CMFCDesktopAlertWnd::GetCaptionHeight

Restituisce l'altezza della didascalia.

```
virtual int GetCaptionHeight();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, della didascalia.

### <a name="remarks"></a>Note

Questo metodo può essere sottoposto a override in una classe derivata. L'implementazione predefinita entrambi: restituisce il valore di altezza della didascalia piccola (7 pixel) se la finestra popup devono essere visualizzati didascalia di piccole dimensioni o il valore ottenuto dalla funzione API Windows `GetSystemMetrics(SM_CYSMCAPTION)`.

##  <a name="getlastpos"></a>  CMFCDesktopAlertWnd::GetLastPos

Restituisce l'ultima posizione della finestra di avviso nella schermata.

```
CPoint GetLastPos() const;
```

### <a name="return-value"></a>Valore restituito

Un punto, nelle coordinate dello schermo.

### <a name="remarks"></a>Note

Questo metodo restituisce l'ultima posizione valida della finestra di avviso nella schermata.

##  <a name="gettransparency"></a>  CMFCDesktopAlertWnd::GetTransparency

Restituisce il livello di trasparenza.

```
BYTE GetTransparency() const;
```

### <a name="return-value"></a>Valore restituito

Un livello di trasparenza compreso tra 0 e 255 inclusi. Maggiore è il valore, maggiore è l'opacità di finestra.

### <a name="remarks"></a>Note

Utilizzare questo metodo per recuperare il livello di trasparenza corrente della finestra di avviso.

##  <a name="hassmallcaption"></a>  CMFCDesktopAlertWnd::HasSmallCaption

Determina se la finestra di avviso ha una didascalia di piccole dimensioni o una didascalia di dimensioni normali.

```
BOOL HasSmallCaption() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se viene visualizzata la finestra popup con una didascalia di piccole dimensioni; FALSE se viene visualizzata la finestra popup con una didascalia di dimensioni normali.

### <a name="remarks"></a>Note

Utilizzare questo metodo per determinare se la finestra popup ha una didascalia di piccole dimensioni o una didascalia di dimensioni normali. Per impostazione predefinita, la didascalia di piccole dimensioni è 7 pixel di altezza. È possibile ottenere l'altezza della didascalia di dimensioni normali, chiamando la funzione API Windows `GetSystemMetrics(SM_CYCAPTION)`.

##  <a name="onbeforeshow"></a>  CMFCDesktopAlertWnd::OnBeforeShow

```
virtual BOOL OnBeforeShow(CPoint&);
```

### <a name="parameters"></a>Parametri

[in] *CPoint &*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="onclicklinkbutton"></a>  CMFCDesktopAlertWnd::OnClickLinkButton

Chiamato dal framework quando l'utente fa clic su un pulsante di collegamento nel menu avvisi del desktop.

```
virtual BOOL OnClickLinkButton(UINT uiCmdID);
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
[in] Questo parametro non viene utilizzato.

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata se si desidera ricevere una notifica quando un utente fa clic sul collegamento nella finestra di avviso.

##  <a name="oncommand"></a>  CMFCDesktopAlertWnd::OnCommand

```
virtual BOOL OnCommand(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

[in] *wParam*<br/>

[in] *lParam*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="ondraw"></a>  CMFCDesktopAlertWnd::OnDraw

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

[in] *pDC*<br/>

### <a name="remarks"></a>Note

##  <a name="processcommand"></a>  CMFCDesktopAlertWnd::ProcessCommand

```
BOOL ProcessCommand(HWND hwnd);
```

### <a name="parameters"></a>Parametri

[in] *hwnd*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

##  <a name="setanimationspeed"></a>  CMFCDesktopAlertWnd::SetAnimationSpeed

Imposta la nuova velocità dell'animazione.

```
void SetAnimationSpeed(UINT nSpeed);
```

### <a name="parameters"></a>Parametri

*nSpeed*<br/>
[in] Specifica la nuova velocità dell'animazione, in millisecondi.

### <a name="remarks"></a>Note

Chiamare questo metodo per impostare la velocità dell'animazione per la finestra di avviso. La velocità dell'animazione predefinito è 30 millisecondi.

##  <a name="setanimationtype"></a>  CMFCDesktopAlertWnd::SetAnimationType

Imposta il tipo di animazione.

```
void SetAnimationType(CMFCPopupMenu::ANIMATION_TYPE type);
```

### <a name="parameters"></a>Parametri

*type*<br/>
[in] Specifica il tipo di animazione.

### <a name="remarks"></a>Note

Chiamare questo metodo per impostare il tipo di animazione. È possibile specificare uno dei valori seguenti:

- NO_ANIMATION

- ESPANDI

- DIAPOSITIVA

- DISSOLVENZA IN ENTRATA

- SYSTEM_DEFAULT_ANIMATION

##  <a name="setautoclosetime"></a>  CMFCDesktopAlertWnd::SetAutoCloseTime

Imposta il valore di timeout di chiusura automatica.

```
void SetAutoCloseTime(int nTime);
```

### <a name="parameters"></a>Parametri

*nTime*<br/>
[in] Il tempo, espresso in millisecondi, che deve trascorrere prima che la finestra di avviso deve essere chiuso automaticamente.

### <a name="remarks"></a>Note

Finestra di avviso viene chiuso automaticamente dopo il periodo di tempo specificato, se l'utente non interagisce con la finestra.

##  <a name="setsmallcaption"></a>  CMFCDesktopAlertWnd::SetSmallCaption

Passa tra le didascalie di piccole dimensioni e dimensioni normali.

```
void SetSmallCaption(BOOL bSmallCaption = TRUE);
```

### <a name="parameters"></a>Parametri

*bSmallCaption*<br/>
[in] TRUE per specificare che la finestra di avviso Visualizza una didascalia di piccole dimensioni; in caso contrario, FALSE per specificare che la finestra di avviso Visualizza una didascalia di dimensioni normali.

### <a name="remarks"></a>Note

Chiamare questo metodo per visualizzare la didascalia di piccole dimensioni o di dimensioni normali. Per impostazione predefinita, la didascalia di piccole dimensioni è 7 pixel di altezza. È possibile ottenere le dimensioni della didascalia regolare chiamando la funzione API Windows `GetSystemMetrics(SM_CYCAPTION)`.

##  <a name="settransparency"></a>  CMFCDesktopAlertWnd::SetTransparency

Imposta il livello di trasparenza della finestra popup.

```
void SetTransparency(BYTE nTransparency);
```

### <a name="parameters"></a>Parametri

*nTransparency*<br/>
[in] Specifica il livello di trasparenza. Questo valore deve essere compreso tra 0 e 255 inclusi. Maggiore è il valore, maggiore è l'opacità di finestra.

### <a name="remarks"></a>Note

Chiamare questa funzione per impostare il livello di trasparenza della finestra popup.

##  <a name="getdialogsize"></a>  CMFCDesktopAlertWnd::GetDialogSize

```
virtual CSize GetDialogSize();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
