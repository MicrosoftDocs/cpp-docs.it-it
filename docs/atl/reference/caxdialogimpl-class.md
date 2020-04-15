---
title: Classe CAxDialogImpl
ms.date: 11/04/2016
f1_keywords:
- CAxDialogImpl
- ATLWIN/ATL::CAxDialogImpl
- ATLWIN/ATL::CAxDialogImpl::AdviseSinkMap
- ATLWIN/ATL::CAxDialogImpl::Create
- ATLWIN/ATL::CAxDialogImpl::DestroyWindow
- ATLWIN/ATL::CAxDialogImpl::DoModal
- ATLWIN/ATL::CAxDialogImpl::EndDialog
- ATLWIN/ATL::CAxDialogImpl::GetDialogProc
- ATLWIN/ATL::CAxDialogImpl::GetIDD
- ATLWIN/ATL::CAxDialogImpl::IsDialogMessage
- ATLWIN/ATL::CAxDialogImpl::m_bModal
helpviewer_keywords:
- CAxDialogImpl class
- ATL, dialog boxes
ms.assetid: 817df483-3fa8-44e7-8487-72ba0881cd27
ms.openlocfilehash: d8e60a817d197f67c14318a7d50ddf796e570142
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318732"
---
# <a name="caxdialogimpl-class"></a>Classe CAxDialogImpl

Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.This class implements a dialog box (modal or modeless) that hosts ActiveX controls.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class TBase = CWindow>
class ATL_NO_VTABLE CAxDialogImpl : public CDialogImplBaseT<TBase>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `CAxDialogImpl`derivata da .

