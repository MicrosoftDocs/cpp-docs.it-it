---
title: Classe ISupportErrorInfoImpl
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
ms.openlocfilehash: d5e7f087f6646940777ae8b2d2a4ea888fdd3593
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495371"
---
# <a name="isupporterrorinfoimpl-class"></a>Classe ISupportErrorInfoImpl

Questa classe fornisce un'implementazione predefinita dell' [interfaccia ISupportErrorInfo](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) e può essere usata quando una sola interfaccia genera errori in un oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template<const IID* piid>
class ATL_NO_VTABLE ISupportErrorInfoImpl
   : public ISupportErrorInfo
```

### <a name="parameters"></a>Parametri

*piid*<br/>
Puntatore all'IID di un'interfaccia che supporta [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo).

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indica se l'interfaccia identificata `riid` da supporta l'interfaccia [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo) .|

## <a name="remarks"></a>Note

L' [interfaccia ISupportErrorInfo](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) garantisce che le informazioni sugli errori possano essere restituite al client. Gli oggetti che `IErrorInfo` utilizzano devono `ISupportErrorInfo`implementare.

La `ISupportErrorInfoImpl` classe fornisce un'implementazione predefinita `ISupportErrorInfo` di e può essere usata quando una sola interfaccia genera errori in un oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISupportErrorInfo`

`ISupportErrorInfoImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="interfacesupportserrorinfo"></a>  ISupportErrorInfoImpl::InterfaceSupportsErrorInfo

Indica se l'interfaccia identificata `riid` da supporta l'interfaccia [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo) .

```cpp
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```

### <a name="remarks"></a>Note

Vedere [ISupportErrorInfo:: InterfaceSupportsErrorInfo](/windows/win32/api/oaidl/nf-oaidl-isupporterrorinfo-interfacesupportserrorinfo) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
