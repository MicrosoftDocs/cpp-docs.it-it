---
title: "Debug del provider | Microsoft Docs"
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
  - "debug [C++], provider"
  - "provider OLE DB, debug"
  - "debugger di Visual C++"
  - "debugger di Visual C++, debug di provider"
ms.assetid: 90d4e7db-06ea-4de0-a7f4-4f3751d50d93
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Debug del provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile eseguire il debug del provider in due modi diversi:  
  
-   Creando il codice del consumer tramite i modelli consumer OLE DB ed eseguendo le istruzioni del provider normalmente, in quanto i provider vengono creati in\-process.  
  
-   Utilizzando l'utilità ITEST fornita con Visual C\+\+.  
  
### Per utilizzare ITEST  
  
1.  Aprire il progetto del provider.  
  
2.  Scegliere **Impostazioni** dal menu **Progetti**.  
  
3.  Nella finestra di dialogo **Pagine delle proprietà** fare clic sulla scheda **Debug**.  
  
4.  Nella casella **Eseguibile per sessione di debug** selezionare l'applicazione ITEST.  
  
5.  Impostare i punti di interruzione, quindi eseguire il debug come di consueto.  
  
## Vedere anche  
 [Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)