*TBase (informazioni in stato di base*<br/>
La classe della `CDialogImplBaseT`finestra base per .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxDialogImpl::AdviseSinkMap](#advisesinkmap)|Chiamare questo metodo per consigliare o annullare la visualizzazione di tutte le voci nella mappa eventi della mappa sink dell'oggetto.|
|[CAxDialogImpl::Creare](#create)|Chiamare questo metodo per creare una finestra di dialogo non modale.|
|[CAxDialogImpl::Destroywindow](#destroywindow)|Chiamare questo metodo per eliminare definitivamente una finestra di dialogo non modale.|
|[CAxDialogImpl::DoModal](#domodal)|Chiamare questo metodo per creare una finestra di dialogo modale.|
|[CAxDialogImpl::EndDialog](#enddialog)|Chiamare questo metodo per eliminare una finestra di dialogo modale.|
|[CAxDialogImpl::GetDialogProc](#getdialogproc)|Chiamare questo metodo per ottenere `DialogProc` un puntatore alla funzione di callback.|
|[CAxDialogImpl::GetIDD](#getidd)|Chiamare questo metodo per ottenere l'ID risorsa modello di finestra di dialogoCall this method to get the dialog template resource ID|
|[CAxDialogImpl::IsDialogMessage](#isdialogmessage)|Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, in caso affermativo, elaborare il messaggio.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAxDialogImpl::m_bModal](#m_bmodal)|Variabile che esiste solo nelle build di debug e viene impostata su true se la finestra di dialogo è modale.|

## <a name="remarks"></a>Osservazioni

`CAxDialogImpl`consente di creare una finestra di dialogo modale o non modale. `CAxDialogImpl`fornisce la procedura della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

`CAxDialogImpl`deriva da `CDialogImplBaseT`, che a sua volta deriva `CWindow`da `CMessageMap` *TBase* (per impostazione predefinita, ) e .

La classe deve definire un membro IDD che specifica l'ID risorsa modello di finestra di dialogo. Ad esempio, l'aggiunta di un oggetto finestra di dialogo ATL utilizzando la finestra di dialogo **Aggiungi classe** aggiunge automaticamente la riga seguente alla classe:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/caxdialogimpl-class_1.h)]

dove `MyDialog` è il **nome breve** immesso nella Creazione guidata finestra di dialogo ATL.

Per ulteriori informazioni, vedere Implementazione di [una finestra di dialogo.](../../atl/implementing-a-dialog-box.md)

Si noti che un controllo ActiveX `CAxDialogImpl` in una finestra di dialogo modale creata con non supporterà i tasti di scelta rapida. Per supportare i tasti di `CAxDialogImpl`scelta rapida in una finestra di dialogo creata con , creare una finestra di dialogo non modale e, utilizzando un ciclo di messaggi personalizzato, utilizzare [CAxDialogImpl::IsDialogMessage](#isdialogmessage) dopo aver ottenuto un messaggio dalla coda per gestire un tasto di scelta rapida.

Per ulteriori `CAxDialogImpl`informazioni su , vedere Domande frequenti sul [contenimento dei](../../atl/atl-control-containment-faq.md)controlli ATL .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMessageMap](../../atl/reference/cmessagemap-class.md)

`TBase`

`CWindowImplRoot`

`CDialogImplBaseT`

`CAxDialogImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="caxdialogimpladvisesinkmap"></a><a name="advisesinkmap"></a>CAxDialogImpl::AdviseSinkMap

Chiamare questo metodo per consigliare o annullare la visualizzazione di tutte le voci nella mappa eventi della mappa sink dell'oggetto.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### <a name="parameters"></a>Parametri

*bConsigli*<br/>
Impostare su true se tutte le voci del sink devono essere consigliate; false se tutte le voci di sink devono essere annullate.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="caxdialogimplcreate"></a><a name="create"></a>CAxDialogImpl::Creare

Chiamare questo metodo per creare una finestra di dialogo non modale.

```
HWND Create(HWND hWndParent, LPARAM dwInitParam = NULL);
HWND Create(HWND hWndParent, RECT&, LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
[in] Handle per la finestra proprietaria.

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del WM_INITDIALOG messaggio.

*&RECT*<br/>
Questo parametro non viene usato. Questo parametro viene `CComControl`passato da .

### <a name="return-value"></a>Valore restituito

Handle per la finestra di dialogo appena creata.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo `CAxDialogImpl` viene collegata automaticamente all'oggetto. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal).

La seconda sostituzione viene fornita solo in modo che le finestre di dialogo possano essere utilizzate con [CComControl](../../atl/reference/ccomcontrol-class.md).

## <a name="caxdialogimpldestroywindow"></a><a name="destroywindow"></a>CAxDialogImpl::Destroywindow

Chiamare questo metodo per eliminare definitivamente una finestra di dialogo non modale.

```
BOOL DestroyWindow();
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra viene eliminata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Non chiamare `DestroyWindow` per eliminare definitivamente una finestra di dialogo modale. Chiamare [invece EndDialog.Call EndDialog](#enddialog) instead.

## <a name="caxdialogimpldomodal"></a><a name="domodal"></a>CAxDialogImpl::DoModal

Chiamare questo metodo per creare una finestra di dialogo modale.

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

Se ha esito positivo, il valore del *nRetCode* parametro specificato nella chiamata a [EndDialog](#enddialog); in caso contrario, -1.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo `CAxDialogImpl` viene collegata automaticamente all'oggetto.

Per creare una finestra di dialogo non modale, chiamare [Create](#create).

## <a name="caxdialogimplenddialog"></a><a name="enddialog"></a>CAxDialogImpl::EndDialog

Chiamare questo metodo per eliminare una finestra di dialogo modale.

```
BOOL EndDialog(int nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode (codice)*<br/>
[in] Valore che deve essere restituito da [DoModal](#domodal).

### <a name="return-value"></a>Valore restituito

TRUESe la finestra di dialogo viene eliminata. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`EndDialog`deve essere chiamato tramite la procedura della finestra di dialogo. Dopo l'eliminazione della finestra di dialogo, Windows utilizza il `DoModal`valore di *nRetCode* come valore restituito per , che ha creato la finestra di dialogo.

> [!NOTE]
> Non chiamare `EndDialog` per eliminare definitivamente una finestra di dialogo non modale. Chiamare invece [DestroyWindow.Call DestroyWindow](#destroywindow) instead.

## <a name="caxdialogimplgetdialogproc"></a><a name="getdialogproc"></a>CAxDialogImpl::GetDialogProc

Chiamare questo metodo per ottenere `DialogProc` un puntatore alla funzione di callback.

```
virtual DLGPROC GetDialogProc();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `DialogProc` puntatore alla funzione di callback.

### <a name="remarks"></a>Osservazioni

La `DialogProc` funzione è una funzione di callback definita dall'applicazione.

## <a name="caxdialogimplgetidd"></a><a name="getidd"></a>CAxDialogImpl::GetIDD

Chiamare questo metodo per ottenere l'ID risorsa modello di finestra di dialogo.

```
int GetIDD();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ID risorsa modello di finestra di dialogo.

## <a name="caxdialogimplisdialogmessage"></a><a name="isdialogmessage"></a>CAxDialogImpl::IsDialogMessage

Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, in caso affermativo, elaborare il messaggio.

```
BOOL IsDialogMessage(LPMSG pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore a una struttura [MSG](/windows/win32/api/winuser/ns-winuser-msg) che contiene il messaggio da controllare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il messaggio è stato elaborato, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato dall'interno di un ciclo di messaggi.

## <a name="caxdialogimplm_bmodal"></a><a name="m_bmodal"></a>CAxDialogImpl::m_bModal

Variabile che esiste solo nelle build di debug e viene impostata su true se la finestra di dialogo è modale.

```
bool m_bModal;
```

## <a name="see-also"></a>Vedere anche

[Classe CDialogImpl](../../atl/reference/cdialogimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
