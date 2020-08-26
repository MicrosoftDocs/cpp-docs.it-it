---
title: Classe CDialogImpl
ms.date: 11/04/2016
f1_keywords:
- CDialogImpl
- ATLWIN/ATL::CDialogImpl
- ATLWIN/ATL::Create
- ATLWIN/ATL::DestroyWindow
- ATLWIN/ATL::DoModal
- ATLWIN/ATL::EndDialog
- ATLWIN/ATL::GetDialogProc
- ATLWIN/ATL::MapDialogRect
- ATLWIN/ATL::OnFinalMessage
- ATLWIN/ATL::DialogProc
- ATLWIN/ATL::StartDialogProc
helpviewer_keywords:
- dialog boxes, ATL
- CDialogImpl class
ms.assetid: d430bc7b-8a28-4ad3-9507-277bdd2c2c2e
ms.openlocfilehash: b92b5130b31e88565d79b59a24b2bd377d0d84c0
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88834726"
---
# <a name="cdialogimpl-class"></a>Classe CDialogImpl

Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,
    class TBase = CWindow>
    class ATL_NO_VTABLE CDialogImpl : public CDialogImplBaseT<TBase>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CDialogImpl` .

*TBase*<br/>
Classe di base della nuova classe. La classe base predefinita è [CWindow](../../atl/reference/cwindow-class.md).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|Funzione|Descrizione|
|-|-|
|[Creare](#create)|Crea una finestra di dialogo non modale.|
|[DestroyWindow](#destroywindow)|Elimina una finestra di dialogo non modale.|
|[DoModal](#domodal)|Crea una finestra di dialogo modale.|
|[EndDialog](#enddialog)|Elimina una finestra di dialogo modale.|

### <a name="cdialogimplbaset-methods"></a>Metodi CDialogImplBaseT

|Funzione|Descrizione|
|-|-|
|[GetDialogProc](#getdialogproc)|Restituisce la routine della finestra di dialogo corrente.|
|[MapDialogRect](#mapdialogrect)|Esegue il mapping delle unità della finestra di dialogo del rettangolo specificato alle unità dello schermo (pixel).|
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo la ricezione dell'ultimo messaggio, in genere WM_NCDESTROY.|

### <a name="static-functions"></a>Funzioni statiche

|Funzione|Descrizione|
|-|-|
|[DialogProc](#dialogproc)|Elabora i messaggi inviati alla finestra di dialogo.|
|[StartDialogProc](#startdialogproc)|Chiamato quando viene ricevuto il primo messaggio per elaborare i messaggi inviati alla finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Con `CDialogImpl` è possibile creare una finestra di dialogo modale o non modale. `CDialogImpl` fornisce la routine della finestra di dialogo che utilizza la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

Il distruttore della classe base `~CWindowImplRoot` garantisce che la finestra sia stata eliminata prima dell'eliminazione dell'oggetto.

`CDialogImpl` deriva da `CDialogImplBaseT` , che a sua volta deriva da `CWindowImplRoot` .

> [!NOTE]
> La classe deve definire un `IDD` membro che specifichi l'ID della risorsa del modello di finestra di dialogo. La creazione guidata progetto ATL, ad esempio, aggiunge automaticamente la riga seguente alla classe:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]

dove `MyDlg` è il **nome breve** immesso nella pagina **dei nomi** della procedura guidata.

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Utilizzo delle finestre di dialogo in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|
|Finestre di dialogo|[Finestre di dialogo](/windows/win32/dlgbox/dialog-boxes) e argomenti successivi nell'Windows SDK|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="cdialogimplcreate"></a><a name="create"></a> CDialogImpl:: create

Crea una finestra di dialogo non modale.

```
HWND Create(
    HWND hWndParent,
    LPARAM dwInitParam = NULL );

