---
title: 'Campi di record: Utilizzo di RFX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: RFX (ODBC), implementing
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 28f1cd743a7ede904c99590e56f08b7020f77d82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="record-field-exchange-using-rfx"></a>Trasferimento di campi di record: utilizzo di RFX
In questo argomento viene illustrato l'utilizzo di RFX in relazione alle operazioni di framework.  
  
> [!NOTE]
>  Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di massa di righe, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Gli argomenti seguenti contengono informazioni correlate:  
  
-   [Campi di record: Utilizzo del codice della procedura guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md) introduce i componenti principali di RFX e viene illustrato il codice che la creazione guidata applicazione MFC e **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC ](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) per supportare RFX e modalità modificare il codice della procedura guidata.  
  
-   [Campi di record: Utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md) illustra la scrittura delle chiamate alle funzioni RFX nel `DoFieldExchange` eseguire l'override.  
  
 Nella tabella seguente viene illustrato il ruolo in relazione a ciò che il framework esegue automaticamente.  
  
### <a name="using-rfx-you-and-the-framework"></a>Utilizzo di RFX: Programmatore e Framework  
  
|Programmatore|Framework|  
|---------|-------------------|  

| Dichiarare le classi recordset con una procedura guidata. Specificare i tipi di dati e i nomi dei membri dati di campo. | La procedura guidata deriva un `CRecordset` classe e scrive un [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) eseguire l'override per l'utente, incluso un RFX chiamata di funzione per ogni membro di dati del campo. |  
| (Facoltativo) Aggiungere manualmente i membri di dati di parametro necessari alla classe. Aggiungere manualmente una chiamata di funzione RFX a `DoFieldExchange` per ogni membro dati di parametro, aggiungere una chiamata a [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype) per il gruppo di parametri e specificare il numero totale di parametri in [m_nParams ](../../mfc/reference/crecordset-class.md#m_nparams). Vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md). | |  
| (Facoltativo) Membri dati di campo associare manualmente colonne aggiuntive. Incrementare manualmente [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields). Vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). | |  

| Costruire un oggetto della classe recordset. Prima di utilizzare l'oggetto, impostare i valori del parametro di membri di dati, se presente. | Per motivi di efficienza, il framework preassocia i parametri mediante ODBC. Quando si passano i valori dei parametri, il framework li passa all'origine dati. Solo i valori dei parametri vengono inviati per ripetere la query, a meno che non sono state modificate le stringhe di ordinamento e/o di filtro. |  
| Aprire un oggetto recordset utilizzando [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open). | Esegue la query del recordset, associa le colonne ai membri di dati di campo del recordset e chiama `DoFieldExchange` per lo scambio di dati tra il primo record selezionato e i membri dati di campo del recordset. |  
| Scorrere il recordset utilizzando [CRecordset](../../mfc/reference/crecordset-class.md#move) o un comando di menu o sulla barra degli strumenti. | Chiamate `DoFieldExchange` per trasferire i dati per i membri di dati del campo del nuovo record corrente. |  
| Aggiungere, aggiornare ed eliminare i record. | Chiamate `DoFieldExchange` per trasferire i dati all'origine dati. |  
  
## <a name="see-also"></a>Vedere anche  
 [Campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)   
 [Scambio di campi di record: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)   
 [Recordset: Recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)   
 [Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)   
 [Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)

