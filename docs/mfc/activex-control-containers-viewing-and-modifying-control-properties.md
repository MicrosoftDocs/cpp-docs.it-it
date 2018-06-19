---
title: 'Contenitori di controlli ActiveX: Visualizzazione e modifica le proprietà del controllo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- properties [MFC], viewing and modifying
- ActiveX control containers [MFC], viewing and modifying properties
- resource editors, viewing and modifying ActiveX controls
- ActiveX controls [MFC], properties
- controls [MFC], properties
ms.assetid: 14ce5152-742b-4e0d-a9ab-c7b456e32918
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef443442cb19b9aaca82b74a0a5d8c72098d5cc2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340294"
---
# <a name="activex-control-containers-viewing-and-modifying-control-properties"></a>Contenitori di controlli ActiveX: visualizzazione e modifica delle proprietà dei controlli
Quando si inserisce un controllo ActiveX in un progetto, è utile visualizzare e modificare le proprietà supportate dal controllo ActiveX. In questo articolo viene illustrato come utilizzare l'editor risorse di Visual C++ per questo scopo.  
  
 Se l'applicazione contenitore di controlli ActiveX utilizza controlli incorporati, è possibile visualizzare e modificare le proprietà del controllo nell'editor risorse. È possibile utilizzare l'editor risorse anche per impostare i valori di proprietà durante la fase di progettazione. Tramite l'editor risorse questi valori vengono salvati automaticamente nel file di risorse del progetto. Ogni istanza del controllo avrà quindi le proprietà inizializzate a questi valori.  
  
 In questa procedura si presuppone che sia stato inserito un controllo nel progetto. Per informazioni, vedere [contenitori dei controlli ActiveX: inserimento di un controllo in un'applicazione contenitore](../mfc/inserting-a-control-into-a-control-container-application.md).  
  
 Il primo passaggio per visualizzare le proprietà del controllo consiste nell'aggiungere un'istanza del controllo al modello di finestra di dialogo del progetto.  
  
### <a name="to-view-the-properties-of-a-control"></a>Per visualizzare le proprietà di un controllo  
  
1.  In visualizzazione risorse aprire la **finestra di dialogo** cartella.  
  
2.  Aprire il modello di finestra di dialogo principale.  
  
3.  Inserire un controllo ActiveX utilizzando il **Inserisci controllo ActiveX** la finestra di dialogo. Per ulteriori informazioni, vedere [la visualizzazione e aggiunta di controlli ActiveX a una finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
4.  Selezionare il controllo ActiveX nella finestra di dialogo.  
  
5.  Dalla finestra delle proprietà, fare clic su di **proprietà** pulsante.  
  
 Utilizzare il **proprietà** la finestra di dialogo per modificare e verificare immediatamente le nuove proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

