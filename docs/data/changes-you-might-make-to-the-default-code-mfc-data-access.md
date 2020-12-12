---
description: 'Altre informazioni su: modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)'
title: Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views [C++], customizing default code
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
ms.openlocfilehash: 431144eeaf7ef0a2413e4d9e3931016c2505d338
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181449"
---
# <a name="changes-you-might-make-to-the-default-code--mfc-data-access"></a>Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)

La [creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) consente di scrivere una classe recordset che seleziona tutti i record in una singola tabella. È possibile modificare questo comportamento in uno o più dei modi seguenti:

- Impostare un filtro o un criterio di ordinamento per il recordset. Eseguire questa operazione in `OnInitialUpdate` dopo che l'oggetto recordset è stato costruito ma prima che `Open` venga chiamata la funzione membro. Per ulteriori informazioni, vedere [Recordset: filtro di record (ODBC)](../data/odbc/recordset-filtering-records-odbc.md) e [Recordset: ordinamento dei record (ODBC)](../data/odbc/recordset-sorting-records-odbc.md).

- Applicare i parametri al recordset. Specificare il valore effettivo dei parametri di runtime dopo il filtro. Per ulteriori informazioni, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)

- Passare una stringa SQL personalizzata alla funzione membro [Open](../mfc/reference/crecordset-class.md#open) . Per informazioni su ciò che è possibile eseguire con questa tecnica, vedere [SQL: personalizzazione dell'istruzione SQL del recordset (ODBC)](../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

## <a name="see-also"></a>Vedi anche

[Uso di una visualizzazione di record](../data/using-a-record-view-mfc-data-access.md)
