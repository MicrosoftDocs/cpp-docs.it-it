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
ms.openlocfilehash: fcabbcd2d5977a28f46b3d8ebfc47e8fd978f3cf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50470782"
---
# <a name="ispecifypropertypagesimpl-class"></a>Classe ISpecifyPropertyPagesImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [ISpecifyPropertyPages](/windows/desktop/api/ocidl/nn-ocidl-ispecifypropertypages) interfaccia.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE ISpecifyPropertyPagesImpl
   : public ISpecifyPropertyPages
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `ISpecifyPropertyPagesImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISpecifyPropertyPagesImpl::GetPages](#getpages)|Riempie una valori conteggiati matrice di UUID. Ogni UUID corrisponde al CLSID di uno delle pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.|

## <a name="remarks"></a>Note

Il [ISpecifyPropertyPages](/windows/desktop/api/ocidl/nn-ocidl-ispecifypropertypages) interfaccia consente a un client ottenere un elenco di CLSID per le pagine delle proprietà supportate da un oggetto. Classe `ISpecifyPropertyPagesImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

> [!NOTE]
>  Non esporre il `ISpecifyPropertyPages` interfaccia se l'oggetto non supporta le pagine delle proprietà.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISpecifyPropertyPages`

`ISpecifyPropertyPagesImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getpages"></a>  ISpecifyPropertyPagesImpl::GetPages

Riempie la matrice [CAUUID](/windows/desktop/api/ocidl/ns-ocidl-tagcauuid) struttura con il CLSID per le pagine delle proprietà che possono essere visualizzati nella finestra delle proprietà dell'oggetto.

```
STDMETHOD(GetPages)(CAUUID* pPages);
```

### <a name="remarks"></a>Note

ATL Usa il mapping di proprietà dell'oggetto per recuperare ogni CLSID.

Visualizzare [ISpecifyPropertyPages::GetPages](/windows/desktop/api/ocidl/nf-ocidl-ispecifypropertypages-getpages) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)<br/>
[Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
