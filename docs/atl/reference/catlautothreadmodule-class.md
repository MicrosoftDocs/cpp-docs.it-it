---
title: Classe CAtlAutoThreadModule | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAtlAutoThreadModule
- atlbase/ATL::CAtlAutoThreadModule
dev_langs:
- C++
helpviewer_keywords:
- CAtlAutoThreadModule class
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f7b782d7d53e5d97f08ebae62fc62d7a49c9f96d
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763656"
---
# <a name="catlautothreadmodule-class"></a>Classe CAtlAutoThreadModule

Questa classe implementa un pool di thread di modello di apartment COM server.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CAtlAutoThreadModule : public CAtlAutoThreadModuleT<CAtlAutoThreadModule>
```

## <a name="remarks"></a>Note

`CAtlAutoThreadModule` deriva da [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) e implementa un pool di thread di modello di apartment COM server. `CAtlAutoThreadModule` viene utilizzato [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.

È necessario usare il [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come la class factory. È quindi necessario aggiungere una singola istanza di una classe derivata da `CAtlAutoThreadModuleT` , ad esempio `CAtlAutoThreadModule`. Ad esempio:

`CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`

> [!NOTE]
>  Questa classe consente di sostituire l'obsoleto [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlAutoThreadModule`

[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)

`CAtlAutoThreadModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classe CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)   
[Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)   
[Classi di modulo](../../atl/atl-module-classes.md)
