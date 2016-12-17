---
title: "Operazioni sugli Appunti nei controlli Rich Edit | Microsoft Docs"
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
  - "Appunti, operazioni in CRichEditCtrl"
  - "operazioni di copia nei controlli Rich Edit"
  - "CRichEditCtrl (classe), operazioni relative agli Appunti"
  - "CRichEditCtrl (classe), operazione incolla"
  - "operazioni taglia nella classe CRichEditCtrl"
  - "incollare dati degli Appunti"
  - "Rich Edit (controlli), operazioni relative agli Appunti"
ms.assetid: 15ce66bc-2636-4a35-a2ae-d52285dc1af6
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operazioni sugli Appunti nei controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'applicazione può inserire il contenuto degli Appunti in un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) utilizzando il formato degli Appunti disponibile o un formato degli Appunti specifico.  È anche possibile determinare se un controllo Rich Edit consente di inserire un formato degli Appunti.  
  
 È possibile tagliare o copiare il contenuto della selezione corrente tramite la funzione membro [Taglia](../Topic/CRichEditCtrl::Cut.md) o [Copia](../Topic/CRichEditCtrl::Copy.md).  Analogamente, è possibile inserire il contenuto degli Appunti in un controllo Rich Edit utilizzando la funzione membro [Incolla](../Topic/CRichEditCtrl::Paste.md).  Il controllo inserisce il primo formato disponibile che riconosce, che presumibilmente è il formato più descrittivo.  
  
 Per inserire un formato degli Appunti specifico, è possibile utilizzare la funzione membro [Incolla speciale](../Topic/CRichEditCtrl::PasteSpecial.md).  Questa funzione è utile per le applicazioni con un comando Incolla Speciale che consente all'utente di selezionare il formato degli Appunti.  È possibile utilizzare la funzione membro [CanPaste](../Topic/CRichEditCtrl::CanPaste.md) per determinare se un formato specificato è riconosciuto dal controllo.  
  
 È inoltre possibile utilizzare `CanPaste` per determinare se il formato degli Appunti disponibile viene riconosciuto da un controllo Rich Edit.  Questa funzione è utile nel gestore di `OnInitMenuPopup`.  Un'applicazione può abilitare o ingrigire il comando Incolla a seconda se il controllo può inserire qualsiasi formato disponibile.  
  
 I controlli Rich Edit registrano due formati di appunti: il formato rich text format e un formato denominato RichEdit Text and Objects.  Un'applicazione può registrare questi formati utilizzando la funzione [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049), specificando i valori **CF\_RETEXTOBJ** e **CF\_RTF**.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)