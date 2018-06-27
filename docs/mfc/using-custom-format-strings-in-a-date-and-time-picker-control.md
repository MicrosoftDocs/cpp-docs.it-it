---
title: Utilizzo di stringhe di formato personalizzate in una selezione data e ora controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CDateTimeCtrl class [MFC], display styles
- DateTimePicker control [MFC], display styles
- DateTimePicker control [MFC]
ms.assetid: 7d577f03-6ca0-4597-9093-50b78f304719
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9aeb6c02041a4ba90f9721f23a1397e17a4cdf81
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955758"
---
# <a name="using-custom-format-strings-in-a-date-and-time-picker-control"></a>Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora
Per impostazione predefinita, controlli selezione data e ora forniscono che tre tipi (ognuno dei quali corrisponde a uno stile univoco) di formato per la visualizzazione corrente data / ora:  
  
-   **DTS_LONGDATEFORMAT** Visualizza la data in formato esteso, un output, ad esempio "Mercoledì 3 gennaio 2000".  
  
-   **DTS_SHORTDATEFORMAT** Visualizza la data in formato breve, un output, ad esempio "1/3/00".  
  
-   **DTS_TIMEFORMAT** Visualizza il tempo in formato esteso, un output, ad esempio "5:31:42 PM".  
  
 Tuttavia, è possibile personalizzare l'aspetto di data / ora utilizzando una stringa di formato personalizzata. Questa stringa personalizzato è costituita da caratteri di formato esistente, nonformat caratteri o una combinazione di entrambi. Una volta creata lo stringa personalizzato, effettuare una chiamata a [CDateTimeCtrl:: SetFormat](../mfc/reference/cdatetimectrl-class.md#setformat) passando la stringa personalizzata. Il controllo di selezione data e ora verrà quindi visualizzato il valore corrente usando la stringa di formato personalizzata.  
  
 Esempio di codice seguente (dove *m_dtPicker* è il `CDateTimeCtrl` oggetto) illustra una possibile soluzione:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#7](../mfc/codesnippet/cpp/using-custom-format-strings-in-a-date-and-time-picker-control_1.cpp)]  
  
 Oltre alle stringhe di formato personalizzate, selezione data e ora controlli supportano inoltre [campi callback](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

