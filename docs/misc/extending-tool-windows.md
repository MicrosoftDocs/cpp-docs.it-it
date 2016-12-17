---
title: "Estensione delle finestre degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "finestre [Visual Studio SDK], strumenti"
  - "finestre di documento"
  - "finestre degli strumenti"
  - "finestre [Visual Studio SDK], documenti"
ms.assetid: 252f7b99-b44a-4a63-88d9-3a0ca48ac4f1
caps.latest.revision: 37
caps.handback.revision: 37
manager: "douge"
---
# Estensione delle finestre degli strumenti
In generale, le finestre degli strumenti di Visual Studio sono finestre di sola lettura che non sono basate su file. In questo differiscono dalle finestre dei documenti, che visualizzano file in modalità di lettura\/scrittura. La **casella degli strumenti** e le finestre **Esplora soluzioni**, **Proprietà** e **Web browser** sono tutte esempi di finestre degli strumenti.  
  
 Tutte le finestre degli strumenti in Visual Studio 2010 e versioni successive sono basate su WPF. Nelle versioni precedenti a Visual Studio 2010 le finestre degli strumenti sono basate su Windows Form. Le finestre basate su Windows Form possono ancora essere visualizzate, ma le nuove finestre degli strumenti devono essere basate su WPF.  
  
## Concetti di base sulle finestre degli strumenti  
 Per fornire una finestra degli strumenti, è necessario registrarla con Visual Studio e specificarne le dimensioni e la posizione predefinite. Per altre informazioni, vedere [Finestre degli strumenti nel Registro di sistema](../Topic/Tool%20Windows%20in%20the%20Registry.md).  
  
 In genere, le finestre degli strumenti vengono create o aperte facendo clic su un comando di menu. Per creare una finestra degli strumenti a livello di codice, vedere [Apertura di una finestra degli strumenti a livello di codice](../misc/opening-a-tool-window-programmatically.md).  
  
 Le finestre degli strumenti sono a istanza singola per impostazione predefinita, ovvero è possibile aprire una sola istanza di una finestra degli strumenti per volta. Una volta aperta, una finestra degli strumenti a istanza singola resta aperta fino a quando non viene chiuso l'IDE. Quando si fa clic sul pulsante Chiudi in una finestra degli strumenti a istanza singola, cambia solo la sua visibilità. È anche possibile creare finestre degli strumenti a più istanze, in modo da permettere l'apertura di più istanze della finestra contemporaneamente. Per altre informazioni, vedere [Creazione di una finestra degli strumenti multi\-istanza](../Topic/Creating%20a%20Multi-Instance%20Tool%20Window.md).  
  
 Le finestre degli strumenti possono essere ancorate, mobili o a schede nella cornice del documento. La cornice della finestra degli strumenti viene fornita dall'IDE ed è usata per controllare le dimensioni, la posizione, lo stato di ancoraggio e altre proprietà persistenti. Il riquadro della finestra degli strumenti visualizza il contenuto. Le dimensioni e la posizione predefinite vengono applicate solo alla prima apertura della finestra degli strumenti. Successivamente, lo stato della finestra viene salvato in modo permanente.  
  
 I riquadri della finestra degli strumenti possono ospitare controlli utente WPF e supportare le barre degli strumenti. È possibile eseguire l'override della proprietà <xref:Microsoft.VisualStudio.Shell.WindowPane.Window%2A> per restituire l'handle del controllo ospitato.  
  
 Le finestre degli strumenti possono essere *dinamiche* \(o *visibili automaticamente*\). Le finestre degli strumenti dinamiche sono visibili ogni volta che viene applicato il contesto dell'interfaccia utente correlato. L'uso della visibilità automatica può ridurre il disordine delle finestre nell'IDE. Per altre informazioni, vedere [Aprire una finestra degli strumenti dinamica](../Topic/Opening%20a%20Dynamic%20Tool%20Window.md).  
  
 I pacchetti VSPackage non sono l'unico modo per creare una finestra degli strumenti. I componenti aggiuntivi possono creare una finestra degli strumenti tramite il modello di automazione di Visual Studio. Per altre informazioni, vedere [Procedura: creare e controllare finestre degli strumenti](../Topic/How%20to:%20Create%20and%20Control%20Tool%20Windows.md).  
  
## Vedere anche  
 [Tool Windows](../misc/extending-tool-windows.md)   
 [Finestre di documento](../Topic/Document%20Windows.md)   
 [Aggiunta di ricerca a una finestra degli strumenti](../Topic/Adding%20Search%20to%20a%20Tool%20Window.md)