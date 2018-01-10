---
title: Classe IProvideClassInfo2Impl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl::IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl::GetClassInfo
- ATLCOM/ATL::IProvideClassInfo2Impl::GetGUID
- ATLCOM/ATL::IProvideClassInfo2Impl::_tih
dev_langs: C++
helpviewer_keywords:
- IProvideClassInfo2Impl class
- IProvideClassInfo2 ATL implementation
- class information, ATL
ms.assetid: d74956e8-9c69-4cba-b99d-ca1ac031bb9d
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6fe466608acaecfaf6219b6d15d27e0611ac2511
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iprovideclassinfo2impl-class"></a>Classe IProvideClassInfo2Impl
Questa classe fornisce un'implementazione predefinita del [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303) e [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) metodi.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <const CLSID* pcoclsid,
    const IID* psrcid,
    const GUID* plibid = &CAtlModule::m_libid,
    WORD wMajor = 1,
    WORD wMinor = 0, class tihclass = CComTypeInfoHolder>  
class ATL_NO_VTABLE IProvideClassInfo2Impl : public IProvideClassInfo2
```  
  
#### <a name="parameters"></a>Parametri  
 *pcoclsid*  
 Un puntatore all'identificatore di coclasse.  
  
 *psrcid*  
 Puntatore all'identificatore predefinito degli coclasse in uscita interfaccia dispatch.  
  
 `plibid`  
 Puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, la libreria dei tipi a livello di server viene passata.  
  
 `wMajor`  
 Versione principale della libreria dei tipi. Il valore predefinito è 1.  
  
 `wMinor`  
 Versione secondaria della libreria dei tipi. Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo di coclasse. Il valore predefinito è `CComTypeInfoHolder`.  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::IProvideClassInfo2Impl](#iprovideclassinfo2impl)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::GetClassInfo](#getclassinfo)|Recupera un **ITypeInfo** puntatore alle informazioni sui tipi di coclasse.|  
|[IProvideClassInfo2Impl::GetGUID](#getguid)|Recupera il GUID di interfaccia dispatch in uscita dell'oggetto.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::_tih](#_tih)|Gestisce le informazioni sul tipo per la coclasse.|  
  
## <a name="remarks"></a>Note  
 Il [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) interfaccia estende [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303) aggiungendo il `GetGUID` metodo. Questo metodo consente al client recuperare in uscita IID di interfaccia un oggetto per il set di eventi predefiniti. Classe `IProvideClassInfo2Impl` fornisce un'implementazione predefinita del **IProvideClassInfo** e `IProvideClassInfo2` metodi.  
  
 `IProvideClassInfo2Impl`contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per la coclasse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IProvideClassInfo2`  
  
 `IProvideClassInfo2Impl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getclassinfo"></a>IProvideClassInfo2Impl::GetClassInfo  
 Recupera un `ITypeInfo` puntatore alle informazioni sui tipi di coclasse.  
  
```
STDMETHOD(GetClassInfo)(ITypeInfo** pptinfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IProvideClassInfo::GetClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms690192) in Windows SDK.  
  
##  <a name="getguid"></a>IProvideClassInfo2Impl::GetGUID  
 Recupera il GUID di interfaccia dispatch in uscita dell'oggetto.  
  
```
STDMETHOD(GetGUID)(
    DWORD dwGuidKind,
    GUID* pGUID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IProvideClassInfo2::GetGUID](http://msdn.microsoft.com/library/windows/desktop/ms679721) in Windows SDK.  
  
##  <a name="iprovideclassinfo2impl"></a>IProvideClassInfo2Impl::IProvideClassInfo2Impl  
 Costruttore.  
  
```
IProvideClassInfo2Impl();
```  
  
### <a name="remarks"></a>Note  
 Chiamate `AddRef` sul [_tih](#_tih) membro. Il distruttore chiama **versione**.  
  
##  <a name="_tih"></a>IProvideClassInfo2Impl::_tih  
 Questo membro dati statici è un'istanza del parametro di modello di classe, `tihclass`, che per impostazione predefinita è `CComTypeInfoHolder`.  
  
```
static  tihclass
    _tih;
```     
  
### <a name="remarks"></a>Note  
 `_tih`gestisce le informazioni sul tipo per la coclasse.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
