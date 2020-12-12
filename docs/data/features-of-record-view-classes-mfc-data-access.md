---
description: 'Altre informazioni su: funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)'
title: Funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- record views, classes
- record view classes
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
ms.openlocfilehash: bf2a0bd1a609fcb29eb945f60ab22c4632addf1b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116535"
---
# <a name="features-of-record-view-classes--mfc-data-access"></a>Funzionalità delle classi di visualizzazione di record (accesso ai dati MFC)

È possibile eseguire la programmazione dell'accesso ai dati basata su form con la classe [CFormView](../mfc/reference/cformview-class.md), ma [CRecordView](../mfc/reference/crecordview-class.md) è in genere una classe migliore da cui derivare. Oltre alle `CFormView` funzionalità, `CRecordView` :

- Fornisce il DDX (Dialog Data Exchange) tra i controlli modulo e l'oggetto recordset associato.

- Gestisce prima i comandi Move, Move Next, Move Previous e Move Last per spostarsi tra i record nell'oggetto recordset associato.

- Aggiorna le modifiche apportate al record corrente quando l'utente passa a un altro record.

Per altre informazioni sulla navigazione, vedere [visualizzazioni di record: supporto della navigazione in una visualizzazione di record](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).

## <a name="see-also"></a>Vedi anche

[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Elenco di driver ODBC](../data/odbc/odbc-driver-list.md)
