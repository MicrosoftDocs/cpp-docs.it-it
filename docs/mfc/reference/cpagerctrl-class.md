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
ms.openlocfilehash: 9b3af31e7d352e93144cde0c321620693111e145
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88561908"
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
|[CPagerCtrl:: CPagerCtrl](#cpagerctrl)|Costruisce un oggetto `CPagerCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPagerCtrl:: create](#create)|Crea un controllo pager con gli stili specificati e lo associa all'oggetto corrente `CPagerCtrl` .|
|[CPagerCtrl:: CreateEx](#createex)|Crea un controllo pager con gli stili estesi specificati e lo associa all' `CPagerCtrl` oggetto corrente.|
|[CPagerCtrl:: ForwardMouse](#forwardmouse)|Abilita o Disabilita l'invio di messaggi di [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) alla finestra contenuta nel controllo pager corrente.|
|[CPagerCtrl:: GetBkColor](#getbkcolor)|Recupera il colore di sfondo del controllo pager corrente.|
|[CPagerCtrl:: GetBorder](#getborder)|Recupera la dimensione del bordo del controllo pager corrente.|
|[CPagerCtrl:: GetButtonSize](#getbuttonsize)|Recupera le dimensioni del pulsante del controllo pager corrente.|
|[CPagerCtrl:: GetButtonState](#getbuttonstate)|Recupera lo stato del pulsante specificato nel controllo pager corrente.|
|[CPagerCtrl:: GetDropTarget](#getdroptarget)|Recupera l'interfaccia [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) per il controllo pager corrente.|
|[CPagerCtrl:: GetScrollPos](#getscrollpos)|Recupera la posizione di scorrimento del controllo pager corrente.|
|[CPagerCtrl:: IsButtonDepressed](#isbuttondepressed)|Indica se il pulsante specificato del controllo pager corrente è in `pressed` stato.|
|[CPagerCtrl:: IsButtonGrayed](#isbuttongrayed)|Indica se il pulsante specificato del controllo pager corrente è in `grayed` stato.|
|[CPagerCtrl:: IsButtonHot](#isbuttonhot)|Indica se il pulsante specificato del controllo pager corrente è in `hot` stato.|
|[CPagerCtrl:: IsButtonInvisible](#isbuttoninvisible)|Indica se il pulsante specificato del controllo pager corrente è in `invisible` stato.|
|[CPagerCtrl:: IsButtonNormal](#isbuttonnormal)|Indica se il pulsante specificato del controllo pager corrente è in `normal` stato.|
|[CPagerCtrl:: RecalcSize](#recalcsize)|Fa in modo che il controllo pager corrente ricalcoli le dimensioni della finestra contenuta.|
|[CPagerCtrl:: SetBkColor](#setbkcolor)|Imposta il colore di sfondo del controllo pager corrente.|
|[CPagerCtrl:: seborder](#setborder)|Imposta la dimensione del bordo del controllo pager corrente.|
|[CPagerCtrl:: SetButtonSize](#setbuttonsize)|Imposta le dimensioni del pulsante del controllo pager corrente.|
|[CPagerCtrl:: figlio](#setchild)|Imposta la finestra contenuta per il controllo pager corrente.|
|[CPagerCtrl:: SetScrollPos](#setscrollpos)|Imposta la posizione di scorrimento del controllo pager corrente.|

## <a name="remarks"></a>Osservazioni

Un controllo pager è una finestra che contiene un'altra finestra che è lineare e più grande della finestra che lo contiene e consente di scorrere la finestra contenuta nella visualizzazione. Il controllo pager Visualizza due pulsanti di scorrimento che scompaiono automaticamente quando viene eseguito lo scorrimento della finestra contenuta fino al suo extent più lontano e vengono nuovamente visualizzati in altro modo. È possibile creare un controllo pager che scorre orizzontalmente o verticalmente.

Se, ad esempio, l'applicazione dispone di una barra degli strumenti non sufficientemente ampia per visualizzare tutti i relativi elementi, è possibile assegnare la barra degli strumenti a un controllo pager e gli utenti potranno scorrere la barra degli strumenti a sinistra o a destra per accedere a tutti gli elementi. Microsoft Internet Explorer versione 4,0 (commctrl.dll versione 4,71) introduce il controllo cercapersone.

La `CPagerCtrl` classe è derivata dalla classe [CWnd](../../mfc/reference/cwnd-class.md) . Per ulteriori informazioni e per un'illustrazione di un controllo pager, vedere [controlli cercapersone](/windows/win32/Controls/pager-controls).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPagerCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cpagerctrlcpagerctrl"></a><a name="cpagerctrl"></a> CPagerCtrl:: CPagerCtrl

Costruisce un oggetto `CPagerCtrl`.

```
CPagerCtrl();
```

### <a name="remarks"></a>Osservazioni

Usare il metodo [CPagerCtrl:: create](#create) o [CPagerCtrl:: CreateEx](#createex) per creare un controllo pager e collegarlo all' `CPagerCtrl` oggetto.

## <a name="cpagerctrlcreate"></a><a name="create"></a> CPagerCtrl:: create

Crea un controllo pager con gli stili specificati e lo associa all'oggetto corrente `CPagerCtrl` .

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwStyle*\
in Combinazione bit per bit (o) degli stili della [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e degli [stili del controllo pager](/windows/win32/Controls/pager-control-styles) da applicare al controllo.

*Rect*\
in Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che contiene la posizione e le dimensioni del controllo nelle coordinate del client.

*pParentWnd*\
in Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo. Questo parametro non può essere NULL.

*nID*\
in ID del controllo.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per creare un controllo pager, dichiarare una `CPagerCtrl` variabile, quindi chiamare il metodo [CPagerCtrl:: create](#create) o [CPagerCtrl:: CreateEx](#createex) su tale variabile.

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il metodo [CPagerCtrl::](#setchild) SetValue per associare un controllo pulsante molto lungo al controllo cercapersone. Nell'esempio viene quindi usato il metodo [CPagerCtrl:: SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager su 20 pixel e il metodo [CPagerCtrl:: seborder](#setborder) per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlcreateex"></a><a name="createex"></a> CPagerCtrl:: CreateEx

Crea un controllo pager con gli stili estesi specificati e lo associa all' `CPagerCtrl` oggetto corrente.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### <a name="parameters"></a>Parametri

*dwExStyle*\
in Combinazione bit per bit di stili estesi da applicare al controllo. Per ulteriori informazioni, vedere il parametro *dwExStyle* della funzione [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) .

*dwStyle*\
in Combinazione bit per bit (o) degli stili della [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e degli [stili del controllo pager](/windows/win32/Controls/pager-control-styles) da applicare al controllo.

*Rect*\
in Riferimento a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che contiene la posizione e le dimensioni del controllo nelle coordinate del client.

*pParentWnd*\
in Puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) che rappresenta la finestra padre del controllo. Questo parametro non può essere NULL.

*nID*\
in ID del controllo.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per creare un controllo pager, dichiarare una `CPagerCtrl` variabile, quindi chiamare il metodo [CPagerCtrl:: create](#create) o [CPagerCtrl:: CreateEx](#createex) su tale variabile.

## <a name="cpagerctrlforwardmouse"></a><a name="forwardmouse"></a> CPagerCtrl:: ForwardMouse

Abilita o Disabilita l'invio di messaggi di [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) alla finestra contenuta nel controllo pager corrente.

```cpp
void ForwardMouse(BOOL bForward);
```

### <a name="parameters"></a>Parametri

*bForward*\
in TRUE per l'invio dei messaggi del mouse oppure FALSE per non inviare i messaggi del mouse.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_FORWARDMOUSE](/windows/win32/Controls/pgm-forwardmouse) , descritto nel Windows SDK.

## <a name="cpagerctrlgetborder"></a><a name="getborder"></a> CPagerCtrl:: GetBorder

Recupera la dimensione del bordo del controllo pager corrente.

```
int GetBorder() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni correnti del bordo, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBORDER](/windows/win32/Controls/pgm-getborder) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene usato il metodo [CPagerCtrl:: GetBorder](#getborder) per recuperare lo spessore del bordo del controllo cercapersone.

[!code-cpp[NVC_MFC_CSplitButton_s2#5](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]

## <a name="cpagerctrlgetbkcolor"></a><a name="getbkcolor"></a> CPagerCtrl:: GetBkColor

Recupera il colore di sfondo del controllo pager corrente.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene il colore di sfondo corrente del controllo pager.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBKCOLOR](/windows/win32/Controls/pgm-getbkcolor) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene usato il metodo [CPagerCtrl:: SetBkColor](#setbkcolor) per impostare il colore di sfondo del controllo pager su rosso e il metodo [CPagerCtrl:: GetBkColor](#getbkcolor) per confermare che la modifica è stata apportata.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

## <a name="cpagerctrlgetbuttonsize"></a><a name="getbuttonsize"></a> CPagerCtrl:: GetButtonSize

Recupera le dimensioni del pulsante del controllo pager corrente.

```
int GetButtonSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni correnti del pulsante, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBUTTONSIZE](/windows/win32/Controls/pgm-getbuttonsize) , descritto nel Windows SDK.

Se il controllo pager dispone dello stile PGS_HORZ, le dimensioni del pulsante determinano la larghezza dei pulsanti del pager e se il controllo pager dispone dello stile PGS_VERT, le dimensioni del pulsante determinano l'altezza dei pulsanti del cercapersone. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

## <a name="cpagerctrlgetbuttonstate"></a><a name="getbuttonstate"></a> CPagerCtrl:: GetButtonState

Recupera lo stato del pulsante di scorrimento specificato nel controllo pager corrente.

```
DWORD GetButtonState(int iButton) const;
```

### <a name="parameters"></a>Parametri

*iButton*\
in Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT per il pulsante in basso. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="return-value"></a>Valore restituito

Stato del pulsante specificato dal parametro *IButton* . Lo stato è PGF_INVISIBLE, PGF_NORMAL, PGF_GRAYED, PGF_DEPRESSED o PGF_HOT. Per ulteriori informazioni, vedere la sezione valore restituito del messaggio [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) .

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) , descritto nel Windows SDK.

## <a name="cpagerctrlgetdroptarget"></a><a name="getdroptarget"></a> CPagerCtrl:: GetDropTarget

Recupera l'interfaccia [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) per il controllo pager corrente.

```
IDropTarget* GetDropTarget() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all' `IDropTarget` interfaccia per il controllo pager corrente.

### <a name="remarks"></a>Osservazioni

`IDropTarget` è una delle interfacce implementate per supportare le operazioni di trascinamento della selezione nell'applicazione.

Questo metodo invia il messaggio di [PGM_GETDROPTARGET](/windows/win32/Controls/pgm-getdroptarget) , descritto nel Windows SDK. Il chiamante di questo metodo è responsabile della chiamata al `Release` membro dell'interfaccia [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) quando l'interfaccia non è più necessaria.

## <a name="cpagerctrlgetscrollpos"></a><a name="getscrollpos"></a> CPagerCtrl:: GetScrollPos

Recupera la posizione di scorrimento del controllo pager corrente.

```
int GetScrollPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione di scorrimento corrente, misurata in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETPOS](/windows/win32/Controls/pgm-getpos) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene usato il metodo [CPagerCtrl:: GetScrollPos](#getscrollpos) per recuperare la posizione di scorrimento corrente del controllo pager. Se il controllo pager non è già stato spostato a zero, la posizione più a sinistra viene usato il metodo [CPagerCtrl:: SetScrollPos](#setscrollpos) per impostare la posizione di scorrimento su zero.

[!code-cpp[NVC_MFC_CSplitButton_s2#7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]

## <a name="cpagerctrlisbuttondepressed"></a><a name="isbuttondepressed"></a> CPagerCtrl:: IsButtonDepressed

Indica se il pulsante di scorrimento specificato del controllo pager corrente si trova nello stato premuto.

```
BOOL IsButtonDepressed(int iButton) const;
```

### <a name="parameters"></a>Parametri

*iButton*\
in Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT per il pulsante in basso. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato si trova nello stato premuto. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) , descritto nel Windows SDK. Viene quindi verificato se lo stato restituito è PGF_DEPRESSED. Per ulteriori informazioni, vedere la sezione valore restituito del messaggio [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) .

## <a name="cpagerctrlisbuttongrayed"></a><a name="isbuttongrayed"></a> CPagerCtrl:: IsButtonGrayed

Indica se il pulsante di scorrimento specificato del controllo pager corrente è in stato grigio.

```
BOOL IsButtonGrayed(int iButton) const;
```

### <a name="parameters"></a>Parametri

*iButton*\
in Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT per il pulsante in basso. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato è in stato grigio; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) , descritto nel Windows SDK. Viene quindi verificato se lo stato restituito è PGF_GRAYED. Per ulteriori informazioni, vedere la sezione valore restituito del messaggio [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) .

## <a name="cpagerctrlisbuttonhot"></a><a name="isbuttonhot"></a> CPagerCtrl:: IsButtonHot

Indica se il pulsante di scorrimento specificato del controllo pager corrente è nello stato attivo.

```
BOOL IsButtonHot(int iButton) const;
```

### <a name="parameters"></a>Parametri

*iButton*\
in Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT per il pulsante in basso. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato è nello stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) , descritto nel Windows SDK. Viene quindi verificato se lo stato restituito è PGF_HOT. Per ulteriori informazioni, vedere la sezione valore restituito del messaggio [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) .

## <a name="cpagerctrlisbuttoninvisible"></a><a name="isbuttoninvisible"></a> CPagerCtrl:: IsButtonInvisible

Indica se il pulsante di scorrimento specificato del controllo pager corrente è in stato invisibile.

```
BOOL IsButtonInvisible(int iButton) const;
```

### <a name="parameters"></a>Parametri

*iButton*\
in Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT per il pulsante in basso. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato è in stato invisibile; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Windows rende invisibile il pulsante di scorrimento in una direzione particolare quando viene eseguito lo scorrimento della finestra contenuta fino alla sua estensione, perché facendo clic sul pulsante non è più possibile portare la finestra contenuta nella visualizzazione.

Questo metodo invia il messaggio di [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) , descritto nel Windows SDK. Viene quindi verificato se lo stato restituito è PGF_INVISIBLE. Per ulteriori informazioni, vedere la sezione valore restituito del messaggio [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) .

### <a name="example"></a>Esempio

Nell'esempio seguente viene usato il metodo [CPagerCtrl:: IsButtonInvisible](#isbuttoninvisible) per determinare se i pulsanti di scorrimento sinistro e destro del controllo pager sono visibili.

[!code-cpp[NVC_MFC_CSplitButton_s2#6](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]

## <a name="cpagerctrlisbuttonnormal"></a><a name="isbuttonnormal"></a> CPagerCtrl:: IsButtonNormal

Indica se il pulsante di scorrimento specificato del controllo pager corrente è nello stato normale.

```
BOOL IsButtonNormal(int iButton) const;
```

### <a name="parameters"></a>Parametri

*iButton*\
in Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante a destra. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante in alto e PGB_BOTTOMORRIGHT per il pulsante in basso. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante specificato è nello stato normale; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) , descritto nel Windows SDK. Viene quindi verificato se lo stato restituito è PGF_NORMAL. Per ulteriori informazioni, vedere la sezione valore restituito del messaggio [PGM_GETBUTTONSTATE](/windows/win32/Controls/pgm-getbuttonstate) .

## <a name="cpagerctrlrecalcsize"></a><a name="recalcsize"></a> CPagerCtrl:: RecalcSize

Fa in modo che il controllo pager corrente ricalcoli le dimensioni della finestra contenuta.

```cpp
void RecalcSize();
```

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_RECALCSIZE](/windows/win32/Controls/pgm-recalcsize) , descritto nel Windows SDK. Di conseguenza, il controllo pager Invia la notifica di [PGN_CALCSIZE](/windows/win32/Controls/pgn-calcsize) per ottenere le dimensioni scorrevoli della finestra contenuta.

### <a name="example"></a>Esempio

Nell'esempio seguente viene usato il metodo [CPagerCtrl:: RecalcSize](#recalcsize) per richiedere il controllo pager corrente per ricalcolarne le dimensioni.

[!code-cpp[NVC_MFC_CSplitButton_s2#3](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzata la [Reflection del messaggio](../../mfc/tn062-message-reflection-for-windows-controls.md) per consentire al controllo pager di ricalcolare le proprie dimensioni anziché richiedere la finestra di dialogo padre del controllo per eseguire il calcolo. Nell'esempio viene derivata la `MyPagerCtrl` classe dalla [classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md), quindi viene utilizzata una mappa messaggi per associare la notifica di [PGN_CALCSIZE](/windows/win32/Controls/pgn-calcsize) al `OnCalcsize` gestore di notifiche. In questo esempio, il gestore di notifiche imposta la larghezza e l'altezza del controllo pager sui valori fissi.

[!code-cpp[NVC_MFC_CSplitButton_s2#8](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]

## <a name="cpagerctrlsetbkcolor"></a><a name="setbkcolor"></a> CPagerCtrl:: SetBkColor

Imposta il colore di sfondo del controllo pager corrente.

```
COLORREF SetBkColor(COLORREF clrBk);
```

### <a name="parameters"></a>Parametri

*clrBk*\
in Valore [COLORREF](/windows/win32/gdi/colorref) che contiene il nuovo colore di sfondo del controllo pager.

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene il colore di sfondo precedente del controllo pager.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_SETBKCOLOR](/windows/win32/Controls/pgm-setbkcolor) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene usato il metodo [CPagerCtrl:: SetBkColor](#setbkcolor) per impostare il colore di sfondo del controllo pager su rosso e il metodo [CPagerCtrl:: GetBkColor](#getbkcolor) per confermare che la modifica è stata apportata.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

## <a name="cpagerctrlsetborder"></a><a name="setborder"></a> CPagerCtrl:: seborder

Imposta la dimensione del bordo del controllo pager corrente.

```
int SetBorder(int iBorder);
```

### <a name="parameters"></a>Parametri

*iBorder*\
in Dimensioni del nuovo bordo, misurate in pixel. Se il parametro *iBorder* è negativo, le dimensioni del bordo sono impostate su zero.

### <a name="return-value"></a>Valore restituito

Dimensioni del bordo precedenti, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_SETBORDER](/windows/win32/Controls/pgm-setborder) , descritto nel Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il metodo [CPagerCtrl::](#setchild) SetValue per associare un controllo pulsante molto lungo al controllo cercapersone. Nell'esempio viene quindi usato il metodo [CPagerCtrl:: SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager su 20 pixel e il metodo [CPagerCtrl:: seborder](#setborder) per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlsetbuttonsize"></a><a name="setbuttonsize"></a> CPagerCtrl:: SetButtonSize

Imposta le dimensioni del pulsante del controllo pager corrente.

```
int SetButtonSize(int iButtonSize);
```

### <a name="parameters"></a>Parametri

*iButtonSize*\
in Dimensioni del nuovo pulsante, misurate in pixel.

### <a name="return-value"></a>Valore restituito

Dimensioni del pulsante precedente, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_SETBUTTONSIZE](/windows/win32/Controls/pgm-setpos) , descritto nel Windows SDK.

Se il controllo pager dispone dello stile PGS_HORZ, le dimensioni del pulsante determinano la larghezza dei pulsanti del pager e se il controllo pager dispone dello stile PGS_VERT, le dimensioni del pulsante determinano l'altezza dei pulsanti del cercapersone. La dimensione predefinita del pulsante è di tre quarti della larghezza della barra di scorrimento e la dimensione minima del pulsante è 12 pixel. Per altre informazioni, vedere [stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il metodo [CPagerCtrl::](#setchild) SetValue per associare un controllo pulsante molto lungo al controllo cercapersone. Nell'esempio viene quindi usato il metodo [CPagerCtrl:: SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager su 20 pixel e il metodo [CPagerCtrl:: seborder](#setborder) per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlsetchild"></a><a name="setchild"></a> CPagerCtrl:: figlio

Imposta la finestra contenuta per il controllo pager corrente.

```cpp
void SetChild(HWND hwndChild);
```

### <a name="parameters"></a>Parametri

*hwndChild*\
in Handle per la finestra da contenere.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_SETCHILD](/windows/win32/Controls/pgm-setchild) , descritto nel Windows SDK.

Questo metodo non modifica l'elemento padre della finestra contenuta; assegna un handle di finestra al controllo pager per lo scorrimento. Nella maggior parte dei casi, la finestra contenuta sarà una finestra figlio del controllo cercapersone.

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il metodo [CPagerCtrl::](#setchild) SetValue per associare un controllo pulsante molto lungo al controllo cercapersone. Nell'esempio viene quindi usato il metodo [CPagerCtrl:: SetButtonSize](#setbuttonsize) per impostare l'altezza del controllo pager su 20 pixel e il metodo [CPagerCtrl:: seborder](#setborder) per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlsetscrollpos"></a><a name="setscrollpos"></a> CPagerCtrl:: SetScrollPos

Imposta la posizione di scorrimento del controllo pager corrente.

```cpp
void SetScrollPos(int iPos);
```

### <a name="parameters"></a>Parametri

*IPO*\
in Nuova posizione di scorrimento, misurata in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di [PGM_SETPOS](/windows/win32/Controls/pgm-setpos) , descritto nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Controlli cercapersone](/windows/win32/Controls/pager-controls)
