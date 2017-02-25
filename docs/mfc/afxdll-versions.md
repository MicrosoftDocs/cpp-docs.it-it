---
title: "Versioni AFXDLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "afxdll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFXDLL (libreria)"
  - "creazioni guidate applicazione [C++], AFXDLL utilizzata da valore predefinito"
  - "versione DLL di MFC [C++]"
  - "MFC [C++], versione di AFXDLL"
  - "DLL MFC [C++], collegamento dinamico alla libreria"
  - "librerie MFC [C++], collegamento dinamico"
ms.assetid: c078ae8f-85a9-43cb-9ded-c09ca2c45723
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Versioni AFXDLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Anziché compilare l'applicazione collegandola alle librerie di codice oggetto MFC, è possibile sviluppare l'applicazione utilizzare una delle librerie di AFXDLL, che contengono MFC in una DLL che le applicazioni eseguite più possono condividere.  Per una tabella dei nomi di AFXDLL, vedere [DLL: Convenzioni di denominazione](../build/naming-conventions-for-mfc-dlls.md).  
  
> [!NOTE]
>  Per impostazione predefinita, la Creazione guidata applicazione MFC crea un progetto di AFXDLL.  Per utilizzare il collegamento statico del codice MFC, anziché impostare l'opzione **Usa MFC in una libreria statica** nella Creazione guidata applicazione MFC.  Collegamento statico non è disponibile nell'edizione Standard di Visual C\+\+.  
  
## Vedere anche  
 [Versioni di librerie MFC](../mfc/mfc-library-versions.md)