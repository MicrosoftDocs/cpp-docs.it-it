---
title: Le funzionalità di Record di visualizzazione classi (accesso ai dati MFC) | Microsoft Docs
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
ms.openlocfilehash: b1c99b8b271b4948584d9bdb25c74518fe835573
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093220"
---
# <a name="features-of-record-view-classes--mfc-data-access"></a>Funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)

È possibile eseguire la programmazione di accesso ai dati basato su form con la classe [CFormView](../mfc/reference/cformview-class.md), ma [CRecordView](../mfc/reference/crecordview-class.md) è in genere una classe migliore da cui derivare. Oltre al relativo `CFormView` funzionalità, `CRecordView`:  
  
- Fornisce dati DDX (dialog exchange) tra i controlli del form e l'oggetto recordset associato.  
  
- Gestisce i comandi Move First, Move Next, Move Previous e Move Last per lo spostamento tra i record nell'oggetto recordset associato.  
  
- Aggiornamento delle modifiche al record corrente quando l'utente passa a un altro record.  
  
Per altre informazioni sulla navigazione, vedere [visualizzazioni di Record: supporto della navigazione in una visualizzazione di Record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).  
  
## <a name="see-also"></a>Vedere anche  

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)