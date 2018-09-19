---
title: Aggiunta di una nuova interfaccia in un progetto ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.interface
dev_langs:
- C++
helpviewer_keywords:
- interfaces, adding to ATL objects
- Implement Interface ATL wizard
- controls [ATL], interfaces
- ATL projects, adding interfaces
ms.assetid: 7d34b023-2c6b-4155-aca3-d47a40968063
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7d468e6e2770eca3bc01fca95fb585d1753210a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039023"
---
# <a name="adding-a-new-interface-in-an-atl-project"></a>Aggiunta di una nuova interfaccia in un progetto ATL

Quando si aggiunge un'interfaccia per l'oggetto o il controllo, si crea funzioni generate automaticamente per ogni metodo in tale interfaccia. In un oggetto o controllo, è possibile aggiungere solo le interfacce attualmente presenti in una libreria dei tipi esistente. Inoltre, la classe in cui viene aggiunta l'interfaccia deve implementare il [BEGIN_COM_MAP](com-map-macros.md#begin_com_map) macro o, se il progetto con attribuito, è necessario il `coclass` attributo.

È possibile aggiungere una nuova interfaccia al controllo in uno dei due modi: manualmente o tramite le creazioni guidate codice in visualizzazione classi.

### <a name="to-use-code-wizards-in-class-view-to-add-an-interface-to-an-existing-object-or-control"></a>Usare le creazioni guidate codice in visualizzazione classi per aggiungere un'interfaccia a un controllo o un oggetto esistente

1. Nelle [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic il nome della classe di un controllo. Ad esempio, un controllo completo o controllo composito o qualsiasi altra classe di controllo che implementa una macro BEGIN_COM_MAP nel relativo file di intestazione.

2. Nel menu di scelta rapida, fare clic su **Add**, quindi fare clic su **implementa interfaccia**.

3. Selezionare le interfacce da implementare nel [implementazione guidata interfaccia](../../ide/implement-interface-wizard.md). Se l'interfaccia non esiste in qualsiasi libreria dei tipi disponibile, quindi è necessario aggiungerlo manualmente al file con estensione idl.

### <a name="to-add-a-new-interface-manually"></a>Per aggiungere manualmente una nuova interfaccia

1. Aggiungere la definizione dell'interfaccia di nuovo al file con estensione idl.

2. Derivare l'oggetto o controllo dall'interfaccia.

3. Creare una nuova [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) per l'interfaccia oppure, se il progetto con attribuito, aggiungere il `coclass` attributo.

4. Implementare i metodi sull'interfaccia.

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)<br/>
[Creazione di progetti desktop tramite le creazioni guidate applicazioni](../../ide/creating-desktop-projects-by-using-application-wizards.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

