---
title: -Commento sui costruttori | Documenti Microsoft
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
ms.openlocfilehash: f58c8410de51a4692dd0e7f018d40eaa28c0dae8
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929582"
---
# <a name="-constructors-comment"></a>// Commento sui costruttori
Il `// Constructors` sezione di una dichiarazione di classe MFC dichiara costruttori (nel senso C++), nonché le funzioni di inizializzazione necessarie per utilizzare effettivamente l'oggetto. Ad esempio, `CWnd::Create` si trova nella sezione costruttori perché prima di usare il `CWnd` dell'oggetto, che deve essere "completamente costruito" prima chiamata al costruttore di C++ e chiamando quindi il `Create` (funzione). In genere, questi membri sono pubblici.  
  
 Ad esempio, la classe `CStdioFile` dispone di tre costruttori, uno dei quali è indicato nell'elenco sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Usando i file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)

