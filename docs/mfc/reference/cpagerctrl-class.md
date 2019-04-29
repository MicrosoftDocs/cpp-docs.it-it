---
title: Classe CPagerCtrl
ms.date: 11/04/2016
f1_keywords:
- CPagerCtrl
- AFXCMN/CPagerCtrl
- AFXCMN/CPagerCtrl::CPagerCtrl
- AFXCMN/CPagerCtrl::Create
- AFXCMN/CPagerCtrl::CreateEx
- AFXCMN/CPagerCtrl::ForwardMouse
- AFXCMN/CPagerCtrl::GetBkColor
- AFXCMN/CPagerCtrl::GetBorder
- AFXCMN/CPagerCtrl::GetButtonSize
- AFXCMN/CPagerCtrl::GetButtonState
- AFXCMN/CPagerCtrl::GetDropTarget
- AFXCMN/CPagerCtrl::GetScrollPos
- AFXCMN/CPagerCtrl::IsButtonDepressed
- AFXCMN/CPagerCtrl::IsButtonGrayed
- AFXCMN/CPagerCtrl::IsButtonHot
- AFXCMN/CPagerCtrl::IsButtonInvisible
- AFXCMN/CPagerCtrl::IsButtonNormal
- AFXCMN/CPagerCtrl::RecalcSize
- AFXCMN/CPagerCtrl::SetBkColor
- AFXCMN/CPagerCtrl::SetBorder
- AFXCMN/CPagerCtrl::SetButtonSize
- AFXCMN/CPagerCtrl::SetChild
- AFXCMN/CPagerCtrl::SetScrollPos
helpviewer_keywords:
- CPagerCtrl [MFC], CPagerCtrl
- CPagerCtrl [MFC], Create
- CPagerCtrl [MFC], CreateEx
- CPagerCtrl [MFC], ForwardMouse
- CPagerCtrl [MFC], GetBkColor
- CPagerCtrl [MFC], GetBorder
- CPagerCtrl [MFC], GetButtonSize
- CPagerCtrl [MFC], GetButtonState
- CPagerCtrl [MFC], GetDropTarget
- CPagerCtrl [MFC], GetScrollPos
- CPagerCtrl [MFC], IsButtonDepressed
- CPagerCtrl [MFC], IsButtonGrayed
- CPagerCtrl [MFC], IsButtonHot
- CPagerCtrl [MFC], IsButtonInvisible
- CPagerCtrl [MFC], IsButtonNormal
- CPagerCtrl [MFC], RecalcSize
- CPagerCtrl [MFC], SetBkColor
- CPagerCtrl [MFC], SetBorder
- CPagerCtrl [MFC], SetButtonSize
- CPagerCtrl [MFC], SetChild
- CPagerCtrl [MFC], SetScrollPos
ms.assetid: 65ac58dd-4f5e-4b7e-b15c-e0d435a7e884
ms.openlocfilehash: 648bc17f0f130b831aa619b90ed13ba6be35b4d4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62373245"
---
# <a name="cpagerctrl-class"></a>Classe CPagerCtrl

La classe `CPagerCtrl` esegue il wrapping del controllo pager di Windows, che può scorrere all'interno della visualizzazione una finestra contenuta che non rientra nella finestra contenitore.

## <a name="syntax"></a>Sintassi

