---
title: "Strategie di implementazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSPackage, strategie di implementazione"
ms.assetid: f5512d4e-666d-4934-bd42-9718fd7e4c06
caps.latest.revision: 23
caps.handback.revision: 23
manager: "douge"
---
# Strategie di implementazione
È possibile estendere Visual Studio usando componenti aggiuntivi di automazione, VSPackage, parti componente Managed Extensibility Framework \(MEF\) o una combinazione dei tre. In genere i componenti aggiuntivi sono più semplici da sviluppare, ma sono meno potenti rispetto ai VSPackage e alle parti componente MEF. I componenti aggiuntivi possono chiamare interfacce di estendibilità, mentre VSPackage e parti componente MEF possono accedere al modello di automazione di Visual Studio. Combinando i diversi approcci è possibile creare una soluzione realmente efficace.  
  
 I VSPackage si possono scrivere in codice gestito o non gestito. Microsoft consiglia di scrivere i nuovi VSPackage in codice gestito usando il framework di pacchetto gestito \(MPF\). Quasi tutto ciò che può essere scritto in codice non gestito si può implementare in modo più semplice e sicuro in codice gestito. Tuttavia, le applicazioni legacy scritte in codice non gestito continueranno a funzionare normalmente in Visual Studio.  
  
 Con semplici estensioni è possibile aggiungere finestre degli strumenti o inviare informazioni a elementi dell'interfaccia utente di Visual Studio, ad esempio la barra di stato o la finestra di output. Applicazioni più complesse possono essere scritte come gerarchie di Visual Studio, ad esempio Esplora Server. Implementare un progetto, un editor o una finestra di progettazione offre una potenza ancora maggiore. Ad esempio, [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] stessi sono implementati come servizi di linguaggio.  
  
## Sezioni correlate  
 [Visual Studio SDK e automazione](../Topic/Visual%20Studio%20SDK%20and%20Automation.md)  
 Illustra l'uso di automazione, pacchetti VSPackage o di una combinazione di entrambi per creare applicazioni di estendibilità di Visual Studio.  
  
 [Visual Studio SDK e codice gestito](../misc/visual-studio-sdk-and-managed-code.md)  
 Confronta i diversi modi per scrivere un pacchetto VSPackage nel codice gestito.  
  
 [Concetti relativi a IDE di Visual Studio](../misc/visual-studio-ide-concepts.md)  
 Illustra i concetti di base sui VSPackage e come usare un servizio.  
  
 [Estensione di altre parti di Visual Studio](../Topic/Extending%20Other%20Parts%20of%20Visual%20Studio.md)  
 Illustra alcuni elementi comuni dell'interfaccia utente di Visual Studio, come la finestra di stato e la finestra di output.  
  
 [Gerarchie in Visual Studio](../Topic/Hierarchies%20in%20Visual%20Studio.md)  
 Offre una panoramica delle gerarchie di Visual Studio, che nell'ambiente di sviluppo integrato \(IDE\) vengono visualizzate come alberi di nodi.  
  
 [Progetti](../Topic/Projects.md)  
 Offre una panoramica sulle classi di progetto e di soluzione.  
  
 [Editor e le estensioni del servizio di linguaggio](../Topic/Editor%20and%20Language%20Service%20Extensions.md)  
 Illustra come estendere il codice e l'editor di testo e come creare editor personalizzati.  
  
 [Estensibilità del servizio di linguaggio legacy](../Topic/Legacy%20Language%20Service%20Extensibility.md)  
 Illustra come creare servizi di linguaggio.  
  
 [Riferimento al SDK di Visual Studio](../Topic/Visual%20Studio%20SDK%20Reference.md)  
 Documentazione di riferimento per Visual Studio SDK.  
  
## Vedere anche  
 [Iniziare a sviluppare estensioni di Visual Studio](../Topic/Starting%20to%20Develop%20Visual%20Studio%20Extensions.md)