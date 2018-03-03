---
title: Stampa e anteprima di stampa | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- printing [MFC]
- previewing printing
- printing [MFC]
- print preview
- printing [MFC], print preview
ms.assetid: d15059cd-32de-4450-95f7-e73aece238f6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bedcf1ecf851ed6d9dd396ee6a82d6d2c058930b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="printing-and-print-preview"></a>Stampa e anteprima di stampa
MFC supporta la stampa e anteprima di stampa per i documenti del programma tramite la classe [CView](../mfc/reference/cview-class.md). Per la stampa di base e anteprima di stampa, è sufficiente eseguire l'override della classe di visualizzazione [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione membro, che è necessario eseguire comunque. Tale funzione è possibile disegnare la visualizzazione sullo schermo, per un contesto di dispositivo stampante per una stampante effettivo, o a un contesto di dispositivo che simula la stampante sullo schermo.  
  
 È anche possibile aggiungere codice per gestire la stampa di documenti con più pagine e l'anteprima, impaginare documenti stampati e di aggiungervi intestazioni e piè di pagina.  
  
 Questa serie di articoli viene illustrato come la stampa viene implementata in Microsoft Foundation classe libreria (MFC) e come sfruttare i vantaggi dell'architettura di stampa già incorporata in framework. Gli articoli illustrano inoltre come MFC supporta semplice implementazione della funzionalità di anteprima di stampa e come utilizzare e modificare tale funzionalità.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Stampa](../mfc/printing.md)  
  
-   [Architettura dell'anteprima di stampa](../mfc/print-preview-architecture.md)  
  
-   [Esempio](../visual-cpp-samples.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
