---
title: Aggiunta di una classe (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.classes.adding
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding classes
- classes [C++], creating
- classes [C++], adding
ms.assetid: c34b5f70-4e72-4faa-ba21-e2b05361c4d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ac87368f2bd38c32425799103fa3999dd11b3298
ms.sourcegitcommit: 30ab99c775d99371ed22d1a46598e542012ed8c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2018
---
# <a name="adding-a-class-visual-c"></a>Aggiunta di una classe (Visual C++)
Per aggiungere una classe in un progetto di Visual C++, in **Esplora**, fare clic sul progetto, fare clic su **Aggiungi**, quindi fare clic su **classe**. Verrà visualizzata la [dialogo Aggiungi classe](../ide/add-class-dialog-box.md) la finestra di dialogo.  
  
 Quando si aggiunge una classe, è necessario specificare un nome diverso da classi che già esistono in MFC o ATL. Se si specifica un nome che esiste già nella libreria di, l'IDE visualizza un messaggio di errore.  
  
 Se il progetto di convenzione di denominazione è necessario utilizzare un nome esistente, quindi è possibile modificare nel caso di una o più lettere del nome perché C++ tra maiuscole e minuscole. Ad esempio, anche se è possibile assegnare il nome di una classe `CDocument`, è possibile specificare il nome `cdocument`.  
  
## <a name="what-kind-of-class-do-you-want-to-add"></a>Il tipo di classe si desidera aggiungere?  
 Nel **Aggiungi classe** della finestra di dialogo quando si espande il **Visual C++** nodo nel riquadro di sinistra vengono visualizzati più raggruppamenti dei modelli installati. I gruppi includono **CLR**, **ATL**, **MFC**, e **C++**. Quando si seleziona un gruppo, nel riquadro centrale viene visualizzato un elenco dei modelli disponibili in tale gruppo. Ogni modello contiene i file e il codice sorgente che sono necessari per una classe.  
  
 Per generare una nuova classe, selezionare un modello nel riquadro centrale, digitare un nome per la classe di **nome** casella e fare clic su **Aggiungi**. Verrà visualizzata la **Aggiunta guidata classe** in modo che è possibile specificare opzioni per la classe.  
  
-   Per ulteriori informazioni su come creare classi MFC, vedere [classe MFC](../mfc/reference/adding-an-mfc-class.md).  
  
-   Per ulteriori informazioni su come creare classi ATL, vedere [oggetto semplice ATL](../atl/reference/adding-an-atl-simple-object.md).  
  
> [!NOTE]
>  Il modello **Aggiungi supporto ATL a MFC** non crea una classe, ma la configurazione del progetto per utilizzare ATL. Per ulteriori informazioni, vedere [supporto ATL in un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
 Per creare una classe C++ che non utilizza MFC, ATL o CLR, utilizzare il **classe C++** modello il **C++** gruppo dei modelli installati. Per ulteriori informazioni, vedere [aggiunta di una classe C++ generica](../ide/adding-a-generic-cpp-class.md).  
  
 Sono disponibili due tipi di classi C++ basate su form. Il primo, [classe CFormView](../mfc/reference/cformview-class.md) crea una classe MFC. Il secondo crea una classe CLR Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)   
 [Aggiungi classe (finestra di dialogo)](../ide/add-class-dialog-box.md)   
 [Creazione di progetti Desktop mediante creazioni guidate applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)