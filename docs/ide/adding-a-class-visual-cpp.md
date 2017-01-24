---
title: "Aggiunta di una classe (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.classes.adding"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), aggiunta di classi"
  - "classi [C++], aggiunta"
  - "classi [C++], creazione"
ms.assetid: c34b5f70-4e72-4faa-ba21-e2b05361c4d9
caps.latest.revision: 24
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Aggiunta di una classe (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per aggiungere una classe in un progetto di Visual C\+\+, in **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, quindi scegliere **Aggiungi** e **Classe**.  Verrà visualizzata la finestra di dialogo [Finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md).  
  
 Quando si aggiunge una classe, è necessario specificare un nome diverso da quello delle classi già esistenti in MFC o ATL.  Se si specifica un nome già esistente in una delle due librerie, verrà visualizzato un messaggio di errore per indicare che il nome specificato è riservato.  
  
 Se secondo la convenzione di denominazione del progetto è necessario utilizzare un nome esistente, è possibile sostituire le maiuscole con le minuscole o viceversa in quanto Visual C\+\+ rileva tale distinzione.  Ad esempio, anche se non è possibile denominare una classe `CDocument`, è possibile denominarla `cdocument`.  
  
## Tipo di classe da aggiungere  
 Nella finestra di dialogo **Aggiungi classe**, quando si espande il nodo **Visual C\+\+** nel riquadro di sinistra, vengono visualizzati diversi raggruppamenti dei modelli installati.  I gruppi includono **CLR**, **ATL**, **MFC** e **C\+\+**.  Quando si seleziona un gruppo, un elenco dei modelli disponibili in quel gruppo viene visualizzato nel riquadro centrale.  Ogni modello contiene i file e il codice sorgente necessari per una classe.  
  
 Per generare una nuova classe, selezionare un modello nel riquadro centrale, digitare un nome per la classe nella casella **Nome** e fare clic su **Aggiungi**.  Verrà aperta la **Creazione guidata aggiunta classe** in modo da poter specificare le opzioni per la classe.  
  
-   Per ulteriori informazioni sulla creazione delle classi MFC, vedere [Classe MFC](../mfc/reference/adding-an-mfc-class.md).  
  
-   Per ulteriori informazioni sulla creazione delle classi ATL, vedere [ATL Simple Object](../atl/reference/adding-an-atl-simple-object.md).  
  
> [!NOTE]
>  Il modello **Aggiungi supporto ATL a MFC** non consente la creazione di una classe, ma la configurazione del progetto per l'utilizzo di ATL.  Per ulteriori informazioni, vedere [Supporto ATL in un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
 Per creare una classe C\+\+ che non utilizza MFC, ATL o CLR, utilizzare il modello **Classe C\+\+** nel gruppo **C\+\+** dei modelli installati.  Per ulteriori informazioni, vedere [Aggiunta di una classe C\+\+ generica](../ide/adding-a-generic-cpp-class.md).  
  
 Sono disponibili due tipi di classi C\+\+ basate su form.  Il primo, [CFormView Class](../mfc/reference/cformview-class.md) crea una classe MFC.  Il secondo crea un Windows Form CLR.  
  
## Vedere anche  
 [Creazione di un'applicazione MFC basata su form](../mfc/reference/creating-a-forms-based-mfc-application.md)   
 [Finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md)   
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)