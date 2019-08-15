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
ms.openlocfilehash: 5ec6cb2f4fc6931a1bec429068b558bf7ac1906e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495604"
---
# <a name="ipropertypage2impl-class"></a>Classe IPropertyPage2Impl

Questa classe implementa `IUnknown` ed eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md).

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class IPropertyPage2Impl : public IPropertyPageImpl<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPropertyPage2Impl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPropertyPage2Impl::EditProperty](#editproperty)|Specifica quale controllo proprietà riceverà lo stato attivo quando la pagina delle proprietà viene attivata. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

L'interfaccia [IPropertyPage2](/windows/win32/api/ocidl/nn-ocidl-ipropertypage2) estende [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) aggiungendo il `EditProperty` metodo. Questo metodo consente a un client di selezionare una proprietà specifica in un oggetto pagina delle proprietà.

La `IPropertyPage2Impl` classe restituisce semplicemente E_NOTIMPL `IPropertyPage2::EditProperty`per. Tuttavia, eredita l'implementazione predefinita di [IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md) e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle build di debug.

Quando si crea una pagina delle proprietà, la classe viene in genere `IPropertyPageImpl`derivata da. Per fornire il supporto aggiuntivo di `IPropertyPage2`, modificare la definizione della classe ed eseguire `EditProperty` l'override del metodo.

**Articoli correlati** [Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPropertyPage`

[IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)

`IPropertyPage2Impl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="editproperty"></a>  IPropertyPage2Impl::EditProperty

Specifica quale controllo proprietà riceverà lo stato attivo quando la pagina delle proprietà viene attivata.

```
HRESULT EditProperty(DISPID dispID);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Vedere [IPropertyPage2:: EditProperty](/windows/win32/api/ocidl/nf-ocidl-ipropertypage2-editproperty) nella Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
