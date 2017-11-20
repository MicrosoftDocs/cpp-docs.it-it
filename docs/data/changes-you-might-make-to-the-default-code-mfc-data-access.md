---
title: Le modifiche apportate al codice predefinito (accesso ai dati MFC) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: record views [C++], customizing default code
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a18b4bb1e544f2cc3d033d58a1c6c1a26eec98dc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="changes-you-might-make-to-the-default-code--mfc-data-access"></a>Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)
Il [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) fornisce una classe recordset che seleziona tutti i record in una singola tabella. È possibile modificare questo comportamento in uno o più dei modi seguenti:  
  
-   Impostare un filtro o un criterio di ordinamento per il recordset. Eseguire questa operazione in `OnInitialUpdate` dopo essere stata costruita ma prima che l'oggetto recordset relativo **aprire** viene chiamata la funzione membro. Per ulteriori informazioni, vedere [Recordset: applicazione di filtri dei record (ODBC)](../data/odbc/recordset-filtering-records-odbc.md) e [Recordset: ordinamento dei record (ODBC)](../data/odbc/recordset-sorting-records-odbc.md).  
  
-   Applicare i parametri al recordset. Specificare il valore effettivo dei parametri di runtime dopo il filtro. Per ulteriori informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)  
  
-   Passare una stringa SQL personalizzata per il [aprire](../mfc/reference/crecordset-class.md#open) funzione membro. Per una descrizione di ciò che è possibile eseguire con questa tecnica, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)