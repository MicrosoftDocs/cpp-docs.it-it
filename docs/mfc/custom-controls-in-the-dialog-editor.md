---
title: "Custom Controls in the Dialog Editor | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Custom Control"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controls [C++], templates"
  - "custom controls [Visual Studio], dialog boxes"
  - "custom controls [Visual Studio]"
  - "dialog box controls, custom (user) controls"
  - "Dialog editor, custom controls"
ms.assetid: f494b314-4000-4bbe-bbd0-4b18fb71ede1
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Custom Controls in the Dialog Editor
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'editor finestre consente l'utilizzo di controlli personalizzati o utente esistenti in un modello di finestra di dialogo.  
  
> [!NOTE]
>  I controlli personalizzati considerati in questo contesto non devono essere confusi con i controlli ActiveX.  in precedenza denominati anche controlli OLE personalizzati.  Non devono inoltre essere confusi con i controlli disegnati dal proprietario in Windows.  
  
 Questa funzionalità è stata progettata per consentire l'utilizzo di controlli diversi da quelli forniti da Windows.  In fase di esecuzione, il controllo viene associato a una classe finestra, che non corrisponde a una classe C\+\+.  Questa attività viene comunemente eseguita installando un controllo, ad esempio un controllo statico, nella finestra di dialogo.  In fase di esecuzione, nella funzione [OnInitDialog](../Topic/CDialog::OnInitDialog.md) rimuovere il controllo e sostituirlo con il controllo personalizzato.  
  
 Anziché questa tecnica tradizionale,  nella maggior parte dei casi è consigliabile scrivere un controllo ActiveX o creare una sottoclasse di un controllo comune di Windows.  
  
 Per questi controlli personalizzati è possibile effettuare le seguenti operazioni:  
  
-   Impostazione della posizione nella finestra di dialogo.  
  
-   Digitazione di una didascalia.  
  
-   Identificazione del nome della classe Windows del controllo. È necessario che il codice dell'applicazione registri il controllo in base a questo nome.  
  
-   Digitazione di un valore esadecimale a 32 bit da cui viene impostato lo stile del controllo.  
  
-   Impostazione dello stile esteso.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)