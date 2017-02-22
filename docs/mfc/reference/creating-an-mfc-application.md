---
title: "Creazione di un&#39;applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [MFC]"
  - "MFC [C++], creazione di applicazioni"
  - "MFC (applicazioni)"
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Creazione di un&#39;applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un'applicazione MFC rappresenta un'applicazione eseguibile per Windows basata sulla libreria MFC \(Microsoft Foundation Class\).  Il modo più semplice per creare un'applicazione MFC consiste nell'utilizzo della Creazione guidata applicazione MFC.  
  
> [!IMPORTANT]
>  I progetti MFC non sono supportati nelle versioni di Visual Studio Express Edition.  
  
 I file eseguibili MFC possono essere in genere suddivisi in cinque tipi: applicazioni Windows standard, finestre di dialogo, applicazioni basate su form, applicazioni di tipo Esplora risorse e applicazioni di tipo browser Web.  Per ulteriori informazioni, vedere:  
  
-   [Utilizzo delle classi per la creazione di applicazioni Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)  
  
-   [Creazione e visualizzazione delle finestre di dialogo](../../mfc/creating-and-displaying-dialog-boxes.md)  
  
-   [Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)  
  
-   [Creazione di un'applicazione MFC di tipo Esplora file](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)  
  
-   [Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)  
  
 La Creazione guidata applicazione MFC genera le classi e i file appropriati per ognuno di questi tipi di applicazione, a seconda delle opzioni selezionate all'interno della procedura guidata.  
  
### Per creare un'applicazione MFC mediante la Creazione guidata applicazione MFC  
  
1.  Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C\+\+](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  Nel riquadro Modelli della finestra di dialogo **Nuovo progetto** selezionare **Applicazione MFC** per aprire la procedura guidata.  
  
3.  Definire le impostazioni dell'applicazione mediante la [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md).  
  
    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.  
  
4.  Scegliere **Fine** per uscire dalla procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.  
  
 Una volta creato il progetto, è possibile visualizzare i file generati in **Esplora soluzioni**.  Per ulteriori informazioni sui file creati per il progetto tramite la procedura guidata, vedere il file ReadMe.txt generato dal progetto.  Per ulteriori informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual C\+\+](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
## Vedere anche  
 [Debugging Preparation: Visual C\+\+ Windows Applications](http://msdn.microsoft.com/it-it/a8bc54de-41a3-464d-9a12-db9bdcbc1ad5)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   
 [Deploying Applications](http://msdn.microsoft.com/it-it/4ff8881d-0daf-47e7-bfe7-774c625031b4)