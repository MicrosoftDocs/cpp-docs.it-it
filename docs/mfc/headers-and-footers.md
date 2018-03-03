---
title: "Intestazioni e piè di pagina | Documenti Microsoft"
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
- printing [MFC], multipage documents
- page headers [MFC], printing
- headers [MFC], printing
- footers [MFC], printing
- page footers [MFC], printing
- page headers [MFC]
- printing [MFC], headers and footers
- page footers [MFC]
ms.assetid: b0be9c53-5773-4955-a777-3c15da745128
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7525cba7d05c4d04f0548bd2dc774503b284c220
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="headers-and-footers"></a>Intestazioni e piè di pagina
In questo articolo viene illustrato come aggiungere intestazioni e piè di pagina a un documento stampato.  
  
 Quando si esamina un documento sullo schermo, in una barra del titolo e una barra di stato sono visualizzati in genere il nome del documento e la posizione corrente nel documento. Quando si esamina una copia di un documento stampata, è utile avere il nome e numero di pagina visualizzato in un'intestazione o piè di pagina. Questo è un modo comune in cui WYSIWYG anche programmi differiscono in modo eseguono la stampa e visualizzazione su schermo.  
  
 Il [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro è nella posizione appropriata per stampare le intestazioni e piè di pagina, perché viene chiamato per ogni pagina e perché viene chiamato solo per la stampa, non per la visualizzazione su schermo. È possibile definire una funzione separata per stampare un'intestazione o piè di pagina e passare il contesto di dispositivo stampante da `OnPrint`. Potrebbe essere necessario modificare l'origine di finestra o una misura prima di chiamare [OnDraw](../mfc/reference/cview-class.md#ondraw) per evitare che il corpo della sovrapposizione intestazione o nel piè di pagina. Potrebbe inoltre essere necessario modificare `OnDraw` perché la quantità del documento soddisfa la pagina potrebbe essere ridotto.  
  
 Un modo per compensare la modifica per l'area occupata dall'intestazione o piè di pagina è possibile utilizzare il **m_rectDraw** membro di [CPrintInfo](../mfc/reference/cprintinfo-structure.md). Ogni volta che una pagina viene stampata, questo membro viene inizializzato con l'area utilizzabile della pagina. Se si stampa un'intestazione o piè di pagina prima di stampare il corpo della pagina, è possibile ridurre le dimensioni del rettangolo di cui è archiviato in **m_rectDraw** per tenere conto dell'area occupata dall'intestazione o piè di pagina. Quindi `OnPrint` può fare riferimento a **m_rectDraw** per scoprire come area disponibile per la stampa del corpo della pagina.  
  
 Non è possibile stampare un'intestazione o qualsiasi altra origine, da [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc), perché viene chiamato prima di `StartPage` funzione membro di [CDC](../mfc/reference/cdc-class.md) è stato chiamato. A questo punto, il contesto di dispositivo stampante è considerato un limite di pagina. È possibile eseguire la stampa solo dal `OnPrint` funzione membro.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Stampa di documenti con più pagine](../mfc/multipage-documents.md)  
  
-   [Allocazione di risorse GDI per la stampa](../mfc/allocating-gdi-resources.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Stampa](../mfc/printing.md)

