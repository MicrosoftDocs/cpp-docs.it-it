---
title: CDialogImpl (classe)
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
ms.openlocfilehash: 1124630d8ee15dd284893516bef8057f852b4632
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57420661"
---
# <a name="cdialogimpl-class"></a>CDialogImpl (classe)

Questa classe fornisce metodi per la creazione di una finestra di dialogo modale o non modale.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T,
    class TBase = CWindow>
    class ATL_NO_VTABLE CDialogImpl : public CDialogImplBaseT<TBase>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `CDialogImpl`.

*TBase*<br/>
Classe di base della nuova classe. La classe base predefinita è [CWindow](../../atl/reference/cwindow-class.md).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[creare](#create)|Crea una finestra di dialogo non modale.|
|[DestroyWindow](#destroywindow)|Elimina una finestra di dialogo non modale.|
|[DoModal](#domodal)|Crea una finestra di dialogo modale.|
|[EndDialog](#enddialog)|Elimina una finestra di dialogo modale.|

### <a name="cdialogimplbaset-methods"></a>Metodi CDialogImplBaseT

|||
|-|-|
|[GetDialogProc](#getdialogproc)|Restituisce la routine di finestra di dialogo corrente.|
|[MapDialogRect](#mapdialogrect)|Le unità finestra di dialogo del rettangolo specificato viene eseguito il mapping alle unità di schermata (pixel).|
|[OnFinalMessage](#onfinalmessage)|Chiamato dopo la ricezione dell'ultimo messaggio, in genere WM_NCDESTROY.|

### <a name="static-functions"></a>Funzioni statiche

|||
|-|-|
|[DialogProc](#dialogproc)|Elabora i messaggi inviati alla finestra di dialogo.|
|[StartDialogProc](#startdialogproc)|Chiamato quando viene ricevuto il messaggio prima di elaborare i messaggi inviati alla finestra di dialogo.|

## <a name="remarks"></a>Note

Con `CDialogImpl` è possibile creare una finestra di dialogo modale o non modale. `CDialogImpl` fornisce la routine di finestra di dialogo, che usa la mappa dei messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

Il distruttore della classe base `~CWindowImplRoot` assicura che la finestra è stata eliminata prima dell'eliminazione dell'oggetto.

`CDialogImpl` deriva da `CDialogImplBaseT`, che a sua volta deriva da `CWindowImplRoot`.

> [!NOTE]
>  La classe deve definire un `IDD` membro che specifica l'ID di risorsa modello di finestra di dialogo. Ad esempio, la creazione guidata progetto ATL aggiunge automaticamente la riga seguente alla classe:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/cdialogimpl-class_1.h)]

in cui `MyDlg` è il **nome breve** immesso nella finestra della procedura guidata **nomi** pagina.

|Per altre informazioni su|Vedere|
|--------------------------------|---------|
|Creazione di controlli|[Esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|
|Tramite le finestre di dialogo ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|
|Finestre di dialogo|[Finestre di dialogo](/windows/desktop/dlgbox/dialog-boxes) e argomenti successivi nel SDK di Windows|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="create"></a>  CDialogImpl::Create

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
[in] Handle alla finestra proprietaria.

**RECT &** *rect* [in] oggetto [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura che specifica le dimensioni e la posizione della finestra di dialogo.

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del messaggio WM_INITDIALOG.

### <a name="return-value"></a>Valore restituito

Handle alla finestra di dialogo appena creato.

### <a name="remarks"></a>Note

Questa finestra di dialogo viene associata automaticamente al `CDialogImpl` oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal). Il secondo override precedente viene usato solo con [CComControl](../../atl/reference/ccomcontrol-class.md).

##  <a name="destroywindow"></a>  CDialogImpl::DestroyWindow

Elimina una finestra di dialogo non modale.

```
BOOL DestroyWindow();
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di dialogo è stata correttamente eliminata; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Restituisce TRUE se la finestra di dialogo è stata eliminata correttamente; in caso contrario, FALSE.

##  <a name="dialogproc"></a>  CDialogImpl::DialogProc

Questa funzione statica implementa la routine di finestra di dialogo.

```
static LRESULT CALLBACK DialogProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle alla finestra di dialogo.

*uMsg*<br/>
[in] Il messaggio inviato alla finestra di dialogo.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

TRUE se il messaggio viene elaborato; in caso contrario, FALSE.

### <a name="remarks"></a>Note

`DialogProc` Usa la mappa dei messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

È possibile eseguire l'override `DialogProc` per fornire un meccanismo diverso per la gestione dei messaggi.

##  <a name="domodal"></a>  CDialogImpl::DoModal

Crea una finestra di dialogo modale.

```
INT_PTR DoModal(
    HWND hWndParent = ::GetActiveWindow(),
    LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
[in] Handle alla finestra proprietaria. Il valore predefinito è il valore restituito di [GetActiveWindow](/windows/desktop/api/winuser/nf-winuser-getactivewindow) funzione Win32.

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del messaggio WM_INITDIALOG.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, il valore della *nRetCode* il parametro specificato nella chiamata a [EndDialog](#enddialog). In caso contrario, -1.

### <a name="remarks"></a>Note

Questa finestra di dialogo viene associata automaticamente al `CDialogImpl` oggetto.

Per creare una finestra di dialogo non modale, chiamare [Create](#create).

##  <a name="enddialog"></a>  CDialogImpl::EndDialog

Elimina una finestra di dialogo modale.

```
BOOL EndDialog(int nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode*<br/>
[in] Il valore deve essere restituito da [CDialogImpl::DoModal](#domodal).

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di dialogo viene eliminato definitivamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

`EndDialog` deve essere chiamato tramite la procedura di finestra di dialogo. Dopo che la finestra di dialogo viene eliminato definitivamente, Windows Usa il valore della *nRetCode* come valore restituito per `DoModal`, che creato la finestra di dialogo.

> [!NOTE]
>  Non chiamare `EndDialog` eliminare definitivamente una finestra di dialogo non modale. Chiamare [CWindow::DestroyWindow](../../atl/reference/cwindow-class.md#destroywindow) invece.

##  <a name="getdialogproc"></a>  CDialogImpl::GetDialogProc

Restituisce `DialogProc`, la routine di finestra di dialogo corrente.

```
virtual WNDPROC GetDialogProc();
```

### <a name="return-value"></a>Valore restituito

La routine di finestra di dialogo corrente.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per sostituire la routine di finestra di dialogo con i propri.

##  <a name="mapdialogrect"></a>  CDialogImpl::MapDialogRect

Converte unità (maps) le unità finestra di dialogo del rettangolo specificato alla schermata (pixel).

```
BOOL MapDialogRect(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a un `CRect` oggetto oppure [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura che riceverà le coordinate del client dell'aggiornamento che racchiude l'area di aggiornamento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'aggiornamento verrà eseguito. 0 se l'aggiornamento non riesce. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Note

La funzione sostituisce le coordinate dell'oggetto `RECT` struttura con le coordinate convertite, che consente la struttura da utilizzare per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra di dialogo.

##  <a name="onfinalmessage"></a>  CDialogImpl::OnFinalMessage

Chiamato dopo la ricezione dell'ultimo messaggio (in genere `WM_NCDESTROY`).

```
virtual void OnFinalMessage(HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
[in] Handle alla finestra in corso l'eliminazione.

### <a name="remarks"></a>Note

Si noti che se si vuole eliminare automaticamente l'oggetto di distruzione di finestre, è possibile chiamare **elimini;** qui.

##  <a name="startdialogproc"></a>  CDialogImpl::StartDialogProc

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
[in] Handle alla finestra di dialogo.

*uMsg*<br/>
[in] Il messaggio inviato alla finestra di dialogo.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

### <a name="return-value"></a>Valore restituito

La procedura della finestra.

### <a name="remarks"></a>Note

Dopo la chiamata iniziale alla `StartDialogProc`, `DialogProc` è impostato come una procedura di finestra di dialogo e ulteriormente le chiamate indirizzate.

## <a name="see-also"></a>Vedere anche

[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
