---
title: Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views [C++], customizing default code
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
ms.openlocfilehash: fc448ae1e13025a83b33386c2845bdf7bb4d5eec
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398021"
---
# <a name="changes-you-might-make-to-the-default-code--mfc-data-access"></a>Modifiche che è possibile apportare al codice predefinito (accesso ai dati MFC)

Il [Creazione guidata applicazione MFC](../mfc/reference/database-support-mfc-application-wizard.md) scrive una classe recordset che seleziona tutti i record in un'unica tabella. È possibile modificare questo comportamento in uno o più dei modi seguenti:

- Impostare un filtro o un criterio di ordinamento per il recordset. Eseguire questa operazione in `OnInitialUpdate` dopo essere stata costruita ma prima che l'oggetto recordset relativo `Open` viene chiamata la funzione membro. Per altre informazioni, vedere [Recordset: Filtrare i record (ODBC)](../data/odbc/recordset-filtering-records-odbc.md) e [Recordset: Ordinamento dei record (ODBC)](../data/odbc/recordset-sorting-records-odbc.md).

- Applicare i parametri al recordset. Specificare il valore effettivo dei parametri di runtime dopo il filtro. Per altre informazioni, vedere [Recordset: parametrizzazione di un recordset (ODBC)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)

- Passare una stringa SQL personalizzata per il [aperto](../mfc/reference/crecordset-class.md#open) funzione membro. Per una descrizione di ciò che è possibile eseguire con questa tecnica, vedere [SQL: Personalizzazione di istruzione SQL del Recordset (ODBC)](../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).

## <a name="see-also"></a>Vedere anche

[Uso di una visualizzazione di Record](../data/using-a-record-view-mfc-data-access.md)