---
title: "Associazione dati con controlli ActiveX in Visual C++ | Microsoft Docs"
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
  - "ActiveX (controlli) [C++], associazione dati"
  - "controlli con associazione [C++], ActiveX"
  - "controlli [C++], associazione dati"
  - "associazione dati [C++], controlli ActiveX"
  - "controlli con associazione a dati [C++], ActiveX"
ms.assetid: afe11d2b-eefe-43ce-958d-82d3d4dee158
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Associazione dati con controlli ActiveX in Visual C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'associazione dati viene implementata tramite due tipi di controlli ActiveX: controlli dati e controlli associati a dati.  
  
 **Controlli dati**  
 I controlli dati comprendono l'incapsulamento di una query di database e del rowset recuperato.  I controlli dati Microsoft forniscono un'interfaccia utente rappresentata da una serie di pulsanti che consentono di scorrere i dati.  Con Visual C\+\+ sono disponibili due tecnologie di accesso ai dati per questi controlli: [ADO e RDO](../../data/ado-rdo/data-access-ado-and-rdo.md).  
  
> [!IMPORTANT]
>  I controlli dati ADO e RDO sono una tecnologia meno recente rilasciata in una versione precedente di Visual Studio e potrebbero non essere disponibili nella versione corrente.  Per utilizzare le informazioni fornite in questa sezione, potrebbe essere necessario ottenere una versione precedente per acquisire il controllo appropriato.  
  
 **Controlli associati ai dati**  
 I controlli associati a dati sono utilizzati per presentare i dati.  Vengono connessi ai controlli dati per ricevere dati e li presentano tramite diverse interfacce utente.  Un'applicazione Visual C\+\+ è inoltre in grado di associare variabili ai valori di dati impostati nei controlli associati ai dati. Vedere [CWnd::BindProperty](../Topic/CWnd::BindProperty.md).  
  
 Per ulteriori informazioni sull'associazione dati, vedere:  
  
-   [Controlli ActiveX MFC: utilizzo dell'associazione dati in un controllo ActiveX](../../mfc/mfc-activex-controls-using-data-binding-in-an-activex-control.md)  
  
-   [Accesso ai dati: ADO e RDO](../../data/ado-rdo/data-access-ado-and-rdo.md)  
  
-   [Associazione dati ADO](../../data/ado-rdo/ado-databinding.md)  
  
-   [Associazione dati RDO](../../data/ado-rdo/rdo-databinding.md)  
  
-   [Classi wrapper](../../data/ado-rdo/wrapper-classes.md)  
  
-   [Impostazione dei gestori eventi nei controlli ActiveX](../../data/ado-rdo/setting-event-handlers-on-activex-controls.md)  
  
-   [Intercettazione degli errori](../../data/ado-rdo/error-trapping.md)  
  
-   [Limiti dell'associazione dati](../../data/ado-rdo/limitations-of-databinding.md)  
  
## Vedere anche  
 [Controlli associati a dati \(ADO e RDO\)](../../data/ado-rdo/data-bound-controls-ado-and-rdo.md)