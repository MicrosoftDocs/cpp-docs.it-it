---
title: ': Commento sui costruttori'
ms.date: 11/04/2016
helpviewer_keywords:
- constructors comment
- declarations, constructors
- MFC source files, Constructors comment
- declaring constructors, code comments
- comments, MFC
- comments, constructors comment
- constructors [MFC], declaring
- instance constructors, code comments
ms.assetid: f400774e-ba85-49ed-85b7-70ef2f7dcb2b
ms.openlocfilehash: e0d02af016a0c7bfb0869b7cdd30fe0db2975102
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62240861"
---
# <a name="-constructors-comment"></a>// Commento sui costruttori

Il `// Constructors` sezione di una dichiarazione di classe MFC dichiara costruttori (nel senso C++), nonché le funzioni di inizializzazione necessari per utilizzare davvero l'oggetto. Ad esempio, `CWnd::Create` si trova nella sezione costruttori perché prima di utilizzare il `CWnd` dell'oggetto, che deve essere "completamente costruito" prima chiamata al costruttore di C++ e quindi chiamando il `Create` (funzione). In genere, questi membri sono pubblici.

Ad esempio, class `CStdioFile` dispone di tre costruttori, uno dei quali viene visualizzato nell'elenco in [un esempio dei commenti](../mfc/an-example-of-the-comments.md).

## <a name="see-also"></a>Vedere anche

[Uso dei file di origine MFC](../mfc/using-the-mfc-source-files.md)<br/>
[Commento all'implementazione](../mfc/decrement-implementation-comment.md)<br/>
[Commento sugli attributi](../mfc/decrement-attributes-comment.md)<br/>
[Commento sulle operazioni](../mfc/decrement-operations-comment.md)<br/>
[Commento sui sottoponibili a override](../mfc/decrement-overridables-comment.md)
