---
title: "Creazione di un&#39;interfaccia COM (Visual C++) | Microsoft Docs"
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
  - "vc.codewiz.com.creating.interfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM (interfacce), creazione"
ms.assetid: 1be84d3c-6886-4d1e-8493-56c4d38a96d4
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di un&#39;interfaccia COM (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+ sono disponibili procedure guidate e modelli che consentono di creare progetti che utilizzano la tecnologia COM nella definizione di interfacce e di interfacce dispatch per gli oggetti COM e le classi di automazione.  
  
 È possibile utilizzare queste procedure guidate per eseguire le tre attività frequenti descritte di seguito.  
  
-   [Aggiunta del supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md)  
  
     Aggiungere il supporto ATL a un'applicazione MFC dopo aver creato un progetto MFC mediante la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) e l'esecuzione della creazione guidata codice **Aggiungi supporto ATL a MFC**.  È possibile utilizzare questo supporto solo per oggetti COM semplici aggiunti a un eseguibile MFC o a un progetto DLL.  Questi oggetti ATL possono avere più interfacce.  
  
-   [Creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md)  
  
     Avviare la [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md) per creare un controllo ActiveX con un'interfaccia dispatch e una mappa eventi definite rispettivamente nel file IDL e nella classe di controlli.  
  
-   [Aggiunta di un controllo ATL](../atl/reference/adding-an-atl-control.md)  
  
     Utilizzare in combinazione la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) e la [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md) per creare un controllo ActiveX ATL.  
  
     È anche possibile aggiungere un controllo ATL a un progetto MFC al quale è stato aggiunto il supporto ATL, come descritto in precedenza.  Inoltre, se si seleziona **Controllo ATL** nella finestra di dialogo **Aggiungi classe** senza avere già aggiunto il supporto ATL al progetto MFC, viene visualizzata una finestra di dialogo di conferma dell'aggiunta del supporto ATL al progetto MFC.  
  
     È possibile utilizzare questa procedura guidata per generare il file di origine IDL e una mappa COM nelle classi dei progetti.  
  
 Una volta aperto un progetto ATL, è possibile utilizzare la finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md) per accedere a ulteriori procedure guidate e modelli per aggiungere le interfacce COM al progetto.  Utilizzando le seguenti procedure guidate è possibile definire una o più interfacce per l'oggetto:  
  
-   [Creazione guidata componente ATL COM\+ 1.0](../atl/reference/atl-com-plus-1-0-component-wizard.md)  
  
-   [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md)  
  
-   [Creazione guidata componente ASP ATL](../atl/reference/atl-active-server-page-component-wizard.md)  
  
-   [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md)  
  
 È inoltre possibile implementare nuove interfacce nel controllo COM facendo clic con il pulsante destro del mouse sulla classe Control dell'oggetto in Visualizzazione classi e scegliendo [Implementa interfaccia](../ide/implement-interface-wizard.md).  
  
> [!NOTE]
>  In Visual Studio non sono disponibili procedure guidate per l'aggiunta di un'interfaccia a un progetto.  Per aggiungere un'interfaccia a un progetto ATL o [aggiungere supporto ATL a un progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md), aggiungere un oggetto semplice mediante la [Creazione guidata oggetto semplice ATL](../atl/reference/atl-simple-object-wizard.md).  In alternativa, aprire il file IDL del progetto e creare l'interfaccia immettendo quanto segue:  
  
```  
interface IMyInterface {  
};  
  
```  
  
 Per ulteriori informazioni, vedere [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md) e [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
 In Visual C\+\+ è possibile visualizzare e [modificare le interfacce COM](../ide/editing-a-com-interface.md) definite per i progetti in diversi modi.  In [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925) è possibile visualizzare le icone per qualsiasi interfaccia o interfaccia dispatch definita in un file IDL nel progetto C\+\+.  
  
 Per le classi di oggetti COM basate su ATL, la mappa COM nella classe ATL viene letta in Visualizzazione classi in modo da visualizzare la relazione tra la classe ATL e le eventuali interfacce implementate.  
  
 È possibile utilizzare le interfacce disponibili in Visualizzazione classi e nei relativi menu di scelta rapida per le operazioni seguenti:  
  
-   Aggiunta di oggetti ATL a un'applicazione basata su MFC.  
  
-   Aggiunta di metodi, proprietà ed eventi.  
  
-   Visualizzazione del codice di interfaccia di un elemento facendo doppio clic su di esso.  
  
## Vedere anche  
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)