---
description: 'Altre informazioni su: classe CMFCDesktopAlertWnd'
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
ms.openlocfilehash: 45b75bdbd24a88a7eacff124bb07ac81e7703c31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330091"
---
# <a name="cmfcdesktopalertwnd-class"></a>CMFCDesktopAlertWnd Class

La `CMFCDesktopAlertWnd` classe implementa la funzionalità di una finestra di dialogo non modale visualizzata sullo schermo per informare l'utente di un evento.

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

## <a name="syntax"></a>Sintassi

```
class CMFCDesktopAlertWnd : public CWnd
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCDesktopAlertWnd:: create](#create)|Crea e inizializza la finestra di avviso del desktop.|
|[CMFCDesktopAlertWnd:: GetAnimationSpeed](#getanimationspeed)|Restituisce la velocità dell'animazione.|
|[CMFCDesktopAlertWnd:: GetAnimationType](#getanimationtype)|Restituisce il tipo di animazione.|
|[CMFCDesktopAlertWnd:: GetAutoCloseTime](#getautoclosetime)|Restituisce il timeout di chiusura automatica.|
|[CMFCDesktopAlertWnd:: GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza della didascalia.|
|[CMFCDesktopAlertWnd:: GetDialogSize](#getdialogsize)||
|[CMFCDesktopAlertWnd:: GetLastPos](#getlastpos)|Restituisce l'ultima posizione valida della finestra di avviso del desktop sullo schermo.|
|[CMFCDesktopAlertWnd:: getTransparency](#gettransparency)|Restituisce il livello di trasparenza.|
|[CMFCDesktopAlertWnd:: HasSmallCaption](#hassmallcaption)|Determina se la finestra di avviso del desktop viene visualizzata con la didascalia di piccole dimensioni.|
|[CMFCDesktopAlertWnd:: OnBeforeShow](#onbeforeshow)||
|[CMFCDesktopAlertWnd:: OnClickLinkButton](#onclicklinkbutton)|Chiamata eseguita dal framework quando l'utente fa clic su un pulsante di collegamento presente nel menu di avviso del desktop.|
|[CMFCDesktopAlertWnd:: OnCommand](#oncommand)|Il Framework chiama questa funzione membro quando l'utente seleziona un elemento da un menu, quando un controllo figlio invia un messaggio di notifica o quando viene convertita una sequenza di tasti di scelta rapida. Esegue l'override di [CWnd:: OnCommand](../../mfc/reference/cwnd-class.md#oncommand).|
|[CMFCDesktopAlertWnd:: onpare](#ondraw)||
|[CMFCDesktopAlertWnd::P rocessCommand](#processcommand)||
|[CMFCDesktopAlertWnd:: SetAnimationSpeed](#setanimationspeed)|Imposta la nuova velocità dell'animazione.|
|[CMFCDesktopAlertWnd:: SetAnimationType](#setanimationtype)|Imposta il tipo di animazione.|
|[CMFCDesktopAlertWnd:: SetAutoCloseTime](#setautoclosetime)|Imposta il timeout di chiusura automatica.|
|[CMFCDesktopAlertWnd:: SetSmallCaption](#setsmallcaption)|Passa tra le didascalie piccole e normali.|
|[CMFCDesktopAlertWnd:: setransparency](#settransparency)|Imposta il livello di trasparenza.|

## <a name="remarks"></a>Commenti

Una finestra di avviso del desktop può essere trasparente, può essere visualizzata con effetti di animazione e può scomparire (dopo un ritardo specificato o quando l'utente lo chiude facendo clic sul pulsante Chiudi).

Una finestra di avviso del desktop può inoltre contenere una finestra di dialogo predefinita che a sua volta contiene un'icona, un testo del messaggio (un'etichetta) e un collegamento. In alternativa, una finestra di avviso del desktop può contenere una finestra di dialogo personalizzata dalle risorse dell'applicazione.

Si crea una finestra di avviso del desktop in due passaggi. Chiamare innanzitutto il costruttore per costruire l' `CMFCDesktopAlertWnd` oggetto. In secondo luogo, chiamare la funzione membro [CMFCDesktopAlertWnd:: create](#create) per creare la finestra e collegarla all' `CMFCDesktopAlertWnd` oggetto.

L' `CMFCDesktopAlertWnd` oggetto crea una finestra di dialogo figlio speciale che riempie l'area client della finestra di avviso del desktop. La finestra di dialogo è proprietaria di tutti i controlli posizionati su di esso.

Per visualizzare una finestra di dialogo personalizzata nella finestra popup, attenersi alla seguente procedura:

1. Derivare una classe da `CMFCDesktopAlertDialog`.

1. Creare un modello di finestra di dialogo figlio nelle risorse.

1. Chiamare [CMFCDesktopAlertWnd:: create](#create) usando l'ID risorsa del modello di finestra di dialogo e un puntatore alle informazioni sulla classe di runtime della classe derivata.

1. Programmare la finestra di dialogo personalizzata per gestire tutte le notifiche provenienti dai controlli ospitati oppure programmare i controlli ospitati per gestire direttamente queste notifiche.

Usare le funzioni seguenti per controllare il comportamento della finestra di avviso del desktop:

- Impostare il tipo di animazione chiamando [CMFCDesktopAlertWnd:: SetAnimationType](#setanimationtype). Le opzioni valide includono Espandi, diapositiva e dissolvenza.

- Impostare la velocità del frame di animazione chiamando [CMFCDesktopAlertWnd:: SetAnimationSpeed](#setanimationspeed).

- Impostare il livello di trasparenza chiamando [CMFCDesktopAlertWnd:: setransparency](#settransparency).

- Modificare le dimensioni della didascalia in Small chiamando [CMFCDesktopAlertWnd:: SetSmallCaption](#setsmallcaption). La didascalia piccola è alta 7 pixel.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi della `CMFCDesktopAlertWnd` classe per configurare un `CMFCDesktopAlertWnd` oggetto. Nell'esempio viene illustrato come impostare un tipo di animazione, impostare la trasparenza della finestra popup, specificare che nella finestra di avviso viene visualizzata una didascalia di piccole dimensioni e impostare il tempo che trascorre prima che la finestra di avviso venga chiusa automaticamente. Nell'esempio viene inoltre illustrato come creare e inizializzare la finestra di avviso del desktop. Questo frammento di codice fa parte dell' [esempio Desktop Alert demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#1](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwnd-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDesktopAlertWnd. h

## <a name="cmfcdesktopalertwndcreate"></a><a name="create"></a> CMFCDesktopAlertWnd:: create

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

*pWndOwner*<br/>
[in, out] Specifica il proprietario della finestra di avviso. Il proprietario riceverà quindi tutte le notifiche per la finestra di avviso del desktop. Questo valore non può essere NULL.

*uiDlgResID*<br/>
in Specifica l'ID risorsa della finestra di avviso.

*hMenu*<br/>
in Specifica il menu visualizzato quando l'utente fa clic sul pulsante di menu. Se è NULL, il pulsante di menu non viene visualizzato.

*ptPos*<br/>
in Specifica la posizione iniziale in cui viene visualizzata la finestra di avviso, usando le coordinate dello schermo. Se questo parametro è (-1,-1), la finestra di avviso viene visualizzata nell'angolo inferiore destro dello schermo.

*pRTIDlgBar*<br/>
in Informazioni sulla classe di runtime per una classe di finestre di dialogo personalizzata che copre l'area client della finestra di avviso.

*params*<br/>
in Specifica i parametri utilizzati per creare una finestra di avviso.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di avviso è stata creata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per creare una finestra di avviso. L'area client della finestra di avviso contiene una finestra di dialogo figlio che ospita tutti i controlli visualizzati dall'utente.

Il primo overload del metodo crea una finestra di avviso che contiene una finestra di dialogo figlio caricata dalle risorse dell'applicazione. Il primo overload del metodo può inoltre specificare le informazioni sulla classe di runtime per una classe personalizzata della finestra di dialogo.

Il secondo overload del metodo crea una finestra di avviso che contiene i controlli predefiniti. È possibile specificare i controlli da visualizzare modificando la [classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md).

## <a name="cmfcdesktopalertwndgetanimationspeed"></a><a name="getanimationspeed"></a> CMFCDesktopAlertWnd:: GetAnimationSpeed

Restituisce la velocità dell'animazione.

```
UINT GetAnimationSpeed() const;
```

### <a name="return-value"></a>Valore restituito

Velocità di animazione della finestra di avviso, in millisecondi.

### <a name="remarks"></a>Commenti

La velocità di animazione descrive la velocità con cui la finestra di avviso viene aperta e chiusa.

## <a name="cmfcdesktopalertwndgetanimationtype"></a><a name="getanimationtype"></a> CMFCDesktopAlertWnd:: GetAnimationType

Restituisce il tipo di animazione.

```
CMFCPopupMenu::ANIMATION_TYPE GetAnimationType();
```

### <a name="return-value"></a>Valore restituito

Uno dei tipi di animazione seguenti:

- NO_ANIMATION

- SVOLGERSI

- DIAPOSITIVA

- DISSOLVENZA

- SYSTEM_DEFAULT_ANIMATION

## <a name="cmfcdesktopalertwndgetautoclosetime"></a><a name="getautoclosetime"></a> CMFCDesktopAlertWnd:: GetAutoCloseTime

Restituisce il timeout di chiusura automatica.

```
int GetAutoCloseTime() const;
```

### <a name="return-value"></a>Valore restituito

Tempo, in millisecondi, dopo il quale la finestra di avviso verrà chiusa automaticamente.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per determinare la quantità di tempo che deve trascorrere prima che la finestra di avviso venga chiusa automaticamente.

## <a name="cmfcdesktopalertwndgetcaptionheight"></a><a name="getcaptionheight"></a> CMFCDesktopAlertWnd:: GetCaptionHeight

Restituisce l'altezza della didascalia.

```
virtual int GetCaptionHeight();
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, della didascalia.

