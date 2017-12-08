---
title: Lo scambio di dati | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- property sheets [MFC], data exchange
- exchanging data with property sheets [MFC]
- DDX (dialog data exchange) [MFC], property sheets
ms.assetid: 689f02d0-51a9-455b-8ffb-5b44f0aefa28
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: da94d04a2cddb416ca62a71dbfa232317d55e612
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="exchanging-data"></a>Scambio di dati
Come con la maggior parte delle finestre di dialogo, lo scambio di dati tra la finestra delle proprietà e l'applicazione è una delle più importanti funzioni della finestra delle proprietà. In questo articolo viene descritto come eseguire questa attività.  
  
 Scambio di dati con una finestra delle proprietà è effettivamente una questione di scambio di dati con le singole pagine della finestra delle proprietà. La procedura per lo scambio di dati con una pagina delle proprietà è la stessa di scambio di dati con una finestra di dialogo, poiché un [CPropertyPage](../mfc/reference/cpropertypage-class.md) oggetto è solo un elemento specializzato [CDialog](../mfc/reference/cdialog-class.md) oggetto. La procedura di utilizza il framework finestra di dialogo data exchange (DDX), che scambia dati tra i controlli in una finestra di dialogo casella e le variabili membro dell'oggetto finestra di dialogo.  
  
 L'importante differenza tra lo scambio di dati con una finestra delle proprietà e con una normale finestra di dialogo è che la finestra delle proprietà dispone di più pagine, pertanto è necessario scambiare dati con tutte le pagine delle proprietà. Per ulteriori informazioni su DDX, vedere [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).  
  
 Nell'esempio seguente viene illustrato lo scambio di dati tra una vista e due pagine di una finestra delle proprietà:  
  
 [!code-cpp[NVC_MFCDocView#4](../mfc/codesnippet/cpp/exchanging-data_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)
