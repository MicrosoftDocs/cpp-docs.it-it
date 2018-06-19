---
title: Interfaccia IAxWinHostWindowLic | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IAxWinHostWindowLic
- ATLIFACE/ATL::IAxWinHostWindowLic
- ATLIFACE/ATL::CreateControlLic
- ATLIFACE/ATL::CreateControlLicEx
dev_langs:
- C++
helpviewer_keywords:
- IAxWinHostWindowLic interface
ms.assetid: 750f1520-6bce-428c-aca0-fccbe3f063c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 41b4d7891d1bb00f4ee689477d1056dbf2bf28cf
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32362840"
---
# <a name="iaxwinhostwindowlic-interface"></a>IAxWinHostWindowLic (interfaccia)
Questa interfaccia fornisce metodi per la modifica di un controllo concesso in licenza e l'oggetto host.  
  
## <a name="syntax"></a>Sintassi  
  
```
interface IAxWinHostWindowLic : IAxWinHostWindow
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CreateControlLic](#createcontrollic)|Crea un controllo concesso in licenza e la collega all'oggetto host.|  
|[CreateControlLicEx](#createcontrollicex)|Crea un controllo con licenza, lo collega all'oggetto host e, facoltativamente, consente di impostare un gestore eventi.|  
  
## <a name="remarks"></a>Note  
 `IAxWinHostWindowLic` eredita da [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) e aggiunge i metodi che supportano la creazione di controlli con licenza.  
  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa i membri di questa interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 La definizione di questa interfaccia è disponibile come file IDL o C++, come illustrato di seguito.  
  
|Tipo di definizione|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (incluso anche in atlbase. H)|  
  
##  <a name="createcontrollic"></a>  IAxWinHostWindowLic::CreateControlLic  
 Crea un controllo con licenza, inizializza e ospita nella finestra, identificata da `hWnd`.  
  
```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```  
  
### <a name="parameters"></a>Parametri  
 `bstrLic`  
 [in] La stringa BSTR che contiene la chiave di licenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Vedere [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol) per una descrizione dei parametri restanti e il valore restituito.  
  
 Chiamare questo metodo è equivalente alla chiamata [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `IAxWinHostWindowLic::CreateControlLic`.  
  
##  <a name="createcontrollicex"></a>  IAxWinHostWindowLic::CreateControlLicEx  
 Crea un controllo ActiveX con licenza, inizializza e ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol).  
  
```
STDMETHOD(CreateControlLicEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise,
    BSTR bstrLic);
```  
  
### <a name="parameters"></a>Parametri  
 `bstrLic`  
 [in] La stringa BSTR che contiene la chiave di licenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Vedere [IAxWinHostWindow::CreateControlEx](../../atl/reference/iaxwinhostwindow-interface.md#createcontrolex) per una descrizione dei parametri restanti e il valore restituito.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `IAxWinHostWindowLic::CreateControlLicEx`.









