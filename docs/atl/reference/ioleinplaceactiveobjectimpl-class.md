---
title: Classe IOleInPlaceActiveObjectImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IOleInPlaceActiveObjectImpl
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ContextSensitiveHelp
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::EnableModeless
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::GetWindow
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnDocWindowActivate
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnFrameWindowActivate
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ResizeBorder
- ATLCTL/ATL::IOleInPlaceActiveObjectImpl::TranslateAccelerator
dev_langs:
- C++
helpviewer_keywords:
- IOleInPlaceActiveObjectImpl class
- ActiveX controls [C++], communication between container and control
- IOleInPlaceActiveObject, ATL implementation
ms.assetid: 44e6cc6d-a2dc-4187-98e3-73cf0320dea9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1339f41a0764e44f46bed7ad24181ce406998c22
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37885601"
---
# <a name="ioleinplaceactiveobjectimpl-class"></a>Classe IOleInPlaceActiveObjectImpl
Questa classe fornisce metodi per facilitare la comunicazione tra un controllo sul posto e il relativo contenitore.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class IOleInPlaceActiveObjectImpl
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IOleInPlaceActiveObjectImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleInPlaceActiveObjectImpl::ContextSensitiveHelp](#contextsensitivehelp)|Abilita Guida sensibile al contesto. L'implementazione di ATL restituisce E_NOTIMPL.|  
|[IOleInPlaceActiveObjectImpl::EnableModeless](#enablemodeless)|Abilita le finestre di dialogo non modale. L'implementazione di ATL restituisce S_OK.|  
|[IOleInPlaceActiveObjectImpl::GetWindow](#getwindow)|Ottiene un handle di finestra.|  
|[IOleInPlaceActiveObjectImpl::OnDocWindowActivate](#ondocwindowactivate)|Notifica al controllo quando la finestra di documento del contenitore è attivata o disattivata. L'implementazione di ATL restituisce S_OK.|  
|[IOleInPlaceActiveObjectImpl::OnFrameWindowActivate](#onframewindowactivate)|Notifica al controllo quando la finestra cornice di primo livello del contenitore è attivata o disattivata. Restituisce l'implementazione di ATL|  
|[IOleInPlaceActiveObjectImpl::ResizeBorder](#resizeborder)|Informa il controllo che è necessario ridimensionare i bordi. L'implementazione di ATL restituisce S_OK.|  
|[IOleInPlaceActiveObjectImpl::TranslateAccelerator](#translateaccelerator)|Elabora i messaggi del tasto di scelta rapida menu dal contenitore. L'implementazione di ATL restituisce E_NOTIMPL.|  
  
  
## <a name="remarks"></a>Note  
 Il [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) assiste l'interfaccia di comunicazione tra un controllo sul posto e il relativo contenitore; ad esempio, comunicare lo stato attivo del controllo e contenitore e informare il controllo è necessario ridimensionare se stessa. Classe `IOleInPlaceActiveObjectImpl` fornisce un'implementazione predefinita di `IOleInPlaceActiveObject` e supporta `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IOleInPlaceActiveObject`  
  
 `IOleInPlaceActiveObjectImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="contextsensitivehelp"></a>  IOleInPlaceActiveObjectImpl::ContextSensitiveHelp  
 Abilita Guida sensibile al contesto.  
  
```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce E_NOTIMPL.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleWindow::ContextSensitiveHelp](http://msdn.microsoft.com/library/windows/desktop/ms680059) in Windows SDK.  
  
##  <a name="enablemodeless"></a>  IOleInPlaceActiveObjectImpl::EnableModeless  
 Abilita le finestre di dialogo non modale.  
  
```
HRESULT EnableModeless(BOOL fEnable);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleInPlaceActiveObject::EnableModeless](http://msdn.microsoft.com/library/windows/desktop/ms680115) in Windows SDK.  
  
##  <a name="getwindow"></a>  IOleInPlaceActiveObjectImpl::GetWindow  
 Il contenitore chiama questa funzione per ottenere l'handle della finestra del controllo.  
  
```
HRESULT GetWindow(HWND* phwnd);
```  
  
### <a name="remarks"></a>Note  
 Alcuni contenitori non funzionerà con un controllo che è stata privi di finestra, anche se è attualmente a finestre. Nell'implementazione di ATL, se il `CComControl::m_bWasOnceWindowless` (membro dati) è TRUE, la funzione restituisce E_FAIL. In caso contrario, se \* *phwnd* non è NULL, `GetWindow` assegna *phwnd* al membro dati della classe controllo `m_hWnd` e restituisce S_OK.  
  
 Visualizzare [IOleWindow::GetWindow](http://msdn.microsoft.com/library/windows/desktop/ms687282) in Windows SDK.  
  
##  <a name="ondocwindowactivate"></a>  IOleInPlaceActiveObjectImpl::OnDocWindowActivate  
 Notifica al controllo quando la finestra di documento del contenitore è attivata o disattivata.  
  
```
HRESULT OnDocWindowActivate(BOOL fActivate);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281) in Windows SDK.  
  
##  <a name="onframewindowactivate"></a>  IOleInPlaceActiveObjectImpl::OnFrameWindowActivate  
 Notifica al controllo quando la finestra cornice di primo livello del contenitore è attivata o disattivata.  
  
```
HRESULT OnFrameWindowActivate(BOOL fActivate);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleInPlaceActiveObject:: OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969) in Windows SDK.  
  
##  <a name="resizeborder"></a>  IOleInPlaceActiveObjectImpl::ResizeBorder  
 Informa il controllo che è necessario ridimensionare i bordi.  
  
```
HRESULT ResizeBorder(
    LPRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fFrameWindow);
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleInPlaceActiveObject:: ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053) in Windows SDK.  
  
##  <a name="translateaccelerator"></a>  IOleInPlaceActiveObjectImpl::TranslateAccelerator  
 Elabora i messaggi del tasto di scelta rapida menu dal contenitore.  
  
```
HRESULT TranslateAccelerator(LPMSG lpmsg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo supporta i valori restituiti riportati di seguito:  
  
 S_OK se il messaggio è stato convertito correttamente.  
  
 S_FALSE se il messaggio non è stato convertito.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IOleInPlaceActiveObject:: TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)  
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)  
 [Panoramica della classe](../../atl/atl-class-overview.md)
