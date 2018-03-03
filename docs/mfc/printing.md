---
title: Stampa | Documenti Microsoft
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
- view classes [MFC], print operations
- documents [MFC], printing
- printing [MFC], from framework
- printing [MFC]
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 01ee396a7866179bd140f203192d1bdcbfb4681e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="printing"></a>Stampa
Microsoft Windows implementa visualizzazione indipendenti dal dispositivo. In MFC, ciò significa che le stesse chiamate di disegnare, nel `OnDraw` funzione membro di classe di visualizzazione sono responsabili del disegno sullo schermo e su altri dispositivi, ad esempio le stampanti. Anteprima di stampa, il dispositivo di destinazione è un output su stampante simulato sullo schermo.  
  
##  <a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a>Il ruolo nella stampa e il ruolo del Framework  
 Classe di visualizzazione ha le responsabilità seguenti:  
  
-   Il framework che indicano il numero di pagine è nel documento.  
  
-   Quando viene richiesto per stampare una pagina specifica, disegna la parte del documento.  
  
-   Allocare e deallocare i tipi di carattere o altre risorse di interface (GDI) di dispositivo di grafica necessari per la stampa.  
  
-   Se necessario, inviare i codici di escape necessari per modificare la modalità della stampante prima di stampare una pagina, ad esempio, per modificare l'orientamento in base a una pagina di stampa.  
  
 Responsabilità del framework sono i seguenti:  
  
-   Visualizzazione di **stampa** la finestra di dialogo.  
  
-   Creare un [CDC](../mfc/reference/cdc-class.md) oggetto per la stampante.  
  
-   Chiamare il [StartDoc](../mfc/reference/cdc-class.md#startdoc) e [EndDoc](../mfc/reference/cdc-class.md#enddoc) funzioni membro del `CDC` oggetto.  
  
-   Chiamare ripetutamente il [StartPage](../mfc/reference/cdc-class.md#startpage) funzione membro del `CDC` dell'oggetto, che indicano la classe di visualizzazione quale pagina deve essere stampato e chiamare il [EndPage](../mfc/reference/cdc-class.md#endpage) funzione membro del `CDC` oggetto.  
  
-   Chiamare le funzioni sottoponibili a override nella visualizzazione in momenti appropriati.  
  
 Gli articoli seguenti viene illustrato come il framework supporta la stampa e anteprima di stampa:  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Procedura di stampa predefinita](../mfc/how-default-printing-is-done.md)  
  
-   [Documenti con più pagine](../mfc/multipage-documents.md)  
  
-   [Intestazioni e piè di pagina](../mfc/headers-and-footers.md)  
  
-   [Allocazione di risorse GDI per la stampa](../mfc/allocating-gdi-resources.md)  
  
-   [Anteprima di stampa](../mfc/print-preview-architecture.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Stampa e anteprima di stampa](../mfc/printing-and-print-preview.md)

