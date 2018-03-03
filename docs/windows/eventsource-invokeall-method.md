---
title: 'Metodo EventSource:: Invokeall | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::InvokeAll
dev_langs:
- C++
helpviewer_keywords:
- InvokeAll method
ms.assetid: 1506618f-0421-4428-a4d0-4ea2b10a3bf6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 45835b6929ae73559c427d374430b64e7ff21a61
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="eventsourceinvokeall-method"></a>Metodo EventSource::InvokeAll
Chiama ogni gestore dell'evento associato all'oggetto corrente [EventSource](../windows/eventsource-class.md) utilizzando gli argomenti e i tipi di argomenti specificati.  
  
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
  
#### <a name="parameters"></a>Parametri  
 `T0`  
 Il tipo dell'argomento del gestore dell'evento di zero.  
  
 `T1`  
 Il tipo del primo argomento del gestore dell'evento.  
  
 `T2`  
 Il tipo del secondo argomento del gestore dell'evento.  
  
 `T3`  
 Il tipo del terzo argomento del gestore dell'evento.  
  
 `T4`  
 Il tipo del quarto argomento del gestore dell'evento.  
  
 `T5`  
 Il tipo del quinto argomento del gestore dell'evento.  
  
 `T6`  
 Il tipo del sesto argomento del gestore dell'evento.  
  
 `T7`  
 Il tipo del settimo argomento del gestore dell'evento.  
  
 `T8`  
 Il tipo dell'ottavo argomento del gestore dell'evento.  
  
 `T9`  
 Il tipo del nono argomento del gestore dell'evento.  
  
 `arg0`  
 L'argomento del gestore dell'evento zero.  
  
 `arg1`  
 Il primo argomento di gestore di evento.  
  
 `arg2`  
 Il secondo argomento di gestore di evento.  
  
 `arg3`  
 Il terzo argomento di gestore di evento.  
  
 `arg4`  
 Il quarto argomento gestore dell'evento.  
  
 `arg5`  
 Il quinto argomento gestore dell'evento.  
  
 `arg6`  
 Il sesto argomento del gestore dell'evento.  
  
 `arg7`  
 Il settimo argomento del gestore dell'evento.  
  
 `arg8`  
 L'argomento del gestore dell'evento ottavo.  
  
 `arg9`  
 Il nono argomento del gestore dell'evento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)