### <a name="remarks"></a>Commenti

Questo metodo può essere sottoposto a override in una classe derivata. L'implementazione predefinita è: restituisce il valore dell'altezza della didascalia piccola (7 pixel) se nella finestra popup deve essere visualizzata la didascalia piccola o il valore ottenuto dalla funzione API Windows `GetSystemMetrics(SM_CYSMCAPTION)` .

## <a name="cmfcdesktopalertwndgetlastpos"></a><a name="getlastpos"></a> CMFCDesktopAlertWnd:: GetLastPos

Restituisce l'ultima posizione della finestra di avviso del desktop sullo schermo.

```
CPoint GetLastPos() const;
```

### <a name="return-value"></a>Valore restituito

Punto, in coordinate dello schermo.

### <a name="remarks"></a>Commenti

Questo metodo restituisce l'ultima posizione valida della finestra di avviso sullo schermo.

## <a name="cmfcdesktopalertwndgettransparency"></a><a name="gettransparency"></a> CMFCDesktopAlertWnd:: getTransparency

Restituisce il livello di trasparenza.

```
BYTE GetTransparency() const;
```

### <a name="return-value"></a>Valore restituito

Livello di trasparenza compreso tra 0 e 255 inclusi. Maggiore è il valore, maggiore è l'opacità della finestra.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per recuperare il livello di trasparenza corrente della finestra di avviso.

