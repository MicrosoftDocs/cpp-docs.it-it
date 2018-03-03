---
title: Appunti | Documenti Microsoft
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
- cutting and copying data
- copying data
- Clipboard
- Clipboard, programming
- transferring data
ms.assetid: a71b2824-1f14-4914-8816-54578d73ad4e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 304f20f94880b0bd8cb671788c5c06b69d25d377
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clipboard"></a>Appunti
Questa serie di articoli viene illustrato come implementare il supporto per gli Appunti di Windows in applicazioni MFC. Appunti di Windows viene utilizzato in due modi:  
  
-   Implementazione di comandi di menu di modifica standard, ad esempio Taglia, copia e Incolla.  
  
-   Implementazione dati uniforme trasferimento con trascinare e rilasciare (OLE).  
  
 Gli Appunti sono il metodo standard di Windows per il trasferimento dei dati tra un'origine e una destinazione. Può anche essere molto utile per le operazioni OLE. Con l'avvento di OLE, sono disponibili due meccanismi di Appunti in Windows. Le API Appunti di Windows standard è ancora disponibile, ma è stata completata con il meccanismo di trasferimento di dati OLE. Trasferimento dati uniforme OLE (UDT) supporta le operazioni Taglia, copia e Incolla con gli Appunti e trascinamento della selezione.  
  
 Negli Appunti sono condiviso dall'intera sessione di Windows, pertanto non dispone di un handle o una classe di un proprio servizio di sistema. Per gestire gli Appunti mediante le funzioni membro della classe [CWnd](../mfc/reference/cwnd-class.md).  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Quando utilizzare ogni meccanismo di Appunti](../mfc/clipboard-when-to-use-each-clipboard-mechanism.md)  
  
-   [Tramite l'API Appunti di Windows tradizionale](../mfc/clipboard-using-the-windows-clipboard.md)  
  
-   [Utilizzo del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)  
  
-   [Copiare e incollare dati](../mfc/clipboard-copying-and-pasting-data.md)  
  
-   [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)  
  
-   [Appunti di Windows](https://msdn.microsoft.com/library/ms648709)  
  
-   [Implementazione di trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
