---
title: "Visualizzazione e modifica di dati in un form | Microsoft Docs"
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
  - "dati [MFC]"
  - "dati [MFC], visualizzazione in un form"
  - "visualizzazione di dati [C++], form"
  - "form [C++], visualizzazione di dati"
  - "ODBC [C++], form"
  - "visualizzazioni di record [C++], visualizzazione di dati"
ms.assetid: c56185c4-12cb-40b1-b499-02b29ea83e3a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Visualizzazione e modifica di dati in un form
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La maggior parte delle applicazioni di accesso ai dati seleziona i dati e li visualizza nei campi di un form.  La classe di database [CRecordView](../../mfc/reference/crecordview-class.md) fornisce un oggetto [CFormView](../../mfc/reference/cformview-class.md) connesso direttamente a un oggetto recordset.  La visualizzazione dei record utilizza il meccanismo [Dialog Data Exchange \(DDX\)](../../mfc/dialog-data-exchange-and-validation.md) per spostare i valori dei campi del record corrente dal recordset ai controlli del form e per spostare i dati aggiornati nuovamente nel recordset.  Il recordset, a sua volta, utilizza il meccanismo di trasferimento di campi di record \(RFX\) per lo scambio di dati tra i relativi membri dati di campo e le colonne corrispondenti di una tabella nell'origine dati.  
  
 È possibile utilizzare la Creazione guidata applicazione MFC o il comando **Aggiungi classe**, come descritto in [Aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md), per creare insieme la classe di visualizzazione e la classe del recordset associato.  
  
 La visualizzazione dei record e il relativo recordset vengono eliminati quando si chiude il documento.  Per ulteriori informazioni sulle visualizzazioni di record, vedere [Visualizzazioni di record](../../data/record-views-mfc-data-access.md).  Per ulteriori informazioni su RFX, vedere [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md).  
  
## Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)