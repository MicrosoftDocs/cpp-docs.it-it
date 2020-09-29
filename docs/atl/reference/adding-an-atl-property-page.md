---
title: Aggiunta di una pagina delle proprietà ATL
ms.date: 05/09/2019
helpviewer_keywords:
- property pages, adding
- ATL projects, adding property pages
- controls [ATL], property pages
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
ms.openlocfilehash: 4cd7444d18d26124f8c3c642bba55fb7592f5c8b
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499315"
---
# <a name="adding-an-atl-property-page"></a>Aggiunta di una pagina delle proprietà ATL

> [!NOTE]
> La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

Per aggiungere una pagina delle proprietà ATL (Active Template Library) al progetto, questo deve essere stato creato come applicazione ATL o come applicazione MFC che contiene supporto ATL. È possibile utilizzare la [creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Se si aggiunge una pagina delle proprietà per un controllo, il controllo deve supportare l'interfaccia [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md). Per impostazione predefinita, questa interfaccia è inclusa nell'elenco di derivazione della classe del controllo quando si [crea un controllo ATL](../../atl/reference/adding-an-atl-control.md) tramite la [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md).

> [!NOTE]
> Se la classe del controllo non include [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) nel proprio elenco di derivazione, è necessario aggiungerla manualmente.

## <a name="to-add-an-atl-property-page-to-your-project"></a>Per aggiungere una pagina delle proprietà ATL al progetto

1. In **Esplora soluzioni** o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) fare clic con il pulsante destro del mouse sul progetto cui si vuole aggiungere la pagina delle proprietà ATL.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nella finestra di dialogo [Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) nel riquadro **Modelli**, fare clic su **Pagina delle proprietà ATL** e quindi su **Apri** per visualizzare la [Creazione guidata pagina delle proprietà ATL](../../atl/reference/atl-property-page-wizard.md).

Dopo aver creato una pagina delle proprietà per un controllo, è necessario fornire la voce [PROP_PAGE](property-map-macros.md#prop_page) nella mappa delle proprietà per il controllo.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../../atl/atl-com-property-pages.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Esempio: implementazione di una pagina delle proprietà](../../atl/example-implementing-a-property-page.md)
