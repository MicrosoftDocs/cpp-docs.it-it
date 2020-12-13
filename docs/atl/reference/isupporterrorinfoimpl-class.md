---
description: 'Altre informazioni su: classe ISupportErrorInfoImpl'
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
ms.openlocfilehash: 182f55f7d7c288e4c8679c3e8cc1df7bb5cd79bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139139"
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

*pIID*<br/>
Puntatore all'IID di un'interfaccia che supporta [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo).

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ISupportErrorInfoImpl:: InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indica se l'interfaccia identificata da `riid` supporta l'interfaccia [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo) .|

## <a name="remarks"></a>Commenti

L' [interfaccia ISupportErrorInfo](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) garantisce che le informazioni sugli errori possano essere restituite al client. Gli oggetti che utilizzano `IErrorInfo` devono implementare `ISupportErrorInfo` .

`ISupportErrorInfoImpl`La classe fornisce un'implementazione predefinita di `ISupportErrorInfo` e può essere usata quando una sola interfaccia genera errori in un oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISupportErrorInfo`

`ISupportErrorInfoImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="isupporterrorinfoimplinterfacesupportserrorinfo"></a><a name="interfacesupportserrorinfo"></a> ISupportErrorInfoImpl:: InterfaceSupportsErrorInfo

Indica se l'interfaccia identificata da `riid` supporta l'interfaccia [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo) .

```cpp
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```

### <a name="remarks"></a>Commenti

Vedere [ISupportErrorInfo:: InterfaceSupportsErrorInfo](/windows/win32/api/oaidl/nf-oaidl-isupporterrorinfo-interfacesupportserrorinfo) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
