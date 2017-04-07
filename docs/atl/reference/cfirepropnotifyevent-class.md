---
title: Classe CFirePropNotifyEvent | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 1511a9e9ba287d12aade7c393887c6b5f8880b96
ms.lasthandoff: 02/24/2017

---
# <a name="cfirepropnotifyevent-class"></a>CFirePropNotifyEvent (classe)
Questa classe fornisce metodi per la notifica di sink del contenitore riguardo le modifiche alle proprietà di controllo.  
  
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
|[CFirePropNotifyEvent::FireOnRequestEdit](#fireonrequestedit)|(Statico) Notifica al sink del contenitore di proprietà di un controllo sta per essere modificata.|  
  
## <a name="remarks"></a>Note  
 `CFirePropNotifyEvent`dispone di due metodi che notificano sink del contenitore che una proprietà del controllo è stato modificato o sta per essere modificata.  
  
 Se la classe che implementa il controllo è derivata da `IPropertyNotifySink`, `CFirePropNotifyEvent` metodi vengono richiamati quando si chiama `FireOnRequestEdit` o `FireOnChanged`. Se la classe di controllo non è derivata da `IPropertyNotifySink`, le chiamate a queste funzioni restituiscono `S_OK`.  
  
 Per ulteriori informazioni sulla creazione di controlli, vedere il [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="fireonchanged"></a>CFirePropNotifyEvent::FireOnChanged  
 Notifica tutti connessi [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfacce (per ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato è stato modificato.  
  
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
  
##  <a name="fireonrequestedit"></a>CFirePropNotifyEvent::FireOnRequestEdit  
 Notifica tutti connessi [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfacce (per ogni punto di connessione dell'oggetto) che la proprietà dell'oggetto specificato sta per essere modificata.  
  
```
static HRESULT FireOnRequestEdit(IUnknown* pUnk, DISPID dispID);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Puntatore al **IUnknown** dell'oggetto che invia la notifica.  
  
 *dispID*  
 [in] Identificatore della proprietà per essere modificata.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Questa funzione è sicura chiamare anche se il controllo non supporta i punti di connessione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