## <a name="cmfcdesktopalertwndhassmallcaption"></a><a name="hassmallcaption"></a> CMFCDesktopAlertWnd:: HasSmallCaption

Determina se la finestra di avviso del desktop ha una didascalia di piccole dimensioni o una didascalia di dimensioni regolari.

```
BOOL HasSmallCaption() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra popup viene visualizzata con una didascalia piccola; FALSE se la finestra popup viene visualizzata con una didascalia di dimensioni regolari.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per determinare se la finestra popup presenta una didascalia di piccole dimensioni o una didascalia di dimensioni regolari. Per impostazione predefinita, la didascalia piccola è alta 7 pixel. È possibile ottenere l'altezza della didascalia di dimensioni regolari chiamando la funzione API di Windows `GetSystemMetrics(SM_CYCAPTION)` .

## <a name="cmfcdesktopalertwndonbeforeshow"></a><a name="onbeforeshow"></a> CMFCDesktopAlertWnd:: OnBeforeShow

```
virtual BOOL OnBeforeShow(CPoint&);
```

### <a name="parameters"></a>Parametri

in *&CPoint*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndonclicklinkbutton"></a><a name="onclicklinkbutton"></a> CMFCDesktopAlertWnd:: OnClickLinkButton

Chiamata eseguita dal framework quando l'utente fa clic su un pulsante di collegamento presente nel menu di avviso del desktop.

```
virtual BOOL OnClickLinkButton(UINT uiCmdID);
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
in Questo parametro non viene utilizzato.

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata se si desidera ricevere una notifica quando un utente fa clic sul collegamento nella finestra di avviso.

