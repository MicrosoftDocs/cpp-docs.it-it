---
title: Sequenza di operazioni per la creazione di applicazioni OLE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE applications [MFC], creating
- OLE applications [MFC]
- applications [OLE], creating
- applications [OLE]
ms.assetid: 84b0f606-36c1-4253-9cea-44427f0074b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 412fa5c104d6e85bcaa6ba3703cc8c7ba535f25f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="sequence-of-operations-for-creating-ole-applications"></a>Sequenza delle operazioni per la creazione di applicazioni OLE
Nella tabella seguente viene illustrato il ruolo e il ruolo del framework per la creazione di collegamento e incorporamento applicazioni OLE. Questi rappresentano opzioni disponibili invece di una sequenza di passaggi da eseguire.  
  
### <a name="creating-ole-applications"></a>Creazione di applicazioni OLE  
  
|Attività|Davvero|Dal framework|  
|----------|------------|------------------------|  
|Creare un componente COM.|Eseguire la creazione guidata applicazione MFC. Scegliere **server completo** o **server ridotto** nel **supporto documenti compositi** scheda.|Il framework genera una struttura applicazione con abilitata la funzionalità di componenti COM. Tutte le funzionalità COM può essere trasferite all'applicazione esistente con solo piccole modifiche.|  
|Creare un'applicazione contenitore da zero.|Eseguire la creazione guidata applicazione MFC. Scegliere **contenitore** nel **supporto documenti compositi** scheda. In visualizzazione classi, passare all'editor di codice sorgente. Inserire codice delle funzioni del gestore di COM.|Il framework genera una struttura applicazione che è possibile inserire oggetti COM creati mediante applicazioni COM (server).|  
|Creare un'applicazione che supporta l'automazione da zero.|Eseguire la creazione guidata applicazione MFC. Scegliere **automazione** dal **funzionalità avanzate** scheda. Utilizzare Visualizzazione classi per esporre metodi e le proprietà dell'applicazione per l'automazione.|Il framework genera una struttura applicazione che può essere attivata e automatizzare tramite altre applicazioni.|  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione nel Framework](../mfc/building-on-the-framework.md)   
 [Sequenza di operazioni per la compilazione di applicazioni MFC](../mfc/sequence-of-operations-for-building-mfc-applications.md)   
 [Sequenza di operazioni per la creazione di controlli ActiveX](../mfc/sequence-of-operations-for-creating-activex-controls.md)   
 [Sequenza delle operazioni per la creazione di applicazioni di database](../mfc/sequence-of-operations-for-creating-database-applications.md)

