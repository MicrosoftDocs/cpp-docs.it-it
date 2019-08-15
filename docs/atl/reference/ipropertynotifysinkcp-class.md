---
title: Classe IPropertyNotifySinkCP
ms.date: 11/04/2016
f1_keywords:
- IPropertyNotifySinkCP
- atlctl/ATL::IPropertyNotifySinkCP
helpviewer_keywords:
- connection points [C++], managing
- sinks, notifying of changes
- IPropertyNotifySinkCP class
ms.assetid: 1b41445e-bc88-4fa6-bb62-d68aacec2bd5
ms.openlocfilehash: 9838a48b078cbc59a5ae86669ad9f26792d9816e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495632"
---
# <a name="ipropertynotifysinkcp-class"></a>Classe IPropertyNotifySinkCP

Questa classe espone l'interfaccia [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) come interfaccia in uscita su un oggetto collegabile.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T, class CDV = CComDynamicUnkArray>
class IPropertyNotifySinkCP
   : public IConnectionPointImpl<T, &IID_IPropertyNotifySink, CDV>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPropertyNotifySinkCP`.

*CDV*<br/>
Classe che gestisce le connessioni tra un punto di connessione e i relativi sink. Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente connessioni illimitate. È anche possibile usare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso di connessioni.

## <a name="remarks"></a>Note

`IPropertyNotifySinkCP`eredita tutti i metodi tramite la relativa classe base, [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).

L'interfaccia [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) consente a un oggetto sink di ricevere notifiche relative alle modifiche delle proprietà. La `IPropertyNotifySinkCP` classe espone questa interfaccia come interfaccia in uscita su un oggetto collegabile. Il client deve implementare i `IPropertyNotifySink` metodi sul sink.

Derivare la classe `IPropertyNotifySinkCP` da quando si desidera creare un punto di connessione che rappresenta `IPropertyNotifySink` l'interfaccia.

Per ulteriori informazioni sull'utilizzo di punti di connessione in ATL, vedere l'articolo [punti di connessione](../../atl/atl-connection-points.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="see-also"></a>Vedere anche

[Classe IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md)<br/>
[Classe IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