## <a name="cmfcdesktopalertwndoncommand"></a><a name="oncommand"></a> CMFCDesktopAlertWnd:: OnCommand

```
virtual BOOL OnCommand(
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

in *wParam*<br/>

in *lParam*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndondraw"></a><a name="ondraw"></a> CMFCDesktopAlertWnd:: onpare

```
virtual void OnDraw(CDC* pDC);
```

### <a name="parameters"></a>Parametri

in *PDC*<br/>

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndprocesscommand"></a><a name="processcommand"></a> CMFCDesktopAlertWnd::P rocessCommand

```
BOOL ProcessCommand(HWND hwnd);
```

### <a name="parameters"></a>Parametri

in *HWND*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndsetanimationspeed"></a><a name="setanimationspeed"></a> CMFCDesktopAlertWnd:: SetAnimationSpeed

Imposta la nuova velocità dell'animazione.

```cpp
void SetAnimationSpeed(UINT nSpeed);
```

### <a name="parameters"></a>Parametri

*nSpeed*<br/>
in Specifica la nuova velocità di animazione, in millisecondi.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per impostare la velocità di animazione per la finestra di avviso. La velocità di animazione predefinita è 30 millisecondi.

## <a name="cmfcdesktopalertwndsetanimationtype"></a><a name="setanimationtype"></a> CMFCDesktopAlertWnd:: SetAnimationType

Imposta il tipo di animazione.

```cpp
void SetAnimationType(CMFCPopupMenu::ANIMATION_TYPE type);
```

### <a name="parameters"></a>Parametri

*type*<br/>
in Specifica il tipo di animazione.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per impostare il tipo di animazione. È possibile specificare uno dei valori seguenti:

- NO_ANIMATION

- SVOLGERSI

- DIAPOSITIVA

- DISSOLVENZA

- SYSTEM_DEFAULT_ANIMATION

## <a name="cmfcdesktopalertwndsetautoclosetime"></a><a name="setautoclosetime"></a> CMFCDesktopAlertWnd:: SetAutoCloseTime

Imposta il timeout di chiusura automatica.

```cpp
void SetAutoCloseTime(int nTime);
```

### <a name="parameters"></a>Parametri

*nIntervallo*<br/>
in Tempo, in millisecondi, che trascorre prima che la finestra di avviso venga chiusa automaticamente.

### <a name="remarks"></a>Commenti

La finestra di avviso viene chiusa automaticamente dopo l'ora specificata se l'utente non interagisce con la finestra.

## <a name="cmfcdesktopalertwndsetsmallcaption"></a><a name="setsmallcaption"></a> CMFCDesktopAlertWnd:: SetSmallCaption

Passa tra le didascalie di dimensioni ridotte e normali.

```cpp
void SetSmallCaption(BOOL bSmallCaption = TRUE);
```

### <a name="parameters"></a>Parametri

*bSmallCaption*<br/>
in TRUE per specificare che la finestra di avviso Visualizza una didascalia piccola; in caso contrario, FALSE per specificare che nella finestra di avviso viene visualizzata una didascalia di dimensioni regolari.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per visualizzare la didascalia di dimensioni ridotte o regolari. Per impostazione predefinita, la didascalia piccola è alta 7 pixel. È possibile ottenere le dimensioni della didascalia normale chiamando la funzione API di Windows `GetSystemMetrics(SM_CYCAPTION)` .

## <a name="cmfcdesktopalertwndsettransparency"></a><a name="settransparency"></a> CMFCDesktopAlertWnd:: setransparency

Imposta il livello di trasparenza della finestra popup.

```cpp
void SetTransparency(BYTE nTransparency);
```

### <a name="parameters"></a>Parametri

*nTransparency*<br/>
in Specifica il livello di trasparenza. Questo valore deve essere compreso tra 0 e 255, inclusi. Maggiore è il valore, maggiore è l'opacità della finestra.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per impostare il livello di trasparenza della finestra popup.

## <a name="cmfcdesktopalertwndgetdialogsize"></a><a name="getdialogsize"></a> CMFCDesktopAlertWnd:: GetDialogSize

```
virtual CSize GetDialogSize();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)
