---
title: Accesso indipendente dai tipi ai controlli senza creazioni guidate codice | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [MFC], accessing controls
- dialog box controls [MFC], accessing
ms.assetid: 325b4927-d49b-42b4-8e0b-fc84f31fb059
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bb861995c16411bb58e3051c5ffc78f75931ae8f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385765"
---
# <a name="type-safe-access-to-controls-without-code-wizards"></a>Accesso indipendente dai tipi ai controlli senza creazioni guidate codice
Il primo approccio alla creazione di un accesso indipendente dai tipi ai controlli utilizza una funzione membro inline per eseguire il cast del tipo restituito dalla funzione membro `CWnd` della classe `GetDlgItem` per il tipo di controllo C++ appropriato, come nel seguente esempio:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#50](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_1.cpp)]  
  
 È quindi possibile utilizzare questa funzione membro per accedere al controllo in modo indipendente dai tipi con codice simile al seguente:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#51](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Accesso indipendente dai tipi a controlli con creazioni guidate codice](../mfc/type-safe-access-to-controls-with-code-wizards.md)

