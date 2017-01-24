---
title: "Previewing Resources | Microsoft Docs"
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
  - "vc.resvw.resource.previewing"
  - "vs.resvw.resource.previewing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], viewing"
  - "resource previews"
  - "code, viewing"
ms.assetid: d6abda66-0e2b-4ac3-a59a-a57b8c6fb70b
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Previewing Resources
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'anteprima delle risorse consente di visualizzare le risorse grafiche senza aprirle.  L'anteprima è anche utile per gli eseguibili compilati, poiché gli identificatori di risorsa vengono modificati in numeri.  Poiché tali identificatori numerici spesso non forniscono informazioni sufficienti, l'anteprima delle risorse ne consente la rapida identificazione.  
  
 È possibile visualizzare in anteprima il layout visivo dei seguenti tipi di risorsa:  
  
-   Bitmap  
  
-   Finestra di dialogo  
  
-   Icona  
  
-   Menu  
  
-   Cursore  
  
-   Barra degli strumenti  
  
 La funzione di visualizzazione in anteprima non è disponibile per le risorse tasto di scelta rapida, manifesto, tabella di stringhe e informazioni sulla versione.  
  
### Per visualizzare in anteprima le risorse  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) o nella finestra di un documento selezionare la risorsa desiderata, ad esempio IDD\_ABOUTBOX.  
  
     **Nota** Se il progetto non contiene un file RC, vedere [Creazione di un nuovo file di script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Scegliere il pulsante **Pagine delle proprietà** nella [finestra Proprietà](../Topic/Properties%20Window.md).  
  
     \- oppure \-  
  
3.  Scegliere **Pagine delle proprietà** dal menu **Visualizza**.  
  
     Verrà aperta la pagina delle proprietà relativa alla risorsa, in cui viene visualizzata un'anteprima di tale risorsa.  Sarà quindi possibile spostarsi all'interno del controllo struttura ad albero in Visualizzazione risorse o nella finestra del documento mediante i tasti freccia SU e freccia GIÙ.  Nella Pagina delle proprietà, che rimarrà aperta, verrà visualizzata qualsiasi risorsa con lo stato attivo che sia possibile visualizzare in anteprima.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requisiti**  
  
 Win32  
  
## Vedere anche  
 [How to: Open a Resource Script File Outside of a Project \(Standalone\)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)   
 [Resource Editors](../mfc/resource-editors.md)