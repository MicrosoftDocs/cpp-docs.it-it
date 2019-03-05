---
title: Implementazione delle interfacce duali (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- IDispatchImpl class, implementing dual interfaces
- dual interfaces, implementing
ms.assetid: d1da3633-b445-4dcd-8a0a-3efdafada3ea
ms.openlocfilehash: ecd6a0cc90ca4175c4ae898f2e9aa8bf00508a3e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57287336"
---
# <a name="implementing-a-dual-interface"></a>Implementazione delle interfacce duali

È possibile implementare un'interfaccia duale usando il [IDispatchImpl](../atl/reference/idispatchimpl-class.md) classe, che fornisce un'implementazione predefinita del `IDispatch` metodi in un'interfaccia duale. Per altre informazioni, vedere [Implementing the IDispatch Interface](/previous-versions/windows/desktop/automat/implementing-the-idispatch-interface).

Utilizzare questa classe:

- Definire l'interfaccia duale in una libreria dei tipi.

- Derivare la classe da una specializzazione di `IDispatchImpl` (passare le informazioni sulla libreria di interfaccia e il tipo come argomenti di modello).

- Aggiungere una voce (o le voci) alla mappa COM per esporre l'interfaccia duale tramite `QueryInterface`.

- Implementare la parte vtable dell'interfaccia nella classe.

- Assicurarsi che la libreria dei tipi che contiene la definizione dell'interfaccia è disponibile per gli oggetti in fase di esecuzione.

## <a name="atl-simple-object-wizard"></a>Creazione guidata oggetto semplice ATL

Se si desidera creare una nuova interfaccia e una nuova classe per l'implementazione, è possibile usare la [finestra di dialogo Aggiungi classe ATL](../ide/add-class-dialog-box.md)e quindi la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md).

## <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia

Se si dispone di un'interfaccia esistente, è possibile usare la [implementazione guidata interfaccia](../atl/reference/adding-a-new-interface-in-an-atl-project.md) per aggiungere la classe di base necessaria, le voci della mappa COM e le implementazioni del metodo scheletro a una classe esistente.

> [!NOTE]
>  Potrebbe essere necessario modificare la classe di base generata in modo che i numeri di versione principale e secondaria della libreria dei tipi vengono passati come argomenti di modello per il `IDispatchImpl` classe di base. Implementazione guidata interfaccia non verifica il numero di versione della libreria di tipo per l'utente.

## <a name="implementing-idispatch"></a>Implementa IDispatch

È possibile usare un `IDispatchImpl` classe di base per fornire un'implementazione di un'interfaccia dispatch semplicemente specificandone la voce appropriata nella mappa COM (usando il [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) o [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid) macro), purché si dispone di una libreria dei tipi che descrivono le interfacce duali corrispondente. È piuttosto comune per implementare il `IDispatch` interfaccia in questo modo, ad esempio. La creazione guidata oggetto semplice ATL e implementazione guidata interfaccia entrambi presuppongono che si intende implementare `IDispatch` in questo modo, pertanto, si aggiungerà la voce appropriata alla mappa.

> [!NOTE]
>  ATL offre il [IDispEventImpl](../atl/reference/idispeventimpl-class.md) e [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md) classi che consentono di implementare le interfacce dispatch senza richiedere una libreria dei tipi contenente la definizione di un'interfaccia duale compatibile.

## <a name="see-also"></a>Vedere anche

[Interfacce duali e ATL](../atl/dual-interfaces-and-atl.md)
