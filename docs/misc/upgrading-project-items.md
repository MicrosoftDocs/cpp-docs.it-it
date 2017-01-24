---
title: "Aggiornamento degli elementi di progetto | Microsoft Docs"
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
  - "aggiornamento degli elementi di progetto"
  - "progetti [Visual Studio SDK], aggiornamento degli elementi"
  - "elementi di progetto [Visual Studio], aggiornamento"
ms.assetid: 8af29dd4-eaf1-4b3c-b602-198e1a3dff23
caps.latest.revision: 14
caps.handback.revision: 14
manager: "douge"
---
# Aggiornamento degli elementi di progetto
Se si aggiunge o gestiscono gli elementi nei sistemi di progetto che non si distribuisce, è possibile avere l'esigenza di partecipare al processo di aggiornamento del progetto.  I progetti [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] e il MPFProj entrambi utilizzano lo schema [Not in Build: MSBuild Overview](http://msdn.microsoft.com/it-it/b588fd73-a45b-4706-908f-cc131bccfbde) per i file di modello.  
  
 In genere, gli implementatori di elemento di progetto desidera utilizzare un progetto già completamente creare un'istanza e ottimizzato perché devono sapere cosa i riferimenti al progetto sono e le altre proprietà del progetto sono presenti prendere una decisione di aggiornamento.  
  
### Per ottenere la notifica di aggiornamento del progetto  
  
1.  Impostare il flag di <xref:Microsoft.VisualStudio.Shell.Interop.UIContextGuids80.SolutionOrProjectUpgrading> \(definito in vsshell80.idl\) nell'implementazione di elemento di progetto.  In questo modo l'elemento di progetto VSPackage il caricamento automatico alla shell di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] determina che un sistema di progetto è nel processo di aggiornamento.  
  
2.  Consigliare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolutionEventsProjectUpgrade> tramite il metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolution2.AdviseSolutionEvents%2A> .  
  
3.  L'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolutionEventsProjectUpgrade> viene generato dopo che l'implementazione del sistema del progetto ha completato le operazioni di aggiornamento e il nuovo progetto aggiornato viene creato.  Depending on the scenario, the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolutionEventsProjectUpgrade> interface is fired after the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolutionEvents3.OnAfterOpenSolution%2A>, the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolutionEvents3.OnAfterOpenProject%2A>, or the <xref:Microsoft.VisualStudio.Shell.Interop.IVsSolutionEvents3.OnAfterLoadProject%2A> methods.  
  
### Per aggiornare i file dell'elemento di progetto  
  
1.  È necessario prestare particolare attenzione il processo di backup del file nell'implementazione di elemento di progetto.  Ciò consente di applicare in particolare per un backup affiancato, in cui il parametro di `fUpgradeFlag` del metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsProjectUpgradeViaFactory.UpgradeProject%2A> è impostato su <xref:Microsoft.VisualStudio.Shell.Interop.__VSPPROJECTUPGRADEVIAFACTORYFLAGS>, dove i file che erano stati sottoposti a backup vengono posizionati sui file laterali definiti come OLD.  I file sottoposti a backup più recenti l'ora di sistema quando il progetto è stato migliorato possono essere definiti come non aggiornati.  Inoltre, potrebbero venire sovrascritti a meno che intraprendeste le azioni specifiche per evitare che questo accada.  
  
2.  Quando l'elemento di progetto riceve una notifica di aggiornamento di progetto, **Conversione guidata di Visual Studio** ancora visualizzati.  Pertanto, è necessario utilizzare i metodi di interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsUpgradeLogger> per fornire messaggi di aggiornamento all'interfaccia utente della procedura guidata.  
  
## Vedere anche  
 [Visual Studio Conversion Wizard](http://msdn.microsoft.com/it-it/4acfd30e-c192-4184-a86f-2da5e4c3d83c)   
 [Aggiornamento di progetti personalizzati](../misc/upgrading-custom-projects.md)