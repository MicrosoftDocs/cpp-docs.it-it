---
title: Costruzione di oggetti in una fase e in due fasi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- objects [MFC], creating graphic objects
- object creation [MFC], graphic objects
- objects [MFC], graphic objects
- one-stage and two-stage construction of objects [MFC]
ms.assetid: 5a1c410c-4a4b-4dd9-a2ec-ced831aa7f21
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 677a29d4f0b65a9490f24a5906d606a05bb4573b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="one-stage-and-two-stage-construction-of-objects"></a>Costruzione di oggetti in una e due fasi
È possibile scegliere tra due tecniche per la creazione di oggetti grafici, ad esempio penne e pennelli:  
  
-   *Costruzione di una fase*: creare e inizializzare l'oggetto in un'unica fase, tutti i dati con il costruttore.  
  
-   *Due fasi*: creare e inizializzare l'oggetto in due fasi separate. Il costruttore crea l'oggetto e Inizializza una funzione di inizializzazione.  
  
 Due fasi sono sempre sicura. In una fase costruzione, il costruttore potrebbe generare un'eccezione se vengono forniti gli argomenti non corretti o l'allocazione di memoria ha esito negativo. Tale problema viene evitato da due fasi, anche se è necessario verificare la presenza di un errore. In entrambi i casi, l'eliminazione dell'oggetto è lo stesso processo.  
  
> [!NOTE]
>  Queste tecniche valide per la creazione di eventuali oggetti, non solo di oggetti grafici.  
  
## <a name="example-of-both-construction-techniques"></a>Esempio di entrambe le tecniche di costruzione  
 Nell'esempio seguente viene breve Mostra entrambi i metodi di creazione di un oggetto pen:  
  
 [!code-cpp[NVC_MFCDocViewSDI#6](../mfc/codesnippet/cpp/one-stage-and-two-stage-construction-of-objects_1.cpp)]  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Oggetti grafici](../mfc/graphic-objects.md)  
  
-   [Selezione di un oggetto grafico in un contesto di dispositivo](../mfc/selecting-a-graphic-object-into-a-device-context.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md)  
  
-   [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti grafici](../mfc/graphic-objects.md)

