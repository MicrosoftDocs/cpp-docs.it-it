---
title: Documento e visualizzazione di classi create dalla creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- document classes [MFC]
- document classes [MFC], created by application wizards
- application wizards [MFC], document/view classes created
- view classes [MFC], created by application wizards
ms.assetid: 70c34a60-2701-4981-acea-c08a5787d8e6
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 55ccb2b612b4c800ef17b023cc19cc88ed6f4aa9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="document-and-view-classes-created-by-the-mfc-application-wizard"></a>Classi documento e visualizzazione create dalla Creazione guidata applicazione MFC
La creazione guidata applicazione MFC offre un punto di partenza sviluppo di un programma tramite la creazione di classi base documento e visualizzazione per l'utente. È quindi possibile [eseguire il mapping di comandi e messaggi a queste classi](../mfc/reference/mapping-messages-to-functions.md) e utilizzare l'editor del codice sorgente di Visual C++ per scrivere le relative funzioni membro.  
  
 Il documento creato dalla creazione guidata applicazione MFC viene derivata dalla classe [CDocument](../mfc/reference/cdocument-class.md). La classe di visualizzazione è derivata da [CView](../mfc/reference/cview-class.md). I nomi che la creazione guidata applicazione fornisce le classi e i file che li contengono sono basati sul nome del progetto specificare nella finestra di dialogo Creazione guidata applicazione. Nella procedura guidata applicazione, è possibile utilizzare la pagina classi generate per modificare i nomi predefiniti.  
  
 Alcune applicazioni potrebbe essere necessario più di una classe di documento, classe di visualizzazione o classe finestra cornice. Per ulteriori informazioni, vedere [tipi di documenti multipli, visualizzazioni e finestre cornice](../mfc/multiple-document-types-views-and-frame-windows.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

