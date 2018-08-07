---
title: 'Metodo EventSource:: Invokeall | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::InvokeAll
dev_langs:
- C++
helpviewer_keywords:
- InvokeAll method
ms.assetid: 1506618f-0421-4428-a4d0-4ea2b10a3bf6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 04a31c7d080ff4fbfae094e07ab02d912966f4b1
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570652"
---
# <a name="eventsourceinvokeall-method"></a>Metodo EventSource::InvokeAll
Chiama ciascun gestore eventi associato all'oggetto corrente [EventSource](../windows/eventsource-class.md) utilizzando i tipi di argomento specificati e gli argomenti dell'oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void InvokeAll();  
template <  
   typename T0  
>  
void InvokeAll(  
   T0arg0  
);  
template <  
   typename T0,  
   typename T1  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3,  
   typename T4  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3,  
   T4arg4  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3,  
   typename T4,  
   typename T5  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3,  
   T4arg4,  
   T5arg5  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3,  
   typename T4,  
   typename T5,  
   typename T6  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3,  
   T4arg4,  
   T5arg5,  
   T6arg6  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3,  
   typename T4,  
   typename T5,  
   typename T6,  
   typename T7  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3,  
   T4arg4,  
   T5arg5,  
   T6arg6,  
   T7arg7  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3,  
   typename T4,  
   typename T5,  
   typename T6,  
   typename T7,  
   typename T8  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3,  
   T4arg4,  
   T5arg5,  
   T6arg6,  
   T7arg7,  
   T8arg8  
);  
template <  
   typename T0,  
   typename T1,  
   typename T2,  
   typename T3,  
   typename T4,  
   typename T5,  
   typename T6,  
   typename T7,  
   typename T8,  
   typename T9  
>  
void InvokeAll(  
   T0arg0,  
   T1arg1,  
   T2arg2,  
   T3arg3,  
   T4arg4,  
   T5arg5,  
   T6arg6,  
   T7arg7,  
   T8arg8,  
   T9arg9  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *T0*  
 Tipo di argomento del gestore dell'evento iniziale.  
  
 *T1*  
 Il tipo del primo argomento del gestore eventi.  
  
 *T2*  
 Il tipo del secondo argomento del gestore eventi.  
  
 *T3*  
 Il tipo del terzo argomento gestore dell'evento.  
  
 *T4*  
 Il tipo del quarto argomento gestore dell'evento.  
  
 *T5*  
 Il tipo del quinto argomento del gestore eventi.  
  
 *T6*  
 Il tipo del sesto argomento del gestore eventi.  
  
 *T7*  
 Il tipo del settimo argomento del gestore eventi.  
  
 *T8*  
 Il tipo dell'ottavo argomento gestore eventi.  
  
 *T9*  
 Il tipo del nono argomento del gestore eventi.  
  
 *arg0*  
 L'argomento del gestore dell'evento iniziale.  
  
 *arg1*  
 Il primo argomento di gestore dell'evento.  
  
 *Arg2*  
 Il secondo argomento di gestore dell'evento.  
  
 *arg3*  
 Il terzo argomento di gestore dell'evento.  
  
 *Arg4*  
 Il quarto argomento gestore dell'evento.  
  
 *Arg5*  
 Il quinto argomento del gestore dell'evento.  
  
 *Arg6*  
 Il sesto argomento del gestore dell'evento.  
  
 *Arg7*  
 Il settimo argomento del gestore dell'evento.  
  
 *arg8*  
 Argomento ottavo gestore dell'evento.  
  
 *arg9*  
 Il nono argomento del gestore dell'evento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)