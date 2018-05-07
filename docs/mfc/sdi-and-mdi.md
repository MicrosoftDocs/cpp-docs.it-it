---
title: SDI e MDI | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- frame windows [MFC], SDI applications
- frame windows [MFC], MDI applications
- MFC, windows
- single document interface (SDI) [MFC], applications
- MDI [MFC], vs. SDI
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: db63efe8d7e2622610bb56f5e6885b72b705093b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="sdi-and-mdi"></a>SDI e MDI
MFC semplifica funzionare con interfaccia a documento singolo (SDI) e applicazioni di interfaccia a documenti multipli (MDI).  
  
 Le applicazioni SDI consentono solo una finestra cornice di documento aperto in una fase. Le applicazioni MDI consentono di documento più finestre cornice aperto nella stessa istanza di un'applicazione. Un'applicazione MDI con una finestra all'interno delle quali MDI più finestre figlio, che sono anch'esse finestre cornice, possono essere aperto, ognuno dei quali contiene un documento separato. In alcune applicazioni, le finestre figlio possono essere di tipi diversi, ad esempio grafico windows e windows di foglio di calcolo. In tal caso, la barra dei menu può essere modificato vengono attivate finestre figlio MDI di tipi diversi.  
  
> [!NOTE]
>  In Windows 95 e versioni successive, le applicazioni sono in genere SDI perché il sistema operativo ha adottato una visualizzazione "incentrata sul documento".  
  
 Per ulteriori informazioni, vedere [documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
