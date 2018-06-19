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
ms.openlocfilehash: f2b365439f1681cf72bd58218ea4f55fbb2f44c1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33382002"
---
# <a name="using-custom-format-strings-in-a-date-and-time-picker-control"></a>Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora
Per impostazione predefinita, i controlli selezione data e ora forniscono che tre tipi (ognuno dei quali corrisponde a uno stile univoco) di formato per la visualizzazione della data o ora:  
  
-   **DTS_LONGDATEFORMAT** Visualizza la data in formato esteso, un output, ad esempio "Mercoledì 3 gennaio 2000".  
  
-   **DTS_SHORTDATEFORMAT** Visualizza la data in formato breve, un output, ad esempio "1/3/00".  
  
-   **DTS_TIMEFORMAT** Visualizza il tempo in formato esteso, un output, ad esempio "5:31:42 PM".  
  
 Tuttavia, è possibile personalizzare l'aspetto della data o ora utilizzando una stringa di formato personalizzata. La stringa personalizzata è costituita da caratteri di formato esistente, nonformat caratteri o una combinazione di entrambi. Una volta creata lo stringa personalizzato, effettuare una chiamata a [CDateTimeCtrl:: SetFormat](../mfc/reference/cdatetimectrl-class.md#setformat) passando la stringa personalizzata. Il controllo selezione data e ora visualizzerà quindi il valore corrente utilizzando la stringa di formato personalizzata.  
  
 Esempio di codice seguente (dove `m_dtPicker` è il `CDateTimeCtrl` oggetto) illustra una possibile soluzione:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#7](../mfc/codesnippet/cpp/using-custom-format-strings-in-a-date-and-time-picker-control_1.cpp)]  
  
 Oltre alle stringhe di formato personalizzate, selezione data e ora controlli supportano inoltre [campi callback](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

