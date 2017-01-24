---
title: "Stili Frame-Window (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FWS_ADDTOTITLE"
  - "FWS_SNAPTOBARS"
  - "FWS_PREFIXTITLE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre cornice, stili"
  - "FWS_ADDTOTITLE (costante)"
  - "FWS_PREFIXTITLE (costante)"
  - "FWS_SNAPTOBARS (costante)"
  - "stili, finestre"
ms.assetid: d21f270e-a088-4962-a2ae-8c03334b5a06
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili Frame-Window (MFC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

-   **FWS\_ADDTOTITLE** specifica le informazioni da aggiungere alla fine del titolo della finestra cornice.  Ad esempio, "Microsoft personalizzato \- controlli Document1".  È possibile specificare le stringhe vengono visualizzati nella scheda delle stringhe modello di documento in creazione guidata applicazione.  Se è necessario disattivare questa opzione, eseguire l'override della funzione membro di `CWnd::PreCreateWindow`.  
  
-   **FWS\_PREFIXTITLE** mostra il nome del documento prima che il nome dell'applicazione nel titolo della finestra cornice.  Ad esempio, "documento \- Wordpad".  È possibile specificare le stringhe vengono visualizzati nella scheda delle stringhe modello di documento in creazione guidata applicazione.  Se è necessario disattivare questa opzione, eseguire l'override della funzione membro di `CWnd::PreCreateWindow`.  
  
-   Ridimensionamento dei controlli di**FWS\_SNAPTOBARS**della finestra cornice che racchiude una barra di controllo quando si trova in una finestra mobile anziché essere ancorata a una finestra cornice.  Questo stile ridimensiona la finestra per adattare la barra di controllo.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)