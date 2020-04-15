---
title: IPropertyNotifySinkCP (classe)
ms.date: 11/04/2016
f1_keywords:
- IPropertyNotifySinkCP
- atlctl/ATL::IPropertyNotifySinkCP
helpviewer_keywords:
- connection points [C++], managing
- sinks, notifying of changes
- IPropertyNotifySinkCP class
ms.assetid: 1b41445e-bc88-4fa6-bb62-d68aacec2bd5
ms.openlocfilehash: c6d98bf5a6dfe5566839eb22bcd2bab2a9c28e4d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329604"
---
# <a name="ipropertynotifysinkcp-class"></a>IPropertyNotifySinkCP (classe)

Questa classe espone [iPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) interfaccia come interfaccia in uscita su un oggetto collegabile.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T, class CDV = CComDynamicUnkArray>
class IPropertyNotifySinkCP
   : public IConnectionPointImpl<T, &IID_IPropertyNotifySink, CDV>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPropertyNotifySinkCP`derivata da .

*Cdv*<br/>
Classe che gestisce le connessioni tra un punto di connessione e i relativi sink. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente connessioni illimitate. È inoltre possibile utilizzare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso di connessioni.

## <a name="remarks"></a>Osservazioni

`IPropertyNotifySinkCP`eredita tutti i metodi tramite la relativa classe base, [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).

Il [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) interfaccia consente a un oggetto sink di ricevere notifiche sulle modifiche delle proprietà. Classe `IPropertyNotifySinkCP` espone questa interfaccia come un'interfaccia in uscita su un oggetto collegabile. Il client deve `IPropertyNotifySink` implementare i metodi nel sink.

Derivare la `IPropertyNotifySinkCP` classe da quando si desidera `IPropertyNotifySink` creare un punto di connessione che rappresenta l'interfaccia.

Per ulteriori informazioni sull'utilizzo dei punti di connessione in ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="see-also"></a>Vedere anche

[IConnectionPointImpl (classe)](../../atl/reference/iconnectionpointimpl-class.md)<br/>
[IConnectionPointContainerImpl (classe)](../../atl/reference/iconnectionpointcontainerimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
