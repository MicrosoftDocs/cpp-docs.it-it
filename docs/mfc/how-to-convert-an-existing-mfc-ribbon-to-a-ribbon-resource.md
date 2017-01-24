---
title: "Procedura: convertire una barra multifunzione MFC esistente in una risorsa Ribbon | Microsoft Docs"
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
  - "MFC (barra multifunzione), conversione a una risorsa Ribbon"
  - "barra multifunzione (risorsa), conversione da una barra multifunzione MFC"
ms.assetid: 324b7ff6-58f9-4691-96a9-9836a79d0fb6
caps.latest.revision: 8
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: convertire una barra multifunzione MFC esistente in una risorsa Ribbon
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le risorse della barra multifunzione sono più facili da visualizzare, modificare e gestire rispetto alle barre multifunzione codificate manualmente.  In questo argomento viene descritto come convertire una barra multifunzione codificata manualmente in un progetto MFC in una risorsa della barra multifunzione.  
  
 È necessario avere un progetto MFC esistente che contiene codice che utilizza le classi della barra multifunzione MFC, ad esempio, [Classe CMFCRibbonBar](../mfc/reference/cmfcribbonbar-class.md).  
  
### Per convertire una barra multifunzione MFC in una risorsa della barra multifunzione  
  
1.  In Visual Studio, in un progetto MFC esistente, aprire il file sorgente in cui viene inizializzato l'oggetto della classe CMFCRibbonBar.  In genere, il file è mainfrm.cpp.  Aggiungere il codice seguente dopo il codice di inizializzazione per la barra multifunzione.  
  
    ```  
    m_wndRibbonBar.SaveToXMLFile("RibbonOutput.xml");  
    ```  
  
     Salvare e chiudere il file.  
  
2.  Compilare ed eseguire l'applicazione MFC, quindi aprire RibbonOutput.txt tramite Blocco Note e copiarne il contenuto.  
  
3.  In Visual Studio, nel menu **Progetto**, fare clic su **Aggiungi risorsa**.  Nella finestra di dialogo **Aggiungi risorsa**, selezionare **Barra multifunzione**, quindi scegliere **Nuovo**.  
  
     Visual Studio crea una risorsa della barra multifunzione e la apre in visualizzazione Progettazione.  L'id della risorsa della barra multifunzione è IDR\_RIBBON1, il quale viene mostrato in **Visualizzazione risorse**.  La barra multifunzione viene definita nel file XML ribbon1.mfcribbon\-ms.  
  
4.  In Visual Studio, aprire ribbon1.mfcribbon\-ms, eliminarne il contenuto quindi incollarvi il contenuto del file RibbonOutput.txt, copiato precedentemente.  Salvare e chiudere ribbon1.mfcribbon\-ms.  
  
5.  Aprire nuovamente il file sorgente in cui viene inizializzato l'oggetto della classe CMFCRibbonBar \(in genere mainfrm.cpp\) e commentare il codice della barra multifunzione esistente.  Aggiungere il codice seguente dopo il codice commentato.  
  
    ```  
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);  
    ```  
  
6.  Compilare il progetto ed eseguire il programma.  
  
## Vedere anche  
 [Finestra di progettazione della barra multifunzione \(MFC\)](../mfc/ribbon-designer-mfc.md)