---
title: -Commento costruttori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1f6425252df34936d4ba3c9013664205b0038d82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="-constructors-comment"></a>// Commento sui costruttori
Il `// Constructors` sezione di una dichiarazione di classe MFC dichiara costruttori (nel senso C++), nonché le funzioni di inizializzazione necessarie per utilizzare effettivamente l'oggetto. Ad esempio, `CWnd::Create` si trova nella sezione costruttori perché prima di usare il `CWnd` dell'oggetto, che deve essere "completamente costruito" prima di chiamare il costruttore di C++ e chiamando quindi il **crea** (funzione). In genere, questi membri sono pubblici.  
  
 Ad esempio, la classe `CStdioFile` dispone di tre costruttori, uno dei quali viene visualizzato nell'elenco sotto [un esempio dei commenti](../mfc/an-example-of-the-comments.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo dei file di origine MFC](../mfc/using-the-mfc-source-files.md)   
 [Commento all'implementazione](../mfc/decrement-implementation-comment.md)   
 [Commento di attributi](../mfc/decrement-attributes-comment.md)   
 [Commento sulle operazioni](../mfc/decrement-operations-comment.md)   
 [Commento sottoponibili a override](../mfc/decrement-overridables-comment.md)

