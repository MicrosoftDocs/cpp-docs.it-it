---
title: Classi ODBC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.data
dev_langs:
- C++
helpviewer_keywords:
- database classes [MFC], ODBC
- ODBC classes [MFC]
ms.assetid: 6c40fca8-3033-4873-9abe-7f51725de0e0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98ef4509e7e7570d8c07013f0287fe01105e154a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348140"
---
# <a name="odbc-classes"></a>Classi ODBC
Queste classi vengono utilizzate con le altre classi di framework applicazione per fornire facile accesso a un'ampia gamma di database per cui sono disponibili driver Open Database Connectivity (ODBC).  
  
 I programmi che utilizzano ODBC database saranno necessario almeno un `CDatabase` oggetto e un `CRecordset` oggetto.  
  
 [CDatabase](../mfc/reference/cdatabase-class.md)  
 Incapsula una connessione a un'origine dati, tramite il quale è possibile utilizzare l'origine dati.  
  
 [CRecordset](../mfc/reference/crecordset-class.md)  
 Incapsula un set di record selezionati da un'origine dati. Recordset Abilita lo scorrimento di record a altro, l'aggiornamento di record (aggiunta, modifica ed eliminazione di record), la selezione di qualificazione con un filtro, ordinamento la selezione e applicazione di parametri di selezione con le informazioni ottenute o calcolate in fase di esecuzione.  
  
 [CRecordView](../mfc/reference/crecordview-class.md)  
 Fornisce una visualizzazione connessa direttamente a un oggetto recordset. Il dialog data exchange (DDX) meccanismo scambia dati tra il recordset e i controlli di visualizzazione dei record. Come tutte le visualizzazioni di form, una visualizzazione di record è basata su una risorsa modello di finestra di dialogo. Visualizzazioni di record supportano anche lo spostamento di tutti i record del recordset, aggiornando i record e la chiusura di recordset associato quando si chiude la visualizzazione dei record.  
  
 [CDBException](../mfc/reference/cdbexception-class.md)  
 Eccezione generata da errori di accesso ai dati di elaborazione. Questa classe viene utilizzato lo stesso scopo di altre classi di eccezioni nel meccanismo di gestione delle eccezioni della libreria di classi.  
  
 [CFieldExchange](../mfc/reference/cfieldexchange-class.md)  
 Fornisce informazioni di contesto per supportare il trasferimento di campi di record (RFX), che scambia dati tra i membri dati di campi e membri di dati di parametro di un oggetto recordset e le colonne della tabella corrispondente nell'origine dati. Analoga alla classe [CDataExchange](../mfc/reference/cdataexchange-class.md), allo stesso modo utilizzato per lo scambio di dati di finestra di dialogo (DDX).  
  
## <a name="related-classes"></a>Classi correlate  
 [CLongBinary](../mfc/reference/clongbinary-class.md)  
 Incapsula un handle di archiviazione per un oggetto binario di grandi dimensioni (BLOB), ad esempio una bitmap. `CLongBinary` gli oggetti vengono utilizzati per gestire gli oggetti di grandi quantità di dati archiviati nelle tabelle di database.  
  
 [CDBVariant](../mfc/reference/cdbvariant-class.md)  
 Consente di archiviare un valore senza doversi preoccupare di tipo di dati del valore. `CDBVariant` Registra il tipo di dati del valore corrente, che viene archiviato in un'unione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

