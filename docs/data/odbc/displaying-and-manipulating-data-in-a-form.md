---
title: Visualizzazione e modifica di dati in un Form | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- forms [C++], displaying data
- displaying data [C++], forms
- ODBC [C++], forms
- record views [C++], displaying data
- data [MFC]
- data [MFC], displaying in a form
ms.assetid: c56185c4-12cb-40b1-b499-02b29ea83e3a
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1a7960780f1f83833e25c9a094a36314a299a042
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="displaying-and-manipulating-data-in-a-form"></a>Visualizzazione e modifica di dati in un form
Molte applicazioni di accesso ai dati selezionano dati e visualizzarli nei campi in un form. La classe di database [CRecordView](../../mfc/reference/crecordview-class.md) offre un [CFormView](../../mfc/reference/cformview-class.md) oggetto direttamente connesso a un oggetto recordset. Usa la visualizzazione dei record [(DDX) dialog data exchange](../../mfc/dialog-data-exchange-and-validation.md) per spostare i valori dei campi del record corrente dal recordset ai controlli nel form e per riportare informazioni aggiornate per il recordset. Il recordset, utilizza a sua volta, il trasferimento di campi di record (RFX) per spostare dati tra i membri di dati di campo e le colonne corrispondenti in una tabella nell'origine dati.  
  
 È possibile utilizzare la creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) per creare la classe di visualizzazione e la relativa classe recordset associato insieme.  
  
 Visualizzazione di record e il relativo recordset vengono eliminati quando si chiude il documento. Per ulteriori informazioni sulle visualizzazioni di record, vedere [visualizzazioni di Record](../../data/record-views-mfc-data-access.md). Per ulteriori informazioni su RFX, vedere [trasferimento di campi di Record (RFX)](../../data/odbc/record-field-exchange-rfx.md).  
  
## <a name="see-also"></a>Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)