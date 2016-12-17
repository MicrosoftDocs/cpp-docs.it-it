---
title: "Creazione di pagine Opzioni con gli assembly di interoperabilit&#224; | Microsoft Docs"
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
  - "pagine Opzioni del menu Strumenti [Visual Studio SDK], creazione mediante assembly di interoperabilità"
  - "assembly di interoperabilità, creazione di pagine Opzioni del menu Strumenti"
ms.assetid: 7a03f2f5-a53e-4a46-877f-5b10dd82dbc3
caps.latest.revision: 30
caps.handback.revision: 30
manager: "douge"
---
# Creazione di pagine Opzioni con gli assembly di interoperabilit&#224;
I VSPackage gestiti possono usare gli assembly di interoperabilità COM di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] per estendere l'ambiente di sviluppo integrato \(IDE\) di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] aggiungendo pagine **Opzioni** al menu **Strumenti**.  
  
 Una pagina **Opzioni del menu Strumenti** è fondamentalmente un controllo utente ed è codificata come qualsiasi altro controllo utente. In genere, si usa una delle finestre di progettazione dell'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per creare l'oggetto e aggiungere i controlli utente.  
  
> [!NOTE]
>  Una pagina **Opzioni del menu Strumenti** implementata come una finestra di dialogo, usando un DialogProc per gestire i messaggi delle finestre, deve essere una finestra di dialogo non modale e non deve chiamare la funzione EndDialog.  
  
 È necessario usare l'oggetto di automazione che il VSPackage fornisce all'ambiente per supportare le proprietà visualizzate dal controllo utente.  
  
 Un VSPackage che implementa una pagina **Opzioni del menu Strumenti** può supportare il controllo delle relative proprietà direttamente a livello di codice o tramite il modello di automazione dell'IDE. Per altre informazioni sul supporto delle pagine **Opzioni del menu Strumenti** con l'automazione, vedere [Creazione di pagine Opzioni con l'automazione](../misc/creating-options-pages-by-using-automation.md).  
  
## Rendere disponibili all'IDE le pagine Opzioni del menu Strumenti  
 Oltre a implementare un controllo utente, i VSPackage devono rendere disponibile tale controllo all'IDE.  
  
 Questa operazione viene eseguita tramite l'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetPropertyPage%2A>, che restituisce una struttura <xref:Microsoft.VisualStudio.Shell.Interop.VSPROPSHEETPAGE> basata sul GUID passato.  
  
 L'IDE usa la struttura <xref:Microsoft.VisualStudio.Shell.Interop.VSPROPSHEETPAGE> per impostare le caratteristiche di una pagina **Proprietà**.  
  
 Le impostazioni contenute nel relativo membro `dwFlags` determinano l'interpretazione esatta degli altri membri di <xref:Microsoft.VisualStudio.Shell.Interop.VSPROPSHEETPAGE>. La struttura in genere fornisce:  
  
-   Un handle per l'istanza, da cui caricare un'icona o una risorsa di tipo stringa.  
  
-   L'identificatore della risorsa dei modelli di finestra di dialogo della pagina.  
  
-   Un puntatore a DialogProc per la pagina.  
  
## Registrazione di una pagina Opzioni del menu Strumenti  
 È possibile registrare una pagina **Opzioni del menu Strumenti** creando una voce nel percorso seguente del Registro di sistema: HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\*\<versione\>*\\ToolsOptionsPages, dove *\<versione\>* è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio 8.0.  
  
 Per registrare la pagina, è possibile modificare manualmente il Registro di sistema o usare uno script del Registro di sistema \(file con estensione RGS\). Per altre informazioni, vedere [Creating Registrar Scripts](../atl/creating-registrar-scripts.md).  
  
## Vedere anche  
 [Estensione dell'ambiente Visual Studio](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)   
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)   
 [Supporto di automazione per le pagine di opzioni](../Topic/Automation%20Support%20for%20Options%20Pages.md)   
 [Uso delle pagine Opzioni](../misc/using-options-pages.md)   
 [Creazione di pagine di opzioni](../Topic/Creating%20Options%20Pages.md)   
 [Creazione di pagine Opzioni con l'automazione](../misc/creating-options-pages-by-using-automation.md)