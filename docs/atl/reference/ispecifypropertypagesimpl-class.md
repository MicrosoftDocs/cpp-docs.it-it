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
ms.openlocfilehash: c201cf6d9d89ab1a6a8e888deee1be79e5770490
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495402"
---
# <a name="ispecifypropertypagesimpl-class"></a>Classe ISpecifyPropertyPagesImpl

Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita dell'interfaccia [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) .

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE ISpecifyPropertyPagesImpl
   : public ISpecifyPropertyPages
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `ISpecifyPropertyPagesImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ISpecifyPropertyPagesImpl::GetPages](#getpages)|Compila una matrice di valori UUID conteggiata. Ogni UUID corrisponde al CLSID per una delle pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.|

## <a name="remarks"></a>Note

L'interfaccia [ISpecifyPropertyPages](/windows/win32/api/ocidl/nn-ocidl-ispecifypropertypages) consente a un client di ottenere un elenco di CLSID per le pagine delle proprietà supportate da un oggetto. La `ISpecifyPropertyPagesImpl` classe fornisce un'implementazione predefinita di questa interfaccia e `IUnknown` implementa inviando informazioni al dispositivo di dump nelle compilazioni di debug.

> [!NOTE]
>  Non esporre l'interfaccia `ISpecifyPropertyPages` se l'oggetto non supporta le pagine delle proprietà.

**Articoli correlati** [Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISpecifyPropertyPages`

`ISpecifyPropertyPagesImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getpages"></a>  ISpecifyPropertyPagesImpl::GetPages

Riempie la matrice nella struttura [CAUUID](/windows/win32/api/ocidl/ns-ocidl-cauuid) con i CLSID per le pagine delle proprietà che possono essere visualizzate nella finestra delle proprietà dell'oggetto.

```
STDMETHOD(GetPages)(CAUUID* pPages);
```

### <a name="remarks"></a>Note

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare ogni CLSID.

Vedere [ISpecifyPropertyPages::](/windows/win32/api/ocidl/nf-ocidl-ispecifypropertypages-getpages) GetPages nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)<br/>
[Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
