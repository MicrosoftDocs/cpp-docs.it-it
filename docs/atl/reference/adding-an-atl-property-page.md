---
title: Aggiunta di una pagina delle proprietà ATL
ms.date: 11/04/2016
helpviewer_keywords:
- property pages, adding
- ATL projects, adding property pages
- controls [ATL], property pages
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
ms.openlocfilehash: c61f666865d3e1db4cdcf2dc6d3e07c2113a79c7
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57290014"
---
# <a name="adding-an-atl-property-page"></a>Aggiunta di una pagina delle proprietà ATL

Per aggiungere una pagina delle proprietà della libreria ATL (Active Template) al progetto, è necessario avere questo sia stato creato come un'applicazione ATL o come un'applicazione MFC che contiene il supporto per ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL per l'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Se si aggiunge una pagina delle proprietà per un controllo, il controllo deve supportare le [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) interfaccia. Per impostazione predefinita, questa interfaccia è nell'elenco di derivazione del controllo classe quando si [creare un controllo ATL](../../atl/reference/adding-an-atl-control.md) usando la [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).

> [!NOTE]
> Se la classe del controllo non dispone [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) nel proprio elenco di derivazione, è necessario aggiungerla manualmente.

## <a name="to-add-an-atl-property-page-to-your-project"></a>Per aggiungere una pagina delle proprietà ATL al progetto

1. In uno **Esplora soluzioni** oppure [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic il nome del progetto a cui si desidera aggiungere la pagina delle proprietà ATL.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi classe**.

1. Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) nella finestra di dialogo il **modelli** riquadro, fare clic su **pagina delle proprietà ATL** e quindi fare clic su **Open** per visualizzare il [Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md).

Dopo aver creato una pagina delle proprietà per un controllo, è necessario fornire il [PROP_PAGE](property-map-macros.md#prop_page) voce nella mappa delle proprietà per il controllo.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../../atl/atl-com-property-pages.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Esempio: Implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)
