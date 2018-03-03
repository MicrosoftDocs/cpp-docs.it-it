---
title: Implementazione delle interfacce duali (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- IDispatchImpl class, implementing dual interfaces
- dual interfaces, implementing
ms.assetid: d1da3633-b445-4dcd-8a0a-3efdafada3ea
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ae16adcc6743c7e35aae2a4121819a6df50cf4f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implementing-a-dual-interface"></a>Implementazione delle interfacce duali
È possibile implementare un'interfaccia duale usando il [IDispatchImpl](../atl/reference/idispatchimpl-class.md) (classe), che fornisce un'implementazione predefinita del `IDispatch` metodi in un'interfaccia duale. Per altre informazioni, vedere [Implementing the IDispatch Interface](http://msdn.microsoft.com/en-us/0e171f7f-0022-4e9b-ac8e-98192828e945).  
  
 Utilizzare questa classe:  
  
-   Definire l'interfaccia duale in una libreria dei tipi.  
  
-   Derivare la classe da una specializzazione di `IDispatchImpl` (passare le informazioni sulla libreria di interfaccia e il tipo come argomenti di modello).  
  
-   Aggiungere una voce (o le voci) alla mappa COM per esporre l'interfaccia duale tramite `QueryInterface`.  
  
-   Implementare la parte vtable dell'interfaccia nella classe.  
  
-   Verificare che la libreria dei tipi contenente la definizione dell'interfaccia è disponibile per gli oggetti in fase di esecuzione.  
  
## <a name="atl-simple-object-wizard"></a>Creazione guidata oggetto semplice ATL  
 Se si desidera creare una nuova interfaccia e una nuova classe per l'implementazione, è possibile utilizzare il [la finestra di dialogo Aggiungi classe ATL](../ide/add-class-dialog-box.md)e quindi la [guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md).  
  
## <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia  
 Se si dispone di un'interfaccia esistente, è possibile utilizzare il [implementazione guidata interfaccia](../atl/reference/adding-a-new-interface-in-an-atl-project.md) per aggiungere la classe di base necessarie, le voci della mappa COM e implementazioni del metodo di base a una classe esistente.  
  
> [!NOTE]
>  Potrebbe essere necessario modificare la classe di base generata in modo che i numeri di versione principale e secondaria della libreria dei tipi vengono passati come argomenti di modello per la `IDispatchImpl` classe di base. Implementazione guidata interfaccia non verifica il numero di versione della libreria di tipo.  
  
## <a name="implementing-idispatch"></a>Implementazione di IDispatch  
 È possibile utilizzare un `IDispatchImpl` classe di base per fornire un'implementazione di un'interfaccia dispatch specificando la voce appropriata nella mappa COM (utilizzando la [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid) macro), purché si dispone di una libreria dei tipi che descrivono un'interfaccia duale corrispondente. È abbastanza comune per implementare il `IDispatch` interfaccia in questo modo, ad esempio. La creazione guidata oggetto semplice ATL e l'implementazione guidata interfaccia entrambi si presuppone che si prevede di implementare `IDispatch` in questo modo, in modo aggiungerà la voce appropriata alla mappa.  
  
> [!NOTE]
>  ATL offre il [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) classi che consentono di implementare le interfacce dispatch senza richiedere una libreria dei tipi contenente la definizione di un'interfaccia duale compatibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)

