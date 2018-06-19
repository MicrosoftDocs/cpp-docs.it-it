---
title: ODBC e classi di Database | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- database classes [C++], ODBC
- ODBC API functions [C++]
- ODBC classes [C++], MFC database classes
- MFC [C++], ODBC and
ms.assetid: b166f82d-6f85-4556-aac8-fb851235d22c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: abbb20b76f8e24a9b0f20961728dd8e428733654
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33088467"
---
# <a name="odbc-and-the-database-classes"></a>ODBC e classi di database
Le classi di database ODBC MFC includono le chiamate di funzione API ODBC verrebbe in genere eseguita manualmente nel membro funzioni del [CDatabase](../../mfc/reference/cdatabase-class.md) e [CRecordset](../../mfc/reference/crecordset-class.md) classi. Ad esempio, le sequenze di chiamata ODBC complesse, l'associazione di record restituito da posizioni di archiviazione, gestione delle condizioni di errore e altre operazioni vengono gestite automaticamente dalle classi di database. Di conseguenza, utilizzare un'interfaccia di classe notevolmente più semplice per modificare i record mediante un oggetto recordset.  
  
> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi MFC oggetto DAO (Data Access).  
  
 Sebbene le classi di database includono la funzionalità ODBC, non forniscono un mapping uno a uno di funzioni API ODBC. Le classi di database offrono un livello di astrazione, basato sugli oggetti di accesso ai dati disponibili in Microsoft Access e Microsoft Visual Basic. Per ulteriori informazioni, vedere [ODBC e MFC](../../data/odbc/odbc-and-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)