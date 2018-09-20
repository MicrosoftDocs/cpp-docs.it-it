---
title: Commento sulle operazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Operations comment in MFC source files
- comments, MFC
- MFC source files, Operations comments
ms.assetid: f3bff48d-26be-4db6-8435-9e4d079838c9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 73c4a7a70c9f2ed987337426793bd462c2a94309
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46372496"
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

