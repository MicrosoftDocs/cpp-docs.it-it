---
title: ODBC e classi di database
ms.date: 11/04/2016
helpviewer_keywords:
- database classes [C++], ODBC
- ODBC API functions [C++]
- ODBC classes [C++], MFC database classes
- MFC [C++], ODBC and
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
ms.openlocfilehash: 6511aab9bb048882fe9c3398dd17f769eb16220c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320057"
---
# <a name="odbc-and-the-database-classes"></a>ODBC e classi di database

Le classi di database ODBC MFC incapsulano le chiamate alle funzioni API ODBC che normalmente si fanno nelle funzioni membro delle classi [CDatabase](../../mfc/reference/cdatabase-class.md) e [CRecordset.](../../mfc/reference/crecordset-class.md) Ad esempio, le sequenze di chiamate ODBC complesse, l'associazione dei record restituiti alle posizioni di archiviazione, la gestione delle condizioni di errore e altre operazioni vengono gestite dall'utente dalle classi di database. Di conseguenza, si utilizza un'interfaccia di classe notevolmente più semplice per modificare i record tramite un oggetto recordset.

> [!NOTE]
> Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento o tramite le classi DAO (Data Access Object) MFC.

Sebbene le classi di database incapsulano la funzionalità ODBC, non forniscono un mapping uno a uno delle funzioni API ODBC. Le classi di database forniscono un livello superiore di astrazione, modellato in base agli oggetti di accesso ai dati disponibili in Microsoft Access e Microsoft Visual Basic. Per ulteriori informazioni, vedere [ODBC e MFC](../../data/odbc/odbc-and-mfc.md).

## <a name="see-also"></a>Vedere anche

[Nozioni di base su ODBCODBC Basics](../../data/odbc/odbc-basics.md)
