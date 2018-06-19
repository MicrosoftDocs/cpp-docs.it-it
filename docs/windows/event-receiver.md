---
title: event_receiver | Documenti Microsoft
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
ms.openlocfilehash: 01ab5aeee7d706da7016cb1ea1f01ff7367de888
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33875565"
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
 `type`  
 Un'enumerazione di uno dei valori seguenti:  
  
-   `native` per il codice C/C++ non gestito (impostazione predefinita per le classi native).  
  
-   `com` per il codice COM. Questo valore richiedere che si includano i file di intestazione seguente:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **layout_dependent**  
 Specificare *layout_dependent* solo se `type` = **com**. *layout_dependent* è un valore booleano:  
  
-   **true** significa che la firma dei delegati nel caso in cui ricevitore deve corrispondere esattamente a quelli a cui sono associati nell'evento origine. I nomi dei gestori di ricevitore di eventi deve corrispondere ai nomi specificati nell'interfaccia di origine eventi rilevanti. È necessario utilizzare **coclasse** quando *layout_dependent* è **true**. È leggermente più efficiente specificare **true**.  
  
-   **false** (valore predefinito) indica che la convenzione di chiamata o una classe archiviazione (virtuale, statici e altri) non dispone in modo che corrisponda il metodo di evento e i gestori; né sia i nomi dei gestori corrispondano ai nomi di metodo di interfaccia di origine evento.  
  
## <a name="remarks"></a>Note  
 Il **event_receiver** attributo C++ specifica che la classe o struttura in cui viene applicato sarà un ricevitore di eventi, utilizzando il modello di eventi unificato di Visual C++.  
  
 **event_receiver** viene usato con il [event_source](../windows/event-source.md) attributo e il [hook](../cpp/hook.md) e [unhook](../cpp/unhook.md) parole chiave. Utilizzare **event_source** per creare le origini eventi. Utilizzare `__hook` all'interno di metodi del ricevitore di eventi per associare i metodi di ricevitore di eventi ("hook") per gli eventi di un'origine evento. Utilizzare `__unhook` annullare l'associazione di essi.  
  
 *layout_dependent* viene specificato solo per i ricevitori di eventi COM (`type`=**com**). Il valore predefinito per *layout_dependent* è **false**.  
  
> [!NOTE]
>  Una classe o una struttura basata su template non può contenere eventi.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**class**, `struct`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**Coclasse** quando *layout_dependent*=**true**|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
 [event_source](../windows/event-source.md)   
 [Event](../cpp/event.md)   
 [hook](../cpp/hook.md)   
 [unhook](../cpp/unhook.md)   
 [Attributi di classe](../windows/class-attributes.md)   
