---
title: SDI e MDI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- frame windows [MFC], SDI applications
- frame windows [MFC], MDI applications
- MFC, windows
- single document interface (SDI) [MFC], applications
- MDI [MFC], vs. SDI
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 1d8a1a902b5e1a7c09a0ed043f87bfa5c7819482
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sdi-and-mdi"></a>SDI e MDI
MFC semplifica funzionare con interfaccia a documento singolo (SDI) e applicazioni di interfaccia a documenti multipli (MDI).  
  
 Le applicazioni SDI consentono solo una finestra cornice di documento aperto in una fase. Le applicazioni MDI consentono di documento più finestre cornice aperto nella stessa istanza di un'applicazione. Un'applicazione MDI con una finestra all'interno delle quali MDI più finestre figlio, che sono anch'esse finestre cornice, possono essere aperto, ognuno dei quali contiene un documento separato. In alcune applicazioni, le finestre figlio possono essere di tipi diversi, ad esempio grafico windows e windows di foglio di calcolo. In tal caso, la barra dei menu può essere modificato vengono attivate finestre figlio MDI di tipi diversi.  
  
> [!NOTE]
>  In Windows 95 e versioni successive, le applicazioni sono in genere SDI perché il sistema operativo ha adottato una visualizzazione "incentrata sul documento".  
  
 Per ulteriori informazioni, vedere [documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)