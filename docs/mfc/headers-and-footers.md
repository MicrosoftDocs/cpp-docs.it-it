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
ms.openlocfilehash: 7024c57dbe41a579582d409d0536db0ca0bc46d6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620100"
---
# <a name="headers-and-footers"></a>Intestazioni e piè di pagina

In questo articolo viene illustrato come aggiungere intestazioni e piè di pagina a un documento stampato.

Quando si esamina un documento sullo schermo, il nome del documento e la posizione corrente nel documento vengono comunemente visualizzati in una barra del titolo e una barra di stato. Quando si esamina una copia stampata di un documento, è utile avere il nome e il numero di pagina visualizzati in un'intestazione o in un piè di pagina. Si tratta di un modo comune in cui anche i programmi WYSIWYG differiscono per la modalità di stampa e visualizzazione dello schermo.

La funzione membro [OnPrint](reference/cview-class.md#onprint) è la posizione appropriata per stampare le intestazioni o i piè di pagina perché viene chiamata per ogni pagina e perché viene chiamata solo per la stampa, non per la visualizzazione dello schermo. È possibile definire una funzione separata per stampare un'intestazione o un piè di pagina e passargli il contesto di dispositivo della stampante da `OnPrint` . Potrebbe essere necessario modificare l'origine o l'extent della finestra prima di chiamare [onpare](reference/cview-class.md#ondraw) per evitare che il corpo della pagina si sovrappongano all'intestazione o al piè di pagina. Potrebbe anche essere necessario modificare `OnDraw` perché la quantità del documento che si trova nella pagina potrebbe essere ridotta.

Un modo per compensare l'area rilevata dall'intestazione o dal piè di pagina consiste nell'usare il membro **m_rectDraw** di [CPrintInfo](reference/cprintinfo-structure.md). Ogni volta che viene stampata una pagina, questo membro viene inizializzato con l'area utilizzabile della pagina. Se si stampa un'intestazione o un piè di pagina prima di stampare il corpo della pagina, è possibile ridurre le dimensioni del rettangolo archiviato in **m_rectDraw** per tenere conto dell'area occupata dall'intestazione o dal piè di pagina. `OnPrint`Può quindi fare riferimento a **m_rectDraw** per individuare la quantità di spazio rimanente per la stampa del corpo della pagina.

Non è possibile stampare un'intestazione o qualsiasi altra parte da [OnPrepareDC](reference/cview-class.md#onpreparedc), perché viene chiamata prima che venga `StartPage` chiamata la funzione membro di [CDC](reference/cdc-class.md) . A questo punto, il contesto del dispositivo della stampante viene considerato a un limite di pagina. È possibile eseguire la stampa solo dalla `OnPrint` funzione membro.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Stampa di documenti multipagina](multipage-documents.md)

- [Allocazione di risorse GDI per la stampa](allocating-gdi-resources.md)

## <a name="see-also"></a>Vedere anche

[Stampa](printing.md)
