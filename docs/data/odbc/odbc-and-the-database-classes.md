---
description: 'Ulteriori informazioni su: ODBC e le classi di database'
title: ODBC e classi di database
ms.date: 11/04/2016
helpviewer_keywords:
- database classes [C++], ODBC
- ODBC API functions [C++]
- ODBC classes [C++], MFC database classes
- MFC [C++], ODBC and
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
ms.openlocfilehash: 146170ddd97dfc2797fd1f755459f370be638ded
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326770"
---
# <a name="odbc-and-the-database-classes"></a>ODBC e classi di database

Le classi di database ODBC MFC incapsulano le chiamate della funzione API ODBC che in genere si rendono disponibili nelle funzioni membro delle classi [CDatabase](../../mfc/reference/cdatabase-class.md) e [CRecordset](../../mfc/reference/crecordset-class.md) . Ad esempio, le sequenze di chiamate ODBC complesse, il binding dei record restituiti ai percorsi di archiviazione, la gestione delle condizioni di errore e altre operazioni vengono gestite dalle classi di database. Di conseguenza, si utilizza un'interfaccia di classe molto più semplice per modificare i record tramite un oggetto recordset.

> [!NOTE]
> Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi DAO (Data Access Object) MFC.

Sebbene le classi di database incapsulano la funzionalità ODBC, non forniscono un mapping uno-a-uno delle funzioni API ODBC. Le classi di database forniscono un livello di astrazione più elevato, modellato dopo gli oggetti di accesso ai dati disponibili in Microsoft Access e Microsoft Visual Basic. Per ulteriori informazioni, vedere [ODBC e MFC](../../data/odbc/odbc-and-mfc.md).

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
