---
title: ': Commento sulle operazioni'
ms.date: 11/04/2016
helpviewer_keywords:
- Operations comment in MFC source files
- comments, MFC
- MFC source files, Operations comments
ms.assetid: f3bff48d-26be-4db6-8435-9e4d079838c9
ms.openlocfilehash: 7e4d0549d3d77916df532f105dc58ed9e9f78af2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326192"
---
# <a name="-operations-comment"></a>// Commento sulle operazioni

Il `// Operations` sezione di una dichiarazione di classe MFC sono funzioni membro che è possibile chiamare l'oggetto consentono di eseguire operazioni o eseguire azioni (operazioni). Queste funzioni sono in genere non -**const** perché in genere presentano effetti collaterali. Potrebbero essere non virtuali a seconda delle esigenze della classe o virtuale. In genere, questi membri sono pubblici.

Nell'esempio di elenco dalla classe `CStdioFile`, in [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco include due funzioni membro con questo commento: `ReadString` e `WriteString`.

Come con gli attributi, operazioni possono essere ulteriormente suddiviso.

## <a name="see-also"></a>Vedere anche

[Uso dei file di origine MFC](../mfc/using-the-mfc-source-files.md)<br/>
[Esempio dei commenti](../mfc/an-example-of-the-comments.md)<br/>
[Commento all'implementazione](../mfc/decrement-implementation-comment.md)<br/>
[Commento sui costruttori](../mfc/decrement-constructors-comment.md)<br/>
[Commento sugli attributi](../mfc/decrement-attributes-comment.md)<br/>
[Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)
