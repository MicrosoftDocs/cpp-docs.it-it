---
title: "Procedura: personalizzare la barra di accesso rapido | Microsoft Docs"
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
  - "barra di accesso rapido, personalizzazione"
ms.assetid: 2554099b-0c89-4605-9249-31bf9cbcefe0
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: personalizzare la barra di accesso rapido
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La barra di accesso rapido \(QAT\) è una barra degli strumenti personalizzabile che contiene un insieme di controlli che sono visualizzati accanto al pulsante Applicazione o nelle schede categoria.  Nella figura seguente viene illustrata una barra di accesso rapido tipica.  
  
 ![Barra di accesso rapido con barra multifunzione MFC](../mfc/media/quick_access_toolbar.png "Quick\_Access\_Toolbar")  
  
 Per personalizzare la barra di accesso rapido, aprirla nella finestra **Proprietà**, modificare i relativi controlli e quindi visualizzare in anteprima il controllo della barra multifunzione.  
  
### Per aprire la barra di accesso rapido nella Finestra Proprietà  
  
1.  In Visual Studio, nel menu **Visualizza**, fare clic su **Visualizzazione risorse**.  
  
2.  In **Visualizzazione risorse**, fare doppio clic sulla barra multifunzione risorsa per visualizzarla nell'area di progettazione.  
  
3.  Nell'area di progettazione, fare clic con il pulsante destro del mouse sul menu della barra di accesso rapido e scegliere **Proprietà**.  
  
## Proprietà della barra di accesso rapido  
 Nella tabella riportata di seguito vengono definite le proprietà della barra di accesso rapido.  
  
|Proprietà|Definizione|  
|---------------|-----------------|  
|Posizione QAT|Specifica la posizione della barra di accesso rapido all'avvio dell'applicazione.  La posizione può essere **Sopra** o **Sotto** il controllo della barra multifunzione.|  
|Elementi QAT|Specifica i controlli disponibili per la barra di accesso rapido.|  
  
#### Per aggiungere o rimuovere comandi dalla barra di accesso rapido  
  
1.  Nella finestra **Proprietà** fare clic su **QAT Items**, quindi sul pulsante con i puntini di sospensione **\(...\)**.  
  
2.  Nella finestra di dialogo **Editor elementi QAT**, utilizzare i pulsanti **Rimuovi** e **Aggiungi** per modificare l'elenco dei comandi sulla barra di accesso rapido.  
  
3.  Se si desidera che un comando venga visualizzato sia nella barra di accesso rapido che nel menu della barra di accesso rapido, selezionare la casella accanto al comando.  Se si desidera che il comando venga visualizzato solo nel menu, deselezionare la casella degli strumenti.  
  
## Visualizzare un'anteprima della barra multifunzione  
 I controlli barra di accesso rapido non vengono visualizzati nell'area di progettazione.  Per visualizzarli, è necessario visualizzare un'anteprima della barra multifunzione o eseguire l'applicazione.  
  
#### Per visualizzare in anteprima il controllo della barra multifunzione  
  
-   Nella **Barra degli strumenti Editor Ribbon** fai clic sul pulsante **Test Ribbon**.  
  
## Vedere anche  
 [Finestra di progettazione della barra multifunzione \(MFC\)](../mfc/ribbon-designer-mfc.md)