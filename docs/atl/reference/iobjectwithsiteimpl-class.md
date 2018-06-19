---
title: Classe IObjectWithSiteImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IObjectWithSiteImpl
- ATLCOM/ATL::IObjectWithSiteImpl
- ATLCOM/ATL::IObjectWithSiteImpl::GetSite
- ATLCOM/ATL::IObjectWithSiteImpl::SetChildSite
- ATLCOM/ATL::IObjectWithSiteImpl::SetSite
- ATLCOM/ATL::IObjectWithSiteImpl::m_spUnkSite
dev_langs:
- C++
helpviewer_keywords:
- IObjectWithSiteImpl class
ms.assetid: 4e1f774f-bc3d-45ee-9a1c-c3533a511588
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6c626db62a02fba70f926776ea214e664d2f7f82
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32362039"
---
# <a name="iobjectwithsiteimpl-class"></a>Classe IObjectWithSiteImpl
Questa classe fornisce metodi di consentire a un oggetto comunicare con il relativo sito.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
    class ATL_NO_VTABLE IObjectWithSiteImpl :
    public IObjectWithSite
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IObjectWithSiteImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectWithSiteImpl::GetSite](#getsite)|Il sito per un puntatore a interfaccia una query.|  
|[IObjectWithSiteImpl::SetChildSite](#setchildsite)|Fornisce l'oggetto con il sito **IUnknown** puntatore.|  
|[IObjectWithSiteImpl::SetSite](#setsite)|Fornisce l'oggetto con il sito **IUnknown** puntatore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IObjectWithSiteImpl::m_spUnkSite](#m_spunksite)|Gestisce il sito **IUnknown** puntatore.|  
  
## <a name="remarks"></a>Note  
 Il [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) interfaccia consente a un oggetto comunicare con il relativo sito. Classe `IObjectWithSiteImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 `IObjectWithSiteImpl` specifica due metodi. Il client chiama prima `SetSite`, passando il sito **IUnknown** puntatore. L'indicatore di misura vengono archiviati all'interno dell'oggetto e versioni successive possono essere recuperate tramite una chiamata a `GetSite`.  
  
 In genere, si deriva dalla classe `IObjectWithSiteImpl` quando si crea un oggetto che non è un controllo. Per i controlli, derivare la classe da [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), che fornisce anche un puntatore di sito. Derivare la classe non sia da `IObjectWithSiteImpl` e `IOleObjectImpl`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IObjectWithSite`  
  
 `IObjectWithSiteImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getsite"></a>  IObjectWithSiteImpl::GetSite  
 Il sito per un puntatore a interfaccia identificato da una query `riid`.  
  
```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```  
  
### <a name="remarks"></a>Note  
 Se il sito supporta questa interfaccia, viene restituito il puntatore tramite `ppvSite`. In caso contrario, `ppvSite` è impostato su **NULL**.  
  
 Vedere [IObjectWithSite::GetSite](http://msdn.microsoft.com/library/windows/desktop/ms694452) in Windows SDK.  
  
##  <a name="m_spunksite"></a>  IObjectWithSiteImpl::m_spUnkSite  
 Gestisce il sito **IUnknown** puntatore.  
  
```
CComPtr<IUnknown> m_spUnkSite;
```  
  
### <a name="remarks"></a>Note  
 `m_spUnkSite` inizialmente riceve l'indicatore di misura tramite una chiamata a [SetSite](#setsite).  
  
##  <a name="setchildsite"></a>  IObjectWithSiteImpl::SetChildSite  
 Fornisce l'oggetto con il sito **IUnknown** puntatore.  
  
```
HRESULT SetChildSite(IUnknown* pUnkSite);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkSite*  
 [in] Puntatore al **IUnknown** puntatore a interfaccia del sito di gestione di questo oggetto. Se NULL, l'oggetto deve chiamare `IUnknown::Release` in tutti i siti esistenti a quel punto l'oggetto non sa non è più il sito.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
##  <a name="setsite"></a>  IObjectWithSiteImpl::SetSite  
 Fornisce l'oggetto con il sito **IUnknown** puntatore.  
  
```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
