---
title: "Filosofia di progettazione classi generale | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.mfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], progettazione classi MFC"
  - "progettazione di classi"
  - "MFC [C++], API Windows"
  - "Visual C, chiamate API Windows"
  - "API Windows [C++], e MFC"
ms.assetid: e6861ae0-1581-4d9c-9ddf-63f9afcdb913
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Filosofia di progettazione classi generale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Microsoft Windows è stato progettato molto prima del linguaggio C\+\+ diventi popolare.  Poiché migliaia di applicazioni utilizzano l'interfaccia di programmazione \(API\) di applicazione Windows del linguaggio C, tale interfaccia verrà gestita per il linguaggio prevedibile.  Qualsiasi interfaccia Windows C\+\+ deve essere sviluppata il linguaggio C procedurale API.  In questo modo si garantisce che le applicazioni C\+\+ potranno coesistere con le applicazioni C.  
  
 La libreria MFC è un'interfaccia orientata a oggetti finestre che soddisfa gli obiettivi di progettazione:  
  
-   Riduzione significativa impegno per scrivere un'applicazione per windows.  
  
-   Velocità di esecuzione paragonabile a quella del linguaggio C API.  
  
-   Sovraccarico minimo della dimensione del codice.  
  
-   Possibilità di chiamare direttamente le funzioni di windows C.  
  
-   Conversione più semplice di applicazioni esistenti C a C\+\+.  
  
-   Possibilità di sfruttare da base windows esistente del linguaggio C esperienza di programmazione.  
  
-   Utilizzo più semplice di API Windows con C\+\+ che con C.  
  
-   Più facile da utilizzare e astrazioni potenti funzionalità complesse come controlli ActiveX, supporto database, la stampa, le barre degli strumenti e barre di stato.  
  
-   API di Windows true per C\+\+ che consente di utilizzare le funzionalità del linguaggio C\+\+.  
  
 Per ulteriori informazioni sulla progettazione di librerie MFC, vedere:  
  
-   [Il framework applicazione](../mfc/application-framework.md)  
  
-   [Relazione al linguaggio C API](../mfc/relationship-to-the-c-language-api.md)  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)