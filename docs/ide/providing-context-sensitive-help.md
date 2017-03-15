---
title: "Inserimento della guida sensibile al contesto | Microsoft Docs"
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
  - "Guida sensibile al contesto"
  - "Guida sensibile al contesto, creazione guidata personalizzata"
  - "creazioni guidate personalizzate, implementazione della Guida"
ms.assetid: c6c4d961-29d3-4d16-9f39-b12545aba540
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Inserimento della guida sensibile al contesto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle procedure guidate create tramite la [Creazione guidata personalizzata](../ide/application-settings-custom-wizard.md) viene inserito automaticamente un pulsante **?**.  
  
 In ogni file HTM del progetto viene inserito il codice riportato di seguito che consente di fornire il supporto per il pulsante **?** della procedura guidata.  
  
```  
<BUTTON CLASS="BUTTONS" ID="HelpBtn" ACCESSKEY="H"  
 onClick="window.external.OnHelp('vc.appwiz.custom.overview');">  
```  
  
 Il metodo <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.OnHelp%2A> specifica la parola chiave del file della Guida HTML associato alla schermata della procedura guidata.  Per ulteriori informazioni sulla creazione di file della Guida HTML da associare alla schermata, vedere [Pagina iniziale della Guida HTML](vsconhh1start).  Per fornire una Guida personalizzata per la schermata della procedura guidata, è necessario sostituire la stringa `'vc.appwiz.custom.overview'` con la parola chiave che identifica l'argomento della Guida HTML relativo alla schermata.  
  
 **Nota** Non è possibile integrare il file HTM nella Guida MSDN compilata.  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)