---
description: 'Altre informazioni su: classe ISpecifyPropertyPagesImpl'
title: Classe ISpecifyPropertyPagesImpl
ms.date: 11/04/2016
f1_keywords:
- ISpecifyPropertyPagesImpl
- ATLCOM/ATL::ISpecifyPropertyPagesImpl
- ATLCOM/ATL::ISpecifyPropertyPagesImpl::GetPages
helpviewer_keywords:
- property pages, CLSIDs associated with
- ISpecifyPropertyPages
- ISpecifyPropertyPagesImpl class
ms.assetid: 4e4b9795-b656-4d56-9b8c-85941e7731f9
ms.openlocfilehash: 528fafa0473a4aa803e1c1d17a24b2d27584c33a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158049"
---
# <a name="ispecifypropertypagesimpl-class"></a>Classe ISpecifyPropertyPagesImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE ISpecifyPropertyPagesImpl
   : public ISpecifyPropertyPages
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `ISpecifyPropertyPagesImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ISpecifyPropertyPagesImpl:: GetPages](#getpages)|Compila una matrice di valori UUID conteggiata. Ogni UUID corrisponde al CLSID per una delle pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.|

## <a name="remarks"></a>Commenti

L'interfaccia [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) consente a un client di ottenere un elenco di CLSID per le pagine delle proprietà supportate da un oggetto. La classe `ISpecifyPropertyPagesImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

> [!NOTE]
> Non esporre l' `ISpecifyPropertyPages` interfaccia se l'oggetto non supporta le pagine delle proprietà.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISpecifyPropertyPages`

`ISpecifyPropertyPagesImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ispecifypropertypagesimplgetpages"></a><a name="getpages"></a> ISpecifyPropertyPagesImpl:: GetPages

Riempie la matrice nella struttura [CAUUID](/windows/win32/api/ocidl/ns-ocidl-cauuid) con i CLSID per le pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.

```
STDMETHOD(GetPages)(CAUUID* pPages);
```

### <a name="remarks"></a>Commenti

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare ogni CLSID.

Vedere [ISpecifyPropertyPages:: GetPages](/windows/win32/api/ocidl/nf-ocidl-ispecifypropertypages-getpages) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)<br/>
[Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
