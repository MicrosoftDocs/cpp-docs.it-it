---
title: Creazione documento / visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- documents [MFC], creating
- views [MFC], and frame windows
- views [MFC], creating
- tables [MFC]
- MFC, views
- document/view architecture [MFC], creating document/view
- object creators
- MFC, documents
- tables [MFC], objects each MFC object creates
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 894bb5a0b3a4c86d764fc6f4a0e4b9ae18422669
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931853"
---
# <a name="documentview-creation"></a>Creazione di documenti/visualizzazioni
Il framework fornisce le implementazioni del **New** e **Open** comandi (ad) la **File** menu. La creazione di un nuovo documento e la relativa visualizzazione associata e finestra cornice è uno sforzo attivo cooperativo tra l'oggetto applicazione, un modello di documento, il documento appena creato e la finestra cornice appena creato. Nella tabella seguente sono riepilogati gli oggetti che creano cosa.  
  
### <a name="object-creators"></a>Creatori di oggetti  
  
|Creator|Crea|  
|-------------|-------------|  
|Oggetto Application|Modello di documento|  
|Modello di documento|Document|  
|Modello di documento|Finestra cornice|  
|Finestra cornice|Visualizza|  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione del modello di documento](../mfc/document-template-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)

