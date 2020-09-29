---
title: Implementazione di un'interfaccia duale (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- IDispatchImpl class, implementing dual interfaces
- dual interfaces, implementing
ms.assetid: d1da3633-b445-4dcd-8a0a-3efdafada3ea
ms.openlocfilehash: 97d8cd912c85a74f3550a9ca6c7b87a9717d4075
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499553"
---
# <a name="implementing-a-dual-interface"></a>Implementazione di un'interfaccia duale

È possibile implementare un'interfaccia duale usando la classe [IDispatchImpl](../atl/reference/idispatchimpl-class.md) , che fornisce un'implementazione predefinita dei `IDispatch` metodi in un'interfaccia duale. Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

Per usare questa classe:

- Definire la doppia interfaccia in una libreria dei tipi.

- Derivare la classe da una specializzazione di `IDispatchImpl` (passare informazioni sull'interfaccia e sulla libreria dei tipi come argomenti di modello).

- Aggiungere una voce o voci alla mappa COM per esporre l'interfaccia duale tramite `QueryInterface` .

- Implementare la parte vtable dell'interfaccia nella classe.

- Verificare che la libreria dei tipi contenente la definizione dell'interfaccia sia disponibile per gli oggetti in fase di esecuzione.

## <a name="atl-simple-object-wizard"></a>Creazione guidata oggetto semplice ATL

Se si desidera creare una nuova interfaccia e una nuova classe per implementarla, è possibile utilizzare la finestra di [dialogo Aggiungi classe ATL](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box), quindi la [creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md).

## <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia

Se si dispone di un'interfaccia esistente, è possibile utilizzare la [procedura guidata implementa interfaccia](../atl/reference/adding-a-new-interface-in-an-atl-project.md) per aggiungere a una classe esistente la classe di base, le voci della mappa com e le implementazioni del metodo di base necessarie.

> [!NOTE]
> Potrebbe essere necessario modificare la classe di base generata in modo che i numeri di versione principale e secondaria della libreria dei tipi vengano passati come argomenti di modello alla `IDispatchImpl` classe di base. La procedura guidata implementa interfaccia non controlla il numero di versione della libreria dei tipi.

## <a name="implementing-idispatch"></a>Implementazione di IDispatch

È possibile usare una `IDispatchImpl` classe di base per fornire un'implementazione di un'interfaccia dispatch semplicemente specificando la voce appropriata nella mappa com (usando la macro [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid) ), purché si disponga di una libreria dei tipi che descrive un'interfaccia doppia corrispondente. È piuttosto comune implementare l'interfaccia in `IDispatch` questo modo, ad esempio. La creazione guidata oggetto semplice ATL e la procedura guidata implementa interfaccia presuppongono che si desideri implementare `IDispatch` in questo modo, in modo da aggiungere la voce appropriata alla mappa.

> [!NOTE]
> ATL offre le classi [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) che consentono di implementare dispinterfaces senza richiedere una libreria dei tipi contenente la definizione di un'interfaccia duale compatibile.

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
