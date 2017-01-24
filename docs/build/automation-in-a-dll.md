---
title: "Automazione in una DLL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "automazione [C++], DLL"
  - "DLL [C++], automazione"
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Automazione in una DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si sceglie l'opzione di automazione nella Creazione guidata DLL MFC, vengono forniti gli elementi indicati di seguito.  
  
-   Un file ODL \(Object Description Language\) iniziale  
  
-   Una direttiva include nel file STDAFX.H per Afxole.h  
  
-   Un'implementazione della funzione `DllGetClassObject`, che chiama la funzione **AfxDllGetClassObject**  
  
-   Un'implementazione della funzione `DllCanUnloadNow`, che chiama la funzione **AfxDllCanUnloadNow**  
  
-   Un'implementazione della funzione `DllRegisterServer`, che chiama la funzione [COleObjectFactory::UpdateRegistryAll](../Topic/COleObjectFactory::UpdateRegistryAll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Server di automazione](../mfc/automation-servers.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)