---
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
ms.openlocfilehash: 0d1ee9acc1cfabc71ecf33fcb5919d826899c671
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329563"
---
# <a name="iprovideclassinfo2impl-class"></a>Classe IProvideClassInfo2Impl

Questa classe fornisce un'implementazione predefinita dei metodi [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) e [IProvideClassInfo2.](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2)

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
Puntatore al LIBID della libreria dei tipi che contiene informazioni sull'interfaccia. Per impostazione predefinita, viene passata la libreria dei tipi a livello di server.

*wMajor (informazioni in base al t*<br/>
Versione principale della libreria dei tipi. Il valore predefinito è 1.

*wMinore*<br/>
Versione secondaria della libreria dei tipi. Il valore predefinito è 0.

*tihclass*<br/>
Classe utilizzata per gestire le informazioni sul tipo della coclasse. Il valore predefinito è `CComTypeInfoHolder`.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|----------|-----------------|
|[IProvideClassInfo2Impl::IProvideClassInfo2Impl](#iprovideclassinfo2impl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IProvideClassInfo2Impl::GetClassInfo](#getclassinfo)|Recupera un `ITypeInfo` puntatore alle informazioni sul tipo della coclasse.|
|[IProvideClassInfo2Impl::GetGUID](#getguid)|Recupera il GUID per l'interfaccia dispatch in uscita dell'oggetto.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[IProvideClassInfo2Impl::_tih](#_tih)|Gestisce le informazioni sul tipo per la coclasse.|

## <a name="remarks"></a>Osservazioni

L'interfaccia [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) estende [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) aggiungendo il `GetGUID` metodo . Questo metodo consente a un client di recuperare l'IID dell'interfaccia in uscita di un oggetto per il set di eventi predefinito. Classe `IProvideClassInfo2Impl` fornisce un'implementazione predefinita dei `IProvideClassInfo` metodi e `IProvideClassInfo2` .

`IProvideClassInfo2Impl`contiene un membro `CComTypeInfoHolder` statico di tipo che gestisce le informazioni sul tipo per la coclasse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IProvideClassInfo2`

`IProvideClassInfo2Impl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="iprovideclassinfo2implgetclassinfo"></a><a name="getclassinfo"></a>IProvideClassInfo2Impl::GetClassInfo

Recupera un `ITypeInfo` puntatore alle informazioni sul tipo della coclasse.

```
STDMETHOD(GetClassInfo)(ITypeInfo** pptinfo);
```

### <a name="remarks"></a>Osservazioni

Vedere [IProvideClassInfo::GetClassInfo](/windows/win32/api/ocidl/nf-ocidl-iprovideclassinfo-getclassinfo) in Windows SDK.

## <a name="iprovideclassinfo2implgetguid"></a><a name="getguid"></a>IProvideClassInfo2Impl::GetGUID

Recupera il GUID per l'interfaccia dispatch in uscita dell'oggetto.

```
STDMETHOD(GetGUID)(
    DWORD dwGuidKind,
    GUID* pGUID);
```

### <a name="remarks"></a>Osservazioni

Vedere [IProvideClassInfo2::GetGUID](/windows/win32/api/ocidl/nf-ocidl-iprovideclassinfo2-getguid) in Windows SDK.

## <a name="iprovideclassinfo2impliprovideclassinfo2impl"></a><a name="iprovideclassinfo2impl"></a>IProvideClassInfo2Impl::IProvideClassInfo2Impl

Costruttore.

```
IProvideClassInfo2Impl();
```

### <a name="remarks"></a>Osservazioni

Chiamate `AddRef` al membro [_tih.](#_tih) Il distruttore chiama `Release`.

## <a name="iprovideclassinfo2impl_tih"></a><a name="_tih"></a>IProvideClassInfo2Impl::_tih

Questo membro dati statici è un'istanza del parametro del `CComTypeInfoHolder`modello di classe, *tihclass*, che per impostazione predefinita è .

```
static  tihclass
    _tih;
```

### <a name="remarks"></a>Osservazioni

`_tih`gestisce le informazioni sul tipo per la coclasse.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
