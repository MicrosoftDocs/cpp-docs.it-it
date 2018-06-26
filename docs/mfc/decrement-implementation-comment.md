---
title: -Commento all'implementazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Implementation comment in MFC source files
- comments, MFC
- MFC source files, Implementation comment
- comments, Implementation comments
ms.assetid: 4d799c07-8e71-4a6b-90ab-8282d6ff48ce
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89f87c33abfec7b9d055b589726639fcd741e59d
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930274"
---
# <a name="-implementation-comment"></a>// Commento all'implementazione
Il `// Implementation` sezione è la parte più importante di qualsiasi dichiarazione di classe MFC.  
  
 In questa sezione vengono ospitati tutti i dettagli di implementazione. Sia le variabili membro e funzioni membro possono essere visualizzati in questa sezione. Tutti gli elementi sotto la riga potrebbero cambiare nelle versioni future di MFC. A meno che non è possibile evitare tale situazione, è consigliabile non fare affidamento su dettagli riportati di seguito il `// Implementation` riga. Inoltre, i membri dichiarati sotto la riga di implementazione non sono documentati, anche se viene illustrata un'implementazione in note tecniche. Esegue l'override delle funzioni virtuali nella classe base si trovano in questa sezione, indipendentemente da quale sezione la funzione di classe di base è definita, poiché il fatto che una funzione esegue l'override dell'implementazione della classe base viene considerato un dettaglio di implementazione. In genere, questi membri sono protetti, ma non sempre.  
  
 Notare dal `CStdioFile` elenco sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md) che i membri dichiarati di sotto il `// Implementation` commento può essere dichiarato come **pubblica**, **protetto**, o **privato**. È consigliabile utilizzare solo questi membri con cautela, perché queste potrebbero cambiare in futuro. Dichiarazione di un gruppo di membri come **pubblica** potrebbe essere necessario per l'implementazione della libreria di classe funzionare correttamente. Tuttavia, ciò non significa che è possibile utilizzare in modo sicuro i membri dichiarati in modo.  
  
> [!NOTE]
>  È possibile commenti dei tipi rimanenti di sopra o sotto il `// Implementation` commento. In entrambi i casi, vengono descritti i tipi di membri dichiarati di sotto di essi. Se si verificano di sotto di `// Implementation` commento, è opportuno presupporre che i membri potrebbero cambiare nelle future versioni di MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Usando i file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Un esempio dei commenti](../mfc/an-example-of-the-comments.md)   
 [Commento sui costruttori](../mfc/decrement-constructors-comment.md)   
 [Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)

