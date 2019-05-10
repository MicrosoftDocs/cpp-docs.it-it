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
ms.openlocfilehash: 15283439bdcf76fea64d677ad84bee333833dc71
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221218"
---
# <a name="adding-a-new-interface-in-an-atl-project"></a>Aggiunta di una nuova interfaccia in un progetto ATL

Quando si aggiunge un'interfaccia per l'oggetto o il controllo, si crea funzioni generate automaticamente per ogni metodo in tale interfaccia. In un oggetto o controllo, è possibile aggiungere solo le interfacce attualmente presenti in una libreria dei tipi esistente. Inoltre, la classe in cui viene aggiunta l'interfaccia deve implementare il [BEGIN_COM_MAP](com-map-macros.md#begin_com_map) macro o, se il progetto con attribuito, è necessario il `coclass` attributo.

È possibile aggiungere una nuova interfaccia al controllo in uno dei due modi: manualmente o tramite le creazioni guidate codice in visualizzazione classi.

## <a name="to-use-code-wizards-in-class-view-to-add-an-interface-to-an-existing-object-or-control"></a>Usare le creazioni guidate codice in visualizzazione classi per aggiungere un'interfaccia a un controllo o un oggetto esistente

1. Nelle [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic il nome della classe di un controllo. Ad esempio, un controllo completo o controllo composito o qualsiasi altra classe di controllo che implementa una macro BEGIN_COM_MAP nel relativo file di intestazione.

1. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **implementa interfaccia**.

1. Selezionare le interfacce da implementare nel [implementazione guidata interfaccia](../../ide/implement-interface-wizard.md). Se l'interfaccia non esiste in qualsiasi libreria dei tipi disponibile, quindi è necessario aggiungerlo manualmente al file con estensione idl.

## <a name="to-add-a-new-interface-manually"></a>Per aggiungere manualmente una nuova interfaccia

1. Aggiungere la definizione dell'interfaccia di nuovo al file con estensione idl.

1. Derivare l'oggetto o controllo dall'interfaccia.

1. Creare una nuova [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) per l'interfaccia oppure, se il progetto con attribuito, aggiungere il `coclass` attributo.

1. Implementare i metodi sull'interfaccia.

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[C++tipi di progetto in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
