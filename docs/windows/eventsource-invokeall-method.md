---
title: "Metodo EventSource::InvokeAll | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource::InvokeAll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InvokeAll (metodo)"
ms.assetid: 1506618f-0421-4428-a4d0-4ea2b10a3bf6
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Metodo EventSource::InvokeAll
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiama ogni gestore eventi associato all'oggetto corrente [EventSource](../windows/eventsource-class.md) utilizzando gli argomenti e i tipi di argomenti specificati.  
  
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
 Il tipo di argomento di gestore dell'evento di zero.  
  
 `T1`  
 Il tipo del primo argomento del gestore eventi.  
  
 `T2`  
 Il tipo del secondo argomento del gestore eventi.  
  
 `T3`  
 Il tipo del terzo argomento del gestore eventi.  
  
 `T4`  
 Il tipo del quarto argomento del gestore eventi.  
  
 `T5`  
 Il tipo del quinto argomento del gestore eventi.  
  
 `T6`  
 Il tipo del sesto argomento del gestore eventi.  
  
 `T7`  
 Il tipo del settimo argomento del gestore eventi.  
  
 `T8`  
 Il tipo dell'ottavo argomento del gestore eventi.  
  
 `T9`  
 Il tipo del nono argomento del gestore eventi.  
  
 `arg0`  
 L'argomento gestore dell'evento iniziale.  
  
 `arg1`  
 Il primo argomento del gestore eventi.  
  
 `arg2`  
 Il secondo argomento del gestore eventi.  
  
 `arg3`  
 Il terzo argomento del gestore eventi.  
  
 `arg4`  
 Il quarto argomento del gestore eventi.  
  
 `arg5`  
 Il quinto argomento del gestore eventi.  
  
 `arg6`  
 Il sesto argomento del gestore eventi.  
  
 `arg7`  
 Il settimo argomento del gestore eventi.  
  
 `arg8`  
 L'argomento gestore dell'evento ottavo.  
  
 `arg9`  
 Il nono argomento del gestore eventi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [EventSource (classe)](../windows/eventsource-class.md)