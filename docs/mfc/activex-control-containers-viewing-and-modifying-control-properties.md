---
title: 'Contenitori di controlli ActiveX: Visualizzazione e modifica delle proprietà del controllo'
ms.date: 11/04/2016
helpviewer_keywords:
- properties [MFC], viewing and modifying
- ActiveX control containers [MFC], viewing and modifying properties
- resource editors, viewing and modifying ActiveX controls
- ActiveX controls [MFC], properties
- controls [MFC], properties
ms.assetid: 14ce5152-742b-4e0d-a9ab-c7b456e32918
ms.openlocfilehash: 1d42820efd06c2ae52f5d1b22b0bdfb6335c4a89
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907812"
---
# <a name="activex-control-containers-viewing-and-modifying-control-properties"></a>Contenitori di controlli ActiveX: Visualizzazione e modifica delle proprietà del controllo

Quando si inserisce un controllo ActiveX in un progetto, è utile visualizzare e modificare le proprietà supportate dal controllo ActiveX. In questo articolo viene illustrato come utilizzare l'editor risorse di Visual C++ per questo scopo.

Se l'applicazione contenitore di controlli ActiveX utilizza controlli incorporati, è possibile visualizzare e modificare le proprietà del controllo nell'editor risorse. È possibile utilizzare l'editor risorse anche per impostare i valori di proprietà durante la fase di progettazione. Tramite l'editor risorse questi valori vengono salvati automaticamente nel file di risorse del progetto. Ogni istanza del controllo avrà quindi le proprietà inizializzate a questi valori.

In questa procedura si presuppone che sia stato inserito un controllo nel progetto. Per informazioni, vedere [contenitori di controlli ActiveX: Inserimento di un controllo in un'applicazione](../mfc/inserting-a-control-into-a-control-container-application.md)contenitore di controlli.

Il primo passaggio per visualizzare le proprietà del controllo consiste nell'aggiungere un'istanza del controllo al modello di finestra di dialogo del progetto.

### <a name="to-view-the-properties-of-a-control"></a>Per visualizzare le proprietà di un controllo

1. In Visualizzazione risorse aprire la cartella della **finestra di dialogo** .

1. Aprire il modello di finestra di dialogo principale.

1. Inserire un controllo ActiveX utilizzando la finestra di dialogo **Inserisci controllo ActiveX** . Per ulteriori informazioni, vedere [visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

1. Selezionare il controllo ActiveX nella finestra di dialogo.

1. Nella finestra **Proprietà** fare clic sul pulsante **Proprietà** .

Utilizzare la finestra di dialogo **Proprietà** per modificare e testare immediatamente le nuove proprietà.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
