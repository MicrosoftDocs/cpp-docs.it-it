---
title: Intestazioni e piè di pagina
ms.date: 11/04/2016
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
ms.openlocfilehash: 1e2e57331ccbc7f0afd7b82dc035410af495abd8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62297229"
---
# <a name="headers-and-footers"></a>Intestazioni e piè di pagina

Questo articolo illustra come aggiungere intestazioni e piè di pagina a un documento stampato.

Quando si esamina un documento sullo schermo, il nome del documento e la posizione corrente nel documento comunemente vengono visualizzati in una barra del titolo e una barra di stato. Quando si esaminano stampare una copia di un documento, è utile avere il numero di pagina e nome visualizzato in un'intestazione o piè di pagina. Questo è un modo comune in cui WYSIWYG anche i programmi differiscono nel modo in cui eseguono la stampa e visualizzazione su schermo.

Il [OnPrint](../mfc/reference/cview-class.md#onprint) funzione membro è il posto appropriato per stampare le intestazioni o nei piè di pagina, perché viene chiamato per ogni pagina e perché viene chiamato solo per la stampa, non per la visualizzazione su schermo. È possibile definire una funzione separata per stampare un'intestazione o piè di pagina e passare il contesto di dispositivo stampante da `OnPrint`. Potrebbe essere necessario modificare l'origine di finestra o una misura prima di chiamare [OnDraw](../mfc/reference/cview-class.md#ondraw) per evitare che il corpo della sovrapposizione intestazione o nel piè di pagina. Potrebbe anche essere necessario modificare `OnDraw` perché è stato possibile ridurre la quantità del documento che si inserisce nella pagina.

Un modo per compensare per l'area occupata dall'intestazione o piè di pagina è possibile utilizzare il **m_rectDraw** appartenente [CPrintInfo](../mfc/reference/cprintinfo-structure.md). Ogni volta che una pagina viene stampata, questo membro viene inizializzato con l'area utilizzabile della pagina. Se si stampa un'intestazione o piè di pagina prima di stampare il corpo della pagina, è possibile ridurre le dimensioni del rettangolo di cui è archiviato in **m_rectDraw** per tenere conto per l'area occupata dall'intestazione o piè di pagina. Quindi `OnPrint` può fare riferimento a **m_rectDraw** per scoprire come area disponibile per la stampa del corpo della pagina.

Non è possibile stampare un'intestazione o qualsiasi altra App, dalla [OnPrepareDC](../mfc/reference/cview-class.md#onpreparedc), perché viene chiamato prima il `StartPage` funzione membro di [CDC](../mfc/reference/cdc-class.md) è stato chiamato. A questo punto, il contesto di dispositivo stampante viene considerato un limite di pagina. È possibile eseguire la stampa solo dal `OnPrint` funzione membro.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Stampa di documenti con più pagine](../mfc/multipage-documents.md)

- [Allocazione di risorse GDI per la stampa](../mfc/allocating-gdi-resources.md)

## <a name="see-also"></a>Vedere anche

[Stampa](../mfc/printing.md)
