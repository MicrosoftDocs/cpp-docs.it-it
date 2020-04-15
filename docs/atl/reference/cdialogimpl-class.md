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
ms.openlocfilehash: 900a312c97d7b83eac93a372be39a006b3c4344d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327058"
---
# <a name="cdialogimpl-class"></a>Classe CDialogImpl

Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T,
    class TBase = CWindow>
    class ATL_NO_VTABLE CDialogImpl : public CDialogImplBaseT<TBase>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `CDialogImpl`derivata da .

*TBase (informazioni in stato di base*<br/>
La classe base della nuova classe. La classe base predefinita è [CWindow](../../atl/reference/cwindow-class.md).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Crea](#create)|Crea una finestra di dialogo non modale.|
|[Destroywindow](#destroywindow)|Elimina una finestra di dialogo non modale.|
|[Domodal](#domodal)|Crea una finestra di dialogo modale.|
|[Enddialog](#enddialog)|Elimina una finestra di dialogo modale.|

### <a name="cdialogimplbaset-methods"></a>Metodi CDialogImplBaseT

|||
|-|-|
|[GetDialogProc (Informazioni in lingua stati inlingua del](#getdialogproc)|Restituisce la routine della finestra di dialogo corrente.|
|[Oggetto MapDialogRect](#mapdialogrect)|Esegue il mapping delle unità della finestra di dialogo del rettangolo specificato alle unità dello schermo (pixel).|
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo aver ricevuto l'ultimo messaggio, in genere WM_NCDESTROY.|

### <a name="static-functions"></a>Funzioni statiche

|||
|-|-|
|[DialogProc (Proc)](#dialogproc)|Elabora i messaggi inviati alla finestra di dialogo.|
|[StartDialogProc (Inizio)StartDialogProc (Informazioni](#startdialogproc)|Chiamato quando viene ricevuto il primo messaggio per elaborare i messaggi inviati alla finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Con `CDialogImpl` è possibile creare una finestra di dialogo modale o non modale. `CDialogImpl`fornisce la procedura della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

Il distruttore `~CWindowImplRoot` della classe base assicura che la finestra venga visualizzata prima di eliminare l'oggetto.

`CDialogImpl`deriva da `CDialogImplBaseT`, che a `CWindowImplRoot`sua volta deriva da .

> [!NOTE]
> La classe deve `IDD` definire un membro che specifica l'ID risorsa modello di finestra di dialogo. Ad esempio, la Creazione guidata progetto ATL aggiunge automaticamente la riga seguente alla classe:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]

dove `MyDlg` è il **nome breve** immesso nella pagina **Nomi** della procedura guidata.

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Utilizzo di finestre di dialogo in ATLUsing dialog boxes in ATL|[Classi finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|
|Finestre di dialogo|[Finestre di dialogo](/windows/win32/dlgbox/dialog-boxes) e argomenti successivi in Windows SDK|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cdialogimplcreate"></a><a name="create"></a>CDialogImpl::Create

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

*hWndPadre*<br/>
[in] Handle per la finestra proprietaria.

**RECT&** *rect* [in] Una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) che specifica le dimensioni e la posizione della finestra di dialogo.

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del WM_INITDIALOG messaggio.

### <a name="return-value"></a>Valore restituito

Handle per la finestra di dialogo appena creata.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo `CDialogImpl` viene collegata automaticamente all'oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal). La seconda sostituzione precedente viene utilizzata solo con [CComControl](../../atl/reference/ccomcontrol-class.md).

## <a name="cdialogimpldestroywindow"></a><a name="destroywindow"></a>CDialogImpl::Destroywindow

Elimina una finestra di dialogo non modale.

```
BOOL DestroyWindow();
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra di dialogo è stata eliminata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Restituisce TRUE se la finestra di dialogo è stata eliminata correttamente. in caso contrario, FALSE.

## <a name="cdialogimpldialogproc"></a><a name="dialogproc"></a>CDialogImpl::DialogProc

Questa funzione statica implementa la procedura della finestra di dialogo.

```
static LRESULT CALLBACK DialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle per la finestra di dialogo.

*Umsg*<br/>
[in] Messaggio inviato alla finestra di dialogo.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

TRUESe il messaggio viene elaborato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`DialogProc`utilizza la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

È possibile `DialogProc` eseguire l'override per fornire un meccanismo diverso per la gestione dei messaggi.

## <a name="cdialogimpldomodal"></a><a name="domodal"></a>CDialogImpl::DoModal

Crea una finestra di dialogo modale.

```
INT_PTR DoModal(
    HWND hWndParent = ::GetActiveWindow(),
    LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
[in] Handle per la finestra proprietaria. Il valore predefinito è il valore restituito della funzione [Win32 GetActiveWindow.](/windows/win32/api/winuser/nf-winuser-getactivewindow)

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del WM_INITDIALOG messaggio.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, il valore del parametro *nRetCode* specificato nella chiamata a [EndDialog](#enddialog). In caso contrario, -1.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo `CDialogImpl` viene collegata automaticamente all'oggetto.

Per creare una finestra di dialogo non modale, chiamare [Create](#create).

## <a name="cdialogimplenddialog"></a><a name="enddialog"></a>CDialogImpl::EndDialog

Elimina una finestra di dialogo modale.

```
BOOL EndDialog(int nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode (codice)*<br/>
[in] Valore che deve essere restituito da [CDialogImpl::DoModal](#domodal).

### <a name="return-value"></a>Valore restituito

TRUESe la finestra di dialogo viene eliminata. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`EndDialog`deve essere chiamato tramite la procedura di dialogo. Dopo l'eliminazione della finestra di dialogo, Windows utilizza il `DoModal`valore di *nRetCode* come valore restituito per , che ha creato la finestra di dialogo.

> [!NOTE]
> Non chiamare `EndDialog` per eliminare definitivamente una finestra di dialogo non modale. Chiamare [invece CWindow::DestroyWindow.](../../atl/reference/cwindow-class.md#destroywindow)

## <a name="cdialogimplgetdialogproc"></a><a name="getdialogproc"></a>CDialogImpl::GetDialogProc

Restituisce `DialogProc`, la routine della finestra di dialogo corrente.

```
virtual WNDPROC GetDialogProc();
```

### <a name="return-value"></a>Valore restituito

La procedura di finestra di dialogo corrente.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per sostituire la routine di dialogo con una routine personalizzata.

## <a name="cdialogimplmapdialogrect"></a><a name="mapdialogrect"></a>CDialogImpl::MapDialogRect

Converte (mappe) le unità della finestra di dialogo del rettangolo specificato in unità dello schermo (pixel).

```
BOOL MapDialogRect(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a `CRect` un oggetto o a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che deve ricevere le coordinate client dell'aggiornamento che racchiude l'area di aggiornamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'aggiornamento ha esito positivo; 0 se l'aggiornamento non riesce. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Osservazioni

La funzione sostituisce le `RECT` coordinate nella struttura specificata con le coordinate convertite, che consente di utilizzare la struttura per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra di dialogo.

## <a name="cdialogimplonfinalmessage"></a><a name="onfinalmessage"></a>Errore di windows::OnFinalMessage CDialogImpl::OnFinalMessage

Chiamato dopo aver ricevuto `WM_NCDESTROY`l'ultimo messaggio (in genere ).

```
virtual void OnFinalMessage(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Un handle per la finestra distrutta.

### <a name="remarks"></a>Osservazioni

Si noti che se si desidera eliminare automaticamente l'oggetto alla distruzione della finestra, è possibile chiamare **eliminare questo;** qui.

## <a name="cdialogimplstartdialogproc"></a><a name="startdialogproc"></a>CDialogImpl::StartDialogProc

Chiamato una sola volta, quando viene ricevuto il primo messaggio, per elaborare i messaggi inviati alla finestra di dialogo.

```
static LRESULT CALLBACK StartDialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle per la finestra di dialogo.

*Umsg*<br/>
[in] Messaggio inviato alla finestra di dialogo.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

La routine della finestra.

### <a name="remarks"></a>Osservazioni

Dopo la chiamata `StartDialogProc` `DialogProc` iniziale a , viene impostata come routine di dialogo e ulteriori chiamate vi vengono effettuate.

## <a name="see-also"></a>Vedere anche

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
