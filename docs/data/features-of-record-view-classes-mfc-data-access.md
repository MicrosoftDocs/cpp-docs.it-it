---
title: Funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views, classes
- record view classes
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
ms.openlocfilehash: 62597a3eb3f7a7e779ca57c9781565176df568d4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213434"
---
# <a name="features-of-record-view-classes--mfc-data-access"></a>Funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)

È possibile eseguire la programmazione dell'accesso ai dati basata su form con la classe [CFormView](../mfc/reference/cformview-class.md), ma [CRecordView](../mfc/reference/crecordview-class.md) è in genere una classe migliore da cui derivare. Oltre alle funzionalità `CFormView`, `CRecordView`:

- Fornisce il DDX (Dialog Data Exchange) tra i controlli modulo e l'oggetto recordset associato.

- Gestisce prima i comandi Move, Move Next, Move Previous e Move Last per spostarsi tra i record nell'oggetto recordset associato.

- Aggiorna le modifiche apportate al record corrente quando l'utente passa a un altro record.

Per altre informazioni sulla navigazione, vedere [visualizzazioni di record: supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).

## <a name="see-also"></a>Vedere anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco dei driver ODBC](../data/odbc/odbc-driver-list.md)
