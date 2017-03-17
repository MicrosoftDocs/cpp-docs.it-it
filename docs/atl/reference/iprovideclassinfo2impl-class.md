---
title: Classe IProvideClassInfo2Impl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl::IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl::GetClassInfo
- ATLCOM/ATL::IProvideClassInfo2Impl::GetGUID
- ATLCOM/ATL::IProvideClassInfo2Impl::_tih
dev_langs:
- C++
helpviewer_keywords:
- IProvideClassInfo2Impl class
- IProvideClassInfo2 ATL implementation
- class information, ATL
ms.assetid: d74956e8-9c69-4cba-b99d-ca1ac031bb9d
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 0d3bed0f625e396b63ada19ded02ba9ad3b697b0
ms.lasthandoff: 02/24/2017

---
# <a name="iprovideclassinfo2impl-class"></a>Classe IProvideClassInfo2Impl
Questa classe fornisce un'implementazione predefinita di [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303) e [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) metodi.  
  
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
 Un puntatore all'identificatore la coclasse.  
  
 *psrcid*  
 Puntatore all'identificatore per impostazione predefinita la coclasse in uscita interfaccia dispatch.  
  
 `plibid`  
 Un puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.  
  
 `wMajor`  
 La versione principale della libreria dei tipi. Il valore predefinito è 1.  
  
 `wMinor`  
 La versione secondaria della libreria dei tipi. Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo la coclasse. Il valore predefinito è `CComTypeInfoHolder`.  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::IProvideClassInfo2Impl](#iprovideclassinfo2impl)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::GetClassInfo](#getclassinfo)|Recupera un **ITypeInfo** puntatore alle informazioni sul tipo la coclasse.|  
|[IProvideClassInfo2Impl::GetGUID](#getguid)|Recupera il GUID per dispinterface in uscita dell'oggetto.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::_tih](#_tih)|Gestisce le informazioni sul tipo per la coclasse.|  
  
## <a name="remarks"></a>Note  
 Il [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) interfaccia estende [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303) aggiungendo il `GetGUID` metodo. Questo metodo consente al client recuperare in uscita IID di interfaccia un oggetto per il set di eventi predefiniti. Classe `IProvideClassInfo2Impl` fornisce un'implementazione predefinita di **IProvideClassInfo** e `IProvideClassInfo2` metodi.  
  
 `IProvideClassInfo2Impl`contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per la coclasse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IProvideClassInfo2`  
  
 `IProvideClassInfo2Impl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getclassinfo"></a>IProvideClassInfo2Impl::GetClassInfo  
 Recupera un `ITypeInfo` puntatore alle informazioni sul tipo la coclasse.  
  
```
STDMETHOD(GetClassInfo)(ITypeInfo** pptinfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IProvideClassInfo::GetClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms690192) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getguid"></a>IProvideClassInfo2Impl::GetGUID  
 Recupera il GUID per dispinterface in uscita dell'oggetto.  
  
```
STDMETHOD(GetGUID)(
    DWORD dwGuidKind,
    GUID* pGUID);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IProvideClassInfo2::GetGUID](http://msdn.microsoft.com/library/windows/desktop/ms679721) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iprovideclassinfo2impl"></a>IProvideClassInfo2Impl::IProvideClassInfo2Impl  
 Costruttore.  
  
```
IProvideClassInfo2Impl();
```  
  
### <a name="remarks"></a>Note  
 Chiamate `AddRef` sul [_tih](#_tih) membro. Le chiamate di distruttore **versione**.  
  
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

