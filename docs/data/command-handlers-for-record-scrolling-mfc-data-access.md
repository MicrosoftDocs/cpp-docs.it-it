---
title: "Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC) | Microsoft Docs"
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
  - "scorrimento di record [C++]"
  - "visualizzazioni di record [C++], scorrimento"
  - "scorrimento di record"
ms.assetid: f8b13477-2a37-459e-a30c-806fb78165ac
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione dei comandi per lo scorrimento dei record (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi [CRecordView](../mfc/reference/crecordview-class.md) e [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) garantiscono una gestione dei comandi predefinita per i seguenti comandi standard:  
  
-   **ID\_RECORD\_MOVE\_FIRST**  
  
-   **ID\_RECORD\_MOVE\_LAST**  
  
-   **ID\_RECORD\_MOVE\_NEXT**  
  
-   **ID\_RECORD\_MOVE\_PREV**  
  
 La funzione membro `OnMove` delle classi `CRecordView` e `CDaoRecordView` garantisce una gestione dei comandi predefinita per tutti e quattro i comandi che consentono lo spostamento da un record all'altro.  Quando vengono eseguiti tali comandi, RFX \(o DFX\) carica il nuovo record nei campi del recordset e DDX sposta i valori nei controlli del form del record.  Per informazioni su RFX, vedere [Trasferimento di campi di record \(RFX\)](../data/odbc/record-field-exchange-rfx.md).  
  
> [!NOTE]
>  Usare sempre questi ID di comando standard per qualsiasi oggetto di interfaccia utente associato ai comandi standard di navigazione tra i record.  
  
## Vedere anche  
 [Supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md)