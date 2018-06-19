---
title: Filosofia di progettazione classi generale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.mfc
dev_langs:
- C++
helpviewer_keywords:
- designing classes [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- classes [MFC], MFC class design
- Windows API [MFC], and MFC
ms.assetid: e6861ae0-1581-4d9c-9ddf-63f9afcdb913
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7b2d0915c4b2940e93b781e7a56e2640c64a7f20
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344363"
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
  
-   [Il Framework dell'applicazione](../mfc/application-framework.md)  
  
-   [Relazioni con l'API in linguaggio C](../mfc/relationship-to-the-c-language-api.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

