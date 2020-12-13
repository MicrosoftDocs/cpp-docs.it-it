---
description: 'Altre informazioni su: classe IProvideClassInfo2Impl'
title: Classe IProvideClassInfo2Impl
ms.date: 11/04/2016
f1_keywords:
- IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl::IProvideClassInfo2Impl
- ATLCOM/ATL::IProvideClassInfo2Impl::GetClassInfo
- ATLCOM/ATL::IProvideClassInfo2Impl::GetGUID
- ATLCOM/ATL::IProvideClassInfo2Impl::_tih
helpviewer_keywords:
- IProvideClassInfo2Impl class
- IProvideClassInfo2 ATL implementation
- class information, ATL
ms.assetid: d74956e8-9c69-4cba-b99d-ca1ac031bb9d
ms.openlocfilehash: 9c3422c98ebd857231f492efb77d51a0a49acb76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139257"
---
# <a name="iprovideclassinfo2impl-class"></a>Classe IProvideClassInfo2Impl

Questa classe fornisce un'implementazione predefinita dei metodi [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) e [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) .

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

*pcoclsid*<br/>
Puntatore all'identificatore della coclasse.

*psrcid*<br/>
Puntatore all'identificatore per l'interfaccia dispatch in uscita predefinita della coclasse.

*plibid*<br/>
Puntatore a LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.

*wMajor*<br/>
Versione principale della libreria dei tipi. Il valore predefinito è 1.

*wMinor*<br/>
Versione secondaria della libreria dei tipi. Il valore predefinito è 0.

*tihclass*<br/>
Classe utilizzata per gestire le informazioni sul tipo della coclasse. Il valore predefinito è `CComTypeInfoHolder`.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Description|
|----------|-----------------|
|[IProvideClassInfo2Impl:: IProvideClassInfo2Impl](#iprovideclassinfo2impl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IProvideClassInfo2Impl:: GetClassInfo](#getclassinfo)|Recupera un `ITypeInfo` puntatore alle informazioni sul tipo della coclasse.|
|[IProvideClassInfo2Impl:: GetGuid](#getguid)|Recupera il GUID per l'interfaccia dispatch in uscita dell'oggetto.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[IProvideClassInfo2Impl:: _tih](#_tih)|Gestisce le informazioni sul tipo per la coclasse.|

## <a name="remarks"></a>Commenti

L'interfaccia [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) estende [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) aggiungendo il `GetGUID` metodo. Questo metodo consente a un client di recuperare l'IID dell'interfaccia in uscita di un oggetto per il set di eventi predefinito. `IProvideClassInfo2Impl`La classe fornisce un'implementazione predefinita dei `IProvideClassInfo` `IProvideClassInfo2` metodi e.

`IProvideClassInfo2Impl` contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per la coclasse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IProvideClassInfo2`

`IProvideClassInfo2Impl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="iprovideclassinfo2implgetclassinfo"></a><a name="getclassinfo"></a> IProvideClassInfo2Impl:: GetClassInfo

Recupera un `ITypeInfo` puntatore alle informazioni sul tipo della coclasse.

```
STDMETHOD(GetClassInfo)(ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Commenti

Vedere [IProvideClassInfo:: GetClassInfo](/windows/win32/api/ocidl/nf-ocidl-iprovideclassinfo-getclassinfo) nella Windows SDK.

## <a name="iprovideclassinfo2implgetguid"></a><a name="getguid"></a> IProvideClassInfo2Impl:: GetGuid

Recupera il GUID per l'interfaccia dispatch in uscita dell'oggetto.

```
STDMETHOD(GetGUID)(
    DWORD dwGuidKind,
    GUID* pGUID);
```

### <a name="remarks"></a>Commenti

Vedere [IProvideClassInfo2:: GetGuid](/windows/win32/api/ocidl/nf-ocidl-iprovideclassinfo2-getguid) nel Windows SDK.

## <a name="iprovideclassinfo2impliprovideclassinfo2impl"></a><a name="iprovideclassinfo2impl"></a> IProvideClassInfo2Impl:: IProvideClassInfo2Impl

Costruttore.

```
IProvideClassInfo2Impl();
```

### <a name="remarks"></a>Commenti

Chiama `AddRef` il membro [_tih](#_tih) . Il distruttore chiama `Release`.

## <a name="iprovideclassinfo2impl_tih"></a><a name="_tih"></a> IProvideClassInfo2Impl:: _tih

Questo membro dati statici è un'istanza del parametro di modello di classe, *tihclass*, che per impostazione predefinita è `CComTypeInfoHolder` .

```
static  tihclass
    _tih;
```

### <a name="remarks"></a>Commenti

`_tih` gestisce le informazioni sul tipo per la coclasse.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
