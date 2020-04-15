---
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
ms.openlocfilehash: 06b6b60227a659bd35e042952c7464971fc40bdc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326405"
---
# <a name="ispecifypropertypagesimpl-class"></a>Classe ISpecifyPropertyPagesImpl

Questa classe `IUnknown` implementa e fornisce un'implementazione predefinita del [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) interfaccia.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE ISpecifyPropertyPagesImpl
   : public ISpecifyPropertyPages
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `ISpecifyPropertyPagesImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISpecifyPropertyPagesImpl::GetPages](#getpages)|Riempie una matrice conteggiata di valori UUID. Ogni UUID corrisponde al CLSID per una delle pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.|

## <a name="remarks"></a>Osservazioni

Il [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) interfaccia consente a un client di ottenere un elenco di CLSID per le pagine delle proprietà supportate da un oggetto. Classe `ISpecifyPropertyPagesImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

> [!NOTE]
> Non esporre `ISpecifyPropertyPages` l'interfaccia se l'oggetto non supporta le pagine delle proprietà.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISpecifyPropertyPages`

`ISpecifyPropertyPagesImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ispecifypropertypagesimplgetpages"></a><a name="getpages"></a>ISpecifyPropertyPagesImpl::GetPages

Riempie la matrice nella struttura [CAUUID](/windows/win32/api/ocidl/ns-ocidl-cauuid) con i CLSID per le pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.

```
STDMETHOD(GetPages)(CAUUID* pPages);
```

### <a name="remarks"></a>Osservazioni

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare ogni CLSID.

Vedere [ISpecifyPropertyPages::GetPages](/windows/win32/api/ocidl/nf-ocidl-ispecifypropertypages-getpages) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IPropertyPageImpl (classe)](../../atl/reference/ipropertypageimpl-class.md)<br/>
[IPerPropertyBrowsingImpl (classe)](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
