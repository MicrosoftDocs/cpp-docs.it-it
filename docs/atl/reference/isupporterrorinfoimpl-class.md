---
title: ISupportErrorInfoImpl (classe)
ms.date: 06/13/2019
f1_keywords:
- ISupportErrorInfoImpl
- ATLCOM/ATL::ISupportErrorInfoImpl
- ATLCOM/ATL::ISupportErrorInfoImpl::InterfaceSupportsErrorInfo
helpviewer_keywords:
- ISupportErrorInfo ATL implementation
- ISupportErrorInfoImpl class
- error information, ATL
ms.assetid: e33a4b11-a123-41cf-bcea-7b19743902af
ms.openlocfilehash: 4c60b58ba697f00b146077a2cdecd727fe2cac02
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326372"
---
# <a name="isupporterrorinfoimpl-class"></a>ISupportErrorInfoImpl (classe)

Questa classe fornisce un'implementazione predefinita [dell'interfaccia ISupportErrorInfo](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) e può essere utilizzata quando solo una singola interfaccia genera errori in un oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template<const IID* piid>
class ATL_NO_VTABLE ISupportErrorInfoImpl
   : public ISupportErrorInfo
```

### <a name="parameters"></a>Parametri

*piid*<br/>
Puntatore all'IID di un'interfaccia che supporta [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo).

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfoISupportErrorInfo::InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indica se l'interfaccia `riid` identificata da supporta l'interfaccia [IErrorInfo.](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo)|

## <a name="remarks"></a>Osservazioni

[L'interfaccia ISupportErrorInfo](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) garantisce che le informazioni sull'errore possano essere restituite al client. Gli oggetti `IErrorInfo` che `ISupportErrorInfo`utilizzano devono implementare .

Classe `ISupportErrorInfoImpl` fornisce un'implementazione predefinita di `ISupportErrorInfo` e può essere utilizzata quando solo una singola interfaccia genera errori in un oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISupportErrorInfo`

`ISupportErrorInfoImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="isupporterrorinfoimplinterfacesupportserrorinfo"></a><a name="interfacesupportserrorinfo"></a>ISupportErrorInfoImpl::InterfaceSupportsErrorInfoISupportErrorInfo::InterfaceSupportsErrorInfo

Indica se l'interfaccia `riid` identificata da supporta l'interfaccia [IErrorInfo.](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo)

```cpp
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```

### <a name="remarks"></a>Osservazioni

Vedere [ISupportErrorInfo::InterfaceSupportsErrorInfo](/windows/win32/api/oaidl/nf-oaidl-isupporterrorinfo-interfacesupportserrorinfo) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
