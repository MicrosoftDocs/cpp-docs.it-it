---
title: "Gestione di documenti e visualizzazioni | Microsoft Docs"
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
  - "documenti [C++], MFC"
  - "MFC [C++], documenti"
  - "MFC [C++], visualizzazioni"
  - "visualizzazioni [C++], MFC"
ms.assetid: 349b142d-1c5a-4b99-9de4-241e41d3d2f1
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Gestione di documenti e visualizzazioni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria MFC si basa su un'architettura documento\/visualizzazione per la maggior parte delle proprie funzionalità.  In genere, un documento memorizza i dati, mentre una visualizzazione li visualizza all'interno dell'area client di una finestra cornice e gestisce l'interazione degli utenti con i dati.  La visualizzazione comunica con il documento per recuperare e aggiornare i dati.  È possibile utilizzare le classi di database con o senza il framework.  
  
 Per ulteriori informazioni sull'utilizzo delle classi di database nel framework, vedere [MFC: utilizzo di classi di database con documenti e visualizzazioni](../../data/mfc-using-database-classes-with-documents-and-views.md).  
  
 In base all'impostazione predefinita, la Creazione guidata applicazioni MFC crea una struttura di applicazione che non supporta alcun database.  È tuttavia possibile selezionare opzioni per includere un minimo supporto di database o un supporto più completo basato su form.  Per ulteriori informazioni sulle opzioni della creazione guidata, vedere [Supporto di database e Creazione guidata applicazioni MFC](../../mfc/reference/database-support-mfc-application-wizard.md).  
  
 È inoltre possibile utilizzare le classi di database senza utilizzare l'architettura documento\/visualizzazione completa.  Per ulteriori informazioni, vedere [MFC: utilizzo di classi di database senza documenti e visualizzazioni](../../data/mfc-using-database-classes-without-documents-and-views.md).  
  
## Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)