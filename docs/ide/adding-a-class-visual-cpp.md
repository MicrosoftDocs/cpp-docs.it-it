---
title: Aggiunta di una classe (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.classes.adding
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, adding classes
- classes [C++], creating
- classes [C++], adding
ms.assetid: c34b5f70-4e72-4faa-ba21-e2b05361c4d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 14e16d8b5c15939adb792a96a828bafd07ba4041
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33333284"
---
# <a name="adding-a-class-visual-c"></a>Aggiunta di una classe (Visual C++)
Per aggiungere una classe in un progetto Visual C++, in **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, fare clic su **Aggiungi** e quindi su **Classe**. Viene visualizzata la finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md).  
  
 Quando si aggiunge una classe, è necessario specificare un nome diverso dalle classi che esistono già in MFC o ATL. Se si specifica un nome che esiste già in una delle due librerie, l'IDE visualizza un messaggio di errore.  
  
 Se la convenzione di denominazione del progetto richiede l'uso di un nome esistente, è sufficiente modificare le maiuscole o minuscole del nome poiché C++ fa distinzione tra maiuscole e minuscole. Ad esempio, anche se non è possibile assegnare a una classe il nome `CDocument`, è possibile assegnarle il nome `cdocument`.  
  
## <a name="what-kind-of-class-do-you-want-to-add"></a>Tipo di classe da aggiungere  
 Nella finestra di dialogo **Aggiungi classe** quando si espande il nodo **Visual C++** nel riquadro sinistro vengono visualizzati diversi gruppi di modelli installati. I gruppi includono **CLR**, **ATL**, **MFC** e **C++**. Quando si seleziona un gruppo, nel riquadro centrale viene visualizzato un elenco dei modelli disponibili nel gruppo. Ogni modello contiene i file e il codice sorgente necessari per una classe.  
  
 Per generare una nuova classe, selezionare un modello nel riquadro centrale, digitare un nome per la classe nella casella **Nome** e fare clic su **Aggiungi**. Viene visualizzata l'**Aggiunta guidata classe** che consente di specificare le opzioni per la classe.  
  
-   Per altre informazioni sulla creazione di classi MFC, vedere [Classe MFC](../mfc/reference/adding-an-mfc-class.md).  
  
-   Per altre informazioni sulla creazione di classi ATL, vedere [Oggetto semplice ATL](../atl/reference/adding-an-atl-simple-object.md).  
  
> [!NOTE]
>  Il modello **Aggiungi supporto ATL a MFC** non crea una classe ma configura il progetto per l'utilizzo di ATL. Per altre informazioni, vedere [Supporto ATL in un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
 Per creare una classe C++ che non usa MFC, ATL o CLR, usare il modello **Classe C++** nel gruppo **C++** dei modelli installati. Per altre informazioni, vedere [Aggiunta di una classe C++ generica](../ide/adding-a-generic-cpp-class.md).  
  
 Sono disponibili due tipi di classi C++ basate su form. La prima, la [classe CFormView](../mfc/reference/cformview-class.md) crea una classe MFC. La seconda crea una classe CLR Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)   
 [Finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)