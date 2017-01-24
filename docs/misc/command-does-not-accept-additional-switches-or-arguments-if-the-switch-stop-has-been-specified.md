---
title: "Command does not accept additional switches or arguments if the switch &quot;/stop&quot; has been specified. | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.0x800A00CD"
  - "vs.message.VS_E_NOTVALIDWITHSTOP"
ms.assetid: 1dea2450-034e-4a7f-b959-2060811329b6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Command does not accept additional switches or arguments if the switch &quot;/stop&quot; has been specified.
Generalmente questo errore si verifica quando si immette l'opzione `/stop`, insieme a ulteriori opzioni per i comandi **Cerca nei file** o **Sostituisci nei file**.  
  
### Per correggere l'errore  
  
1.  Se si desidera interrompere l'operazione corrente di ricerca nei file, immettere:  
  
    ```  
    Edit.FindinFiles /stop.  
    ```  
  
2.  Se si desidera interrompere l'operazione corrente di sostituzione nei file, immettere:  
  
    ```  
    Edit.ReplaceinFiles /stop  
    ```  
  
3.  Se si desidera avviare una nuova operazione di ricerca o sostituzione nei file, immettere di nuovo il comando, omettendo `/stop`.  
  
## Vedere anche  
 [Comando Sostituisci nei file](../Topic/Replace%20In%20Files%20Command.md)   
 [Comando Cerca nei file](../Topic/Find%20in%20Files%20Command.md)   
 [Comandi di Visual Studio](../Topic/Visual%20Studio%20Commands.md)