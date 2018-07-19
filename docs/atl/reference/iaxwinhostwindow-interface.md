---
title: Interfaccia IAxWinHostWindow | Microsoft Docs
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
ms.openlocfilehash: bfafe3c59b8b36e95441c7fe269239d7f87111e7
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37885854"
---
# <a name="iaxwinhostwindow-interface"></a>Interfaccia IAxWinHostWindow
Questa interfaccia fornisce metodi per la modifica di un controllo e il relativo oggetto host.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
interface IAxWinHostWindow : IUnknown
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AttachControl](#attachcontrol)|Associa un controllo esistente all'oggetto host.|  
|[CreateControl](#createcontrol)|Crea un controllo e la collega all'oggetto host.|  
|[CreateControlEx](#createcontrolex)|Crea un controllo, lo collega all'oggetto host e, facoltativamente, imposta un gestore eventi.|  
|[QueryControl](#querycontrol)|Restituisce un puntatore a interfaccia per il controllo ospitato.|  
|[SetExternalDispatch](#setexternaldispatch)|Imposta esterno `IDispatch` interfaccia.|  
|[SetExternalUIHandler](#setexternaluihandler)|Imposta esterno `IDocHostUIHandlerDispatch` interfaccia.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene esposta dal controllo ActiveX dell'ATL hosting di oggetti. Chiamare i metodi su questa interfaccia per creare e/o collegare un controllo per l'oggetto host, per ottenere un'interfaccia da un controllo ospitato o per impostare il dispatch esterno o un gestore dell'interfaccia utente per l'uso quando si ospita il Web browser.  
  
## <a name="requirements"></a>Requisiti  
 La definizione di questa interfaccia è disponibile come file IDL o C++, come illustrato di seguito.  
  
|Tipo definizione|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (incluso anche in atlbase. H)|  
  
##  <a name="attachcontrol"></a>  IAxWinHostWindow:: AttachControl  
 Associa un controllo esistente (e inizializzato in precedenza) all'oggetto host utilizzando la finestra identificata da *hWnd*.  
  
```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkControl*  
 [in] Un puntatore al `IUnknown` interfaccia del controllo da associare all'oggetto host.  
  
 *hWnd*  
 [in] Handle alla finestra da utilizzare per l'hosting.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="createcontrol"></a>  IAxWinHostWindow::CreateControl  
 Crea un controllo, lo inizializza e lo ospita nella finestra identificata da *hWnd*.  
  
```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 *lpTricsData*  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML:**).  
  
 *hWnd*  
 [in] Handle alla finestra da utilizzare per l'hosting.  
  
 *pStream*  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa finestra verrà creare una sottoclasse per l'oggetto host che espone questa interfaccia in modo che i messaggi possono essere applicati al controllo e altre funzionalità di contenitore saranno disponibili.  
  
 Chiamare questo metodo è equivalente alla chiamata [IAxWinHostWindow::CreateControlEx](#createcontrolex).  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLic](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).  
  
##  <a name="createcontrolex"></a>  IAxWinHostWindow::CreateControlEx  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](#createcontrol).  
  
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
 *lpTricsData*  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML:**).  
  
 *hWnd*  
 [in] Handle alla finestra da utilizzare per l'hosting.  
  
 *pStream*  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.  
  
 *ppUnk*  
 [out] L'indirizzo del puntatore che riceverà il `IUnknown` interfaccia del controllo creato. Può essere NULL.  
  
 *riidAdvise*  
 [in] Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente. Può essere IID_NULL.  
  
 *punkAdvise*  
 [in] Un puntatore per il `IUnknown` interfaccia dell'oggetto sink di essere connessi al punto di connessione per l'oggetto contenuto specificato dal `iidSink`.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 A differenza di `CreateControl` metodo `CreateControlEx` consente inoltre di ricevere un puntatore a interfaccia al controllo appena creato e configurare un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLicEx](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).  
  
##  <a name="querycontrol"></a>  IAxWinHostWindow::QueryControl  
 Restituisce un puntatore a interfaccia specificato fornito dal controllo ospitato.  
  
```
STDMETHOD(QueryControl)(
    REFIID riid,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 [in] L'ID di un'interfaccia per il controllo richiesto.  
  
 *ppvObject*  
 [out] L'indirizzo di un puntatore che riceve l'interfaccia specificata del controllo creato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="setexternaldispatch"></a>  IAxWinHostWindow::SetExternalDispatch  
 Imposta l'interfaccia di dispatch esterno, che è disponibile per i controlli contenuti tramite il [IDocHostUIHandlerDispatch::GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) (metodo).  
  
```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 *pDisp*  
 [in] Un puntatore a un `IDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="setexternaluihandler"></a>  IAxWinHostWindow::SetExternalUIHandler  
 Chiamare questa funzione per impostare esterno [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interfaccia di amministrazione del `CAxWindow` oggetto.  
  
```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 *pDisp*  
 [in] Un puntatore a un `IDocHostUIHandlerDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata dai controlli (ad esempio, il controllo Web browser) che il sito dell'host per eseguire una query di `IDocHostUIHandlerDispatch` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md)   
 [CAxWindow:: QueryHost](../../atl/reference/caxwindow-class.md#queryhost)   
 [AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)









