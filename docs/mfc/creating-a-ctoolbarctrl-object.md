---
title: "Creazione di un oggetto CToolBarCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CToolBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolBarCtrl (classe), creazione di barre degli strumenti"
  - "controlli della barra degli strumenti [MFC], creazione"
ms.assetid: a4f6bf0c-0195-4dbf-a09e-aee503e19dc3
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Creazione di un oggetto CToolBarCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

gli oggetti di[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) contengono diverse strutture di dati interne \- un elenco delle bitmap del pulsante, un elenco di stringhe dell'etichetta del pulsante e un elenco di strutture di `TBBUTTON` \- tale associare un'immagine e\/o stringa con la posizione, lo stile, lo stato e l'id di comando del pulsante.  Tutti gli elementi di queste strutture di dati viene fatto riferimento da un indice a base zero.  Prima di poter utilizzare un oggetto di `CToolBarCtrl`, è necessario installare queste strutture dei dati.  Per un elenco di strutture dei dati, vedere [Controlli toolbar](https://msdn.microsoft.com/en-us/library/47xcww9x.aspx) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  L'elenco di stringhe può essere utilizzato solo per le etichette del pulsante; non è possibile recuperare le stringhe dalla barra degli strumenti.  
  
 Per utilizzare un oggetto di `CToolBarCtrl`, in genere verranno effettuate le seguenti operazioni:  
  
### Per utilizzare un oggetto di CToolBarCtrl  
  
1.  Creare l'oggetto di [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md).  
  
2.  Chiamare [Crea](../Topic/CToolBarCtrl::Create.md) per creare il controllo della barra degli strumenti finestre e per associarlo all'oggetto di `CToolBarCtrl`.  Se si desidera che le immagini bitmap per i pulsanti, aggiungere le bitmap del pulsante nella barra degli strumenti chiamando [AddBitmap](../Topic/CToolBarCtrl::AddBitmap.md).  Se si desidera che le etichette della stringa per i pulsanti, aggiungere stringhe alla barra degli strumenti chiamando [AddString](../Topic/CToolBarCtrl::AddString.md) e\/o [AddStrings](../Topic/CToolBarCtrl::AddStrings.md).  Dopo aver chiamato `AddString` e\/o `AddStrings`, è necessario chiamare [Ridimensiona automaticamente](../Topic/CToolBarCtrl::AutoSize.md) per ottenere la stringa o le stringhe da visualizzare.  
  
3.  Aggiungere le strutture del pulsante nella barra degli strumenti chiamando [AddButtons](../Topic/CToolBarCtrl::AddButtons.md).  
  
4.  Se si desidera che le descrizioni comandi, gestire i messaggi di **TTN\_NEEDTEXT** nella finestra proprietaria della barra degli strumenti come descritto in [Notifiche di descrizione comandi di gestione](../mfc/handling-tool-tip-notifications.md).  
  
5.  Se si desidera che l'utente possa personalizzare la barra degli strumenti, gestire i messaggi di notifica di personalizzazione nella finestra proprietaria come descritto in [Notifiche di personalizzazione di gestione](../mfc/handling-customization-notifications.md).  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)