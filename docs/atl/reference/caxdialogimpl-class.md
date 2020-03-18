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
ms.openlocfilehash: 548d2aed0644187b4b8dee1e472b581f1f92d6a1
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418013"
---
# <a name="caxdialogimpl-class"></a>Classe CAxDialogImpl

Questa classe implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class TBase = CWindow>
class ATL_NO_VTABLE CAxDialogImpl : public CDialogImplBaseT<TBase>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `CAxDialogImpl`.

*TBase*<br/>
Classe della finestra di base per `CDialogImplBaseT`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxDialogImpl:: AdviseSinkMap](#advisesinkmap)|Chiamare questo metodo per consigliare o annullare la notifica di tutte le voci nella mappa eventi della mappa di sink dell'oggetto.|
|[CAxDialogImpl:: create](#create)|Chiamare questo metodo per creare una finestra di dialogo non modale.|
|[CAxDialogImpl::D estroyWindow](#destroywindow)|Chiamare questo metodo per eliminare definitivamente una finestra di dialogo non modale.|
|[CAxDialogImpl::D oModal](#domodal)|Chiamare questo metodo per creare una finestra di dialogo modale.|
|[CAxDialogImpl:: EndDialog](#enddialog)|Chiamare questo metodo per eliminare definitivamente una finestra di dialogo modale.|
|[CAxDialogImpl:: GetDialogProc](#getdialogproc)|Chiamare questo metodo per ottenere un puntatore alla funzione di callback `DialogProc`.|
|[CAxDialogImpl:: GetIDD](#getidd)|Chiamare questo metodo per ottenere l'ID risorsa del modello di finestra di dialogo|
|[CAxDialogImpl:: IsDialogMessage](#isdialogmessage)|Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, in tal caso, elaborare il messaggio.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAxDialogImpl:: m_bModal](#m_bmodal)|Una variabile presente solo nelle build di debug e viene impostata su true se la finestra di dialogo è modale.|

## <a name="remarks"></a>Osservazioni

`CAxDialogImpl` consente di creare una finestra di dialogo modale o non modale. `CAxDialogImpl` fornisce la routine della finestra di dialogo in cui viene utilizzata la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

`CAxDialogImpl` deriva da `CDialogImplBaseT`, che a sua volta deriva da *TBase* (per impostazione predefinita, `CWindow`) e `CMessageMap`.

La classe deve definire un membro IDD che specifichi l'ID della risorsa del modello di finestra di dialogo. Se ad esempio si aggiunge un oggetto finestra di dialogo ATL utilizzando la finestra di dialogo **Aggiungi classe** , la riga seguente viene aggiunta automaticamente alla classe:

[!code-cpp[NVC_ATL_Windowing#41](../../atl/codesnippet/cpp/caxdialogimpl-class_1.h)]

dove `MyDialog` è il **nome breve** immesso nella creazione guidata finestra di dialogo ATL.

Per ulteriori informazioni, vedere [implementazione di una](../../atl/implementing-a-dialog-box.md) finestra di dialogo.

Si noti che un controllo ActiveX in una finestra di dialogo modale creata con `CAxDialogImpl` non supporterà i tasti di scelta rapida. Per supportare i tasti di scelta rapida in una finestra di dialogo creata con `CAxDialogImpl`, creare una finestra di dialogo non modale e, usando il proprio ciclo di messaggi, usare [CAxDialogImpl:: IsDialogMessage](#isdialogmessage) dopo aver ricevuto un messaggio dalla coda per gestire un tasto di scelta rapida.

Per ulteriori informazioni su `CAxDialogImpl`, vedere [domande frequenti sul contenimento di controlli ATL](../../atl/atl-control-containment-faq.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMessageMap](../../atl/reference/cmessagemap-class.md)

`TBase`

`CWindowImplRoot`

`CDialogImplBaseT`

`CAxDialogImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="advisesinkmap"></a>CAxDialogImpl:: AdviseSinkMap

Chiamare questo metodo per consigliare o annullare la notifica di tutte le voci nella mappa eventi della mappa di sink dell'oggetto.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### <a name="parameters"></a>Parametri

*bAdvise*<br/>
Impostare su true se tutte le voci di sink devono essere consigliate; false se tutte le voci di sink devono essere non consigliate.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="create"></a>CAxDialogImpl:: create

Chiamare questo metodo per creare una finestra di dialogo non modale.

```
HWND Create(HWND hWndParent, LPARAM dwInitParam = NULL);
HWND Create(HWND hWndParent, RECT&, LPARAM dwInitParam = NULL);
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
in Handle per la finestra proprietaria.

*dwInitParam*<br/>
in Specifica il valore da passare alla finestra di dialogo nel parametro *lParam* del messaggio WM_INITDIALOG.

*& RECT*<br/>
Questo parametro non viene usato. Questo parametro viene passato da `CComControl`.

### <a name="return-value"></a>Valore restituito

Handle per la finestra di dialogo appena creata.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo viene automaticamente collegata all'oggetto `CAxDialogImpl`. Per creare una finestra di dialogo modale, chiamare [DoModal](#domodal).

Il secondo override viene fornito solo in modo che le finestre di dialogo possano essere usate con [CComControl](../../atl/reference/ccomcontrol-class.md).

##  <a name="destroywindow"></a>CAxDialogImpl::D estroyWindow

Chiamare questo metodo per eliminare definitivamente una finestra di dialogo non modale.

```
BOOL DestroyWindow();
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra viene distrutta correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Non chiamare `DestroyWindow` per eliminare definitivamente una finestra di dialogo modale. In alternativa, chiamare [EndDialog](#enddialog) .

##  <a name="domodal"></a>CAxDialogImpl::D oModal

Chiamare questo metodo per creare una finestra di dialogo modale.

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

Se ha esito positivo, il valore del parametro *nRetCode* specificato nella chiamata a [EndDialog](#enddialog); in caso contrario,-1.

### <a name="remarks"></a>Osservazioni

Questa finestra di dialogo viene automaticamente collegata all'oggetto `CAxDialogImpl`.

Per creare una finestra di dialogo non modale, chiamare [create](#create).

##  <a name="enddialog"></a>CAxDialogImpl:: EndDialog

Chiamare questo metodo per eliminare definitivamente una finestra di dialogo modale.

```
BOOL EndDialog(int nRetCode);
```

### <a name="parameters"></a>Parametri

*nRetCode*<br/>
in Valore che deve essere restituito da [DoModal](#domodal).

### <a name="return-value"></a>Valore restituito

TRUE se la finestra di dialogo viene distrutta; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

è necessario chiamare `EndDialog` tramite la routine della finestra di dialogo. Dopo la distruzione della finestra di dialogo, in Windows viene utilizzato il valore di *nRetCode* come valore restituito per `DoModal`, che ha creato la finestra di dialogo.

> [!NOTE]
>  Non chiamare `EndDialog` per eliminare definitivamente una finestra di dialogo non modale. In alternativa, chiamare [DestroyWindow](#destroywindow) .

##  <a name="getdialogproc"></a>CAxDialogImpl:: GetDialogProc

Chiamare questo metodo per ottenere un puntatore alla funzione di callback `DialogProc`.

```
virtual DLGPROC GetDialogProc();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di callback `DialogProc`.

### <a name="remarks"></a>Osservazioni

La funzione `DialogProc` è una funzione di callback definita dall'applicazione.

##  <a name="getidd"></a>CAxDialogImpl:: GetIDD

Chiamare questo metodo per ottenere l'ID della risorsa del modello di finestra di dialogo.

```
int GetIDD();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ID della risorsa del modello di finestra di dialogo.

##  <a name="isdialogmessage"></a>CAxDialogImpl:: IsDialogMessage

Chiamare questo metodo per determinare se un messaggio è destinato a questa finestra di dialogo e, in tal caso, elaborare il messaggio.

```
BOOL IsDialogMessage(LPMSG pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore a una struttura di [messaggi](/windows/win32/api/winuser/ns-winuser-msg) contenente il messaggio da verificare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il messaggio è stato elaborato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo è destinato a essere chiamato dall'interno di un ciclo di messaggi.

##  <a name="m_bmodal"></a>CAxDialogImpl:: m_bModal

Una variabile presente solo nelle build di debug e viene impostata su true se la finestra di dialogo è modale.

```
bool m_bModal;
```

## <a name="see-also"></a>Vedere anche

[Classe CDialogImpl](../../atl/reference/cdialogimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
