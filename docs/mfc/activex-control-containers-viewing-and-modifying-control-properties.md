---
title: 'Contenitori di controlli ActiveX: visualizzazione e modifica delle proprietà dei controlli'
ms.date: 11/04/2016
helpviewer_keywords:
- properties [MFC], viewing and modifying
- ActiveX control containers [MFC], viewing and modifying properties
- resource editors, viewing and modifying ActiveX controls
- ActiveX controls [MFC], properties
- controls [MFC], properties
ms.assetid: 14ce5152-742b-4e0d-a9ab-c7b456e32918
ms.openlocfilehash: abddda015a80b21d941409044524e2f526b26f08
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50454941"
---
# <a name="activex-control-containers-viewing-and-modifying-control-properties"></a>Contenitori di controlli ActiveX: visualizzazione e modifica delle proprietà dei controlli

Quando si inserisce un controllo ActiveX in un progetto, è utile visualizzare e modificare le proprietà supportate dal controllo ActiveX. In questo articolo viene illustrato come utilizzare l'editor risorse di Visual C++ per questo scopo.

Se l'applicazione contenitore di controlli ActiveX utilizza controlli incorporati, è possibile visualizzare e modificare le proprietà del controllo nell'editor risorse. È possibile utilizzare l'editor risorse anche per impostare i valori di proprietà durante la fase di progettazione. Tramite l'editor risorse questi valori vengono salvati automaticamente nel file di risorse del progetto. Ogni istanza del controllo avrà quindi le proprietà inizializzate a questi valori.

In questa procedura si presuppone che sia stato inserito un controllo nel progetto. Per informazioni, vedere [contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore](../mfc/inserting-a-control-into-a-control-container-application.md).

Il primo passaggio per visualizzare le proprietà del controllo consiste nell'aggiungere un'istanza del controllo al modello di finestra di dialogo del progetto.

### <a name="to-view-the-properties-of-a-control"></a>Per visualizzare le proprietà di un controllo

1. In visualizzazione di risorse, aprire il **dialogo** cartella.

1. Aprire il modello di finestra di dialogo principale.

1. Inserire un controllo ActiveX utilizzando il **Inserisci controllo ActiveX** nella finestra di dialogo. Per altre informazioni, vedere [visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

1. Selezionare il controllo ActiveX nella finestra di dialogo.

1. Dalla finestra delle proprietà, scegliere il **proprietà** pulsante.

Usare la **proprietà** finestra di dialogo per modificare e testare immediatamente le nuove proprietà.

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

