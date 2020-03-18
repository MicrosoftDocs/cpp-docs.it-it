---
title: Funzioni globali di controllo composito
ms.date: 11/04/2016
f1_keywords:
- atlhost/ATL::AtlAxDialogBox
- atlhost/ATL::AtlAxCreateDialog
- atlhost/ATL::AtlAxCreateControl
- atlhost/ATL::AtlAxCreateControlEx
- atlhost/ATL::AtlAxCreateControlLic
- atlhost/ATL::AtlAxCreateControlLicEx
- atlhost/ATL::AtlAxAttachControl
- atlhost/ATL::AtlAxGetHost
- atlhost/ATL::AtlAxGetControl
- atlhost/ATL::AtlSetChildSite
- atlhost/ATL::AtlAxWinInit
- atlhost/ATL::AtlAxWinTerm
- atlhost/ATL::AtlGetObjectSourceInterface
helpviewer_keywords:
- composite controls, global functions
ms.assetid: 536884cd-e863-4c7a-ab0a-604dc60a0bbe
ms.openlocfilehash: 525fc01247053a1e2bc993398978cb332262a1a5
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417782"
---
# <a name="composite-control-global-functions"></a>Funzioni globali di controllo composito

Queste funzioni forniscono supporto per la creazione di finestre di dialogo e per la creazione, l'hosting e la gestione delle licenze dei controlli ActiveX.

> [!IMPORTANT]
>  Le funzioni elencate nella tabella seguente non possono essere usate nelle applicazioni eseguite nel Windows Runtime.

