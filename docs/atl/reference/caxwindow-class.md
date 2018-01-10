---
title: Classe CAxWindow | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAxWindow
- ATLWIN/ATL::CAxWindow
- ATLWIN/ATL::AttachControl
- ATLWIN/ATL::CreateControl
- ATLWIN/ATL::CreateControlEx
- ATLWIN/ATL::GetWndClassName
- ATLWIN/ATL::QueryControl
- ATLWIN/ATL::QueryHost
- ATLWIN/ATL::SetExternalDispatch
- ATLWIN/ATL::SetExternalUIHandler
dev_langs: C++
helpviewer_keywords:
- CAxWindow class
- ATL, hosting ActiveX controls
ms.assetid: 85e79261-43e4-4770-bde0-1ff87f222b0f
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8848e8ecf85b073032561e2db52a0db1889911e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="caxwindow-class"></a>Classe CAxWindow
Questa classe fornisce metodi per la modifica di una finestra di hosting di controlli ActiveX.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAxWindow : public CWindow
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AttachControl](#attachcontrol)|Associa un controllo ActiveX esistente per il `CAxWindow` oggetto.|  
|[CAxWindow](#caxwindow)|Costruisce un oggetto `CAxWindow`.|  
|[CreateControl](#createcontrol)|Crea un controllo ActiveX, inizializza e lo ospita, nel `CAxWindow` finestra.|  
|[CreateControlEx](#createcontrolex)|Crea un controllo ActiveX e recupera un puntatore a interfaccia (o puntatori) dal controllo.|  
|[GetWndClassName](#getwndclassname)|(Statico) Recupera il nome della classe predefiniti di `CAxWindow` oggetto.|  
|[QueryControl](#querycontrol)|Recupera il **IUnknown** del controllo ActiveX.|  
|[QueryHost](#queryhost)|Recupera il **IUnknown** puntatore il `CAxWindow` oggetto.|  
|[SetExternalDispatch](#setexternaldispatch)|Imposta l'interfaccia dispatch esterna utilizzata dal `CAxWindow` oggetto.|  
|[SetExternalUIHandler](#setexternaluihandler)|Imposta esterno **IDocHostUIHandler** interfaccia utilizzata per il `CAxWindow` oggetto.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](#operator_eq)|Assegna un **HWND** esistente **CAxWindow** oggetto.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. L'hosting viene fornito da " **AtlAxWin80"**, che è stato eseguito il wrapping `CAxWindow`.  
  
 Classe `CAxWindow` viene implementato come una specializzazione del `CAxWindowT` classe. Questa specializzazione è dichiarata come:  
  
 `typedef CAxWindowT<CWindow> CAxWindow;`  
  
 Se è necessario modificare la classe base, è possibile utilizzare `CAxWindowT` e specificare la nuova classe di base come argomento di modello.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="attachcontrol"></a>CAxWindow::AttachControl  
 Crea un nuovo oggetto host se non è già presente e associa il controllo specificato nell'host.  
  
```
HRESULT AttachControl(
    IUnknown* pControl,
    IUnknown** ppUnkContainer);
```  
  
### <a name="parameters"></a>Parametri  
 `pControl`  
 [in] Un puntatore al **IUnknown** del controllo.  
  
 `ppUnkContainer`  
 [out] Un puntatore al **IUnknown** dell'host (il **AxWin** oggetto).  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Dell'oggetto di controllo associato deve essere correttamente inizializzato prima di chiamare `AttachControl`.  
  
##  <a name="caxwindow"></a>CAxWindow::CAxWindow  
 Costruisce un `CAxWindow` utilizzando un handle dell'oggetto finestra esistente.  
  
```
CAxWindow(HWND hWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 Un handle a un oggetto finestra esistente.  
  
##  <a name="createcontrol"></a>CAxWindow::CreateControl  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.  
  
```
HRESULT CreateControl(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL);

HRESULT CreateControl(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un puntatore a una stringa per creare il controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di codice HTML, ad esempio "MSHTML:\<HTML >\<corpo > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento HTML in modo che è designato come un flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo i ProgID e CLSID. Windows CE incorporato piattaforme, diverso da Windows per dispositivi mobili con supporto per il supporto di inserimento/espulsione CE tutti i tipi inclusi ProgID, CLSID, URL, fare riferimento al documento attivo e frammento di codice HTML.  
  
 `pStream`  
 [in] Puntatore a un flusso che viene utilizzato per inizializzare le proprietà del controllo. Può essere **NULL**.  
  
 `ppUnkContainer`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del contenitore. Può essere **NULL**.  
  
 `dwResID`  
 L'ID risorsa della risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Se la seconda versione di questo metodo viene utilizzata, un controllo HTML verrà creato e associato alla risorsa identificata da `dwResID`.  
  
 Questo metodo offre lo stesso risultato della chiamata:  
  
 [!code-cpp[NVC_ATL_Windowing#42](../../atl/codesnippet/cpp/caxwindow-class_1.cpp)]  
  
 Vedere [CAxWindow2T::CreateControlLic](../../atl/reference/caxwindow2t-class.md#createcontrollic) per creare, inizializzare e ospitare un controllo ActiveX con licenza.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `CreateControl`.  
  
##  <a name="createcontrolex"></a>CAxWindow::CreateControlEx  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata.  
  
```
HRESULT CreateControlEx(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);

HRESULT CreateControlEx(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un puntatore a una stringa per creare il controllo. Deve essere formattato in uno dei modi seguenti:  
  
-   Un ProgID, ad esempio "MSCAL. Calendar.7 "  
  
-   CLSID, ad esempio "{8E27C92B-1264-101C-8A2F-040224009C02}"  
  
-   Un URL, ad esempio "http://www.microsoft.com"  
  
-   Un riferimento a un documento attivo, ad esempio "file://\\\Documents\MyDoc.doc"  
  
-   Un frammento di codice HTML, ad esempio "MSHTML:\<HTML >\<corpo > si tratta di una riga di testo\</BODY >\</HTML >"  
  
    > [!NOTE]
    >  "MSHTML:" deve precedere il frammento HTML in modo che è designato come un flusso MSHTML. Nelle piattaforme Windows Mobile sono supportati solo i ProgID e CLSID. Windows CE incorporato piattaforme, diverso da Windows per dispositivi mobili con supporto per il supporto di inserimento/espulsione CE tutti i tipi inclusi ProgID, CLSID, URL, fare riferimento al documento attivo e frammento di codice HTML.  
  
 `pStream`  
 [in] Puntatore a un flusso che viene utilizzato per inizializzare le proprietà del controllo. Può essere **NULL**.  
  
 `ppUnkContainer`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del contenitore. Può essere **NULL**.  
  
 `ppUnkControl`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** del controllo. Può essere **NULL**.  
  
 `iidSink`  
 [in] L'identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente. Può essere **IID_NULL**.  
  
 *punkSink*  
 [in] Un puntatore al **IUnknown** interfaccia dell'oggetto da connettere al punto di connessione sull'oggetto contenuto specificato dal sink `iidSink`.  
  
 `dwResID`  
 [in] L'ID risorsa della risorsa HTML. Il controllo WebBrowser verrà creato e caricato con la risorsa specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questo metodo è simile a [CAxWindow::CreateControl](#createcontrol), ma a differenza di tale metodo, `CreateControlEx` consente inoltre di ricevere un puntatore a interfaccia per il controllo appena creato e configurato un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Vedere [CAxWindow2T::CreateControlLicEx](../../atl/reference/caxwindow2t-class.md#createcontrollicex) per creare, inizializzare e ospitare un controllo ActiveX con licenza.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `CreateControlEx`.  
  
##  <a name="getwndclassname"></a>CAxWindow::GetWndClassName  
 Recupera il nome della classe della finestra.  
  
```
static LPCTSTR GetWndClassName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa contenente il nome della classe della finestra che può ospitare controlli ActiveX in licenza.  
  
##  <a name="operator_eq"></a>CAxWindow::operator =  
 Assegna un `HWND` esistente `CAxWindow` oggetto.  
  
```
CAxWindow<TBase>& operator=(HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 Un handle a una finestra esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento all'oggetto `CAxWindow` corrente.  
  
##  <a name="querycontrol"></a>CAxWindow:: QueryControl  
 Recupera l'interfaccia specificata del controllo ospitato.  
  
```
HRESULT QueryControl(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryControl(Q** ppUnk);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Specifica l'IID dell'interfaccia del controllo.  
  
 `ppUnk`  
 [out] Un puntatore all'interfaccia del controllo. Nella versione del modello di questo metodo, a condizione che viene passata un'interfaccia tipizzata con UUID associato non è necessario per un ID di riferimento.  
  
 `Q`  
 [in] L'interfaccia che viene eseguita la query per.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="queryhost"></a>CAxWindow:: QueryHost  
 Restituisce l'interfaccia dell'host specificato.  
  
```
HRESULT QueryHost(REFIID iid, void** ppUnk);
template <class  Q>
HRESULT QueryHost(Q** ppUnk);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Specifica l'IID dell'interfaccia del controllo.  
  
 `ppUnk`  
 [out] Puntatore a interfaccia sull'host. Nella versione del modello di questo metodo, a condizione che viene passata un'interfaccia tipizzata con UUID associato non è necessario per un ID di riferimento.  
  
 `Q`  
 [in] L'interfaccia che viene eseguita la query per.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'interfaccia dell'host consente l'accesso per la funzionalità sottostante del codice finestra di hosting, implementata da **AxWin**.  
  
##  <a name="setexternaldispatch"></a>CAxWindow::SetExternalDispatch  
 Imposta l'interfaccia dispatch esterna per il `CAxWindow` oggetto.  
  
```
HRESULT SetExternalDispatch(IDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 [in] Un puntatore a un `IDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="setexternaluihandler"></a>CAxWindow::SetExternalUIHandler  
 Imposta esterno [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interfaccia per il `CAxWindow` oggetto.  
  
```
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
```  
  
### <a name="parameters"></a>Parametri  
 *pUIHandler*  
 [in] Un puntatore a un **IDocHostUIHandlerDispatch** interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Esterno `IDocHostUIHandlerDispatch` interfaccia viene utilizzata dai controlli del sito dell'host per le query di `IDocHostUIHandlerDispatch` interfaccia. Il controllo WebBrowser è un controllo che esegue questa operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio ATLCON](../../visual-cpp-samples.md)   
 [CWindow (classe)](../../atl/reference/cwindow-class.md)   
 [Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Domande frequenti sul contenimento di controllo](../../atl/atl-control-containment-faq.md)

