---
title: Classe IProvideClassInfo2Impl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3e0ac7cf3a5448a2963aa92c2e275be796c895d
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43758339"
---
# <a name="iprovideclassinfo2impl-class"></a>Classe IProvideClassInfo2Impl

Questa classe fornisce un'implementazione predefinita del [IProvideClassInfo](/windows/desktop/api/ocidl/nn-ocidl-iprovideclassinfo) e [IProvideClassInfo2](/windows/desktop/api/ocidl/nn-ocidl-iprovideclassinfo2) metodi.

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
Un puntatore all'identificatore della coclasse.

*psrcid*  
Un puntatore all'identificatore per impostazione predefinita della coclasse in uscita dell'interfaccia dispatch.

*plibid*  
Puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.

*wMajor*  
Versione principale della libreria dei tipi. Il valore predefinito è 1.

*wMinor*  
Versione secondaria della libreria dei tipi. Il valore predefinito è 0.

*tihclass*  
La classe usata per gestire le informazioni sul tipo della coclasse. Il valore predefinito è `CComTypeInfoHolder`.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|nome|Descrizione|
|----------|-----------------|
|[IProvideClassInfo2Impl::IProvideClassInfo2Impl](#iprovideclassinfo2impl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IProvideClassInfo2Impl::GetClassInfo](#getclassinfo)|Recupera un `ITypeInfo` puntatore alle informazioni sui tipi della coclasse.|
|[IProvideClassInfo2Impl::GetGUID](#getguid)|Recupera il GUID dell'interfaccia dispatch in uscita dell'oggetto.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[IProvideClassInfo2Impl::_tih](#_tih)|Gestisce le informazioni sul tipo per la coclasse.|

## <a name="remarks"></a>Note

Il [IProvideClassInfo2](/windows/desktop/api/ocidl/nn-ocidl-iprovideclassinfo2) interfaccia estende [IProvideClassInfo](/windows/desktop/api/ocidl/nn-ocidl-iprovideclassinfo) aggiungendo il `GetGUID` (metodo). Questo metodo consente a un client recuperare in uscita IID di interfaccia un oggetto per il set di eventi predefiniti. Classe `IProvideClassInfo2Impl` fornisce un'implementazione predefinita del `IProvideClassInfo` e `IProvideClassInfo2` metodi.

`IProvideClassInfo2Impl` contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per la coclasse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IProvideClassInfo2`

`IProvideClassInfo2Impl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getclassinfo"></a>  IProvideClassInfo2Impl::GetClassInfo

Recupera un `ITypeInfo` puntatore alle informazioni sui tipi della coclasse.

```
STDMETHOD(GetClassInfo)(ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Note

Visualizzare [IProvideClassInfo::GetClassInfo](/windows/desktop/api/ocidl/nf-ocidl-iprovideclassinfo-getclassinfo) in Windows SDK.

##  <a name="getguid"></a>  IProvideClassInfo2Impl::GetGUID

Recupera il GUID dell'interfaccia dispatch in uscita dell'oggetto.

```
STDMETHOD(GetGUID)(
    DWORD dwGuidKind,
    GUID* pGUID);
```

### <a name="remarks"></a>Note

Visualizzare [IProvideClassInfo2::GetGUID](/windows/desktop/api/ocidl/nf-ocidl-iprovideclassinfo2-getguid) in Windows SDK.

##  <a name="iprovideclassinfo2impl"></a>  IProvideClassInfo2Impl::IProvideClassInfo2Impl

Costruttore.

```
IProvideClassInfo2Impl();
```

### <a name="remarks"></a>Note

Le chiamate `AddRef` nella [_tih](#_tih) membro. Il distruttore chiama `Release`.

##  <a name="_tih"></a>  IProvideClassInfo2Impl::_tih

Questo membro dati statici è un'istanza del parametro di modello di classe, *tihclass*, che per impostazione predefinita è `CComTypeInfoHolder`.

```
static  tihclass
    _tih;
```

### <a name="remarks"></a>Note

`_tih` Gestisce le informazioni sul tipo per la coclasse.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
