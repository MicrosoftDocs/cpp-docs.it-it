---
title: Classe CFirePropNotifyEvent | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CFirePropNotifyEvent
- ATLCTL/ATL::CFirePropNotifyEvent
- ATLCTL/ATL::CFirePropNotifyEvent::FireOnChanged
- ATLCTL/ATL::CFirePropNotifyEvent::FireOnRequestEdit
dev_langs:
- C++
helpviewer_keywords:
- sinks, notifying of ATL events
- CFirePropNotifyEvent class
- connection points [C++], notifying of events
ms.assetid: eb7a563e-6bce-4cdf-8d20-8c6a5307781b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 728f4e973a7ef74dcdbb44150375df235e0d990e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360988"
---
# <a name="cfirepropnotifyevent-class"></a>CFirePropNotifyEvent (classe)
Questa classe fornisce metodi per la notifica del sink del contenitore riguardanti le modifiche alle proprietà di controllo.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CFirePropNotifyEvent
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFirePropNotifyEvent::FireOnChanged](#fireonchanged)|(Statico) Notifica al sink del contenitore che ha modificato una proprietà del controllo.|  
|[CFirePropNotifyEvent::FireOnRequestEdit](#fireonrequestedit)|(Statico) Notifica al sink del contenitore che una proprietà del controllo sta per essere modificata.|  
  
## <a name="remarks"></a>Note  
 `CFirePropNotifyEvent` presenta due metodi che segnalano il sink del contenitore che una proprietà controllo è stata modificata o sta per essere modificata.  
  
 Se la classe che implementa il controllo è derivata da `IPropertyNotifySink`, `CFirePropNotifyEvent` metodi vengono richiamati quando si chiama `FireOnRequestEdit` o `FireOnChanged`. Se la classe di controllo non è derivata da `IPropertyNotifySink`, le chiamate a queste funzioni restituiscono `S_OK`.  
  
 Per ulteriori informazioni sulla creazione di controlli, vedere il [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="fireonchanged"></a>  CFirePropNotifyEvent::FireOnChanged  
 Notifica a tutti connessi [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfacce (per ogni punto di connessione dell'oggetto) che ha modificato la proprietà dell'oggetto specificato.  
  
```
static HRESULT FireOnChanged(IUnknown* pUnk, DISPID dispID);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Puntatore al **IUnknown** dell'oggetto che invia la notifica.  
  
 *dispID*  
 [in] Identificatore della proprietà che è stato modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Questa funzione è sicura chiamare anche se il controllo non supporta i punti di connessione.  
  
##  <a name="fireonrequestedit"></a>  CFirePropNotifyEvent::FireOnRequestEdit  
 Notifica a tutti connessi [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfacce (per ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato sta per essere modificata.  
  
```
static HRESULT FireOnRequestEdit(IUnknown* pUnk, DISPID dispID);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Puntatore al **IUnknown** dell'oggetto che invia la notifica.  
  
 *dispID*  
 [in] Identificatore della proprietà sta per essere modificata.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Questa funzione è sicura chiamare anche se il controllo non supporta i punti di connessione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
