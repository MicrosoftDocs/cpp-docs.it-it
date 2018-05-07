---
title: Creazione della classe di finestra di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- files [MFC], creating
- dialog classes [MFC], Add Class Wizard
- dialog classes [MFC], creating
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d70f27639344fd00a2e99ad79bf2db166f3270a8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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

