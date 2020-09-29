---
title: Aggiunta di una nuova interfaccia in un progetto ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.ATL.interface
helpviewer_keywords:
- interfaces, adding to ATL objects
- Implement Interface ATL wizard
- controls [ATL], interfaces
- ATL projects, adding interfaces
ms.assetid: 7d34b023-2c6b-4155-aca3-d47a40968063
ms.openlocfilehash: 8bf0138f85929e06b67e9a2e294eda8a2f385e1a
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499388"
---
# <a name="adding-a-new-interface-in-an-atl-project"></a>Aggiunta di una nuova interfaccia in un progetto ATL

Quando si aggiunge un'interfaccia all'oggetto o al controllo, si creano funzioni stub per ogni metodo in tale interfaccia. Nell'oggetto o nel controllo è possibile aggiungere solo le interfacce attualmente presenti in una libreria dei tipi esistente. Inoltre, la classe in cui si aggiunge l'interfaccia deve implementare la [BEGIN_COM_MAP](com-map-macros.md#begin_com_map) macro o, se il progetto è attribuito, deve avere l' `coclass` attributo.

È possibile aggiungere una nuova interfaccia al controllo in uno dei due modi seguenti: manualmente o utilizzando creazioni guidate codice in Visualizzazione classi.

## <a name="to-use-code-wizards-in-class-view-to-add-an-interface-to-an-existing-object-or-control"></a>Per utilizzare le creazioni guidate codice in Visualizzazione classi per aggiungere un'interfaccia a un oggetto o a un controllo esistente

1. In [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code)fare clic con il pulsante destro del mouse sul nome della classe di un controllo. Ad esempio, un controllo completo o composito o qualsiasi altra classe del controllo che implementi una macro BEGIN_COM_MAP nel file di intestazione.

1. Scegliere **Aggiungi**dal menu di scelta rapida, quindi fare clic su **implementa interfaccia**.

1. Selezionare le interfacce da implementare nella [procedura guidata implementa interfaccia](../../ide/implementing-an-interface-visual-cpp.md#implement-interface-wizard). Se l'interfaccia non esiste in nessuna libreria dei tipi disponibile, è necessario aggiungerla manualmente al file IDL.

## <a name="to-add-a-new-interface-manually"></a>Per aggiungere una nuova interfaccia manualmente

1. Aggiungere la definizione della nuova interfaccia al file IDL.

1. Derivare l'oggetto o il controllo dall'interfaccia.

1. Creare un nuovo [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) per l'interfaccia o, se il progetto è attribuito, aggiungere l' `coclass` attributo.

1. Implementare i metodi nell'interfaccia.

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto C++ in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Programmazione con il codice di runtime di C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
