---
title: "Test di propriet&#224; ed eventi con Test Container | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX Control Test Container"
  - "ActiveX (controlli) [C++], test"
  - "debug dei controlli ActiveX"
  - "proprietà [MFC], test"
  - "Test Container"
  - "test, Test Container"
  - "tstcon32.exe"
ms.assetid: 626867cf-fe53-4c30-8973-55bb93ef3917
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Test di propriet&#224; ed eventi con Test Container
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'applicazione di test container, disponibili in Visual C\+\+, è un contenitore di controlli ActiveX per i test e il debug dei controlli ActiveX.  Test container consente allo sviluppatore del controllo verificare la funzionalità del controllo modificando le relative proprietà, richiamando i relativi metodi e genera i relativi eventi.  Test container è possibile visualizzare i log di associazione dati notifiche e fornisce inoltre le funzionalità per testare la funzionalità della persistenza di un controllo ActiveX: è possibile salvare le proprietà in un flusso o al substorage, ricaricarli ed esaminare i dati memorizzati del flusso.  In questa sezione viene descritto come utilizzare le funzionalità di base di test container.  Per ulteriori informazioni, selezionare il menu **?** durante l'esecuzione del test container.  
  
### Per accedere a ActiveX control test container  
  
1.  Compilare [Esempio TSTCON: ActiveX control test container](../top/visual-cpp-samples.md).  
  
### Per testare il controllo ActiveX  
  
1.  Dal menu di **Modifica** di test container, scegliere **Inserisci nuovo controllo**.  
  
2.  Nella casella di **Inserisci controllo** , selezionare il controllo desiderato e scegliere **OK**.  Il controllo viene visualizzato nella casella di controllo.  
  
    > [!NOTE]
    >  Se il controllo non è elencato nella finestra di dialogo **Inserisci controllo**, accertarsi di registrazione nel comando di **Controlli registro** dal menu di **File** test container.  
  
 A questo punto è possibile testare proprietà o eventi del controllo.  
  
#### Per verificare le proprietà  
  
1.  Dal menu di **Controllo** , fare clic su **Richiama metodi**.  
  
2.  Nell'elenco a discesa di **Nome metodo**, selezionare il metodo di PropPut per la proprietà che si desidera testare.  
  
3.  Modificare **Valore parametro** o **Tipo parametro** e fare clic sul pulsante di **Imposta valore**.  
  
4.  Fare clic **Richiama** per applicare un nuovo valore all'oggetto.  
  
     La proprietà contiene ora il nuovo valore.  
  
#### Per verificare gli eventi e specificare la destinazione di informazioni sull'evento.  
  
1.  Dal menu di **Opzioni** , fare clic su **Registrazione**.  
  
2.  Specificare la destinazione di informazioni sull'evento.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Procedura: eseguire il debug di un controllo ActiveX](../Topic/How%20to:%20Debug%20an%20ActiveX%20Control.md)