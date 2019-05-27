---
title: Aggiunta di una pagina delle proprietà ATL
ms.date: 05/09/2019
helpviewer_keywords:
- property pages, adding
- ATL projects, adding property pages
- controls [ATL], property pages
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
ms.openlocfilehash: 81f793fbdc6d9dda567051b8c35a96f3d3f2f470
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65524624"
---
# <a name="adding-an-atl-property-page"></a>Aggiunta di una pagina delle proprietà ATL

> [!NOTE] 
> La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

Per aggiungere una pagina delle proprietà ATL (Active Template Library) al progetto, questo deve essere stato creato come applicazione ATL o come applicazione MFC che contiene supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Se si aggiunge una pagina delle proprietà per un controllo, il controllo deve supportare l'interfaccia [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md). Per impostazione predefinita, questa interfaccia è inclusa nell'elenco di derivazione della classe del controllo quando si [crea un controllo ATL](../../atl/reference/adding-an-atl-control.md) tramite la [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).

> [!NOTE]
> Se la classe del controllo non include [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) nel proprio elenco di derivazione, è necessario aggiungerla manualmente.

## <a name="to-add-an-atl-property-page-to-your-project"></a>Per aggiungere una pagina delle proprietà ATL al progetto

1. In **Esplora soluzioni** o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) fare clic con il pulsante destro del mouse sul progetto cui si vuole aggiungere la pagina delle proprietà ATL.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nella finestra di dialogo [Aggiungi classe](../../ide/add-class-dialog-box.md) nel riquadro **Modelli**, fare clic su **Pagina delle proprietà ATL** e quindi su **Apri** per visualizzare la [Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md).

Dopo aver creato una pagina delle proprietà per un controllo, è necessario fornire la voce [PROP_PAGE](property-map-macros.md#prop_page) nella mappa delle proprietà per il controllo.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../../atl/atl-com-property-pages.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Esempio: implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)
