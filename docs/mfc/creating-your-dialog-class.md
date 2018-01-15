---
title: Creazione della classe di finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- files [MFC], creating
- dialog classes [MFC], Add Class Wizard
- dialog classes [MFC], creating
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f2d8d62dc21aacb29f1133596c7f04251e88f1b5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-your-dialog-class"></a>Creazione della classe di finestre di dialogo
Per ogni finestra di dialogo del programma, creare una nuova classe di finestra di dialogo per funzionare con la risorsa finestra di dialogo.  
  
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) viene illustrato come creare una nuova classe di finestra di dialogo. Quando si crea una classe di finestra di dialogo con l'aggiunta guidata classe, scrive gli elementi seguenti. H e. File CPP specificati:  
  
 Nel. File H:  
  
-   Una dichiarazione di classe per la classe di finestra di dialogo. La classe è derivata da [CDialog](../mfc/reference/cdialog-class.md).  
  
 Nel. File CPP:  
  
-   Una mappa messaggi per la classe.  
  
-   Un costruttore standard per la finestra di dialogo.  
  
-   Un override del [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) funzione membro. Modifica questa funzione. Viene utilizzato per le funzionalità di exchange e convalida dei dati di finestra di dialogo come descritto più avanti nel [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di una classe di finestra di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

