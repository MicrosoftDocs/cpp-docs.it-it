---
title: "Hosting ActiveX Controls Using ATL AXHost | Microsoft Docs"
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
  - "ActiveX (controlli) [C++], hosting"
  - "AXHost method"
  - "Calendar control (ActiveX)"
  - "Calendar control (ActiveX), hosting with ATL AXHost"
  - "CAxWindow2T class"
  - "hosting di controlli ActiveX"
ms.assetid: 2c1200ec-effb-4814-820a-509519699468
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Hosting ActiveX Controls Using ATL AXHost
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'esempio in questo argomento viene illustrato come creare AXHost e come ospitare un controllo ActiveX utilizzando diverse funzionalità ATL.  Viene inoltre illustrato come accedere al controllo e effettuare il sink di eventi mediante [IDispEventImpl](../atl/reference/idispeventimpl-class.md)\) dal controllo ospitato.  L'esempio contiene il controllo calendar in una finestra principale o una finestra figlio.  
  
 Si noti la definizione del simbolo `USE_METHOD`.  È possibile modificare il valore del simbolo per variare tra 1 e 8.  Il valore del simbolo determina quali il controllo verrà creato:  
  
-   Per i valori pari `USE_METHOD`, la chiamata per creare le sottoclassi host una finestra e convertiti in un host del controllo.  Per i valori di numero dispari, il codice crea una finestra figlio che funge da host.  
  
-   Per i valori `USE_METHOD` tra 1 e 4, l'accesso al controllo e di affondamento degli eventi vengono eseguiti nella chiamata che crea inoltre l'host.  I valori tra 5 e 8 richiede all'host per le interfacce e agganciano il sink.  
  
 Di seguito è riportato un riepilogo:  
  
|USE\_METHOD|Host|Controllare l'accesso e la affondamento di evento|Funzione dimostrata|  
|-----------------|----------|-------------------------------------------------------|-------------------------|  
|1|Finestra figlio|Un passaggio|CreateControlLicEx|  
|2|Finestra principale|Un passaggio|AtlAxCreateControlLicEx|  
|3|Finestra figlio|Un passaggio|CreateControlEx|  
|4|Finestra principale|Un passaggio|AtlAxCreateControlEx|  
|5|Finestra figlio|Passaggi più|CreateControlLic|  
|6|Finestra principale|Passaggi più|AtlAxCreateControlLic|  
|7|Finestra figlio|Passaggi più|CreateControl|  
|8|Finestra principale|Passaggi più|AtlAxCreateControl|  
  
 [!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/CPP/hosting-activex-controls-using-atl-axhost_1.cpp)]  
  
## Vedere anche  
 [Domande frequenti sul contenimento di controlli](../atl/atl-control-containment-faq.md)   
 [AtlAxCreateControl](../Topic/AtlAxCreateControl.md)   
 [AtlAxCreateControlEx](../Topic/AtlAxCreateControlEx.md)   
 [AtlAxCreateControlLic](../Topic/AtlAxCreateControlLic.md)   
 [AtlAxCreateControlLicEx](../Topic/AtlAxCreateControlLicEx.md)   
 [CAxWindow2T Class](../atl/reference/caxwindow2t-class.md)   
 [IAxWinHostWindowLic Interface](../atl/reference/iaxwinhostwindowlic-interface.md)