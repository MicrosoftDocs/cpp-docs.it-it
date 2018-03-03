---
title: Sequenza di creazione finestre generale | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- sequence [MFC], window creation
- frame windows [MFC], creating
- windows [MFC], creating
- sequence [MFC]
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 59bed4387a6b8e6edeb504e29d221e76a0b39d18
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="general-window-creation-sequence"></a>Sequenza generale di creazione finestre
Quando si crea una finestra della finestra propria, ad esempio un elemento figlio, il framework utilizza il processo come descritto in [creazione documento/visualizzazione](../mfc/document-view-creation.md).  
  
 Tutte le classi di finestra, fornite da utilizzano MFC [due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md). Vale a dire durante una chiamata di C++ **nuova** (operatore), il costruttore alloca e Inizializza un oggetto C++, ma non crea una finestra di Windows corrispondente. Che viene eseguito in un secondo momento chiamando la [crea](../mfc/reference/cwnd-class.md#create) funzione membro dell'oggetto window.  
  
 Il **crea** funzione membro rende la finestra di Windows e archivia il relativo `HWND` nel membro dati pubblico dell'oggetto C++ [m_hWnd](../mfc/reference/cwnd-class.md#m_hwnd). **Creare** offre flessibilità completa sui parametri di creazione. Prima di chiamare **crea**, si consiglia di registrare una classe della finestra con la funzione globale [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) per impostare gli stili di icona e la classe per il frame.  
  
 Finestre cornice, è possibile utilizzare il [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) funzione membro anziché **crea**. `LoadFrame`rende la finestra di Windows utilizzando un minor numero di parametri. Ottiene i valori predefiniti di molti dalle risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu.  
  
> [!NOTE]
>  L'icona, una tabella di tasti di scelta rapida e le risorse di menu devono essere un ID di risorsa comuni, ad esempio **IDR_MAINFRAME**, per poter essere caricate da LoadFrame.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Oggetti finestra](../mfc/window-objects.md)  
  
-   [Registrazione di classi"finestra"](../mfc/registering-window-classes.md)  
  
-   [Distruzione di oggetti finestra](../mfc/destroying-window-objects.md)  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di finestre](../mfc/creating-windows.md)

