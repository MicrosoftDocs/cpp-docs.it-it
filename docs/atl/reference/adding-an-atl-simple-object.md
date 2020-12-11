---
description: 'Ulteriori informazioni su: aggiunta di un oggetto semplice ATL'
title: 'Aggiunta di un oggetto semplice ATL '
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.classes.adding.atl
helpviewer_keywords:
- ATL projects, adding objects
- objects [ATL]
- ATL, simple objects
ms.assetid: 9c57d2ef-0447-4c84-8982-3304b8e49847
ms.openlocfilehash: 9e354f7d361c64f20657190bc53696f9878fa134
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158935"
---
# <a name="adding-an-atl-simple-object"></a>Aggiunta di un oggetto semplice ATL 

Per aggiungere un oggetto ATL (Active Template Library) al progetto, è necessario che il progetto sia stato creato come applicazione ATL o come applicazione MFC che contiene il supporto per ATL. È possibile utilizzare la [creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

È possibile definire interfacce COM per il nuovo oggetto ATL quando viene creato per la prima volta oppure aggiungerle in un secondo momento usando il comando [implementa interfaccia](../../ide/implementing-an-interface-visual-cpp.md#implement-interface-wizard) dal menu di scelta rapida **Visualizzazione classi** .

## <a name="to-add-an-atl-simple-object-to-your-atl-com-project"></a>Per aggiungere un oggetto semplice ATL al progetto COM ATL

1. In **Esplora soluzioni** o [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code)fare clic con il pulsante destro del mouse sul nome del progetto a cui si desidera aggiungere l'oggetto semplice ATL.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.

1. Nel riquadro **modelli** della finestra di dialogo [Aggiungi classe](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) fare clic su **oggetto semplice ATL**, quindi fare clic su **Apri** per visualizzare la [creazione guidata oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md).

1. Impostare opzioni aggiuntive per il progetto nella pagina [Opzioni](../../atl/reference/options-atl-simple-object-wizard.md) della creazione guidata **oggetto semplice ATL** .

1. Fare clic su **fine** per aggiungere l'oggetto al progetto.

## <a name="see-also"></a>Vedi anche

[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una nuova interfaccia in un progetto ATL](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)<br/>
[Aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md)<br/>
[Aggiunta di un metodo](../../ide/adding-a-method-visual-cpp.md)<br/>
[Classe MFC](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Aggiunta di una classe C++ generica](../../ide/adding-a-generic-cpp-class.md)
