---
title: "How to: Add MFC Support to Resource Script Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.resvw.add.MFC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rc files, adding MFC support"
  - ".rc files, adding MFC support"
  - "MFC, adding support to resource scripts files"
  - "resource script files, adding MFC support"
ms.assetid: 599dfe9d-ad26-4e34-899c-49b56599e37f
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# How to: Add MFC Support to Resource Script Files
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In genere, quando si compila un'applicazione MFC per Windows mediante la [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la procedura guidata genera un set di base dei file \(incluso un file di script \(RC\) delle risorse\) che contiene le principali funzionalità delle librerie MFC \(Microsoft Foundation Classes\).  Tuttavia, se si modifica un file RC per un'applicazione Windows che non è basata su MFC, non sono disponibili le seguenti funzionalità specifiche del framework MFC:  
  
-   Creazioni guidate del codice MFC \(precedentemente chiamate "[MFC ClassWizard](http://msdn.microsoft.com/it-it/98dc2434-ba93-4e0b-b084-1a4bc26cdf1e)"\)  
  
-   Stringhe di richiesta di menu  
  
-   Contenuti di elenco per controlli casella combinata  
  
-   Hosting del controllo ActiveX  
  
 Tuttavia, è possibile aggiungere supporto MFC ai file RC esistenti che non lo hanno.  
  
### Per aggiungere supporto MFC ai file RC  
  
1.  Aprire il file script di risorsa vuoto.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In [Visualizzazione risorse](../windows/resource-view-window.md), evidenziare la cartella delle risorse \(ad esempio, MFC.rc\).  
  
3.  Nella [finestra Proprietà](../Topic/Properties%20Window.md) impostare la proprietà **Modalità MFC** su **True**.  
  
    > [!NOTE]
    >  Oltre a impostare questo flag, il file RC deve essere parte di un progetto MFC.  Ad esempio, l'impostazione di **Modalità MFC** su **True** in un file RC di un progetto Win32 non fornisce alcuna funzionalità di MFC.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 MFC  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)