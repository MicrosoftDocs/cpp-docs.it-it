---
title: ODBC e classi di Database | Microsoft Docs
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
ms.openlocfilehash: 9e179bf7570ba2ce53369d59c836e8accf91e8de
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057942"
---
# <a name="odbc-and-the-database-classes"></a>ODBC e classi di database

Le classi di database ODBC MFC incapsulano le chiamate di funzione API ODBC è in genere renderebbe manualmente nel membro di funzioni dei [CDatabase](../../mfc/reference/cdatabase-class.md) e [CRecordset](../../mfc/reference/crecordset-class.md) classi. Ad esempio, le sequenze di chiamata ODBC complesse, l'associazione di record restituiti in posizioni di archiviazione, la gestione delle condizioni di errore e altre operazioni vengono gestite automaticamente da classi di database. Di conseguenza, si utilizza un'interfaccia di classe notevolmente più semplice per modificare i record tramite un oggetto recordset.

> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, o tramite le classi MFC oggetto DAO (Data Access).

Anche se le classi di database includono le funzionalità ODBC, non forniscono un mapping uno a uno di funzioni API ODBC. Le classi di database offrono un livello superiore di astrazione, basato sugli oggetti di accesso ai dati disponibili in Microsoft Access e Microsoft Visual Basic. Per altre informazioni, vedere [ODBC e MFC](../../data/odbc/odbc-and-mfc.md).

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)