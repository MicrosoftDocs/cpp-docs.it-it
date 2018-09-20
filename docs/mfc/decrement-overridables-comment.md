---
title: ': Commento sui sottoponibili a override | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Overridables comment in MFC source files
- MFC source files, Overridables comment
- overriding, Overridables comment in MFC source files
- comments, MFC
ms.assetid: 8968dea5-0d94-451f-bcb2-991580e65ba2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d50fb62767f2130e89cb75df5d66f8c18ce2a097
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428057"
---
# <a name="-overridables-comment"></a>// Commento sui sottoponibili a override

Il `// Overridables` sezione di una dichiarazione di classe MFC sono funzioni virtuali che è possibile eseguire l'override in una classe derivata quando è necessario modificare il comportamento della classe di base. Sono in genere vengono denominate iniziando con "On", sebbene non sia strettamente necessario. Qui le funzioni sono progettate per essere sottoposto a override e spesso implementare o una sorta di "callback" o "hook". In genere, questi membri sono protetti.

Nella libreria MFC, le funzioni virtuali pure vengono sempre inserite in questa sezione. Una funzione virtuale pura in C++ è uno dei form:

`virtual void OnDraw( ) = 0;`

Nell'esempio di elenco dalla classe `CStdioFile`, in [un esempio dei commenti](../mfc/an-example-of-the-comments.md), l'elenco non include alcuna sezione sui sottoponibili a override. Classe `CDocument`, d'altra parte, elenca circa 10 funzioni membro sottoponibile a override.

In alcune classi, è anche possibile visualizzare il commento `// Advanced Overridables`. Si tratta di funzioni che solo avanzate ai programmatori devono tentare di eseguire l'override. Improbabile, è necessario eseguirne l'override.

> [!NOTE]
>  Le convenzioni descritte in questo articolo sono valide, in generale, per le proprietà e metodi di automazione (precedentemente noto come automazione OLE). I metodi di automazione sono simili alle operazioni di MFC. Le proprietà di automazione sono simili agli attributi MFC. Gli eventi di automazione (supportati per i controlli ActiveX, precedentemente noti come controlli OLE) sono simili alle funzioni membro sottoponibile a override di MFC.

## <a name="see-also"></a>Vedere anche

[Uso dei file di origine MFC](../mfc/using-the-mfc-source-files.md)<br/>
[Esempio dei commenti](../mfc/an-example-of-the-comments.md)<br/>
[Commento all'implementazione](../mfc/decrement-implementation-comment.md)<br/>
[Commento sui costruttori](../mfc/decrement-constructors-comment.md)<br/>
[Commento sugli attributi](../mfc/decrement-attributes-comment.md)<br/>
[Commento sulle operazioni](../mfc/decrement-operations-comment.md)

