---
title: "Procedura: personalizzare il pulsante dell&#39;applicazione | Microsoft Docs"
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
  - "pulsante di applicazione, personalizzazione"
ms.assetid: ebb11180-ab20-43df-a234-801feca9eb38
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: personalizzare il pulsante dell&#39;applicazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si fa clic sul pulsante dell'applicazione, un menu di comandi visualizzare.  In genere, il menu contiene i controlli correlati come **Apri**, **Salva**, **Stampa** e **Uscita**.  
  
 ![Pulsante Applicazione della barra multifunzione MFC](../mfc/media/application_button.png "Application\_Button")  
  
 Per personalizzare il pulsante dell'applicazione, aprirlo nella finestra di **Proprietà**, modificarne le proprietà e quindi visualizzare in anteprima il controllo della barra multifunzione.  
  
### Per aprire l'applicazione \(...\)nella Finestra Proprietà  
  
1.  In Visual Studio, nel menu di **Visualizza**, fare clic su **Visualizzazione risorse**.  
  
2.  In **Visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione da visualizzare nell'area di progettazione.  
  
3.  Nell'area di progettazione, fare clic con il pulsante destro del mouse sul menu pulsante di applicazione e scegliere **Proprietà**.  
  
## Proprietà dei pulsanti di applicazione  
 La tabella riportata di seguito vengono definite le proprietà del pulsante dell'applicazione.  
  
|Proprietà|Definizione|  
|---------------|-----------------|  
|**Pulsanti**|Contiene la raccolta di fino a tre pulsanti visualizzati nell'angolo inferiore destro di menu di applicazione.|  
|**Didascalia**|Specifica il testo del controllo.  A differenza di altri elementi della barra multifunzione, il pulsante dell'applicazione non visualizza il testo della didascalia.  Invece, il testo viene utilizzato per l'accessibilità.|  
|**Immagine di HDPI**|Specifica l'identificatore dell'icona elevata del pulsante dell'applicazione \(HDPI\) punti per pollice.  Quando l'applicazione viene eseguita su un monitor DPI di livello, **Immagine di HDPI** viene utilizzato al posto di **Immagine**.|  
|**Immagini di grandi HDPI**|Specifica l'identificatore di immagini di grandi dimensioni di livello DPI.  Quando l'applicazione viene eseguita su un monitor DPI di livello, **Immagini di grandi HDPI** viene utilizzato al posto di **Immagini grandi**.|  
|**Piccole immagini di HDPI**|Specifica l'identificatore di piccole immagini di livello DPI.  Quando l'applicazione viene eseguita su un monitor DPI di livello, **Piccole immagini di HDPI** viene utilizzato al posto di **Immagini piccole**.|  
|**ID**|Specifica l'identificatore del controllo.|  
|**Image**|Specifica l'identificatore dell'icona del pulsante dell'applicazione.  L'icona è una bitmap a 32 bit 26x26 con trasparenza alpha.  Le parti trasparenti dell'icona vengono evidenziate quando il pulsante dell'applicazione viene fatto clic su o su.|  
|**Chiavi**|Specifica la stringa che viene visualizzata quando la navigazione di chiave suggerimento è abilitata.  La navigazione di chiave suggerimento viene attivata quando si preme ALT.|  
|**Immagini di grandi dimensioni**|Specifica l'identificatore dell'immagine che contiene una serie di icone 32x32.  Le icone vengono utilizzati dai pulsanti negli elementi principali di raccolta.|  
|**Elementi principali**|Contiene una raccolta di voci di menu visualizzati nel menu dell'applicazione.|  
|**Barra del titolo utilizzati di recente**|Specifica il testo visualizzato nel pannello recente dell'elenco.|  
|**Piccole immagini**|Specifica l'identificatore dell'immagine che contiene una serie di icone 16x16.  Le icone vengono utilizzati dai pulsanti in pulsanti di raccolta.|  
|**Utilizzo**|Abilita o disabilita il pannello recente dell'elenco.  Il pannello recente dell'elenco viene visualizzato nel menu dell'applicazione.|  
|**Larghezza**|Specifica la larghezza in pixel del pannello recente dell'elenco.|  
  
 Il menu dell'applicazione non viene visualizzato nell'area di progettazione.  Per visualizzarli, è necessario visualizzare un'anteprima della barra multifunzione o eseguire l'applicazione.  
  
#### Per visualizzare in anteprima il controllo della barra multifunzione  
  
-   In **Barra degli strumenti Editor Ribbon**, fare clic su **Test Ribbon**.  
  
## Vedere anche  
 [Finestra di progettazione della barra multifunzione \(MFC\)](../mfc/ribbon-designer-mfc.md)