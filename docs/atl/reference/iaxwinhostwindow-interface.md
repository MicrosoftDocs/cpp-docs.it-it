---
title: Interfaccia IAxWinHostWindow | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IAxWinHostWindow
- ATLIFACE/ATL::IAxWinHostWindow
- ATLIFACE/ATL::AttachControl
- ATLIFACE/ATL::CreateControl
- ATLIFACE/ATL::CreateControlEx
- ATLIFACE/ATL::QueryControl
- ATLIFACE/ATL::SetExternalDispatch
- ATLIFACE/ATL::SetExternalUIHandler
dev_langs:
- C++
helpviewer_keywords:
- IAxWinHostWindow interface
ms.assetid: 9821c035-cd52-4c46-b58a-9278064f09b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d1d0d41439748cd0ddbc981ecb1d74194d5fbd59
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32365126"
---
# <a name="iaxwinhostwindow-interface"></a>Interfaccia IAxWinHostWindow
Questa interfaccia fornisce metodi per la modifica di un controllo e il relativo oggetto host.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
interface IAxWinHostWindow : IUnknown
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AttachControl](#attachcontrol)|Associa un controllo esistente per l'oggetto host.|  
|[CreateControl](#createcontrol)|Crea un controllo e la collega all'oggetto host.|  
|[CreateControlEx](#createcontrolex)|Crea un controllo, lo collega all'oggetto host e, facoltativamente, consente di impostare un gestore eventi.|  
|[QueryControl](#querycontrol)|Restituisce un puntatore a interfaccia per il controllo ospitato.|  
|[SetExternalDispatch](#setexternaldispatch)|Imposta esterno `IDispatch` interfaccia.|  
|[SetExternalUIHandler](#setexternaluihandler)|Imposta esterno `IDocHostUIHandlerDispatch` interfaccia.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene esposta dal controllo ActiveX ATL che ospita gli oggetti. Chiamare i metodi su questa interfaccia per creare e/o collegare un controllo per l'oggetto host, per ottenere un'interfaccia da un controllo ospitato, o per impostare il dispatch esterno o un gestore dell'interfaccia utente per l'utilizzo durante l'hosting Web browser.  
  
## <a name="requirements"></a>Requisiti  
 La definizione di questa interfaccia è disponibile come file IDL o C++, come illustrato di seguito.  
  
|Tipo di definizione|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (incluso anche in atlbase. H)|  
  
##  <a name="attachcontrol"></a>  IAxWinHostWindow:: AttachControl  
 Associa un controllo esistente (e inizializzato in precedenza) per l'oggetto host utilizzando la finestra, identificata da `hWnd`.  
  
```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkControl*  
 [in] Un puntatore al **IUnknown** interfaccia del controllo da collegare all'oggetto host.  
  
 `hWnd`  
 [in] Un handle di finestra da utilizzare per l'hosting.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="createcontrol"></a>  IAxWinHostWindow::CreateControl  
 Crea un controllo, che viene inizializzato e ospita nella finestra, identificata da `hWnd`.  
  
```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `lpTricsData`  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (preceduto dal prefisso **MSHTML:**).  
  
 `hWnd`  
 [in] Un handle di finestra da utilizzare per l'hosting.  
  
 `pStream`  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questa finestra verrà da sottoclassare dall'oggetto host che espone questa interfaccia in modo che i messaggi possono essere applicati al controllo e altre funzionalità di contenitore saranno disponibili.  
  
 Chiamare questo metodo è equivalente alla chiamata [IAxWinHostWindow::CreateControlEx](#createcontrolex).  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLic](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).  
  
##  <a name="createcontrolex"></a>  IAxWinHostWindow::CreateControlEx  
 Crea un controllo ActiveX, inizializza e ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](#createcontrol).  
  
```
STDMETHOD(CreateControlEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise);
```  
  
### <a name="parameters"></a>Parametri  
 `lpTricsData`  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML:**).  
  
 `hWnd`  
 [in] Un handle di finestra da utilizzare per l'hosting.  
  
 `pStream`  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere **NULL**.  
  
 `ppUnk`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** interfaccia del controllo creato. Può essere **NULL**.  
  
 *riidAdvise*  
 [in] L'identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente. Può essere **IID_NULL**.  
  
 *punkAdvise*  
 [in] Un puntatore al **IUnknown** interfaccia dell'oggetto da connettere al punto di connessione sull'oggetto contenuto specificato dal sink `iidSink`.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 A differenza di `CreateControl` metodo `CreateControlEx` consente inoltre di ricevere un puntatore a interfaccia per il controllo appena creato e configurato un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLicEx](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).  
  
##  <a name="querycontrol"></a>  IAxWinHostWindow::QueryControl  
 Restituisce un puntatore a interfaccia specificato fornito dal controllo ospitato.  
  
```
STDMETHOD(QueryControl)(
    REFIID riid,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `riid`  
 [in] L'ID di un'interfaccia del controllo viene richiesto.  
  
 `ppvObject`  
 [out] L'indirizzo di un puntatore che riceverà l'interfaccia specificata del controllo creato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="setexternaldispatch"></a>  IAxWinHostWindow::SetExternalDispatch  
 Imposta l'interfaccia dispatch esterno, che è disponibile per i controlli contenuti tramite il [IDocHostUIHandlerDispatch::GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) metodo.  
  
```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 [in] Un puntatore a un `IDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="setexternaluihandler"></a>  IAxWinHostWindow::SetExternalUIHandler  
 Chiamare questa funzione per impostare esterno [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interfaccia per il `CAxWindow` oggetto.  
  
```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 [in] Un puntatore a un **IDocHostUIHandlerDispatch** interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata dai controlli (ad esempio, il controllo Web browser) che il sito dell'host per eseguire una query di `IDocHostUIHandlerDispatch` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)   
 [CAxWindow:: QueryHost](../../atl/reference/caxwindow-class.md#queryhost)   
 [AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)









