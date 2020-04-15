---
title: IPropertyPage2Impl (classe)
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
ms.openlocfilehash: d112a2411a9debbf2eb77e6b851f4500e8d32ab8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329598"
---
# <a name="ipropertypage2impl-class"></a>IPropertyPage2Impl (classe)

Questa classe `IUnknown` implementa ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPropertyPage2Impl : public IPropertyPageImpl<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPropertyPage2Impl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPropertyPage2Impl::EditProperty](#editproperty)|Specifica quale controllo proprietà riceverà lo stato attivo quando viene attivata la pagina delle proprietà. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

Il [IPropertyPage2](/windows/win32/api/ocidl/nn-ocidl-ipropertypage2) interfaccia estende [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) aggiungendo il `EditProperty` metodo . Questo metodo consente a un client di selezionare una proprietà specifica in un oggetto pagina delle proprietà.

Classe `IPropertyPage2Impl` restituisce `IPropertyPage2::EditProperty`semplicemente E_NOTIMPL per . Tuttavia, eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md) e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

Quando si crea una pagina delle proprietà, la classe viene in genere derivata da `IPropertyPageImpl`. Per fornire il `IPropertyPage2`supporto aggiuntivo di , `EditProperty` modificare la definizione della classe ed eseguire l'override del metodo.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPropertyPage`

[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)

`IPropertyPage2Impl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ipropertypage2impleditproperty"></a><a name="editproperty"></a>IPropertyPage2Impl::EditProperty

Specifica quale controllo proprietà riceverà lo stato attivo quando viene attivata la pagina delle proprietà.

```
HRESULT EditProperty(DISPID dispID);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IPropertyPage2::EditProperty](/windows/win32/api/ocidl/nf-ocidl-ipropertypage2-editproperty) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IPerPropertyBrowsingImpl (classe)](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
