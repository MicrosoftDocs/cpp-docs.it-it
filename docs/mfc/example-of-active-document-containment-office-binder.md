---
title: 'Esempio di contenimento dei documenti attivi: Raccoglitore di Office | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- active documents [MFC], containers
- examples [MFC], active document containment
- containers [MFC], active document
- active document containers [MFC], examples
- Office Binder [MFC]
- MFC COM, active document containment
ms.assetid: 70dd8568-e8bc-44ac-bf5e-678767efe8e3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1305057b6b0f63e513aca88b77a507ed9bbc3493
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="example-of-active-document-containment-office-binder"></a>Esempio di contenimento di documenti attivi: raccoglitore di Office
Raccoglitore di Office è un esempio di un contenitore di documenti attivi. Un raccoglitore di Office include due riquadri principali, dei contenitori. Riquadro di sinistra contiene le icone che corrispondono ai documenti attivi nel gestore di associazione. Ogni documento è definito un *sezione* entro il gestore di associazione. Ad esempio, uno strumento di associazione può contenere i documenti di Word, i file di PowerPoint, fogli di calcolo Excel e così via.  
  
 Fare clic su un'icona nel riquadro a sinistra attiva il documento attivo corrispondente. Riquadro a destra del gestore di associazione quindi Visualizza il contenuto del documento attivo attualmente selezionato.  
  
 Se si apre e attiva un documento di Word in un gestore di associazione, e Word barra dei menu e barre degli strumenti vengono visualizzati nella parte superiore del riquadro di visualizzazione è possibile modificare il contenuto del documento con qualsiasi comando o strumento. Tuttavia, la barra dei menu è una combinazione delle barre dei menu del gestore di associazione e di Word. Perché sia Binder e Word è **Guida** menu, il contenuto dei rispettivi menu vengono uniti. Contenitori documenti attivi, ad esempio Raccoglitore di Office da fornire automaticamente **Guida** menu unione; per ulteriori informazioni, vedere [unione di Menu della Guida](../mfc/help-menu-merging.md).  
  
 Quando si seleziona un documento attivo di un altro tipo di applicazione di modifiche all'interfaccia del gestore di associazione in base a quello del tipo di applicazione del documento attivo. Ad esempio, se uno strumento di associazione contiene un foglio di calcolo di Excel, si noterà che i menu del Raccoglitore cambiano quando si seleziona una sezione del foglio di calcolo di Excel.  
  
 Vi sono, naturalmente, disponibili altri tipi di contenitori accanto a gestori di associazione. Esplora file utilizza l'interfaccia duale riquadro tipico in cui il riquadro di sinistra utilizza un controllo struttura ad albero per visualizzare un elenco gerarchico di directory in un'unità o una rete, mentre il riquadro destro mostra i file contenuti nella cartella attualmente selezionata. Un tipo di browser Internet del contenitore (ad esempio Microsoft Internet Explorer), anziché un'interfaccia duale riquadro, in genere utilizzato un frame singolo e consente di navigare utilizzando i collegamenti ipertestuali.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)

