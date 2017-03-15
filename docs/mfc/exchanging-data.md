---
title: "Scambio di dati | Microsoft Docs"
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
  - "DDX (Dialog Data Exchange), finestre delle proprietà"
  - "scambio di dati con finestre delle proprietà"
  - "finestre delle proprietà, scambio di dati"
ms.assetid: 689f02d0-51a9-455b-8ffb-5b44f0aefa28
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Scambio di dati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come nella maggior parte delle finestre di dialogo, lo scambio di dati tra la finestra delle proprietà e l'applicazione è una delle funzioni principali della finestra delle proprietà.  In questo articolo viene descritto come eseguire questa attività.  
  
 Dati con una finestra delle proprietà sono effettivamente un aspetto di trasferimento di dati con le singole pagine delle proprietà della finestra delle proprietà.  La procedura per dati con una pagina delle proprietà corrisponde a quella di dati con una finestra di dialogo, poiché un oggetto di [CPropertyPage](../mfc/reference/cpropertypage-class.md) è semplicemente un oggetto specifico di [CDialog](../mfc/reference/cdialog-class.md).  La routine utilizza le funzionalità di scambio di dati della finestra di dialogo del framework \(DDX\), che scambio dei dati tra i controlli in una finestra di dialogo e delle variabili membro della finestra di dialogo oggetto.  
  
 La differenza fondamentale tra dati con una finestra delle proprietà e a una finestra di dialogo è normale che la finestra properties dispone di più pagine, è necessario scambiare dati con tutte le pagine nella finestra proprietà.  Per ulteriori informazioni su DDX, vedere [Scambio di dati e convalida della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md).  
  
 Nell'esempio seguente viene illustrato lo scambio di dati tra view e due pagine di una finestra delle proprietà:  
  
 [!code-cpp[NVC_MFCDocView#4](../mfc/codesnippet/CPP/exchanging-data_1.cpp)]  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)