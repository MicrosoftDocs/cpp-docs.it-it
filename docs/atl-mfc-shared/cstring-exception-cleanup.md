---
title: "CString Exception Cleanup | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CString objects, eccezioni"
  - "gestione eccezioni, cleanup code"
ms.assetid: 28b9ce70-be63-4a0d-92a8-44bbfbc95e83
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CString Exception Cleanup
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle versioni precedenti di MFC, è importante che la eliminati dagli oggetti [CString](../atl-mfc-shared/reference/cstringt-class.md).  Con la versione 3,0 di MFC e pulizia successiva e esplicita non è più necessario.  
  
 Sotto il meccanismo di gestione delle eccezioni C\+\+ che MFC utilizza, non è necessario preoccuparsi per la pulitura dopo un'eccezione.  Per una descrizione di come C\+\+ "annulla" lo stack dopo che viene intercettata un'eccezione, vedere [provare, il latch e istruzioni throw](../cpp/try-throw-and-catch-statements-cpp.md).  Anche se si utilizzano le macro MFC **TRY**\/**CATCH** anziché le parole chiave **try** e **catch**C\+\+, MFC utilizza il meccanismo di eccezione C\+\+ in, pertanto non è necessario liberare esplicitamente.  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)   
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)