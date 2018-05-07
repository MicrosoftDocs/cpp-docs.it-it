---
title: Sequenza di creazione finestre generale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- sequence [MFC], window creation
- frame windows [MFC], creating
- windows [MFC], creating
- sequence [MFC]
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 75a9c6ecf6516adceda845dadd4f0313ae605f0a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="general-window-creation-sequence"></a>Sequenza generale di creazione finestre
Quando si crea una finestra della finestra propria, ad esempio un elemento figlio, il framework utilizza il processo come descritto in [creazione documento/visualizzazione](../mfc/document-view-creation.md).  
  
 Tutte le classi di finestra, fornite da utilizzano MFC [due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md). Vale a dire durante una chiamata di C++ **nuova** (operatore), il costruttore alloca e Inizializza un oggetto C++, ma non crea una finestra di Windows corrispondente. Che viene eseguito in un secondo momento chiamando la [crea](../mfc/reference/cwnd-class.md#create) funzione membro dell'oggetto window.  
  
 Il **crea** funzione membro rende la finestra di Windows e archivia il relativo `HWND` nel membro dati pubblico dell'oggetto C++ [m_hWnd](../mfc/reference/cwnd-class.md#m_hwnd). **Creare** offre flessibilità completa sui parametri di creazione. Prima di chiamare **crea**, si consiglia di registrare una classe della finestra con la funzione globale [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) per impostare gli stili di icona e la classe per il frame.  
  
 Finestre cornice, è possibile utilizzare il [LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) funzione membro anziché **crea**. `LoadFrame` rende la finestra di Windows utilizzando un minor numero di parametri. Ottiene i valori predefiniti di molti dalle risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu.  
  
> [!NOTE]
>  L'icona, una tabella di tasti di scelta rapida e le risorse di menu devono essere un ID di risorsa comuni, ad esempio **IDR_MAINFRAME**, per poter essere caricate da LoadFrame.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Oggetti finestra](../mfc/window-objects.md)  
  
-   [Registrazione di classi"finestra"](../mfc/registering-window-classes.md)  
  
-   [Distruzione di oggetti finestra](../mfc/destroying-window-objects.md)  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di finestre](../mfc/creating-windows.md)

