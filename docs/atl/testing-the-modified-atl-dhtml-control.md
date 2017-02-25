---
title: "Testing the Modified ATL DHTML Control | Microsoft Docs"
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
  - "DHTML controls, test"
  - "HTML (controlli), test"
  - "testing controls"
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Testing the Modified ATL DHTML Control
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Provare il nuovo controllo per visualizzare come si esegue.  
  
#### Per compilare e testare il controllo modificato  
  
1.  Ricompilare il progetto e aprirlo in Test Container.  Vedere [Proprietà ed eventi di test con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere a Test Container.  
  
     Ridimensionare il controllo per visualizzare tutti i pulsanti aggiunto.  
  
2.  Esaminare i due pulsanti inserito modifica HTML.  Ogni pulsante sopporta l'etichetta identificato in [Modificare il controllo ATL DHTML](../atl/modifying-the-atl-dhtml-control.md): **Aggiorna** e **HelloHTML**.  
  
3.  Testare i due nuovi pulsanti per vedere come vengono eseguite.  
  
 Ora verificare i metodi che non fanno parte dell'interfaccia utente.  
  
1.  Evidenziare il controllo, in modo che il bordo viene attivato.  
  
2.  Scegliere dal menu **Control**, scegliere **Richiama metodi**.  
  
 I metodi dell'elenco contrassegnato **Nome metodo** sono metodi che il contenitore può chiamare: `MethodInvoked`e`GoToURL`.  Tutti gli altri metodi sono controllati dall'interfaccia utente.  
  
1.  Selezionare un metodo per richiamare e fare clic `Invoke` per visualizzare la finestra di messaggio del metodo o per passare a www.microsoft.com.  
  
2.  Nella finestra di dialogo **Richiama metodi**, fare clic **Chiudi**.  
  
 Per ulteriori informazioni sui vari elementi e file che costituiscono un controllo ATL DHTML, vedere [Identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md).  
  
## Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)