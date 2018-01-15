---
title: Accesso indipendente dai tipi ai controlli senza creazioni guidate codice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- dialog boxes [MFC], accessing controls
- dialog box controls [MFC], accessing
ms.assetid: 325b4927-d49b-42b4-8e0b-fc84f31fb059
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0c5a4adce63851620326add61857433b32e1fad5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="type-safe-access-to-controls-without-code-wizards"></a>Accesso indipendente dai tipi ai controlli senza creazioni guidate codice
Il primo approccio alla creazione di un accesso indipendente dai tipi ai controlli utilizza una funzione membro inline per eseguire il cast del tipo restituito dalla funzione membro `CWnd` della classe `GetDlgItem` per il tipo di controllo C++ appropriato, come nel seguente esempio:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#50](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_1.cpp)]  
  
 È quindi possibile utilizzare questa funzione membro per accedere al controllo in modo indipendente dai tipi con codice simile al seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#51](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Accesso indipendente dai tipi a controlli con creazioni guidate codice](../mfc/type-safe-access-to-controls-with-code-wizards.md)