HWND Create(
    HWND hWndParent,
    RECT&,
    LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
in Handle per la finestra proprietaria.

**Rect&** *Rect* [in] struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che specifica le dimensioni e la posizione della finestra di dialogo.

*dwInitParam*<br/>
in Specifica il valore da passare alla finestra di dialogo nel parametro *lParam* del messaggio WM_INITDIALOG.

### <a name="return-value"></a>Valore restituito

Handle per la finestra di dialogo appena creata.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo viene automaticamente collegata all' `CDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal). La seconda sostituzione precedente viene utilizzata solo con [CComControl](../../atl/reference/ccomcontrol-class.md).

## <a name="cdialogimpldestroywindow"></a><a name="destroywindow"></a> CDialogImpl::D estroyWindow

Elimina una finestra di dialogo non modale.

```
BOOL DestroyWindow();
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di dialogo è stata eliminata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se la finestra di dialogo è stata eliminata correttamente. in caso contrario, FALSE.

## <a name="cdialogimpldialogproc"></a><a name="dialogproc"></a> CDialogImpl::D ialogProc

Questa funzione statica implementa la routine della finestra di dialogo.

```
static LRESULT CALLBACK DialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra di dialogo.

*uMsg*<br/>
in Messaggio inviato alla finestra di dialogo.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

TRUE se il messaggio viene elaborato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`DialogProc` Usa la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

È possibile eseguire l'override `DialogProc` di per fornire un meccanismo diverso per la gestione dei messaggi.

## <a name="cdialogimpldomodal"></a><a name="domodal"></a> CDialogImpl::D oModal

Crea una finestra di dialogo modale.

```
INT_PTR DoModal(
    HWND hWndParent = ::GetActiveWindow(),
    LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
in Handle per la finestra proprietaria. Il valore predefinito è il valore restituito della funzione Win32 [GetActiveWindow](/windows/win32/api/winuser/nf-winuser-getactivewindow) .

*dwInitParam*<br/>
in Specifica il valore da passare alla finestra di dialogo nel parametro *lParam* del messaggio WM_INITDIALOG.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, il valore del parametro *nRetCode* specificato nella chiamata a [EndDialog](#enddialog). In caso contrario, -1.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo viene automaticamente collegata all' `CDialogImpl` oggetto.

Per creare una finestra di dialogo non modale, chiamare [create](#create).

## <a name="cdialogimplenddialog"></a><a name="enddialog"></a> CDialogImpl:: EndDialog

Elimina una finestra di dialogo modale.

```
BOOL EndDialog(int nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode*<br/>
in Valore che deve essere restituito da [CDialogImpl::D omodal](#domodal).

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di dialogo viene distrutta; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`EndDialog` deve essere chiamato tramite la routine della finestra di dialogo. Dopo la distruzione della finestra di dialogo, in Windows viene utilizzato il valore di *nRetCode* come valore restituito per `DoModal` , che ha creato la finestra di dialogo.

> [!NOTE]
> Non chiamare `EndDialog` per eliminare definitivamente una finestra di dialogo non modale. Chiamare invece [CWindow::D estroywindow](../../atl/reference/cwindow-class.md#destroywindow) .

## <a name="cdialogimplgetdialogproc"></a><a name="getdialogproc"></a> CDialogImpl:: GetDialogProc

Restituisce `DialogProc` , la routine della finestra di dialogo corrente.

```
virtual WNDPROC GetDialogProc();
```

### <a name="return-value"></a>Valore restituito

Routine della finestra di dialogo corrente.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per sostituire la routine della finestra di dialogo con una propria.

## <a name="cdialogimplmapdialogrect"></a><a name="mapdialogrect"></a> CDialogImpl:: MapDialogRect

Converte (esegue il mapping) delle unità della finestra di dialogo del rettangolo specificato in unità dello schermo (pixel).

```
BOOL MapDialogRect(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a un `CRect` oggetto o a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che deve ricevere le coordinate client dell'aggiornamento che racchiude l'area di aggiornamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'aggiornamento ha esito positivo; 0 se l'aggiornamento non riesce. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Osservazioni

La funzione sostituisce le coordinate nella struttura specificata `RECT` con le coordinate convertite, che consentono di utilizzare la struttura per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra di dialogo.

## <a name="cdialogimplonfinalmessage"></a><a name="onfinalmessage"></a> CDialogImpl:: OnFinalMessage

Chiamato dopo la ricezione dell'ultimo messaggio, in genere `WM_NCDESTROY` .

```
virtual void OnFinalMessage(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra da eliminare definitivamente.

### <a name="remarks"></a>Osservazioni

Si noti che se si desidera eliminare automaticamente l'oggetto alla distruzione della finestra, è possibile chiamare **delete this** . qui.

## <a name="cdialogimplstartdialogproc"></a><a name="startdialogproc"></a> CDialogImpl:: StartDialogProc

Viene chiamato una sola volta, quando viene ricevuto il primo messaggio, per elaborare i messaggi inviati alla finestra di dialogo.

```
static LRESULT CALLBACK StartDialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
in Handle per la finestra di dialogo.

*uMsg*<br/>
in Messaggio inviato alla finestra di dialogo.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

Routine della finestra.

### <a name="remarks"></a>Osservazioni

Dopo la chiamata iniziale a `StartDialogProc` , `DialogProc` viene impostato come routine della finestra di dialogo e altre chiamate vengono eseguite.

## <a name="see-also"></a>Vedere anche

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
