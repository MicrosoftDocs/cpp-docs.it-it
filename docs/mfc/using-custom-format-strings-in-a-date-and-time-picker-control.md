---
title: Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora
ms.date: 11/04/2016
helpviewer_keywords:
- CDateTimeCtrl class [MFC], display styles
- DateTimePicker control [MFC], display styles
- DateTimePicker control [MFC]
ms.assetid: 7d577f03-6ca0-4597-9093-50b78f304719
ms.openlocfilehash: 8da5ecaf473d6d3c35ddc1b95ac856ce8c12f163
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57286886"
---
# <a name="using-custom-format-strings-in-a-date-and-time-picker-control"></a>Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora

Per impostazione predefinita, i controlli selezione data e ora offrono che tre tipi (ognuno dei quali corrisponde a uno stile univoco) di formato per visualizzare la data corrente o l'ora:

- **DTS_LONGDATEFORMAT** Visualizza la data in formato esteso, un output simile al "Mercoledì, 3 gennaio 2000".

- **DTS_SHORTDATEFORMAT** Visualizza la data in formato abbreviato, di output, ad esempio "1/3/00".

- **DTS_TIMEFORMAT** Visualizza il tempo in formato esteso, un output, ad esempio "5:31:42 PM".

Tuttavia, è possibile personalizzare l'aspetto della data o ora usando una stringa di formato personalizzato. Questa stringa personalizzata è costituita da caratteri di formato esistente, nonformat caratteri o una combinazione di entrambi. Dopo aver compilata la stringa personalizzata, effettuare una chiamata a [CDateTimeCtrl:: SetFormat](../mfc/reference/cdatetimectrl-class.md#setformat) passando la stringa personalizzata. Il controllo di selezione data e ora verrà quindi visualizzato il valore corrente usando la stringa di formato personalizzato.

Esempio di codice seguente (dove *m_dtPicker* è il `CDateTimeCtrl` oggetto) viene illustrata una possibile soluzione:

[!code-cpp[NVC_MFCControlLadenDialog#7](../mfc/codesnippet/cpp/using-custom-format-strings-in-a-date-and-time-picker-control_1.cpp)]

Oltre alle stringhe di formato personalizzato, selezione data e ora controlli supportano inoltre [campi callback](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).

## <a name="see-also"></a>Vedere anche

[Uso di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
