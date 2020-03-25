---
title: Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views [C++], customizing default code
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
ms.openlocfilehash: 7ea616caf176cd1e9e2f26bee1339640067b4e3e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213462"
---
# <a name="changes-you-might-make-to-the-default-code--mfc-data-access"></a>Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)

La [creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) consente di scrivere una classe recordset che seleziona tutti i record in una singola tabella. È possibile modificare questo comportamento in uno o più dei modi seguenti:

- Impostare un filtro o un criterio di ordinamento per il recordset. Eseguire questa operazione in `OnInitialUpdate` dopo la costruzione dell'oggetto recordset ma prima che venga chiamata la relativa funzione membro `Open`. Per ulteriori informazioni, vedere [Recordset: filtro di record (ODBC)](../data/odbc/recordset-filtering-records-odbc.md) e [Recordset: ordinamento dei record (ODBC)](../data/odbc/recordset-sorting-records-odbc.md).

- Applicare i parametri al recordset. Specificare il valore effettivo dei parametri di runtime dopo il filtro. Per ulteriori informazioni, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)

- Passare una stringa SQL personalizzata alla funzione membro [Open](../mfc/reference/crecordset-class.md#open) . Per informazioni su ciò che è possibile eseguire con questa tecnica, vedere [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

## <a name="see-also"></a>Vedere anche

[Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)
