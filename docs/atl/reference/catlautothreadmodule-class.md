---
description: 'Altre informazioni su: classe CAtlAutoThreadModule'
title: Classe CAtlAutoThreadModule
ms.date: 11/04/2016
f1_keywords:
- CAtlAutoThreadModule
- atlbase/ATL::CAtlAutoThreadModule
helpviewer_keywords:
- CAtlAutoThreadModule class
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
ms.openlocfilehash: d1742488cca84dccfa53753bec40f9081d77f67d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165056"
---
# <a name="catlautothreadmodule-class"></a>Classe CAtlAutoThreadModule

Questa classe implementa un server COM in pool di thread e un modello di Apartment.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class CAtlAutoThreadModule : public CAtlAutoThreadModuleT<CAtlAutoThreadModule>
```

## <a name="remarks"></a>Osservazioni

`CAtlAutoThreadModule` deriva da [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) e implementa un server com in pool di Threading. `CAtlAutoThreadModule` USA [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un Apartment per ogni thread del modulo.

Per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory, è necessario usare la macro [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) nella definizione della classe dell'oggetto. È quindi necessario aggiungere una singola istanza di una classe derivata da `CAtlAutoThreadModuleT` , ad esempio `CAtlAutoThreadModule` . Ad esempio:

`CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`

> [!NOTE]
> Questa classe sostituisce la classe [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) obsoleta.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlAutoThreadModule`

[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)

`CAtlAutoThreadModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedi anche

[Classe CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)<br/>
[Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