```
class CPagerCtrl : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPagerCtrl::CPagerCtrl](#cpagerctrl)|Costruisce un oggetto `CPagerCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPagerCtrl::Create](#create)|Crea un controllo pager con gli stili specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.|
|[CPagerCtrl::CreateEx](#createex)|Crea un controllo pager con stili estesi specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.|
|[CPagerCtrl::ForwardMouse](#forwardmouse)|Abilita o disabilita l'inoltro [WM_MOUSEMOVE](/windows/desktop/inputdev/wm-mousemove) messaggi alla finestra che è contenuto nel controllo pager corrente.|
|[CPagerCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo del controllo pager corrente.|
|[CPagerCtrl::GetBorder](#getborder)|Recupera la dimensione del bordo del controllo pager corrente.|
|[CPagerCtrl::GetButtonSize](#getbuttonsize)|Recupera la dimensione del pulsante del controllo pager corrente.|
|[CPagerCtrl::GetButtonState](#getbuttonstate)|Recupera lo stato del pulsante specificato del controllo pager corrente.|
|[CPagerCtrl::GetDropTarget](#getdroptarget)|Recupera le [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget) interfaccia per il controllo pager corrente.|
|[CPagerCtrl::GetScrollPos](#getscrollpos)|Recupera la posizione di scorrimento del controllo pager corrente.|
|[CPagerCtrl::IsButtonDepressed](#isbuttondepressed)|Indica se il pulsante specificato del controllo pager corrente è in `pressed` dello stato.|
|[CPagerCtrl::IsButtonGrayed](#isbuttongrayed)|Indica se il pulsante specificato del controllo pager corrente è in `grayed` dello stato.|
|[CPagerCtrl::IsButtonHot](#isbuttonhot)|Indica se il pulsante specificato del controllo pager corrente è in `hot` dello stato.|
|[CPagerCtrl::IsButtonInvisible](#isbuttoninvisible)|Indica se il pulsante specificato del controllo pager corrente è in `invisible` dello stato.|
|[CPagerCtrl::IsButtonNormal](#isbuttonnormal)|Indica se il pulsante specificato del controllo pager corrente è in `normal` dello stato.|
|[CPagerCtrl::RecalcSize](#recalcsize)|Fa sì che il controllo pager corrente ricalcolare le dimensioni della finestra contenuta.|
|[CPagerCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo del controllo pager corrente.|
|[CPagerCtrl::SetBorder](#setborder)|Imposta la dimensione del bordo del controllo pager corrente.|
|[CPagerCtrl::SetButtonSize](#setbuttonsize)|Imposta le dimensioni del pulsante del controllo pager corrente.|
|[CPagerCtrl::SetChild](#setchild)|Imposta la finestra indipendente per il controllo pager corrente.|
|[CPagerCtrl::SetScrollPos](#setscrollpos)|Imposta la posizione di scorrimento del controllo pager corrente.|

## <a name="remarks"></a>Note

Un controllo pager è una finestra che contiene un'altra finestra che è lineare e maggiore della finestra contenitore e consente di scorrere la finestra contenuta nella visualizzazione. Il controllo pager Visualizza due pulsanti di scorrimento che scompaiono automaticamente quando si scorre la finestra contenuta per renderne più lontano e poi riapparire in caso contrario. È possibile creare un controllo pager che scorre orizzontalmente o verticalmente.

Ad esempio, se l'applicazione presenta una barra degli strumenti che non è sufficientemente ampio per visualizzare tutti i relativi elementi, è possibile assegnare la barra degli strumenti a un controllo pager e gli utenti saranno in grado di scorrere la barra degli strumenti a sinistra o destra per accedere a tutti gli elementi. Microsoft Internet Explorer versione 4.0 (versione commctrl.dll 4.71) introduce il controllo pager.

Il `CPagerCtrl` classe è derivata dal [CWnd](../../mfc/reference/cwnd-class.md) classe. Per altre informazioni e per un'illustrazione di un controllo pager, vedere [controlli Pager](/windows/desktop/Controls/pager-controls).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPagerCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

##  <a name="cpagerctrl"></a>  CPagerCtrl::CPagerCtrl

Costruisce un oggetto `CPagerCtrl`.

```
CPagerCtrl();
```

### <a name="remarks"></a>Note

Usare la [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) per creare un controllo pager e associarlo al `CPagerCtrl` oggetto.

##  <a name="create"></a>  CPagerCtrl::Create

Crea un controllo pager con gli stili specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwStyle*|[in] Una combinazione bit per bit (OR) di [stili window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [stili del controllo pager](/windows/desktop/Controls/pager-control-styles) da applicare al controllo.|
|*rect*|[in] Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che contiene la posizione e dimensioni del controllo in base alle coordinate client.|
|*pParentWnd*|[in] Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo. Questo parametro non può essere NULL.|
|*nID*|[in] L'ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per creare un controllo pager, dichiarare un `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) oppure [CPagerCtrl::CreateEx](#createex) metodo su tale variabile.

### <a name="example"></a>Esempio

Nell'esempio seguente crea un controllo pager, quindi Usa il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo di 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

##  <a name="createex"></a>  CPagerCtrl::CreateEx

Crea un controllo pager con stili estesi specificati e lo collega all'oggetto corrente `CPagerCtrl` oggetto.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*dwExStyle*|[in] Combinazione bit per bit degli stili estesi da applicare al controllo. Per altre informazioni, vedere la *dwExStyle* parametro delle [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) (funzione).|
|*dwStyle*|[in] Una combinazione bit per bit (OR) di [stili window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [stili del controllo pager](/windows/desktop/Controls/pager-control-styles) da applicare al controllo.|
|*rect*|[in] Un riferimento a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che contiene la posizione e dimensioni del controllo in base alle coordinate client.|
|*pParentWnd*|[in] Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo. Questo parametro non può essere NULL.|
|*nID*|[in] L'ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per creare un controllo pager, dichiarare un `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) oppure [CPagerCtrl::CreateEx](#createex) metodo su tale variabile.

##  <a name="forwardmouse"></a>  CPagerCtrl::ForwardMouse

Abilita o disabilita l'inoltro [WM_MOUSEMOVE](/windows/desktop/inputdev/wm-mousemove) messaggi alla finestra che è contenuto nel controllo pager corrente.

```
void ForwardMouse(BOOL bForward);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*bForward*|[in] True per i messaggi del mouse avanti o FALSE per non inoltrare i messaggi del mouse.|

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_FORWARDMOUSE](/windows/desktop/Controls/pgm-forwardmouse) messaggio, che è descritti nel SDK di Windows.

##  <a name="getborder"></a>  CPagerCtrl::GetBorder

Recupera la dimensione del bordo del controllo pager corrente.

```
int GetBorder() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni correnti del bordo, misurato in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBORDER](/windows/desktop/Controls/pgm-getborder) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio seguente usa il [CPagerCtrl::GetBorder](#getborder) metodo per recuperare lo spessore del bordo del controllo pager.

[!code-cpp[NVC_MFC_CSplitButton_s2#5](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]

##  <a name="getbkcolor"></a>  CPagerCtrl::GetBkColor

Recupera il colore di sfondo del controllo pager corrente.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore che contiene il colore di sfondo corrente del controllo pager.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBKCOLOR](/windows/desktop/Controls/pgm-getbkcolor) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio seguente usa il [CPagerCtrl::SetBkColor](#setbkcolor) metodo per impostare il colore di sfondo del controllo pager in rosso e il [CPagerCtrl::GetBkColor](#getbkcolor) metodo per confermare che è stata apportata la modifica.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

##  <a name="getbuttonsize"></a>  CPagerCtrl::GetButtonSize

Recupera la dimensione del pulsante del controllo pager corrente.

```
int GetButtonSize() const;
```

### <a name="return-value"></a>Valore restituito

Pulsante dimensione corrente, misurata in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBUTTONSIZE](/windows/desktop/Controls/pgm-getbuttonsize) messaggio, che è descritti nel SDK di Windows.

Se il controllo pager PGS_HORZ lo stile, le dimensioni del pulsante determinano lo spessore dei pulsanti di spostamento e se il controllo pager PGS_VERT lo stile, le dimensioni del pulsante determinano l'altezza dei pulsanti di spostamento. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).

##  <a name="getbuttonstate"></a>  CPagerCtrl::GetButtonState

Recupera lo stato del pulsante di scorrimento specificato nel controllo pager corrente.

```
DWORD GetButtonState(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT del pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

Lo stato del pulsante specificato per il *iButton* parametro. Lo stato è PGF_INVISIBLE, PGF_NORMAL, PGF_GRAYED, PGF_DEPRESSED o PGF_HOT. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio, che è descritti nel SDK di Windows.

##  <a name="getdroptarget"></a>  CPagerCtrl::GetDropTarget

Recupera le [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget) interfaccia per il controllo pager corrente.

```
IDropTarget* GetDropTarget() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `IDropTarget` interfaccia per il controllo pager corrente.

### <a name="remarks"></a>Note

`IDropTarget` è una delle interfacce è implementare per supportare le operazioni di trascinamento e rilascio nell'applicazione.

Questo metodo invia il [PGM_GETDROPTARGET](/windows/desktop/Controls/pgm-getdroptarget) messaggio, che è descritti nel SDK di Windows. Il chiamante di questo metodo è responsabile della chiamata di `Release` membro della [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget) interfaccia quando l'interfaccia non è più necessario.

##  <a name="getscrollpos"></a>  CPagerCtrl::GetScrollPos

Recupera la posizione di scorrimento del controllo pager corrente.

```
int GetScrollPos() const;
```

### <a name="return-value"></a>Valore restituito

La posizione di scorrimento corrente, misurato in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETPOS](/windows/desktop/Controls/pgm-getpos) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio seguente usa il [CPagerCtrl::GetScrollPos](#getscrollpos) metodo per recuperare la posizione di scorrimento corrente del controllo pager. Se il controllo pager non è arriva a zero, la posizione più a sinistra, l'esempio Usa la [CPagerCtrl::SetScrollPos](#setscrollpos) metodo per impostare la posizione di scorrimento su zero.

[!code-cpp[NVC_MFC_CSplitButton_s2#7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]

##  <a name="isbuttondepressed"></a>  CPagerCtrl::IsButtonDepressed

Indica se il pulsante di scorrimento specificata del controllo pager corrente è nello stato pressed.

```
BOOL IsButtonDepressed(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT del pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato si trova nello stato pressed; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio, che è descritti nel SDK di Windows. Verifica quindi se lo stato restituito è PGF_DEPRESSED. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio.

##  <a name="isbuttongrayed"></a>  CPagerCtrl::IsButtonGrayed

Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato non disponibile.

```
BOOL IsButtonGrayed(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT del pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato è in stato inattivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio, che è descritti nel SDK di Windows. Verifica quindi se lo stato restituito è PGF_GRAYED. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio.

##  <a name="isbuttonhot"></a>  CPagerCtrl::IsButtonHot

Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato attivo.

```
BOOL IsButtonHot(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT del pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato si trova in stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio, che è descritti nel SDK di Windows. Verifica quindi se lo stato restituito è PGF_HOT. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio.

##  <a name="isbuttoninvisible"></a>  CPagerCtrl::IsButtonInvisible

Indica se il pulsante di scorrimento specificata del controllo pager corrente è in stato invisibile.

```
BOOL IsButtonInvisible(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT del pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato è in stato invisibile. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Windows rende invisibile il pulsante di scorrimento in una direzione particolare quando si scorre la finestra contenuta per renderne più lontani perché facendo clic sul pulsante ulteriormente non è possibile visualizzare informazioni della finestra contenuta al.

Questo metodo invia il [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio, che è descritti nel SDK di Windows. Verifica quindi se lo stato restituito è PGF_INVISIBLE. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio.

### <a name="example"></a>Esempio

L'esempio seguente usa il [CPagerCtrl::IsButtonInvisible](#isbuttoninvisible) metodo per determinare se a sinistra del controllo pager e pulsanti di scorrimento a destra sono visibili.

[!code-cpp[NVC_MFC_CSplitButton_s2#6](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]

##  <a name="isbuttonnormal"></a>  CPagerCtrl::IsButtonNormal

Indica se il pulsante di scorrimento specificata del controllo pager corrente è nello stato normale.

```
BOOL IsButtonNormal(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT del pulsante nella parte inferiore. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato si trova nello stato normale; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio, che è descritti nel SDK di Windows. Verifica quindi se lo stato restituito è PGF_NORMAL. Per altre informazioni, vedere la sezione di valore restituito del [PGM_GETBUTTONSTATE](/windows/desktop/Controls/pgm-getbuttonstate) messaggio.

##  <a name="recalcsize"></a>  CPagerCtrl::RecalcSize

Fa sì che il controllo pager corrente ricalcolare le dimensioni della finestra contenuta.

```
void RecalcSize();
```

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_RECALCSIZE](/windows/desktop/Controls/pgm-recalcsize) messaggio, che è descritti nel SDK di Windows. Di conseguenza, il controllo cercapersone invia il [PGN_CALCSIZE](/windows/desktop/Controls/pgn-calcsize) notifica per ottenere le dimensioni di scorrimento della finestra contenuta.

### <a name="example"></a>Esempio

L'esempio seguente usa il [CPagerCtrl::RecalcSize](#recalcsize) metodo per richiedere il controllo pager corrente ricalcolo delle dimensioni.

[!code-cpp[NVC_MFC_CSplitButton_s2#3](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]

### <a name="example"></a>Esempio

L'esempio seguente usa [reflection di messaggio](../../mfc/tn062-message-reflection-for-windows-controls.md) per abilitare il controllo pager ricalcolare la propria dimensione anziché richiedere a finestra di dialogo padre del controllo per eseguire il calcolo. L'esempio deriva il `MyPagerCtrl` classe la [classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md), quindi Usa una mappa messaggi per associare il [PGN_CALCSIZE](/windows/desktop/Controls/pgn-calcsize) notifica con il `OnCalcsize` gestore delle notifiche. In questo esempio, il gestore delle notifiche imposta la larghezza e altezza del controllo pager per valori fissi.

[!code-cpp[NVC_MFC_CSplitButton_s2#8](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]

##  <a name="setbkcolor"></a>  CPagerCtrl::SetBkColor

Imposta il colore di sfondo del controllo pager corrente.

```
COLORREF SetBkColor(COLORREF clrBk);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*clrBk*|[in] Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore contenente il nuovo colore di sfondo del controllo pager.|

### <a name="return-value"></a>Valore restituito

Oggetto [COLORREF](/windows/desktop/gdi/colorref) valore contenente il precedente colore di sfondo del controllo pager.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_SETBKCOLOR](/windows/desktop/Controls/pgm-setbkcolor) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

L'esempio seguente usa il [CPagerCtrl::SetBkColor](#setbkcolor) metodo per impostare il colore di sfondo del controllo pager in rosso e il [CPagerCtrl::GetBkColor](#getbkcolor) metodo per confermare che è stata apportata la modifica.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

##  <a name="setborder"></a>  CPagerCtrl::SetBorder

Imposta la dimensione del bordo del controllo pager corrente.

```
int SetBorder(int iBorder);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iBorder*|[in] La nuova dimensione bordo, misurato in pixel. Se il *iBorder* parametro è negativo, la dimensione del bordo viene impostata su zero.|

### <a name="return-value"></a>Valore restituito

La precedente dimensione del bordo, misurato in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_SETBORDER](/windows/desktop/Controls/pgm-setborder) messaggio, che è descritti nel SDK di Windows.

### <a name="example"></a>Esempio

Nell'esempio seguente crea un controllo pager, quindi Usa il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo di 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

##  <a name="setbuttonsize"></a>  CPagerCtrl::SetButtonSize

Imposta le dimensioni del pulsante del controllo pager corrente.

```
int SetButtonSize(int iButtonSize);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iButtonSize*|[in] Le nuove dimensioni del pulsante, misurato in pixel.|

### <a name="return-value"></a>Valore restituito

Pulsante dimensione precedente, misurata in pixel.

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_SETBUTTONSIZE](/windows/desktop/Controls/pgm-setpos) messaggio, che è descritti nel SDK di Windows.

Se il controllo pager PGS_HORZ lo stile, le dimensioni del pulsante determinano lo spessore dei pulsanti di spostamento e se il controllo pager PGS_VERT lo stile, le dimensioni del pulsante determinano l'altezza dei pulsanti di spostamento. Le dimensioni predefinite del pulsante sono tre quarti della larghezza della barra di scorrimento e la dimensione minima pulsante è 12 pixel. Per altre informazioni, vedere [stili del controllo Pager](/windows/desktop/Controls/pager-control-styles).

### <a name="example"></a>Esempio

Nell'esempio seguente crea un controllo pager, quindi Usa il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo di 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

##  <a name="setchild"></a>  CPagerCtrl::SetChild

Imposta la finestra indipendente per il controllo pager corrente.

```
void SetChild(HWND hwndChild);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*hwndChild*|[in] Handle per la finestra per essere contenuta.|

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_SETCHILD](/windows/desktop/Controls/pgm-setchild) messaggio, che è descritti nel SDK di Windows.

Questo metodo non modifica l'elemento padre della finestra contenuta. solo assegna un handle di finestra per il controllo pager per lo scorrimento. Nella maggior parte dei casi, la finestra contenuta sarà una finestra figlio del controllo pager.

### <a name="example"></a>Esempio

Nell'esempio seguente crea un controllo pager, quindi Usa il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lunghi con il controllo pager. Nell'esempio viene utilizzata la [CPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager per 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo di 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

##  <a name="setscrollpos"></a>  CPagerCtrl::SetScrollPos

Imposta la posizione di scorrimento del controllo pager corrente.

```
void SetScrollPos(int iPos);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iPos*|[in] La nuova posizione di scorrimento, misurato in pixel.|

### <a name="remarks"></a>Note

Questo metodo invia il [PGM_SETPOS](/windows/desktop/Controls/pgm-setpos) messaggio, che è descritti nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Controlli del pager](/windows/desktop/Controls/pager-controls)
