---
title: Relazione con l'API in linguaggio C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.mfc
dev_langs: C++
helpviewer_keywords:
- books [MFC], about MFC and Windows SDK
- books [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- Windows API [MFC], and MFC
ms.assetid: 334e8efc-f3cc-4018-bc2e-02908b2a39fe
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 26458242ab6afcf69d6e70065ba70e31f0adbe74
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="relationship-to-the-c-language-api"></a>Relazioni con l'API in linguaggio C
L'unica caratteristica che differenzia la libreria MFC (Microsoft Foundation Class) dalle altre librerie di classi per Windows è il mapping molto simile all'API Windows scritto nel linguaggio C. Inoltre, in genere è possibile combinare liberamente le chiamate alla libreria delle classi con chiamate dirette all'API Windows. L'accesso diretto, tuttavia, non implica che le classi siano una sostituzione completa dell'API. Gli sviluppatori talvolta devono eseguire comunque chiamate dirette ad alcune funzioni di Windows, ad esempio [SetCursor](http://msdn.microsoft.com/library/windows/desktop/ms648393) e [GetSystemMetrics](http://msdn.microsoft.com/library/windows/desktop/ms724385), ad esempio. Una funzione Windows viene sottoposta al wrapping da una funzione membro di una classe solo quando si presenta un chiaro vantaggio nel farlo.  
  
 Poiché talvolta è necessario effettuare chiamate a funzioni Windows native, è necessario avere accesso alla documentazione dell'API Windows in linguaggio C. Questa documentazione è inclusa con Microsoft Visual C++.  
  
> [!NOTE]
>  Per una panoramica del funzionamento il framework della libreria MFC, vedere [utilizzando le classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Filosofia di progettazione classi generale](../mfc/general-class-design-philosophy.md)
