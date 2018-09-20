---
title: ': Commento sui costruttori | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f03a65c3f870b1e7648f03b70efe7242c35a21f9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46429357"
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

