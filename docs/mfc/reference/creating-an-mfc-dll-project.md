---
title: "Creazione di un progetto DLL MFC | Microsoft Docs"
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
  - "vc.appwiz.mfcdll.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], creazione"
  - "DLL [C++], MFC"
  - "DLL MFC [C++], creazione di progetti"
  - "progetti [C++], creazione"
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di un progetto DLL MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una DLL MFC rappresenta un file binario che funge da libreria di funzioni condivisa che può essere utilizzata contemporaneamente da più applicazioni.  Il modo più semplice per creare un progetto DLL MFC consiste nell'utilizzo della Creazione guidata DLL MFC.  
  
> [!NOTE]
>  L'aspetto delle funzionalità dell'IDE può dipendere dalle impostazioni attive o dall'edizione in uso e può presentare differenze rispetto alle descrizioni fornite nella Guida.  Per modificare le impostazioni, scegliere **Importa\/Esporta impostazioni** dal menu **Strumenti**.  Per ulteriori informazioni, vedere [Customizing Development Settings in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
### Per creare un progetto DLL MFC mediante la Creazione guidata DLL MFC  
  
1.  Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C\+\+](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
 **Nota** Nella finestra di dialogo **Nuovo progetto** selezionare l'icona `MFC DLL` nel riquadro Modelli per aprire la Creazione guidata DLL MFC.  
  
1.  Definire le impostazioni dell'applicazione nella schermata [Impostazioni applicazione](../../mfc/reference/application-settings-mfc-dll-wizard.md) della [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md).  
  
    > [!NOTE]
    >  Saltare questo passaggio per mantenere le impostazioni predefinite della procedura guidata.  
  
2.  Scegliere **Fine** per uscire dalla procedura guidata. Il nuovo progetto verrà aperto in **Esplora soluzioni**.  
  
 Una volta creato il progetto, è possibile visualizzare i file generati in Esplora soluzioni.  Per ulteriori informazioni sui file creati per il progetto tramite la procedura guidata, vedere il file ReadMe.txt generato dal progetto.  Per ulteriori informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual C\+\+](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
## Vedere anche  
 [Tipi di progetto Visual C\+\+](../Topic/Debugging%20Preparation:%20Visual%20C++%20Project%20Types.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   
 [Deploying Applications](http://msdn.microsoft.com/it-it/4ff8881d-0daf-47e7-bfe7-774c625031b4)