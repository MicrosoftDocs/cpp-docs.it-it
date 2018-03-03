---
title: 'Metodo deferrableeventargs:: Invokeallfinished | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 86b45205-3edb-4134-9cd0-ed7a7b4c3b1a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0ca021d66c615bfec84b8f08df8474eeb20709e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deferrableeventargsinvokeallfinished-method"></a>Metodo DeferrableEventArgs::InvokeAllFinished
Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
void InvokeAllFinished()  
```  
  
## <a name="remarks"></a>Note  
 È necessario chiamare questo metodo dopo l'origine evento chiami [InvokeAll](../windows/eventsource-invokeall-method.md). Se si chiama questo metodo, si eviteranno ulteriori rinvii e si forzerà l'esecuzione del gestore di completamento se non sono stati eseguiti rinvii.  
  
 Per un esempio di codice, vedere [classe DeferrableEventArgs](../windows/deferrableeventargs-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md)   
 [Metodo EventSource::InvokeAll](../windows/eventsource-invokeall-method.md)