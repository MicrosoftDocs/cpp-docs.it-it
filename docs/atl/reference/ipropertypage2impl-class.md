---
title: Classe IPropertyPage2Impl
ms.date: 11/04/2016
f1_keywords:
- IPropertyPage2Impl
- ATLCTL/ATL::IPropertyPage2Impl
- ATLCTL/ATL::IPropertyPage2Impl::EditProperty
helpviewer_keywords:
- property pages
- IPropertyPage2 ATL implementation
- IPropertyPage2Impl class
ms.assetid: e89fbe90-203a-47f0-a5de-23616697e1ce
ms.openlocfilehash: fd2d53c79ee372c9997e1da2b189ef18129e67f0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50617334"
---
# <a name="ipropertypage2impl-class"></a>Classe IPropertyPage2Impl

Questa classe implementa `IUnknown` ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPropertyPage2Impl : public IPropertyPageImpl<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IPropertyPage2Impl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPropertyPage2Impl::EditProperty](#editproperty)|Specifica quale controllo proprietà riceverà lo stato attivo quando viene attivata la pagina delle proprietà. L'implementazione di ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

Il [IPropertyPage2](/windows/desktop/api/ocidl/nn-ocidl-ipropertypage2) interfaccia estende [IPropertyPage](/windows/desktop/api/ocidl/nn-ocidl-ipropertypage) aggiungendo il `EditProperty` (metodo). Questo metodo consente a un client selezionare una proprietà specifica in un oggetto pagina delle proprietà.

Classe `IPropertyPage2Impl` semplicemente restituisce E_NOTIMPL per `IPropertyPage2::EditProperty`. Tuttavia, eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md) e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

Quando si crea una pagina delle proprietà, la classe viene generalmente derivata dal `IPropertyPageImpl`. Per fornire il supporto aggiuntivo di `IPropertyPage2`, modificare la definizione di classe ed eseguire l'override di `EditProperty` (metodo).

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPropertyPage`

[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)

`IPropertyPage2Impl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="editproperty"></a>  IPropertyPage2Impl::EditProperty

Specifica quale controllo proprietà riceverà lo stato attivo quando viene attivata la pagina delle proprietà.

```
HRESULT EditProperty(DISPID dispID);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [IPropertyPage2::EditProperty](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage2-editproperty) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