|||
|-|-|
|[AtlAxDialogBox](#atlaxdialogbox)|Crea una finestra di dialogo modale da un modello di finestra di dialogo fornito dall'utente. La finestra di dialogo risultante può contenere controlli ActiveX.|
|[AtlAxCreateDialog](#atlaxcreatedialog)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo fornito dall'utente. La finestra di dialogo risultante può contenere controlli ActiveX.|
|[AtlAxCreateControl](#atlaxcreatecontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.|
|[AtlAxCreateControlEx](#atlaxcreatecontrolex)|Crea un controllo ActiveX, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[AtlAxCreateControlLic](#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|
|[AtlAxCreateControlLicEx](#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[AtlAxAttachControl](#atlaxattachcontrol)|Associa un controllo creato in precedenza alla finestra specificata.|
|[AtlAxGetHost](#atlaxgethost)|Utilizzato per ottenere un puntatore a interfaccia diretta al contenitore per una finestra specificata, se presente, in base al relativo handle.|
|[AtlAxGetControl](#atlaxgetcontrol)|Utilizzato per ottenere un puntatore a interfaccia diretta per il controllo contenuto all'interno di una finestra specificata, se presente, in base al relativo handle.|
|[AtlSetChildSite](#atlsetchildsite)|Inizializza la `IUnknown` del sito figlio.|
|[AtlAxWinInit](#atlaxwininit)|Inizializza il codice di hosting per gli oggetti AxWin.|
|[AtlAxWinTerm](#atlaxwinterm)|Consente di inizializzare il codice di hosting per gli oggetti AxWin.|
|[AtlGetObjectSourceInterface](#atlgetobjectsourceinterface)|Restituisce informazioni sull'interfaccia di origine predefinita di un oggetto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlhost. h

##  <a name="atlaxdialogbox"></a>AtlAxDialogBox

Crea una finestra di dialogo modale da un modello di finestra di dialogo fornito dall'utente.

```
ATLAPI_(int) AtlAxDialogBox(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent,
    DLGPROC lpDialogProc,
    LPARAM dwInitParam);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
in Identifica un'istanza del modulo il cui file eseguibile contiene il modello della finestra di dialogo.

*lpTemplateName*<br/>
in Identifica il modello della finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello della finestra di dialogo o un valore integer che specifica l'identificatore di risorsa del modello di finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola di ordine superiore deve essere pari a zero e la parola di ordine inferiore deve contenere l'identificatore. È possibile usare la macro [MAKEINTRESOURCE](/windows/win32/api/winuser/nf-winuser-makeintresourcew) per creare questo valore.

*hWndParent*<br/>
in Identifica la finestra proprietaria della finestra di dialogo.

*lpDialogProc*<br/>
in Punta alla routine della finestra di dialogo. Per ulteriori informazioni sulla procedura della finestra di dialogo, vedere [DialogProc](/windows/win32/api/winuser/nc-winuser-dlgproc).

*dwInitParam*<br/>
in Specifica il valore da passare alla finestra di dialogo nel parametro *lParam* del messaggio WM_INITDIALOG.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per usare `AtlAxDialogBox` con un modello di finestra di dialogo che contiene un controllo ActiveX, specificare una stringa valida per CLSID, APPID o URL come campo di *testo* della sezione di **controllo** della risorsa della finestra di dialogo, insieme a "AtlAxWinLi" come campo del *nome della classe* nella stessa sezione. Di seguito viene illustrata la possibile somiglianza di una sezione di **controllo** valida:

```
CONTROL    "{04FE35E9-ADBC-4f1d-83FE-8FA4D1F71C7F}", IDC_TEST,
    "AtlAxWin80", WS_GROUP | WS_TABSTOP, 0, 0, 100, 100
```

Per altre informazioni sulla modifica degli script delle risorse, vedere [procedura: aprire un file script di risorsa in formato testo](../../windows/how-to-open-a-resource-script-file-in-text-format.md). Per ulteriori informazioni sulle istruzioni di controllo della definizione delle risorse, vedere [parametri di controllo comuni](/windows/win32/menurc/common-control-parameters) in Windows SDK: SDK Tools.

Per ulteriori informazioni sulle finestre di dialogo in generale, vedere [DialogBox](/windows/win32/api/winuser/nf-winuser-dialogboxw) e [CreateDialogParam](/windows/win32/api/winuser/nf-winuser-createdialogparamw) nel Windows SDK.

##  <a name="atlaxcreatedialog"></a>AtlAxCreateDialog

Crea una finestra di dialogo non modale da un modello di finestra di dialogo fornito dall'utente.

```
ATLAPI_(HWND) AtlAxCreateDialog(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent,
    DLGPROC lpDialogProc,
    LPARAM dwInitParam);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
in Identifica un'istanza del modulo il cui file eseguibile contiene il modello della finestra di dialogo.

*lpTemplateName*<br/>
in Identifica il modello della finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello della finestra di dialogo o un valore integer che specifica l'identificatore di risorsa del modello di finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola di ordine superiore deve essere pari a zero e la parola di ordine inferiore deve contenere l'identificatore. È possibile usare la macro [MAKEINTRESOURCE](/windows/win32/api/winuser/nf-winuser-makeintresourcew) per creare questo valore.

*hWndParent*<br/>
in Identifica la finestra proprietaria della finestra di dialogo.

*lpDialogProc*<br/>
in Punta alla routine della finestra di dialogo. Per ulteriori informazioni sulla procedura della finestra di dialogo, vedere [DialogProc](/windows/win32/api/winuser/nc-winuser-dlgproc).

*dwInitParam*<br/>
in Specifica il valore da passare alla finestra di dialogo nel parametro *lParam* del messaggio WM_INITDIALOG.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

La finestra di dialogo risultante può contenere controlli ActiveX.

Vedere [CreateDialog](/windows/win32/api/winuser/nf-winuser-createdialogw) e [CreateDialogParam](/windows/win32/api/winuser/nf-winuser-createdialogparamw) nel Windows SDK.

##  <a name="atlaxcreatecontrol"></a>AtlAxCreateControl

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.

```
ATLAPI AtlAxCreateControl(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa da passare al controllo. Deve essere formattata in uno dei modi seguenti:

- ProgID come `"MSCAL.Calendar.7"`

- Un CLSID, ad esempio `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` necessario precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
in Handle per la finestra a cui verrà collegato il controllo.

*pStream*<br/>
in Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
out Indirizzo di un puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione globale restituisce lo stesso risultato della chiamata a [AtlAxCreateControlEx](#atlaxcreatecontrolex)(*lpszName*, *HWND*, *pStream*, null, null, null, null);.

Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLic](#atlaxcreatecontrollic).

##  <a name="atlaxcreatecontrolex"></a>AtlAxCreateControlEx

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata. È possibile creare anche un puntatore a interfaccia e un sink di evento per il nuovo controllo.

```
ATLAPI AtlAxCreateControlEx(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    IUnknown** ppUnkControl,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa da passare al controllo. Deve essere formattata in uno dei modi seguenti:

- ProgID come `"MSCAL.Calendar.7"`

- Un CLSID, ad esempio `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` necessario precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
in Handle per la finestra a cui verrà collegato il controllo.

*pStream*<br/>
in Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
out Indirizzo di un puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*ppUnkControl*<br/>
out Indirizzo di un puntatore che riceverà la `IUnknown` del controllo creato. Può essere NULL.

*iidSink*<br/>
Identificatore di interfaccia di un'interfaccia in uscita sull'oggetto contenuto.

*punkSink*<br/>
Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto di connessione specificato da *iidSink* nell'oggetto contenuto dopo che l'oggetto contenuto è stato creato correttamente.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlAxCreateControlEx` è simile a [AtlAxCreateControl](#atlaxcreatecontrol) , ma consente anche di ricevere un puntatore di interfaccia per il controllo appena creato e di configurare un sink di evento per ricevere gli eventi generati dal controllo.

Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLicEx](#atlaxcreatecontrollicex).

##  <a name="atlaxcreatecontrollic"></a>AtlAxCreateControlLic

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.

```
ATLAPI AtlAxCreateControlLic(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    BSTR bstrLic = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa da passare al controllo. Deve essere formattata in uno dei modi seguenti:

- ProgID come `"MSCAL.Calendar.7"`

- Un CLSID, ad esempio `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` necessario precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
Handle per la finestra a cui verrà collegato il controllo.

*pStream*<br/>
Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
Indirizzo di un puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*bstrLic*<br/>
BSTR che contiene la licenza per il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="example"></a>Esempio

Per un esempio di come usare `AtlAxCreateControlLic`, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

##  <a name="atlaxcreatecontrollicex"></a>AtlAxCreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata. È possibile creare anche un puntatore a interfaccia e un sink di evento per il nuovo controllo.

```
ATLAPI AtlAxCreateControlLicEx(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    IUnknown** ppUnkControl,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLic = NULL);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa da passare al controllo. Deve essere formattata in uno dei modi seguenti:

- ProgID come `"MSCAL.Calendar.7"`

- Un CLSID, ad esempio `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come `"<https://www.microsoft.com>"`

- Riferimento a un documento attivo, ad esempio `"file://\\\Documents\MyDoc.doc"`

- Frammento di codice HTML, ad esempio `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` necessario precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
Handle per la finestra a cui verrà collegato il controllo.

*pStream*<br/>
Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer*<br/>
Indirizzo di un puntatore che riceverà il `IUnknown` del contenitore. Può essere NULL.

*ppUnkControl*<br/>
out Indirizzo di un puntatore che riceverà la `IUnknown` del controllo creato. Può essere NULL.

*iidSink*<br/>
Identificatore di interfaccia di un'interfaccia in uscita sull'oggetto contenuto.

*punkSink*<br/>
Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto di connessione specificato da *iidSink* nell'oggetto contenuto dopo che l'oggetto contenuto è stato creato correttamente.

*bstrLic*<br/>
BSTR che contiene la licenza per il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlAxCreateControlLicEx` è simile a [AtlAxCreateControlLic](#atlaxcreatecontrollic) , ma consente anche di ricevere un puntatore di interfaccia per il controllo appena creato e di configurare un sink di evento per ricevere gli eventi generati dal controllo.

### <a name="example"></a>Esempio

Per un esempio di come usare `AtlAxCreateControlLicEx`, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

##  <a name="atlaxattachcontrol"></a>AtlAxAttachControl

Associa un controllo creato in precedenza alla finestra specificata.

```
ATLAPI AtlAxAttachControl(
    IUnknown* pControl,
    HWND hWnd,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
in Puntatore al `IUnknown` del controllo.

*hWnd*<br/>
in Handle per la finestra che ospiterà il controllo.

*ppUnkContainer*<br/>
out Puntatore a un puntatore al `IUnknown` dell'oggetto contenitore.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Usare [AtlAxCreateControlEx](#atlaxcreatecontrolex) e [AtlAxCreateControl](#atlaxcreatecontrol) per creare e alleghi simultaneamente un controllo.

> [!NOTE]
>  È necessario inizializzare correttamente l'oggetto controllo da collegare prima di chiamare `AtlAxAttachControl`.

##  <a name="atlaxgethost"></a>AtlAxGetHost

Ottiene un puntatore a interfaccia diretto per il contenitore di una finestra specifica (se presente) in base al relativo handle.

```
ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
```

### <a name="parameters"></a>Parametri

*h*<br/>
in Handle per la finestra che ospita il controllo.

*PP*<br/>
out `IUnknown` del contenitore del controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="atlaxgetcontrol"></a>AtlAxGetControl

Ottiene un puntatore a interfaccia diretto per il controllo contenuto all'interno di una finestra specifica in base al relativo handle.

```
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);
```

### <a name="parameters"></a>Parametri

*h*<br/>
in Handle per la finestra che ospita il controllo.

*PP*<br/>
out `IUnknown` del controllo ospitato.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="atlsetchildsite"></a>AtlSetChildSite

Chiamare questa funzione per impostare il sito dell'oggetto figlio sulla `IUnknown` dell'oggetto padre.

```
HRESULT AtlSetChildSite(IUnknown* punkChild, IUnknown* punkParent);
```

### <a name="parameters"></a>Parametri

*punkChild*<br/>
in Puntatore all'interfaccia `IUnknown` dell'elemento figlio.

*punkParent*<br/>
in Puntatore all'interfaccia `IUnknown` dell'elemento padre.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="atlaxwininit"></a>AtlAxWinInit

Questa funzione Inizializza il codice di hosting del controllo ATL registrando le classi di finestra **"AtlAxWinLic80"** e **"AtlAxWinLic80"** oltre a un paio di messaggi di finestra personalizzati.

```
ATLAPI_(BOOL) AtlAxWinInit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione del codice che ospita il controllo ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima di utilizzare l'API di hosting del controllo ATL. Dopo una chiamata a questa funzione, la classe della finestra **"AtlAxWin"** può essere usata nelle chiamate a [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) o [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw), come descritto nel Windows SDK.

##  <a name="atlaxwinterm"></a>AtlAxWinTerm

Questa funzione Annulla l'inizializzazione del codice di hosting del controllo ATL annullando la registrazione delle classi di finestra **"AtlAxWinLic80"** e **"AtlAxWinLic80"** .

```
inline BOOL AtlAxWinTerm();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama semplicemente [UnregisterClass](/windows/win32/api/winuser/nf-winuser-unregisterclassw) come descritto nel Windows SDK.

Chiamare questa funzione per eseguire la pulizia dopo che tutte le finestre host esistenti sono state distrutte se è stato chiamato [AtlAxWinInit](#atlaxwininit) e non è più necessario creare finestre host. Se non si chiama questa funzione, viene annullata la registrazione automatica della classe della finestra al termine del processo.

##  <a name="atlgetobjectsourceinterface"></a>AtlGetObjectSourceInterface

Chiamare questa funzione per recuperare le informazioni sull'interfaccia di origine predefinita di un oggetto.

```
ATLAPI AtlGetObjectSourceInterface(
    IUnknown* punkObj,
    GUID* plibid,
    IID* piid,
    unsigned short* pdwMajor,
    unsigned short* pdwMinor);
```

### <a name="parameters"></a>Parametri

*punkObj*<br/>
in Puntatore all'oggetto per il quale devono essere restituite le informazioni.

*plibid*<br/>
out Puntatore a LIBID della libreria dei tipi contenente la definizione dell'interfaccia di origine.

*pIID*<br/>
out Puntatore all'ID di interfaccia dell'interfaccia di origine predefinita dell'oggetto.

*pdwMajor*<br/>
out Puntatore al numero di versione principale della libreria dei tipi contenente la definizione dell'interfaccia di origine.

*pdwMinor*<br/>
out Puntatore al numero della versione secondaria della libreria dei tipi contenente la definizione dell'interfaccia di origine.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlGetObjectSourceInterface` possibile fornire l'ID di interfaccia dell'interfaccia di origine predefinita, insieme ai numeri di versione principale e secondaria della libreria dei tipi che descrive l'interfaccia.

> [!NOTE]
>  Affinché questa funzione recuperi correttamente le informazioni richieste, l'oggetto rappresentato da *punkObj* deve implementare `IDispatch` (e restituire le informazioni sul tipo tramite `IDispatch::GetTypeInfo`) più deve implementare anche `IProvideClassInfo2` o `IPersist`. Le informazioni sul tipo per l'interfaccia di origine devono trovarsi nella stessa libreria dei tipi delle informazioni sul tipo per `IDispatch`.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come definire una classe di sink di evento, `CEasySink`, che riduce il numero di argomenti di modello che è possibile passare per `IDispEventImpl` a Bare Essentials. `EasyAdvise` e `EasyUnadvise` utilizzare `AtlGetObjectSourceInterface` per inizializzare i membri di [IDispEventImpl](../../atl/reference/idispeventimpl-class.md) prima di chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) o [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise).

[!code-cpp[NVC_ATL_Windowing#93](../../atl/codesnippet/cpp/composite-control-global-functions_1.h)]

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro di controlli compositi](../../atl/reference/composite-control-macros.md)
