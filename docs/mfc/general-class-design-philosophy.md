---
title: Filosofia di progettazione classi generale | Documenti Microsoft
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
- designing classes [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- classes [MFC], MFC class design
- Windows API [MFC], and MFC
ms.assetid: e6861ae0-1581-4d9c-9ddf-63f9afcdb913
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c174b06b27e78ca61d2608b8e04205068ac436e9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="general-class-design-philosophy"></a>Filosofia di progettazione classi generale
Microsoft Windows è stato progettato molto prima che il linguaggio C++ è diventato più diffuso. Poiché migliaia di applicazioni di utilizza il linguaggio C Windows application programming interface (API), tale interfaccia verrà mantenuta in futuro. Qualsiasi interfaccia di Windows in C++ deve pertanto essere integrata nell'API in linguaggio C procedura. In questo modo si garantisce che le applicazioni C++ sarà in grado di coesistere con le applicazioni C.  
  
 La libreria Microsoft Foundation Class è un'interfaccia orientata a oggetti di Windows che soddisfi gli obiettivi di progettazione seguenti:  
  
-   Riduzione significativa nel tentativo di scrivere un'applicazione per Windows.  
  
-   Velocità di esecuzione è analogo a quello dell'API in linguaggio C.  
  
-   Overhead di dimensione minima di codice.  
  
-   Possibilità di chiamare qualsiasi funzione C di Windows direttamente.  
  
-   Conversione semplificata delle applicazioni esistenti di C da C++.  
  
-   Possibilità di sfruttare dalla base dell'esperienza di programmazione Windows in linguaggio C esistente.  
  
-   Semplificare l'utilizzo dell'API di Windows con C++ rispetto con C.  
  
-   Più facile da utilizzare ancora potente astrazioni di complicata funzionalità quali controlli ActiveX, supporto database, la stampa, barre degli strumenti e le barre di stato.  
  
-   API Windows true per C++ che utilizza in modo efficace le funzionalità del linguaggio C++.  
  
 Per ulteriori informazioni sulla progettazione della libreria MFC, vedere:  
  
-   [Il Framework applicazione](../mfc/application-framework.md)  
  
-   [Relazioni con l'API in linguaggio C](../mfc/relationship-to-the-c-language-api.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

