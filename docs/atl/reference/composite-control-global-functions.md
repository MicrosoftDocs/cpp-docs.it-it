---
title: Funzioni globali di controllo compositoComposite Control Global Functions
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
ms.openlocfilehash: 99ecd4cf04b3eb696f897d6ef5a5e3839d46ef17
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331605"
---
# <a name="composite-control-global-functions"></a>Funzioni globali di controllo compositoComposite Control Global Functions

Queste funzioni forniscono supporto per la creazione di finestre di dialogo e per la creazione, l'hosting e la gestione delle licenze di controlli ActiveX.

> [!IMPORTANT]
> Le funzioni elencate nella tabella seguente non possono essere utilizzate nelle applicazioni eseguite in Windows Runtime.

|||
|-|-|
|[AtlAxDialogBox](#atlaxdialogbox)|Crea una finestra di dialogo modale da un modello di finestra di dialogo fornito dall'utente. La finestra di dialogo risultante può contenere controlli ActiveX.|
|[AtlAxCreateDialog](#atlaxcreatedialog)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo fornito dall'utente. La finestra di dialogo risultante può contenere controlli ActiveX.|
|[AtlAxCreateControl](#atlaxcreatecontrol)|Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.|
|[AtlAxCreateControlEx](#atlaxcreatecontrolex)|Crea un controllo ActiveX, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[AtlAxCreateControlLic](#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|
|[AtlAxCreateControlLicEx](#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[AtlAxAttachControl](#atlaxattachcontrol)|Associa un controllo creato in precedenza alla finestra specificata.|
|[AtlAxGetHost](#atlaxgethost)|Utilizzato per ottenere un puntatore a interfaccia diretto al contenitore per una finestra specificata (se presente), dato il relativo handle.|
|[AtlAxGetControl](#atlaxgetcontrol)|Utilizzato per ottenere un puntatore a interfaccia diretto al controllo contenuto all'interno di una finestra specificata (se presente), dato il relativo handle.|
|[AtlSetChildSite](#atlsetchildsite)|Inizializza l'oggetto `IUnknown` del sito figlio.|
|[AtlAxWinInit](#atlaxwininit)|Inizializza il codice di hosting per gli oggetti AxWin.|
|[AtlAxWinTerm](#atlaxwinterm)|Annulla l'inizializzazione del codice di hosting per gli oggetti AxWin.|
|[AtlGetObjectSourceInterface](#atlgetobjectsourceinterface)|Restituisce informazioni sull'interfaccia di origine predefinita di un oggetto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlhost.h

## <a name="atlaxdialogbox"></a><a name="atlaxdialogbox"></a>AtlAxDialogBox (Finestra di dialogo)

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
[in] Identifica un'istanza del modulo il cui file eseguibile contiene il modello di finestra di dialogo.

*LpTemplateName (Nome modello)*<br/>
[in] Identifica il modello di finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello di finestra di dialogo o un valore intero che specifica l'identificatore di risorsa del modello di finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola più in ordine superiore deve essere zero e la parola di ordine basso deve contenere l'identificatore. È possibile utilizzare la macro [MAKEINTRESOURCE](/windows/win32/api/winuser/nf-winuser-makeintresourcew) per creare questo valore.

*hWndPadre*<br/>
[in] Identifica la finestra proprietaria della finestra di dialogo.

*LpDialogProc (informazioni in lingua inlingua del dialogo)*<br/>
[in] Punta alla procedura della finestra di dialogo. Per ulteriori informazioni sulla routine della finestra di dialogo, vedere [DialogProc](/windows/win32/api/winuser/nc-winuser-dlgproc).

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del WM_INITDIALOG messaggio.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per `AtlAxDialogBox` utilizzare con un modello di finestra di dialogo che contiene un controllo ActiveX, specificare un CLSID valido, APPID o una stringa URL come campo di *testo* della sezione **CONTROL** della risorsa finestra di dialogo, insieme a "AtlAxWin80" come campo *del nome* della classe nella stessa sezione. Di seguito viene illustrato l'aspetto di una sezione **CONTROL** valida:

```
CONTROL    "{04FE35E9-ADBC-4f1d-83FE-8FA4D1F71C7F}", IDC_TEST,
    "AtlAxWin80", WS_GROUP | WS_TABSTOP, 0, 0, 100, 100
```

Per ulteriori informazioni sulla modifica degli script delle risorse, vedere [Procedura: aprire un file](../../windows/how-to-open-a-resource-script-file-in-text-format.md)di script di risorsa in formato testo . Per altre informazioni sulle istruzioni di definizione delle risorse di controllo, vedere Parametri di [controllo comuni](/windows/win32/menurc/common-control-parameters) in Windows SDK: Strumenti SDK.

Per ulteriori informazioni sulle finestre di dialogo in generale, fare riferimento a [DialogBox](/windows/win32/api/winuser/nf-winuser-dialogboxw) e [CreateDialogParam](/windows/win32/api/winuser/nf-winuser-createdialogparamw) in Windows SDK.

## <a name="atlaxcreatedialog"></a><a name="atlaxcreatedialog"></a>AtlAxCreateDialog (informazioni in lingua inlingua del dialogo su Comin

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
[in] Identifica un'istanza del modulo il cui file eseguibile contiene il modello di finestra di dialogo.

*LpTemplateName (Nome modello)*<br/>
[in] Identifica il modello di finestra di dialogo. Questo parametro è il puntatore a una stringa di caratteri con terminazione null che specifica il nome del modello di finestra di dialogo o un valore intero che specifica l'identificatore di risorsa del modello di finestra di dialogo. Se il parametro specifica un identificatore di risorsa, la parola più in ordine superiore deve essere zero e la parola di ordine basso deve contenere l'identificatore. È possibile utilizzare la macro [MAKEINTRESOURCE](/windows/win32/api/winuser/nf-winuser-makeintresourcew) per creare questo valore.

*hWndPadre*<br/>
[in] Identifica la finestra proprietaria della finestra di dialogo.

*LpDialogProc (informazioni in lingua inlingua del dialogo)*<br/>
[in] Punta alla procedura della finestra di dialogo. Per ulteriori informazioni sulla routine della finestra di dialogo, vedere [DialogProc](/windows/win32/api/winuser/nc-winuser-dlgproc).

*dwInitParam*<br/>
[in] Specifica il valore da passare alla finestra di dialogo nel *lParam* parametro del WM_INITDIALOG messaggio.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

La finestra di dialogo risultante può contenere controlli ActiveX.

Vedere [CreateDialog](/windows/win32/api/winuser/nf-winuser-createdialogw) e [CreateDialogParam](/windows/win32/api/winuser/nf-winuser-createdialogparamw) in Windows SDK.

## <a name="atlaxcreatecontrol"></a><a name="atlaxcreatecontrol"></a>AtlAxCreateControl (controllo di sistema

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
Puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei seguenti modi:

- Un ProgID come`"MSCAL.Calendar.7"`

- Un CLSID come`"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come`"<https://www.microsoft.com>"`

- Riferimento a un documento attivo come`"file://\\\Documents\MyDoc.doc"`

- Un frammento di codice HTML, ad esempio`"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"`deve precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
[in] Gestire la finestra a cui verrà associato il controllo.

*pStream (corso)*<br/>
[in] Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer (contenitore ppUnk)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il contenitore. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Questa funzione globale fornisce lo stesso risultato della chiamata di [AtlAxCreateControlEx](#atlaxcreatecontrolex)(*lpszName*, *hWnd*, *pStream*, NULL, NULL, NULL, NULL, NULL);.

Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLic](#atlaxcreatecontrollic).

## <a name="atlaxcreatecontrolex"></a><a name="atlaxcreatecontrolex"></a>AtlAxCreateControlEx

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
Puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei seguenti modi:

- Un ProgID come`"MSCAL.Calendar.7"`

- Un CLSID come`"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come`"<https://www.microsoft.com>"`

- Riferimento a un documento attivo come`"file://\\\Documents\MyDoc.doc"`

- Un frammento di codice HTML, ad esempio`"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"`deve precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
[in] Gestire la finestra a cui verrà associato il controllo.

*pStream (corso)*<br/>
[in] Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer (contenitore ppUnk)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il contenitore. Può essere NULL.

*ppUnkControl (ppUnkControl)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il controllo creato. Può essere NULL.

*iidSink*<br/>
Identificatore di interfaccia di un'interfaccia in uscita nell'oggetto contenuto.

*punkSink*<br/>
Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto di connessione specificato da *iidSink* nell'oggetto contenuto dopo che l'oggetto contenuto è stato creato correttamente.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlAxCreateControlEx`è simile a [AtlAxCreateControl,](#atlaxcreatecontrol) ma consente anche di ricevere un puntatore a interfaccia al controllo appena creato e impostare un sink di evento per ricevere gli eventi generati dal controllo.

Per creare un controllo ActiveX con licenza, vedere [AtlAxCreateControlLicEx](#atlaxcreatecontrollicex).

## <a name="atlaxcreatecontrollic"></a><a name="atlaxcreatecontrollic"></a>AtlAxCreateControlLic

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
Puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei seguenti modi:

- Un ProgID come`"MSCAL.Calendar.7"`

- Un CLSID come`"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come`"<https://www.microsoft.com>"`

- Riferimento a un documento attivo come`"file://\\\Documents\MyDoc.doc"`

- Un frammento di codice HTML, ad esempio`"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"`deve precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
Gestire la finestra a cui verrà associato il controllo.

*pStream (corso)*<br/>
Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer (contenitore ppUnk)*<br/>
Indirizzo di un puntatore `IUnknown` che riceverà il contenitore. Può essere NULL.

*bstrLic*<br/>
Il BSTR contenente la licenza per il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="example"></a>Esempio

Per un esempio di utilizzo, vedere Hosting di `AtlAxCreateControlLic` [controlli ActiveX mediante ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

## <a name="atlaxcreatecontrollicex"></a><a name="atlaxcreatecontrollicex"></a>AtlAxCreateControlLicEx

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
Puntatore a una stringa da passare al controllo. Deve essere formattato in uno dei seguenti modi:

- Un ProgID come`"MSCAL.Calendar.7"`

- Un CLSID come`"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- Un URL come`"<https://www.microsoft.com>"`

- Riferimento a un documento attivo come`"file://\\\Documents\MyDoc.doc"`

- Un frammento di codice HTML, ad esempio`"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"`deve precedere il frammento HTML in modo che sia designato come flusso MSHTML.

*hWnd*<br/>
Gestire la finestra a cui verrà associato il controllo.

*pStream (corso)*<br/>
Puntatore a un flusso utilizzato per inizializzare le proprietà del controllo. Può essere NULL.

*ppUnkContainer (contenitore ppUnk)*<br/>
Indirizzo di un puntatore `IUnknown` che riceverà il contenitore. Può essere NULL.

*ppUnkControl (ppUnkControl)*<br/>
[fuori] Indirizzo di un puntatore `IUnknown` che riceverà il controllo creato. Può essere NULL.

*iidSink*<br/>
Identificatore di interfaccia di un'interfaccia in uscita nell'oggetto contenuto.

*punkSink*<br/>
Puntatore all'interfaccia `IUnknown` dell'oggetto sink da connettere al punto di connessione specificato da *iidSink* nell'oggetto contenuto dopo che l'oggetto contenuto è stato creato correttamente.

*bstrLic*<br/>
Il BSTR contenente la licenza per il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlAxCreateControlLicEx`è simile ad [AtlAxCreateControlLic,](#atlaxcreatecontrollic) ma consente anche di ricevere un puntatore a interfaccia al controllo appena creato e impostare un sink di evento per ricevere gli eventi generati dal controllo.

### <a name="example"></a>Esempio

Per un esempio di utilizzo, vedere Hosting di `AtlAxCreateControlLicEx` [controlli ActiveX mediante ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

## <a name="atlaxattachcontrol"></a><a name="atlaxattachcontrol"></a>AtlAxAttachControl

Associa un controllo creato in precedenza alla finestra specificata.

```
ATLAPI AtlAxAttachControl(
    IUnknown* pControl,
    HWND hWnd,
    IUnknown** ppUnkContainer);
```

### <a name="parameters"></a>Parametri

*pControl*<br/>
[in] Puntatore all'oggetto `IUnknown` del controllo.

*hWnd*<br/>
[in] Handle per la finestra che ospiterà il controllo.

*ppUnkContainer (contenitore ppUnk)*<br/>
[fuori] Puntatore a un `IUnknown` puntatore all'oggetto contenitore.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Utilizzare [AtlAxCreateControlEx](#atlaxcreatecontrolex) e [AtlAxCreateControl](#atlaxcreatecontrol) per creare e associare contemporaneamente un controllo.

> [!NOTE]
> L'oggetto controllo associato deve essere inizializzato correttamente prima di chiamare `AtlAxAttachControl`.

## <a name="atlaxgethost"></a><a name="atlaxgethost"></a>AtlAxGetHost

Ottiene un puntatore a interfaccia diretto per il contenitore di una finestra specifica (se presente) in base al relativo handle.

```
ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
```

### <a name="parameters"></a>Parametri

*H*<br/>
[in] Handle per la finestra che ospita il controllo.

*Pp*<br/>
[fuori] Oggetto `IUnknown` del contenitore del controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="atlaxgetcontrol"></a><a name="atlaxgetcontrol"></a>AtlAxGetControl (controllo

Ottiene un puntatore a interfaccia diretto per il controllo contenuto all'interno di una finestra specifica in base al relativo handle.

```
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);
```

### <a name="parameters"></a>Parametri

*H*<br/>
[in] Handle per la finestra che ospita il controllo.

*Pp*<br/>
[fuori] Oggetto `IUnknown` del controllo ospitato.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="atlsetchildsite"></a><a name="atlsetchildsite"></a>Sito di AtlSetChild

Chiamare questa funzione per impostare il `IUnknown` sito dell'oggetto figlio sull'oggetto padre.

```
HRESULT AtlSetChildSite(IUnknown* punkChild, IUnknown* punkParent);
```

### <a name="parameters"></a>Parametri

*punkChild*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'elemento figlio.

*punkPadre*<br/>
[in] Puntatore all'interfaccia `IUnknown` dell'elemento padre.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="atlaxwininit"></a><a name="atlaxwininit"></a>AtlAxWinInit (informazioni in base all'alto in te

Questa funzione inizializza il codice di hosting del controllo ATL registrando le classi di finestra **"AtlAxWin80"** e **"AtlAxWinLic80"** più un paio di messaggi di finestra personalizzati.

```
ATLAPI_(BOOL) AtlAxWinInit();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione del codice di hosting del controllo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questa funzione deve essere chiamata prima di utilizzare l'API di hosting del controllo ATL. In seguito a una chiamata a questa funzione, la classe finestra **"AtlAxWin"** può essere utilizzata nelle chiamate a [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) o [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw), come descritto in Windows SDK.

## <a name="atlaxwinterm"></a><a name="atlaxwinterm"></a>AtlAxWinTerm (file AtlAxWinTerm)

Questa funzione annulla l'inizializzazione del codice di hosting del controllo ATL annullando la registrazione delle classi di finestra **"AtlAxWin80"** e **"AtlAxWinLic80".**

```
inline BOOL AtlAxWinTerm();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama semplicemente [UnregisterClass](/windows/win32/api/winuser/nf-winuser-unregisterclassw) come descritto in Windows SDK.

Chiamare questa funzione per pulire dopo che tutte le finestre host esistenti sono state distrutte se è stato chiamato [AtlAxWinInit](#atlaxwininit) e non è più necessario creare finestre host. Se non si chiama questa funzione, la classe della finestra verrà annullata automaticamente al termine del processo.

## <a name="atlgetobjectsourceinterface"></a><a name="atlgetobjectsourceinterface"></a>AtlGetObjectSourceInterface

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
[in] Puntatore all'oggetto per il quale devono essere restituite informazioni.

*plibid*<br/>
[fuori] Puntatore al LIBID della libreria dei tipi contenente la definizione dell'interfaccia di origine.

*piid*<br/>
[fuori] Puntatore all'ID di interfaccia dell'interfaccia di origine predefinita dell'oggetto.

*pdwMajor (informazioni in base al ruolo di pd*<br/>
[fuori] Puntatore al numero di versione principale della libreria dei tipi contenente la definizione dell'interfaccia di origine.

*pdwMinor (pdwMinor)*<br/>
[fuori] Puntatore al numero di versione secondario della libreria dei tipi contenente la definizione dell'interfaccia di origine.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`AtlGetObjectSourceInterface`può fornire l'ID di interfaccia dell'interfaccia di origine predefinita, insieme ai numeri di versione secondari e secondari e LIBID della libreria dei tipi che descrive tale interfaccia.

> [!NOTE]
> Affinché questa funzione recuperi correttamente le informazioni richieste, l'oggetto `IDispatch::GetTypeInfo`rappresentato da *punkObj* deve implementare `IDispatch` (e restituire le informazioni sul tipo tramite ) più deve implementare anche uno `IProvideClassInfo2` o `IPersist`. Le informazioni sul tipo per l'interfaccia di origine devono `IDispatch`trovarsi nella stessa libreria dei tipi delle informazioni sul tipo per .

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene `CEasySink`illustrato come definire una classe sink di `IDispEventImpl` evento, , che riduce il numero di argomenti di modello che è possibile passare agli elementi essenziali. `EasyAdvise`e `EasyUnadvise` `AtlGetObjectSourceInterface` utilizzare per inizializzare i membri [IDispEventImpl](../../atl/reference/idispeventimpl-class.md) prima di chiamare [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) o [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise).

[!code-cpp[NVC_ATL_Windowing#93](../../atl/codesnippet/cpp/composite-control-global-functions_1.h)]

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Macro di controllo composito](../../atl/reference/composite-control-macros.md)
