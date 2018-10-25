---
title: Utilizzo di documenti e visualizzazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], documents
- MFC [C++], views
- views [C++], MFC
- documents [C++], MFC
ms.assetid: 349b142d-1c5a-4b99-9de4-241e41d3d2f1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c3879c6a29f95cc908d12c0b899214b521f46686
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060443"
---
# <a name="working-with-documents-and-views"></a>Gestione di documenti e visualizzazioni

La libreria Microsoft Foundation Classes (MFC) si basa su un'architettura documento/visualizzazione per molte delle sue funzionalità. In genere, un documento archivia i dati e lo visualizza nell'area client di una finestra cornice e gestisce l'interazione dell'utente con i dati di una vista. La vista comunica con il documento per ottenere e aggiornare i dati. È possibile usare le classi di database con il framework o senza di essa.

Per altre informazioni sull'uso di classi di database in framework, vedere [MFC: utilizzo di classi di Database con documenti e visualizzazioni](../../data/mfc-using-database-classes-with-documents-and-views.md).

Per impostazione predefinita, la creazione guidata applicazione MFC crea una struttura applicazione senza supporto del database. Tuttavia, è possibile selezionare le opzioni per includere supporto minime del database o un supporto più completo basato su form. Per altre informazioni sulle opzioni di creazione guidata applicazione, vedere [supporto di Database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md).

È anche possibile usare le classi di database senza utilizzare l'architettura documento/visualizzazione completa. Per altre informazioni, vedere [MFC: utilizzo di classi di Database senza documenti e visualizzazioni](../../data/mfc-using-database-classes-without-documents-and-views.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)