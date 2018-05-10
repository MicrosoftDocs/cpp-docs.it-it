---
title: Classe DeferrableEventArgs | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 15be5c26e5d4e976eaba7b6b24e1bf4f62c53aca
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="deferrableeventargs-class"></a>Classe DeferrableEventArgs
Classe di modello usata per i tipi di argomento evento per rinvii.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
typename TEventArgsInterface,  
typename TEventArgsClass  
>  
class DeferrableEventArgs : public TEventArgsInterface  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `TEventArgsInterface`  
 Tipo di interfaccia che dichiara gli argomenti per un evento posticipato.  
  
 `TEventArgsClass`  
 Classe che implementa `TEventArgsInterface`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo DeferrableEventArgs::GetDeferral](../windows/deferrableeventargs-getdeferral-method.md)|Ottiene un riferimento di [rinvio](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto che rappresenta un evento posticipato.|  
|[Metodo DeferrableEventArgs::InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md)|Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.|  
  
## <a name="remarks"></a>Note  
 Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati. I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.  
  
 La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato. È possibile chiamare il [GetDeferral](../windows/deferrableeventargs-getdeferral-method.md) metodo per ottenere il [rinvio](http://go.microsoft.com/fwlink/p/?linkid=526520) oggetto da cui è possibile ottenere tutte le informazioni sull'evento posticipato. Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral. È necessario chiamare [InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md) alla fine del metodo del gestore eventi, che assicura che il completamento di tutti gli eventi posticipati sia comunicato correttamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)