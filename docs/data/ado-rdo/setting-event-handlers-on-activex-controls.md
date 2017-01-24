---
title: "Impostazione dei gestori eventi nei controlli ActiveX | Microsoft Docs"
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
  - "ActiveX (controlli) [C++], eventi"
  - "eventi (C++), controlli ActiveX"
ms.assetid: c076386f-c78b-4dc9-9201-a544252d5337
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazione dei gestori eventi nei controlli ActiveX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile programmare i controlli ActiveX in modo che rispondano a eventi.  Per visualizzare gli eventi disponibili in un controllo e creare gestori eventi, utilizzare **ControlEvents** nelle proprietà.  La gestione degli eventi viene di solito effettuata per intercettare eventuali modifiche nella query dell'origine dati.  Le modifiche comprendono:  
  
-   Implementazione di una ricerca.  Quando il valore di un controllo, ad esempio una casella DBCombo, subisce una modifica, viene intercettato l'evento di modifica per aggiornare la query del controllo dati.  
  
-   Implementazione di un rapporto principale\/dettaglio.  A una finestra di dialogo vengono aggiunti due controlli dati, uno per la porzione principale e un altro per la porzione di dettaglio.  Ogni volta che la prima origine dati subisce modifiche, la query della seconda origine dati viene aggiornata tramite un gestore eventi.  
  
-   Intercettazione degli errori.  La maggior parte dei controlli dispone di un evento di errore dal quale è possibile scrivere un gestore errori. Vedere [Intercettazione degli errori](../../data/ado-rdo/error-trapping.md).  
  
 Per ulteriori informazioni, vedere [Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md).  
  
## Vedere anche  
 [Utilizzo dei controlli ActiveX](../../data/ado-rdo/using-activex-controls.md)