---
title: "Creating a New Custom or Data Resource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.binary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "custom resources [C++]"
  - "data resources [C++]"
  - "resources [Visual Studio], creating"
ms.assetid: 9918bf96-38fa-43a1-a384-572f95d84950
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Creating a New Custom or Data Resource
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare una nuova risorsa personalizzata o di dati inserendo tale risorsa in un file separato usando la normale sintassi dei file di script delle risorse \(RC\), quindi includendo tale file facendo clic con il pulsante destro del mouse sul progetto in Esplora soluzioni e scegliendo **Inclusioni risorsa** dal menu di scelta rapida.  
  
### Per creare una nuova risorsa personalizzata o di dati  
  
1.  [Creare un file RC](../windows/how-to-create-a-resource-script-file.md) che contenga la risorsa personalizzata o di dati.  
  
     È possibile digitare dati personalizzati in un file RC sotto forma di stringhe con terminazione Null racchiuse tra virgolette o di numeri interi in formato decimale, esadecimale o ottale.  
  
2.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul file RC del progetto e scegliere **Inclusioni risorsa** nel menu di scelta rapida.  
  
3.  Nella casella **Direttive in fase di compilazione** digitare un'istruzione**\#include** con il nome del file che contiene la risorsa personalizzata. Ad esempio:  
  
    ```  
    #include mydata.rc  
    ```  
  
     Assicurarsi che le informazioni digitate siano corrette dal punto di vista sintattico e ortografico. Il contenuto della casella **Direttive in fase di compilazione** viene inserito nel file di script della risorsa esattamente nel modo in cui viene digitato.  
  
4.  Fare clic su **OK** per registrare le modifiche.  
  
 Un altro metodo per creare una risorsa personalizzata consiste nell'importare un file esterno come risorsa personalizzata. Per altre informazioni, vedere [Importazione ed esportazione di risorse](../windows/how-to-import-and-export-resources.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Binary Editor](../mfc/binary-editor.md)