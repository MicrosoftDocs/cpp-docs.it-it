---
title: -Commento costruttori | Documenti Microsoft
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
ms.openlocfilehash: 71b78e74b4b8d974fceaf5f854c9890cd7cdd1a1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344165"
---
# <a name="-constructors-comment"></a>// Commento sui costruttori
Il `// Constructors` sezione di una dichiarazione di classe MFC dichiara costruttori (nel senso C++), nonché le funzioni di inizializzazione necessarie per utilizzare effettivamente l'oggetto. Ad esempio, `CWnd::Create` si trova nella sezione costruttori perché prima di usare il `CWnd` dell'oggetto, che deve essere "completamente costruito" prima di chiamare il costruttore di C++ e chiamando quindi il **crea** (funzione). In genere, questi membri sono pubblici.  
  
 Ad esempio, la classe `CStdioFile` dispone di tre costruttori, uno dei quali viene visualizzato nell'elenco sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento sugli attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)

