---
title: ": Commento all'implementazione"
ms.date: 11/04/2016
helpviewer_keywords:
- Implementation comment in MFC source files
- comments, MFC
- MFC source files, Implementation comment
- comments, Implementation comments
ms.assetid: 4d799c07-8e71-4a6b-90ab-8282d6ff48ce
ms.openlocfilehash: 377997b66c5b9c005d1e1bee24890b756621b672
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261050"
---
# <a name="-implementation-comment"></a>// Commento all'implementazione

Il `// Implementation` sezione è la parte più importante di qualsiasi dichiarazione di classe MFC.

In questa sezione sono contenuti tutti i dettagli di implementazione. Sia le variabili membro e funzioni membro possono essere visualizzati in questa sezione. Tutti gli elementi sotto questa riga potrebbe cambiare nelle versioni future di MFC. A meno che non è possibile evitare, non basarsi su sotto i dettagli di `// Implementation` riga. Inoltre, i membri dichiarati sotto la riga di implementazione non sono documentati, anche se viene illustrata un'implementazione in note tecniche. Esegue l'override di funzioni virtuali nella classe di base si trovano in questa sezione, indipendentemente dal fatto che sezione la funzione di classe di base è definita, in quanto il fatto che una funzione esegue l'override dell'implementazione della classe base viene considerato un dettaglio di implementazione. In genere, questi membri sono protetti, ma non sempre.

Si noterà il `CStdioFile` listato sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md) che i membri dichiarati di sotto il `// Implementation` commento può essere dichiarato come **pubblica**, **protetti**, oppure **private**. È necessario utilizzare solo questi membri con cautela, perché queste potrebbero cambiare in futuro. La dichiarazione di un gruppo di membri come **pubblica** potrebbero essere necessarie per l'implementazione della libreria di classi funzionare correttamente. Tuttavia, ciò non significa che è possibile utilizzare in modo sicuro i membri dichiarati così.

> [!NOTE]
>  È possibile trovare i commenti dei tipi rimanenti di sopra o sotto il `// Implementation` commento. In entrambi i casi, vengono descritti i tipi di membri dichiarati di sotto di essi. Se si verificano di sotto di `// Implementation` commento, è necessario presupporre che i membri potrebbero cambiare nelle future versioni di MFC.

## <a name="see-also"></a>Vedere anche

[Uso dei file di origine MFC](../mfc/using-the-mfc-source-files.md)<br/>
[Esempio dei commenti](../mfc/an-example-of-the-comments.md)<br/>
[Commento sui costruttori](../mfc/decrement-constructors-comment.md)<br/>
[Commento sugli attributi](../mfc/decrement-attributes-comment.md)<br/>
[Commento sulle operazioni](../mfc/decrement-operations-comment.md)<br/>
[Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)
