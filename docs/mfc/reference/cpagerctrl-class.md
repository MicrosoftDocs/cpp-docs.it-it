---
title: CPagerCtrl (classe)
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
ms.openlocfilehash: b2c4f1ac99735953f4832226b840ced4ea4c509a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376969"
---
# <a name="cpagerctrl-class"></a>CPagerCtrl (classe)

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
|[CPagerCtrl::Crea](#create)|Crea un controllo pager con gli stili specificati `CPagerCtrl` e lo associa all'oggetto corrente.|
|[CPagerCtrl::CreateEx](#createex)|Crea un controllo pager con gli stili estesi `CPagerCtrl` specificati e lo associa all'oggetto corrente.|
|[CPagerCtrl::ForwardMouse](#forwardmouse)|Abilita o disabilita l'inoltro [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) messaggi alla finestra contenuta nel controllo pager corrente.|
|[CPagerCtrl::GetBkColor](#getbkcolor)|Recupera il colore di sfondo del controllo pager corrente.|
|[CPagerCtrl::GetBorder](#getborder)|Recupera le dimensioni del bordo del controllo pager corrente.|
|[CPagerCtrl::GetButtonSize](#getbuttonsize)|Recupera le dimensioni del pulsante del controllo pager corrente.|
|[CPagerCtrl::GetButtonState](#getbuttonstate)|Recupera lo stato del pulsante specificato nel controllo pager corrente.|
|[CPagerCtrl::GetDropTarget](#getdroptarget)|Recupera l'interfaccia [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) per il controllo pager corrente.|
|[CPagerCtrl::GetScrollPos](#getscrollpos)|Recupera la posizione di scorrimento del controllo pager corrente.|
|[CPagerCtrl::IsButtonDepressed](#isbuttondepressed)|Indica se il pulsante specificato del controllo `pressed` pager corrente è nello stato.|
|[CPagerCtrl::IsButtonGrayed](#isbuttongrayed)|Indica se il pulsante specificato del controllo `grayed` pager corrente è nello stato.|
|[CPagerCtrl::IsButtonHot](#isbuttonhot)|Indica se il pulsante specificato del controllo `hot` pager corrente è nello stato.|
|[CPagerCtrl::IsButtonInvisible](#isbuttoninvisible)|Indica se il pulsante specificato del controllo `invisible` pager corrente è nello stato.|
|[CPagerCtrl::IsButtonNormal](#isbuttonnormal)|Indica se il pulsante specificato del controllo `normal` pager corrente è nello stato.|
|[CPagerCtrl::RecalcSize](#recalcsize)|Fa sì che il controllo pager corrente ricalcoli le dimensioni della finestra contenuta.|
|[CPagerCtrl::SetBkColor](#setbkcolor)|Imposta il colore di sfondo del controllo pager corrente.|
|[CPagerCtrl::SetBorder](#setborder)|Imposta la dimensione del bordo del controllo pager corrente.|
|[CPagerCtrl::SetButtonSize](#setbuttonsize)|Imposta le dimensioni del pulsante del controllo pager corrente.|
|[CPagerCtrl::SetChild](#setchild)|Imposta la finestra contenuta per il controllo pager corrente.|
|[CPagerCtrl::SetScrollPos](#setscrollpos)|Imposta la posizione di scorrimento del controllo pager corrente.|

## <a name="remarks"></a>Osservazioni

Un controllo pager è una finestra che contiene un'altra finestra lineare e più grande della finestra contenitore e consente di scorrere la finestra contenuta nella visualizzazione. Il controllo pager visualizza due pulsanti di scorrimento che scompaiono automaticamente quando la finestra contenuta viene svolta fino all'estensione più lontana e riappare in caso contrario. È possibile creare un controllo pager che scorre orizzontalmente o verticalmente.

Ad esempio, se l'applicazione dispone di una barra degli strumenti che non è sufficientemente ampia per visualizzare tutti gli elementi, è possibile assegnare la barra degli strumenti a un controllo pager e gli utenti saranno in grado di scorrere la barra degli strumenti a sinistra oa destra per accedere a tutti gli elementi. Microsoft Internet Explorer versione 4.0 (commctrl.dll versione 4.71) introduce il controllo pager.

La `CPagerCtrl` classe è [derivata dalla classe CWnd.](../../mfc/reference/cwnd-class.md) Per ulteriori informazioni e un'illustrazione di un controllo pager, vedere [Controlli pager](/windows/win32/Controls/pager-controls).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPagerCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcmn.h

## <a name="cpagerctrlcpagerctrl"></a><a name="cpagerctrl"></a>CPagerCtrl::CPagerCtrl

Costruisce un oggetto `CPagerCtrl`.

```
CPagerCtrl();
```

### <a name="remarks"></a>Osservazioni

Utilizzare il [CPagerCtrl::Create](#create) o [CPagerCtrl::CreateEx](#createex) metodo per creare un `CPagerCtrl` controllo pager e associarlo all'oggetto.

## <a name="cpagerctrlcreate"></a><a name="create"></a>CPagerCtrl::Crea

Crea un controllo pager con gli stili specificati `CPagerCtrl` e lo associa all'oggetto corrente.

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
|*DwStyle (in stile dwStyle)*|[in] Combinazione bit per bit (OR) degli stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e degli stili del [controllo pager](/windows/win32/Controls/pager-control-styles) da applicare al controllo.|
|*Rect*|[in] Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che contiene la posizione e le dimensioni del controllo nelle coordinate client.|
|*pParentWnd (informazioni in due)*|[in] Puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo. Questo parametro non può essere NULL.|
|*nID*|[in] ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per creare un controllo pager, dichiarare una `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) o il metodo [CPagerCtrl::CreateEx](#createex) su tale variabile.

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo con il controllo pager. Nell'esempio viene quindi utilizzato il [cPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager su 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlcreateex"></a><a name="createex"></a>CPagerCtrl::CreateEx

Crea un controllo pager con gli stili estesi `CPagerCtrl` specificati e lo associa all'oggetto corrente.

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
|*DwExStyle (in stile dwExStyle)*|[in] Combinazione bit per bit di stili estesi da applicare al controllo. Per ulteriori informazioni, vedere il parametro *dwExStyle* della funzione [CreateWindowEx.](/windows/win32/api/winuser/nf-winuser-createwindowexw)|
|*DwStyle (in stile dwStyle)*|[in] Combinazione bit per bit (OR) degli stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e degli stili del [controllo pager](/windows/win32/Controls/pager-control-styles) da applicare al controllo.|
|*Rect*|[in] Riferimento a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che contiene la posizione e le dimensioni del controllo nelle coordinate client.|
|*pParentWnd (informazioni in due)*|[in] Puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto che è la finestra padre del controllo. Questo parametro non può essere NULL.|
|*nID*|[in] ID del controllo.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per creare un controllo pager, dichiarare una `CPagerCtrl` variabile, quindi chiamare il [CPagerCtrl::Create](#create) o il metodo [CPagerCtrl::CreateEx](#createex) su tale variabile.

## <a name="cpagerctrlforwardmouse"></a><a name="forwardmouse"></a>CPagerCtrl::ForwardMouse

Abilita o disabilita l'inoltro [WM_MOUSEMOVE](/windows/win32/inputdev/wm-mousemove) messaggi alla finestra contenuta nel controllo pager corrente.

```
void ForwardMouse(BOOL bForward);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*bAvanti*|[in] TRUE per inoltrare i messaggi del mouse, o FALSE per non inoltrare i messaggi del mouse.|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio di PGM_FORWARDMOUSE,](/windows/win32/Controls/pgm-forwardmouse) descritto in Windows SDK.

## <a name="cpagerctrlgetborder"></a><a name="getborder"></a>CPagerCtrl::GetBorder

Recupera le dimensioni del bordo del controllo pager corrente.

```
int GetBorder() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione del bordo corrente, misurata in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBORDER,](/windows/win32/Controls/pgm-getborder) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il [CPagerCtrl::GetBorder](#getborder) metodo per recuperare lo spessore del bordo del controllo pager.

[!code-cpp[NVC_MFC_CSplitButton_s2#5](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_2.cpp)]

## <a name="cpagerctrlgetbkcolor"></a><a name="getbkcolor"></a>CPagerCtrl::GetBkColor

Recupera il colore di sfondo del controllo pager corrente.

```
COLORREF GetBkColor() const;
```

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene il colore di sfondo corrente del controllo pager.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBKCOLOR,](/windows/win32/Controls/pgm-getbkcolor) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il [metodo CPagerCtrl::SetBkColor](#setbkcolor) per impostare il colore di sfondo del controllo pager su rosso e il metodo [CPagerCtrl::GetBkColor](#getbkcolor) per verificare che la modifica sia stata apportata.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

## <a name="cpagerctrlgetbuttonsize"></a><a name="getbuttonsize"></a>CPagerCtrl::GetButtonSize

Recupera le dimensioni del pulsante del controllo pager corrente.

```
int GetButtonSize() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni del pulsante corrente, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBUTTONSIZE,](/windows/win32/Controls/pgm-getbuttonsize) descritto in Windows SDK.

Se il controllo pager ha lo stile PGS_HORZ, la dimensione del pulsante determina la larghezza dei pulsanti di cercapersone e se il controllo pager ha lo stile PGS_VERT, la dimensione del pulsante determina l'altezza dei pulsanti di cercapersone. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).

## <a name="cpagerctrlgetbuttonstate"></a><a name="getbuttonstate"></a>CPagerCtrl::GetButtonState

Recupera lo stato del pulsante di scorrimento specificato nel controllo pager corrente.

```
DWORD GetButtonState(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ibutton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante destro. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante superiore e PGB_BOTTOMORRIGHT per il pulsante inferiore. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

Stato del pulsante specificato dal parametro *iButton.* Lo stato è PGF_INVISIBLE, PGF_NORMAL, PGF_GRAYED, PGF_DEPRESSED o PGF_HOT. Per altre informazioni, vedere la sezione Valore restituito del messaggio [di PGM_GETBUTTONSTATE.](/windows/win32/Controls/pgm-getbuttonstate)

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBUTTONSTATE,](/windows/win32/Controls/pgm-getbuttonstate) descritto in Windows SDK.

## <a name="cpagerctrlgetdroptarget"></a><a name="getdroptarget"></a>CPagerCtrl::GetDropTarget

Recupera l'interfaccia [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) per il controllo pager corrente.

```
IDropTarget* GetDropTarget() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia `IDropTarget` per il controllo pager corrente.

### <a name="remarks"></a>Osservazioni

`IDropTarget`è una delle interfacce implementate per supportare le operazioni di trascinamento della selezione nell'applicazione.

Questo metodo invia il messaggio [PGM_GETDROPTARGET,](/windows/win32/Controls/pgm-getdroptarget) descritto in Windows SDK. Il chiamante di questo metodo `Release` è responsabile della chiamata del membro del [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) interfaccia quando l'interfaccia non è più necessaria.

## <a name="cpagerctrlgetscrollpos"></a><a name="getscrollpos"></a>CPagerCtrl::GetScrollPos

Recupera la posizione di scorrimento del controllo pager corrente.

```
int GetScrollPos() const;
```

### <a name="return-value"></a>Valore restituito

Posizione di scorrimento corrente, misurata in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETPOS,](/windows/win32/Controls/pgm-getpos) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il [CPagerCtrl::GetScrollPos](#getscrollpos) metodo per recuperare la posizione di scorrimento corrente del controllo pager. Se il controllo pager non è già stato eseguito lo scorrimento a zero, la posizione più a sinistra, nell'esempio viene utilizzato il [CPagerCtrl::SetScrollPos](#setscrollpos) metodo per impostare la posizione di scorrimento su zero.

[!code-cpp[NVC_MFC_CSplitButton_s2#7](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_4.cpp)]

## <a name="cpagerctrlisbuttondepressed"></a><a name="isbuttondepressed"></a>CPagerCtrl::IsButtonDepressed

Indica se il pulsante di scorrimento specificato del controllo pager corrente è premuto.

```
BOOL IsButtonDepressed(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ibutton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante destro. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante superiore e PGB_BOTTOMORRIGHT per il pulsante inferiore. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante specificato è nello stato premuto; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBUTTONSTATE,](/windows/win32/Controls/pgm-getbuttonstate) descritto in Windows SDK. Verifica quindi se lo stato restituito è PGF_DEPRESSED. Per altre informazioni, vedere la sezione Valore restituito del messaggio [di PGM_GETBUTTONSTATE.](/windows/win32/Controls/pgm-getbuttonstate)

## <a name="cpagerctrlisbuttongrayed"></a><a name="isbuttongrayed"></a>CPagerCtrl::IsButtonGrayed

Indica se il pulsante di scorrimento specificato del controllo pager corrente è in grigio.

```
BOOL IsButtonGrayed(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ibutton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante destro. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante superiore e PGB_BOTTOMORRIGHT per il pulsante inferiore. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante specificato è in grigio; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBUTTONSTATE,](/windows/win32/Controls/pgm-getbuttonstate) descritto in Windows SDK. Verifica quindi se lo stato restituito è PGF_GRAYED. Per altre informazioni, vedere la sezione Valore restituito del messaggio [di PGM_GETBUTTONSTATE.](/windows/win32/Controls/pgm-getbuttonstate)

## <a name="cpagerctrlisbuttonhot"></a><a name="isbuttonhot"></a>CPagerCtrl::IsButtonHot

Indica se il pulsante di scorrimento specificato del controllo pager corrente è in stato attivo.

```
BOOL IsButtonHot(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ibutton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante destro. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante superiore e PGB_BOTTOMORRIGHT per il pulsante inferiore. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante specificato è in stato attivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBUTTONSTATE,](/windows/win32/Controls/pgm-getbuttonstate) descritto in Windows SDK. Verifica quindi se lo stato restituito è PGF_HOT. Per altre informazioni, vedere la sezione Valore restituito del messaggio [di PGM_GETBUTTONSTATE.](/windows/win32/Controls/pgm-getbuttonstate)

## <a name="cpagerctrlisbuttoninvisible"></a><a name="isbuttoninvisible"></a>CPagerCtrl::IsButtonInvisible

Indica se il pulsante di scorrimento specificato del controllo pager corrente è in stato invisibile.

```
BOOL IsButtonInvisible(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ibutton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante destro. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante superiore e PGB_BOTTOMORRIGHT per il pulsante inferiore. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante specificato è in stato invisibile. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Windows rende invisibile il pulsante di scorrimento in una determinata direzione quando si scorre la finestra contenuta fino all'estensione più lontano perché facendo clic sul pulsante ulteriormente non è possibile visualizzare più della finestra contenuta.

Questo metodo invia il messaggio [di PGM_GETBUTTONSTATE,](/windows/win32/Controls/pgm-getbuttonstate) descritto in Windows SDK. Verifica quindi se lo stato restituito è PGF_INVISIBLE. Per altre informazioni, vedere la sezione Valore restituito del messaggio [di PGM_GETBUTTONSTATE.](/windows/win32/Controls/pgm-getbuttonstate)

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il [CPagerCtrl::IsButtonInvisible](#isbuttoninvisible) metodo per determinare se i pulsanti di scorrimento sinistro e destro del controllo pager sono visibili.

[!code-cpp[NVC_MFC_CSplitButton_s2#6](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_5.cpp)]

## <a name="cpagerctrlisbuttonnormal"></a><a name="isbuttonnormal"></a>CPagerCtrl::IsButtonNormal

Indica se il pulsante di scorrimento specificato del controllo pager corrente è nello stato normale.

```
BOOL IsButtonNormal(int iButton) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ibutton*|[in] Indica il pulsante per il quale viene recuperato lo stato. Se lo stile del controllo pager è PGS_HORZ, specificare PGB_TOPORLEFT per il pulsante sinistro e PGB_BOTTOMORRIGHT per il pulsante destro. Se lo stile del controllo pager è PGS_VERT, specificare PGB_TOPORLEFT per il pulsante superiore e PGB_BOTTOMORRIGHT per il pulsante inferiore. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).|

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante specificato è nello stato normale. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_GETBUTTONSTATE,](/windows/win32/Controls/pgm-getbuttonstate) descritto in Windows SDK. Verifica quindi se lo stato restituito è PGF_NORMAL. Per altre informazioni, vedere la sezione Valore restituito del messaggio [di PGM_GETBUTTONSTATE.](/windows/win32/Controls/pgm-getbuttonstate)

## <a name="cpagerctrlrecalcsize"></a><a name="recalcsize"></a>CPagerCtrl::RecalcSize

Fa sì che il controllo pager corrente ricalcoli le dimensioni della finestra contenuta.

```
void RecalcSize();
```

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [PGM_RECALCSIZE,](/windows/win32/Controls/pgm-recalcsize) descritto in Windows SDK. Di conseguenza, il controllo pager invia la [notifica PGN_CALCSIZE](/windows/win32/Controls/pgn-calcsize) per ottenere le dimensioni scorrevoli della finestra contenuta.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il [cPagerCtrl::RecalcSize](#recalcsize) metodo per richiedere il controllo pager corrente per ricalcolare le dimensioni.

[!code-cpp[NVC_MFC_CSplitButton_s2#3](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_6.cpp)]

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzata la [reflection](../../mfc/tn062-message-reflection-for-windows-controls.md) dei messaggi per consentire al controllo pager di ricalcolare le proprie dimensioni anziché richiedere la finestra di dialogo padre del controllo per eseguire il calcolo. Nell'esempio viene `MyPagerCtrl` derivata la classe dalla [classe CPagerCtrl](../../mfc/reference/cpagerctrl-class.md), quindi `OnCalcsize` viene utilizzata una mappa messaggi per associare la notifica di [PGN_CALCSIZE](/windows/win32/Controls/pgn-calcsize) al gestore di notifica. In questo esempio, il gestore di notifica imposta la larghezza e l'altezza del controllo pager su valori fissi.

[!code-cpp[NVC_MFC_CSplitButton_s2#8](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_7.cpp)]

## <a name="cpagerctrlsetbkcolor"></a><a name="setbkcolor"></a>CPagerCtrl::SetBkColor

Imposta il colore di sfondo del controllo pager corrente.

```
COLORREF SetBkColor(COLORREF clrBk);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*clrBk (clrBk)*|[in] Valore [COLORREF](/windows/win32/gdi/colorref) che contiene il nuovo colore di sfondo del controllo pager.|

### <a name="return-value"></a>Valore restituito

Valore [COLORREF](/windows/win32/gdi/colorref) che contiene il colore di sfondo precedente del controllo pager.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [di PGM_SETBKCOLOR,](/windows/win32/Controls/pgm-setbkcolor) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzato il [metodo CPagerCtrl::SetBkColor](#setbkcolor) per impostare il colore di sfondo del controllo pager su rosso e il metodo [CPagerCtrl::GetBkColor](#getbkcolor) per verificare che la modifica sia stata apportata.

[!code-cpp[NVC_MFC_CSplitButton_s2#4](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_3.cpp)]

## <a name="cpagerctrlsetborder"></a><a name="setborder"></a>CPagerCtrl::SetBorder

Imposta la dimensione del bordo del controllo pager corrente.

```
int SetBorder(int iBorder);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*iBorder (informazioni in stato indue*|[in] Nuova dimensione del bordo, misurata in pixel. Se il parametro *iBorder* è negativo, la dimensione del bordo viene impostata su zero.|

### <a name="return-value"></a>Valore restituito

Dimensioni del bordo precedenti, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio PGM_SETBORDER,](/windows/win32/Controls/pgm-setborder) descritto in Windows SDK.

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo con il controllo pager. Nell'esempio viene quindi utilizzato il [cPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager su 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlsetbuttonsize"></a><a name="setbuttonsize"></a>CPagerCtrl::SetButtonSize

Imposta le dimensioni del pulsante del controllo pager corrente.

```
int SetButtonSize(int iButtonSize);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*IButtonSize (Informazioni in stati ingranditti*|[in] Nuova dimensione del pulsante, misurata in pixel.|

### <a name="return-value"></a>Valore restituito

Dimensioni del pulsante precedente, misurate in pixel.

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio [PGM_SETBUTTONSIZE,](/windows/win32/Controls/pgm-setpos) descritto in Windows SDK.

Se il controllo pager ha lo stile PGS_HORZ, la dimensione del pulsante determina la larghezza dei pulsanti di cercapersone e se il controllo pager ha lo stile PGS_VERT, la dimensione del pulsante determina l'altezza dei pulsanti di cercapersone. La dimensione predefinita del pulsante è di tre quarti della larghezza della barra di scorrimento e la dimensione minima del pulsante è 12 pixel. Per ulteriori informazioni, vedere [Stili del controllo pager](/windows/win32/Controls/pager-control-styles).

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo con il controllo pager. Nell'esempio viene quindi utilizzato il [cPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager su 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlsetchild"></a><a name="setchild"></a>CPagerCtrl::SetChild

Imposta la finestra contenuta per il controllo pager corrente.

```
void SetChild(HWND hwndChild);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*hwndChild*|[in] Gestire la finestra da contenuta.|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio di PGM_SETCHILD,](/windows/win32/Controls/pgm-setchild) descritto in Windows SDK.

Questo metodo non modifica l'elemento padre della finestra contenuta; assegna solo un handle di finestra al controllo pager per lo scorrimento. Nella maggior parte dei casi, la finestra contenuta sarà una finestra figlio del controllo pager.

### <a name="example"></a>Esempio

Nell'esempio seguente viene creato un controllo pager, quindi viene utilizzato il [CPagerCtrl::SetChild](#setchild) metodo per associare un controllo pulsante molto lungo con il controllo pager. Nell'esempio viene quindi utilizzato il [cPagerCtrl::SetButtonSize](#setbuttonsize) metodo per impostare l'altezza del controllo pager su 20 pixel e il [CPagerCtrl::SetBorder](#setborder) metodo per impostare lo spessore del bordo su 1 pixel.

[!code-cpp[NVC_MFC_CSplitButton_s2#1](../../mfc/reference/codesnippet/cpp/cpagerctrl-class_1.cpp)]

## <a name="cpagerctrlsetscrollpos"></a><a name="setscrollpos"></a>CPagerCtrl::SetScrollPos

Imposta la posizione di scorrimento del controllo pager corrente.

```
void SetScrollPos(int iPos);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Ipos*|[in] Nuova posizione di scorrimento, misurata in pixel.|

### <a name="remarks"></a>Osservazioni

Questo metodo invia il [messaggio PGM_SETPOS,](/windows/win32/Controls/pgm-setpos) descritto in Windows SDK.

## <a name="see-also"></a>Vedere anche

[CPagerCtrl (classe)](../../mfc/reference/cpagerctrl-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Controlli pager](/windows/win32/Controls/pager-controls)
