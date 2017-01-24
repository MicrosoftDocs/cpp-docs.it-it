---
title: "Panoramica della personalizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Finestra di dialogo Informazioni"
  - "VSPackage, schermate iniziali"
  - "VSPackage, personalizzazione"
ms.assetid: a47b3645-574c-41c7-8a97-d071cd6b1e82
caps.latest.revision: 11
caps.handback.revision: 11
manager: "douge"
---
# Panoramica della personalizzazione
Per visualizzare le informazioni del prodotto nella schermata iniziale o nella finestra di dialogo di **La guida su** , il package VS necessario uno:  
  
-   Fornire informazioni dettagliate del prodotto nella chiave del Registro di sistema di InstalledProducts.  
  
     In alternativa  
  
-   Implementare <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>  
  
 Il framework gestito del pacchetto \(MPF\) fornisce l'attributo di <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> alla registrazione del controllo nella chiave del Registro di sistema di InstalledProducts.  Per ulteriori informazioni, vedere [Procedura: Personalizzare un pacchetto VSPackage \(C\# e Visual Basic\)](../misc/how-to-brand-a-vspackage-csharp-and-visual-basic.md).  
  
 la raccolta di Visual Studio fornisce la classe modello di `IVsInstalledProductImpl` per creare un'implementazione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>.  Per ulteriori informazioni, vedere [Procedura: Personalizzare un pacchetto VSPackage \(C\+\+\)](../misc/how-to-brand-a-vspackage-cpp.md).  
  
 Implementare <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> in modo esplicito è più efficace di utilizzando l'attributo o del modello.  
  
-   È possibile specificare un'icona della schermata iniziale che differisce dall'icona di **Aiutare su** .  
  
-   È possibile specificare un nome di prodotto della schermata iniziale che è diverso dal nome del prodotto di **La guida su** .  
  
    > [!IMPORTANT]
    >  Se si utilizza <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> e implementare anche <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>, l'interfaccia ha la precedenza.  
  
    > [!NOTE]
    >  La stessa risorsa icona viene utilizzata per la schermata iniziale e la finestra di dialogo **La guida su** .  La risorsa icona di un VSPackage deve includere un'immagine di 16 × 16 per la schermata iniziale e 32 un'immagine di × 32 per la finestra di dialogo di **La guida su** .  Se si fornisce una sola dimensione dell'immagine, verrà ridimensionata in base alle necessità, ma i risultati visivi verranno suboptimali.  
  
 Per un elenco di attività correlate, vedere [Package VS](../Topic/VSPackages.md).  
  
## Vedere anche  
 [Package VS](../Topic/VSPackages.md)   
 [Panoramica della libreria di Visual Studio](../misc/visual-studio-library-overview.md)