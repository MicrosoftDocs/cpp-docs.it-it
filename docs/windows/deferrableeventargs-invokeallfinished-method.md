---
title: 'Metodo deferrableeventargs:: Invokeallfinished | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 86b45205-3edb-4134-9cd0-ed7a7b4c3b1a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 23d521b8373969abdd739b6e4f48eb334284664d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605173"
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