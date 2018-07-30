---
title: Eventuali modifiche da apportare al codice predefinito (accesso ai dati MFC) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- record views [C++], customizing default code
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 29b5373bd9fb638e7ee4d20cba0c64b9354be70f
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39339198"
---
# <a name="changes-you-might-make-to-the-default-code--mfc-data-access"></a>Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)
Il [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) scrive una classe recordset che seleziona tutti i record in un'unica tabella. È possibile modificare questo comportamento in uno o più dei modi seguenti:  
  
-   Impostare un filtro o un criterio di ordinamento per il recordset. Eseguire questa operazione in `OnInitialUpdate` dopo essere stata costruita ma prima che l'oggetto recordset relativo `Open` viene chiamata la funzione membro. Per altre informazioni, vedere [Recordset: applicazione di filtri dei record (ODBC)](../data/odbc/recordset-filtering-records-odbc.md) e [Recordset: ordinamento dei record (ODBC)](../data/odbc/recordset-sorting-records-odbc.md).  
  
-   Applicare i parametri al recordset. Specificare il valore effettivo dei parametri di runtime dopo il filtro. Per altre informazioni, vedere [Recordset: applicazione di parametri a un Recordset (ODBC)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)  
  
-   Passare una stringa SQL personalizzata per il [aperto](../mfc/reference/crecordset-class.md#open) funzione membro. Per una descrizione di ciò che è possibile eseguire con questa tecnica, vedere [SQL: del Recordset SQL istruzione (ODBC personalizzazione)](../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)