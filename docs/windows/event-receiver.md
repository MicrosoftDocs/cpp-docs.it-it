---
title: event_receiver | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.event_receiver
dev_langs:
- C++
helpviewer_keywords:
- event_receiver attribute
- event receivers
- events [C++], event receivers (sinks)
- event handling [C++], attributes
- event handling [C++], creating receiver
- event sinks, creating
- event sinks
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0b13acb5d637b4a733f2a2b9c66c8ded977c7847
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569934"
---
# <a name="eventreceiver"></a>event_receiver
Crea un ricevitore di eventi (sink).  
  
## <a name="syntax"></a>Sintassi  
  
```  
[ event_receiver(  
   type   
   [, layout_dependent=false]   
) ]  
```  
  
#### <a name="parameters"></a>Parametri  
 *type*  
 Un'enumerazione di uno dei valori seguenti:  
  
-   `native` per codice C/C++ non gestito (impostazione predefinita per le classi native).  
  
-   `com` per il codice COM. Questo valore richiedere che si includano i file di intestazione seguente:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **layout_dependent**  
 Specificare *layout_dependent* solo se `type` = **com**. *layout_dependent* è un valore booleano:  
  
-   **true** significa che la firma dei delegati nel caso in cui deve corrispondere esattamente a quelli a cui sono associati nell'evento origine ricevitore. I nomi dei gestori di ricevitore di eventi devono corrispondere ai nomi specificati nell'interfaccia di origine evento rilevante. È necessario utilizzare `coclass` quando si *layout_dependent* viene **true**. È leggermente più efficiente specificare **true**.  
  
-   **false** (predefinito) indica che la classe di archiviazione e convenzione di chiamata (virtual, static e così via) non è in modo che corrisponda il metodo di evento e i gestori; né è necessario i nomi dei gestori corrispondano ai nomi di metodo di interfaccia di origine evento.  
  
## <a name="remarks"></a>Note  
 Il **event_receiver** attributo C++ specifica che la classe o struttura in cui viene applicato sarà un ricevitore di eventi, usando il modello di evento unificato di Visual C++.  
  
 **event_receiver** viene usato con il [event_source](../windows/event-source.md) attributo e il [hook](../cpp/hook.md) e [unhook](../cpp/unhook.md) parole chiave. Usare `event_source` per creare origini evento. Uso **hook** all'interno di metodi del ricevitore di eventi per associare i metodi di ricevitore di eventi ("hook") per gli eventi di un'origine evento. Uso **unhook** per annullare l'associazione di essi.  
  
 *layout_dependent* viene specificato solo per i ricevitori di eventi COM (`type`=**com**). Il valore predefinito per *layout_dependent* viene **false**.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**, **struct**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**Coclasse** quando si *layout_dependent*=**true**|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [event_source](../windows/event-source.md)   
 [Event](../cpp/event.md)   
 [hook](../cpp/hook.md)   
 [unhook](../cpp/unhook.md)   
 [Attributi di classe](../windows/class-attributes.md)   