---
title: Funzionalità di Record di visualizzare le classi (accesso ai dati MFC) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- record views, classes
- record view classes
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9b6717c0ef1167e01df2f5e8de14408b23a9dbb1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089572"
---
# <a name="features-of-record-view-classes--mfc-data-access"></a>Funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)
È possibile effettuare la programmazione di accesso ai dati basato su form con la classe [CFormView](../mfc/reference/cformview-class.md), ma [CRecordView](../mfc/reference/crecordview-class.md) è in genere una classe migliorata da cui derivare. Oltre ai relativi `CFormView` funzionalità, `CRecordView`:  
  
-   Fornisce dati DDX (dialog exchange) tra i controlli del form e l'oggetto recordset associato.  
  
-   Gestisce i comandi Move First, Move Next, Move Previous e Move Last per spostarsi tra i record nell'oggetto recordset associato.  
  
-   Aggiornamento delle modifiche al record corrente quando l'utente passa a un altro record.  
  
 Per ulteriori informazioni sulla navigazione, vedere [visualizzazioni di Record: supporto della navigazione in una visualizzazione di Record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)   
 [Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)