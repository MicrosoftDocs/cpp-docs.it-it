---
title: "How to: Import and Export Resources | Microsoft Docs"
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
  - "vs.resvw.resource.importing"
  - "vc.resvw.resource.importing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio], exporting"
  - "graphics [C++], exporting"
  - "graphics [C++], importing"
  - "resources [Visual Studio], importing"
  - "bitmaps [C++], importing and exporting"
  - "toolbars [C++], importing"
  - "images [C++], importing"
  - "toolbars [C++], exporting"
  - "cursors [C++], importing and exporting"
  - "images [C++], exporting"
ms.assetid: 3c9329dc-dcb8-4edd-a600-78e3e572bd89
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Import and Export Resources
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile importare risorse grafiche \(bitmap, icone, cursori e barre degli strumenti\), file HTML e risorse personalizzate da usare in Visual C\+\+.  È inoltre possibile esportare gli stessi tipi di file da un progetto Visual C\+\+ in file separati utilizzabili all'esterno dell'ambiente di sviluppo.  
  
> [!NOTE]
>  Non è possibile importare o esportare tipi di risorse, quali acceleratori, finestre di dialogo e tabelle di stringhe, poiché non si tratta di tipi di file autonomi.  
  
### Per importare una singola risorsa nel file di risorse corrente  
  
1.  In [Visualizzazione risorse](../windows/resource-view-window.md) fare clic con il pulsante destro del mouse sul nodo corrispondente al file script di risorsa \(\*.rc\) in cui si vuole aggiungere una risorsa.  
  
2.  Fare clic su **Importa** dal menu di scelta rapida.  
  
3.  Individuare e selezionare il nome di file della bitmap \(BMP\), dell'icona \(ICO\), del cursore \(CUR\), del file HTML \(HTM\) o di un file di altro tipo da importare.  
  
4.  Fare clic su **OK** per aggiungere la risorsa al file selezionato in **Visualizzazione risorse**.  
  
    > [!NOTE]
    >  Il processo di importazione viene eseguito nello stesso modo indipendentemente dal tipo di risorsa specifico selezionato.  La risorsa importata viene aggiunta automaticamente al nodo appropriato per tale tipo di risorsa.  
  
### Per esportare una bitmap, un'icona o un cursore come file separato, utilizzabile all'esterno di Visual C\+\+  
  
1.  In **Visualizzazione risorse** fare clic con il pulsante destro del mouse sulla risorsa che si vuole esportare.  
  
2.  Fare clic su **Esporta** dal menu di scelta rapida.  
  
3.  Nella finestra di dialogo **Esporta risorsa** accettare il nome di file corrente oppure digitare un nuovo nome.  
  
4.  Individuare la cartella in cui si vuole salvare il file e scegliere **Esporta**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)