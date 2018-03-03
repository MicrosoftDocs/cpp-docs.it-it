---
title: La selezione e modifica di record | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- records, selecting
- record selection, MFC ODBC classes
- ODBC recordsets, selecting records
ms.assetid: 7f0b3a4a-9941-4475-a612-9ec8d15b7691
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dec5e0094405cf9d038e53959da97ba079736505
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="selecting-and-manipulating-records"></a>Selezione e modifica di record
In genere quando si selezionano record da un'origine dati utilizzando un database SQL **selezionare** istruzione ottenere un set di risultati, ovvero un set di record da una tabella o una query. Con le classi di database, utilizzare un oggetto recordset per selezionare e accedere al set di risultati. Si tratta di un oggetto di una classe specifica dell'applicazione che è possibile derivare dalla classe [CRecordset](../../mfc/reference/crecordset-class.md). Quando si definisce una classe recordset, specificare l'origine dati a cui associare la tabella da utilizzare e le colonne della tabella. La creazione guidata applicazione MFC o **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) Crea una classe con una connessione a un'origine dati specifica. Le procedure guidate scrivono il [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql) funzione membro di classe `CRecordset` per restituire il nome della tabella. Per ulteriori informazioni sull'utilizzo delle procedure guidate per creare classi di recordset, vedere [supporto Database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md) e [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md).  
  
 Utilizzando un [CRecordset](../../mfc/reference/crecordset-class.md) dell'oggetto in fase di esecuzione, è possibile:  
  
-   Esaminare i campi di dati del record corrente.  
  
-   Filtrare o ordinare il recordset.  
  
-   Personalizzare il valore predefinito SQL **selezionare** istruzione.  
  
-   Scorrere i record selezionati.  
  
-   Aggiungere, aggiornare o eliminare i record (se l'origine dati e il recordset sono aggiornabili).  
  
-   Verificare se il recordset consente di ripetizione di query e aggiornare il contenuto.  
  
 Al termine dell'utilizzo dell'oggetto recordset, chiudere ed eliminarlo. Per ulteriori informazioni sugli oggetti Recordset, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)