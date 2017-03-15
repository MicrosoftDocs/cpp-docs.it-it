---
title: "Tipi di progetto Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "programmi [C++], progetti"
  - "modelli di progetto [Visual Studio], C++"
  - "commenti TODO [C++]"
  - "progetti [C++], tipi"
  - "modelli [C++], progetti"
  - "applicazioni [C++], progetti"
  - "progetti Visual C++, tipi"
ms.assetid: 7337987e-1e7b-4120-9a4b-94f0401f15e7
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi di progetto Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare un modello di progetto per creare la struttura di base dei programmi, i menu, le barre degli strumenti, le icone, i riferimenti e le istruzioni `#include` appropriati per il tipo di progetto da creare. Visual Studio include diversi tipi di modelli di progetto di Visual C\+\+ e fornisce le procedure guidate per molti di essi in modo da poter personalizzare i progetti durante la creazione. Subito dopo aver creato un progetto, è possibile compilarlo ed eseguire l'applicazione. È consigliabile compilare l'applicazione gradualmente man mano che la si sviluppa.  
  
 Non è necessario usare un modello per creare un progetto, ma in molti casi risulta più efficiente perché è più semplice modificare la struttura e i file di progetto anziché crearli da zero.  
  
> [!NOTE]
>  È possibile creare un progetto in linguaggio C usando i modelli di progetto C\+\+. Nel progetto generato trovare i file con estensione cpp e modificarla con c. Quindi, nella pagina **Proprietà progetto** per il progetto \(non per la soluzione\) espandere **Proprietà di configurazione**, **C\/C\+\+** e selezionare **Avanzate**. Impostare l'opzione **Compila come** su **Compila come codice C \(\/TC\)**.  
  
## Modelli di progetto  
 In Visual Studio sono disponibili i seguenti modelli di progetto di Visual C\+\+.  
  
### Applicazioni Windows Store  
  
||  
|-|  
|[Modelli di progetto C\#, VB e C\+\+ per le app dello Store](http://go.microsoft.com/fwlink/p/?LinkID=262279)|  
  
### ATL  
  
|Modello di progetto|Come creare un progetto|  
|-------------------------|-----------------------------|  
|Progetto ATL|[Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md)|  
  
### CLR  
  
|Modello di progetto|  
|-------------------------|  
|[\(NOTINBUILD\)Modello di libreria di classi \(C\+\+\)](http://msdn.microsoft.com/it-it/0d779bfa-5c5a-4b10-a9d5-a6791764a78f)|  
|[Procedura: Creare applicazioni console CLR](../dotnet/how-to-create-clr-console-applications-cpp-cli.md)|  
|[NOTINBUILD Modello di progetto vuoto CLR \(C\+\+\)](http://msdn.microsoft.com/it-it/f57c5572-5581-440f-b684-eec646764f08)|  
  
### Generale  
  
|Modello di progetto|Come creare un progetto|  
|-------------------------|-----------------------------|  
|Progetto vuoto|[Creazione di soluzioni e progetti](../Topic/Creating%20Solutions%20and%20Projects.md)|  
|Creazione guidata personalizzata|[Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)|  
|Progetto Makefile|[Creazione di un progetto makefile](../ide/creating-a-makefile-project.md)|  
  
### MFC  
  
|Modello di progetto|Come creare un progetto|  
|-------------------------|-----------------------------|  
|Controllo ActiveX MFC|[Creazione di un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md)|  
|Applicazione MFC|[Creazione di un'applicazione MFC](../mfc/reference/creating-an-mfc-application.md)|  
|DLL MFC|[Creazione di un progetto DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md)|  
  
### Test  
  
|Modello di progetto|Come creare un progetto|  
|-------------------------|-----------------------------|  
|Progetto di test gestito|[Creare un progetto di unit test](../Topic/Create%20a%20unit%20test%20project.md)|  
|Progetto di unit test nativo|[Unit test di codice nativo con Esplora test](http://msdn.microsoft.com/it-it/8a09d6d8-3613-49d8-9ffe-11375ac4736c)|  
  
### Win32  
  
|Modello di progetto|Come creare un progetto|  
|-------------------------|-----------------------------|  
|Progetto console Win32|[Creazione di un'applicazione console](../windows/creating-a-console-application.md)|  
|Progetto Win32|[Procedura: Creare un'applicazione desktop di Windows](../Topic/How%20to:%20Create%20a%20Windows%20Desktop%20Application.md)|  
  
## Commenti TODO  
 Molti dei file generati da un modello di progetto contengono commenti TODO per consentire di trovare il punto in cui fornire il proprio codice sorgente. Per altre informazioni su come aggiungere codice, vedere [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md) e [Working with Resource Files](../mfc/working-with-resource-files.md).  
  
## Vedere anche  
 [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Creare applicazioni con i progetti](http://msdn.microsoft.com/it-it/3339fa90-bac2-4b95-8361-662a2e0e7dfe)   
 [Progetti CLR](../ide/files-created-for-clr-projects.md)