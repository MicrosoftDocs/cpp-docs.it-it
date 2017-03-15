---
title: "Procedura: aggiungere controlli Ribbon e gestori eventi | Microsoft Docs"
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
  - "gestori eventi, aggiunta"
  - "controlli della barra multifunzione, aggiunta"
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Procedura: aggiungere controlli Ribbon e gestori eventi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli barra multifunzione sono elementi, quali pulsanti e caselle combinate, aggiunta ai pannelli.  I pannelli sono superfici della barra della barra multifunzione che visualizza un gruppo di controlli correlati.  
  
 In questo argomento, si aprirà la finestra di progettazione della barra multifunzione, aggiungere un pulsante e quindi si collega un evento che venga visualizzato "Hello World".  
  
### Per aprire la finestra di progettazione della barra multifunzione  
  
1.  In Visual Studio, nel menu di **Visualizza**, fare clic su **Visualizzazione risorse**.  
  
2.  In **Visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione da visualizzare nell'area di progettazione.  
  
### Per aggiungere un pulsante e un gestore eventi  
  
1.  Da **Barra degli strumenti**, scegliere **Pulsante** e trascinarla su un pannello nell'area di progettazione.  
  
2.  Fare clic con il pulsante destro del mouse sul pulsante e fare clic **Aggiungi gestore eventi**.  
  
3.  In **Creazione guidata gestore eventi**, verificare le impostazioni predefinite e fare clic **Aggiungi**.  Per ulteriori informazioni, vedere [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).  
  
4.  Nell'editor di codice, aggiungere il seguente codice nella funzione di gestione:  
  
    ```  
    MessageBox((LPCTSTR)L"Hello World");  
    ```  
  
## Vedere anche  
 [Esempio RibbonGadgets: applicazione della barra multifunzione Gadget](../top/visual-cpp-samples.md)   
 [Finestra di progettazione della barra multifunzione \(MFC\)](../mfc/ribbon-designer-mfc.md)