---
title: "Funzionalità di Record di visualizzare le classi (accesso ai dati MFC) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- record views, classes
- record view classes
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1c975aac0459a13a3fb95fdec3dff1a648b0efec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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