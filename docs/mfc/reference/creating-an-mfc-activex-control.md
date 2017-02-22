---
title: "Creazione di un controllo ActiveX MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.activex.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], creazione"
  - "controlli ActiveX MFC [C++], creazione"
ms.assetid: 8bd5a93c-d04d-414e-bb28-163fdc1c0dd5
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Creazione di un controllo ActiveX MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I progetti di controllo ActiveX costituiscono programmi modulari progettati per fornire uno specifico tipo di funzionalità a un'applicazione padre.  È ad esempio possibile creare un controllo quale un pulsante o una barra degli strumenti da utilizzare rispettivamente in una finestra di dialogo e in una pagina Web.  
  
 Il modo più semplice per creare un controllo ActiveX MFC consiste nell'utilizzo della [Creazione guidata controllo ActiveX MFC](../../mfc/reference/mfc-activex-control-wizard.md).  
  
### Per creare un controllo ActiveX MFC mediante la Creazione guidata controllo ActiveX MFC  
  
1.  Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C\+\+](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  Nel riquadro Modelli della finestra di dialogo **Nuovo progetto** selezionare l'icona **Controllo ActiveX MFC** per aprire la Creazione guidata controllo ActiveX MFC.  
  
3.  Definire le [impostazioni dell'applicazione](../../mfc/reference/application-settings-mfc-activex-control-wizard.md), i [nomi del controllo](../../mfc/reference/control-names-mfc-activex-control-wizard.md) e le [impostazioni del controllo](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) mediante la Creazione guidata controllo ActiveX MFC.  
  
    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.  
  
4.  Scegliere **Fine** per uscire dalla procedura guidata e aprire il nuovo progetto nell'ambiente di sviluppo.  
  
 Una volta creato il progetto, è possibile visualizzare i file generati in **Esplora soluzioni**.  Per ulteriori informazioni sui file creati per il progetto tramite la procedura guidata, vedere il file ReadMe.txt generato dal progetto.  Per ulteriori informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual C\+\+](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
 Dopo aver creato il progetto, è possibile utilizzare le creazioni guidate codice per aggiungere [funzioni](../../ide/add-member-function-wizard.md), [variabili](../../ide/add-member-variable-wizard.md), [eventi](../../ide/add-event-wizard.md), [proprietà](../../ide/names-add-property-wizard.md) e [metodi](../../ide/add-method-wizard.md).  Per ulteriori informazioni sulla personalizzazione del controllo ActiveX, vedere [Controlli ActiveX MFC](../../mfc/mfc-activex-controls.md).  
  
## Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   
 [Deploying Applications](http://msdn.microsoft.com/it-it/4ff8881d-0daf-47e7-bfe7-774c625031b4)