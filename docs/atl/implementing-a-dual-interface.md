---
title: Implementazione di un'interfaccia duale (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- IDispatchImpl class, implementing dual interfaces
- dual interfaces, implementing
ms.assetid: d1da3633-b445-4dcd-8a0a-3efdafada3ea
ms.openlocfilehash: a85597adad045bee3edb5cc3ed63c72a22fa08fe
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319460"
---
# <a name="implementing-a-dual-interface"></a>Implementazione di un'interfaccia dualeImplementing a Dual Interface

È possibile implementare un'interfaccia duale usando la classe [IDispatchImpl,](../atl/reference/idispatchimpl-class.md) che fornisce un'implementazione `IDispatch` predefinita dei metodi in un'interfaccia duale. Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

Per utilizzare questa classe:

- Definire l'interfaccia duale in una libreria dei tipi.

- Derivare la classe da `IDispatchImpl` una specializzazione di (passare informazioni sull'interfaccia e la libreria dei tipi come argomenti di modello).

- Aggiungere una o più voci alla mappa COM per `QueryInterface`esporre l'interfaccia duale tramite .

- Implementare la parte vtable dell'interfaccia nella classe.

- Assicurarsi che la libreria dei tipi contenente la definizione dell'interfaccia sia disponibile per gli oggetti in fase di esecuzione.

## <a name="atl-simple-object-wizard"></a>Creazione guidata oggetto semplice ATL

Se si desidera creare una nuova interfaccia e una nuova classe per implementarla, è possibile utilizzare la finestra di [dialogo Aggiungi classe ATL](../ide/add-class-dialog-box.md)e quindi la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md).

## <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia

Se si dispone di un'interfaccia esistente, è possibile utilizzare [l'Implementazione guidata interfaccia](../atl/reference/adding-a-new-interface-in-an-atl-project.md) per aggiungere la classe base necessaria, le voci di mapping COM e le implementazioni del metodo di scheletro a una classe esistente.

> [!NOTE]
> Potrebbe essere necessario modificare la classe di base generata in modo che i numeri `IDispatchImpl` di versione principale e secondaria della libreria dei tipi vengano passati come argomenti di modello alla classe base. L'Implementazione guidata interfaccia non controlla il numero di versione della libreria dei tipi.

## <a name="implementing-idispatch"></a>Implementazione di IDispatchImplementing IDispatch

È possibile `IDispatchImpl` utilizzare una classe base per fornire un'implementazione di un'interfaccia dispatch semplicemente specificando la voce appropriata nella mappa COM (utilizzando la [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid) macro) purché si disponga di una libreria dei tipi che descrive un'interfaccia duale corrispondente. È abbastanza comune implementare l'interfaccia `IDispatch` in questo modo, per esempio. La Creazione guidata oggetto semplice ATL e l'Implementazione guidata interfaccia presuppongono entrambi che si intende implementare `IDispatch` in questo modo, in modo da aggiungere la voce appropriata alla mappa.

> [!NOTE]
> ATL offre le classi [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) che consentono di implementare interfacce dispatch senza richiedere una libreria dei tipi contenente la definizione di un'interfaccia duale compatibile.

## <a name="see-also"></a>Vedere anche

[Interfacce doppie e ATL](../atl/dual-interfaces-and-atl.md)
