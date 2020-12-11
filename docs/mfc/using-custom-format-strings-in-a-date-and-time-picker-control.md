---
description: 'Altre informazioni su: uso di stringhe di formato personalizzate in un controllo selezione data e ora'
title: Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora
ms.date: 11/04/2016
helpviewer_keywords:
- CDateTimeCtrl class [MFC], display styles
- DateTimePicker control [MFC], display styles
- DateTimePicker control [MFC]
ms.assetid: 7d577f03-6ca0-4597-9093-50b78f304719
ms.openlocfilehash: 91add199ffd852a107588617d47a2fd51136596d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154552"
---
# <a name="using-custom-format-strings-in-a-date-and-time-picker-control"></a>Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora

Per impostazione predefinita, i controlli selezione data e ora forniscono tre tipi di formato (ogni formato corrispondente a uno stile univoco) per la visualizzazione della data o dell'ora corrente:

- **DTS_LONGDATEFORMAT** Visualizza la data nel formato esteso, producendo output come "mercoledì 3 gennaio 2000".

- **DTS_SHORTDATEFORMAT** Visualizza la data in formato breve, generando un output come "1/3/00".

- **DTS_TIMEFORMAT** Visualizza l'ora nel formato lungo, producendo un output simile a "5:31:42 PM".

Tuttavia, è possibile personalizzare l'aspetto della data o dell'ora utilizzando una stringa di formato personalizzata. Questa stringa personalizzata è costituita da caratteri di formato esistenti, caratteri non in formato o da una combinazione di entrambi. Una volta compilata la stringa personalizzata, effettuare una chiamata a [CDateTimeCtrl:: Seformatt](../mfc/reference/cdatetimectrl-class.md#setformat) passando la stringa personalizzata. Il controllo selezione data e ora visualizzerà quindi il valore corrente usando la stringa di formato personalizzata.

Nell'esempio di codice seguente, in cui *m_dtPicker* è l' `CDateTimeCtrl` oggetto, viene illustrata una possibile soluzione:

[!code-cpp[NVC_MFCControlLadenDialog#7](../mfc/codesnippet/cpp/using-custom-format-strings-in-a-date-and-time-picker-control_1.cpp)]

Oltre alle stringhe di formato personalizzate, i controlli selezione data e ora supportano anche i [campi di callback](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).

## <a name="see-also"></a>Vedi anche

[Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
