---
title: Aggiunta di un oggetto semplice ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.classes.adding.atl
helpviewer_keywords:
- ATL projects, adding objects
- objects [ATL]
- ATL, simple objects
ms.assetid: 9c57d2ef-0447-4c84-8982-3304b8e49847
ms.openlocfilehash: 95a93268ca76516c1b3f736c106518ae6d94cc27
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326816"
---
# <a name="adding-an-atl-simple-object"></a>Aggiunta di un oggetto semplice ATL

Per aggiungere un oggetto ATL (Active Template Library) al progetto, è necessario avere questo sia stato creato come un'applicazione ATL o come un'applicazione MFC che contiene il supporto per ATL. È possibile usare la [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

È possibile definire le interfacce COM per il nuovo oggetto ATL durante la prima crearla oppure aggiungerli successivamente tramite il [implementa l'interfaccia](../../ide/implement-interface-wizard.md) dalle **Visualizzazione classi** menu di scelta rapida.

## <a name="to-add-an-atl-simple-object-to-your-atl-com-project"></a>Per aggiungere un oggetto semplice ATL al progetto ATL COM

1. In uno **Esplora soluzioni** oppure [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic il nome del progetto a cui si desidera aggiungere l'oggetto semplice ATL.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) nella finestra di dialogo il **modelli** riquadro, fare clic su **oggetto semplice ATL**e quindi fare clic su **Open** per visualizzare il [Creazione guidata oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md).

1. Impostare le opzioni aggiuntive per il progetto nella [opzioni](../../atl/reference/options-atl-simple-object-wizard.md) pagina della **oggetto semplice ATL** procedura guidata.

1. Fare clic su **fine** per aggiungere l'oggetto al progetto.

## <a name="see-also"></a>Vedere anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una nuova interfaccia in un progetto ATL](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)<br/>
[Aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md)<br/>
[Aggiunta di un metodo](../../ide/adding-a-method-visual-cpp.md)<br/>
[Classe MFC](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Aggiunta di una classe C++ generica](../../ide/adding-a-generic-cpp-class.md)
