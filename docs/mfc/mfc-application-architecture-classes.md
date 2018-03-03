---
title: Classi architettura dell'applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.mfc
dev_langs:
- C++
helpviewer_keywords:
- MFC, classes
- MFC, application development
- classes [MFC], MFC
- application architecture classes [MFC]
ms.assetid: 71b2de54-b44d-407e-9c71-9baf954e18d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 623775d6c3306ba4afdb01eb78ea70b05f7a3365
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-application-architecture-classes"></a>Classi architettura dell'applicazione MFC
Le classi in questa categoria contribuiscono all'architettura di un'applicazione framework. Forniscono funzionalità comuni alla maggior parte delle applicazioni. Compilare il framework per aggiungere funzionalità specifiche dell'applicazione. In genere, non la derivazione di nuove classi dalle classi, architettura e quindi aggiungendo nuovi membri o si esegue l'override di funzioni membro esistente.  
  
 [Creazioni guidate applicazione](../mfc/reference/mfc-application-wizard.md) generare diversi tipi di applicazioni, ognuno dei quali utilizzerà il framework dell'applicazione in diversi modi. SDI (interfaccia a documento singolo) e le applicazioni MDI (interfaccia a documenti multipli) le funzionalità complete di una parte del framework chiamato architettura documento/visualizzazione. Altri tipi di applicazioni, ad esempio le applicazioni basate su finestra di dialogo, applicazioni basate su form e DLL, utilizzano solo alcune delle funzionalità di architettura documento/visualizzazione.  
  
 Documento/visualizzazione applicazioni contengono uno o più set di documenti, visualizzazioni e finestre cornice. Un oggetto modello di documento associa le classi per ogni set di documenti/visualizzazione/frame.  
  
 Anche se non è necessario utilizzare l'architettura documento/visualizzazione MFC nell'applicazione in uso, esistono numerosi vantaggi per questa operazione. Il contenitore e server il supporto OLE MFC si basa sull'architettura documento/visualizzazione, nonché il supporto per la stampa e anteprima di stampa.  
  
 Tutte le applicazioni MFC dispongono di almeno due oggetti: un oggetto applicazione derivato da [CWinApp](../mfc/reference/cwinapp-class.md)e una qualche forma di oggetto della finestra principale, derivato (spesso indirettamente) da [CWnd](../mfc/reference/cwnd-class.md). (In genere, la finestra principale è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), o [CDialog](../mfc/reference/cdialog-class.md), derivate dalla `CWnd`.)  
  
 Le applicazioni che utilizzano l'architettura documento/visualizzazione contengono altri oggetti. Gli oggetti principali sono:  
  
-   Un oggetto applicazione derivata dalla classe [CWinApp](../mfc/reference/cwinapp-class.md), come indicato in precedenza.  
  
-   Uno o più oggetti di classe documento derivata dalla classe [CDocument](../mfc/reference/cdocument-class.md). Oggetti di classe di documento sono responsabili per la rappresentazione interna dei dati modificati nella vista. Possono essere associati a un file di dati.  
  
-   Uno o più oggetti di visualizzazione è derivata dalla classe [CView](../mfc/reference/cview-class.md). Ogni visualizzazione è una finestra che viene associata a un documento e associata a una finestra cornice. Viste di visualizzare e manipolare i dati contenuti in un oggetto di classe di documento.  
  
 Documento/visualizzazione applicazioni contengono anche finestre cornice (derivato da [CFrameWnd](../mfc/reference/cframewnd-class.md)) e modelli di documento (derivato da [CDocTemplate](../mfc/reference/cdoctemplate-class.md)).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

