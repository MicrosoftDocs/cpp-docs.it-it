---
title: "Classi e funzioni generate dalla Creazione guidata DLL MFC | Microsoft Docs"
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
  - "classi [C++], generate dalla Creazione guidata DLL MFC"
  - "codice [C++], generate dalla Creazione guidata DLL MFC"
  - "DLL [C++], classi e funzioni della creazione guidata"
  - "funzioni [MFC]"
  - "funzioni [MFC], DLL"
  - "Procedura guidata DLL MFC"
ms.assetid: e69e62fe-4953-42bf-a2fc-50bbf9bdaeaf
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi e funzioni generate dalla Creazione guidata DLL MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il codice generato dalla Creazione guidata DLL MFC dipende dal tipo di DLL che viene creato e dalle opzioni selezionate.  Per entrambi i tipi di DLL regolare viene generato lo stesso codice.  
  
|Tipo di DLL|Opzione|Classi|Funzioni|  
|-----------------|-------------|------------|--------------|  
|[Estensione](../../build/extension-dlls-overview.md)|None|None|`DllMain`|  
|[Regolare](../../build/regular-dlls-dynamically-linked-to-mfc.md)|None|Classe di applicazioni derivata da `CWinApp`|None|  
|[Regolare](../../build/regular-dlls-dynamically-linked-to-mfc.md)|Automazione|Classe di applicazioni derivata da `CWinApp`|**DllGetClassObjectDllCanUnloadNowDllRegisterServer**|  
|[Estensione](../../build/extension-dlls-overview.md)|Windows Sockets|None|`DllMain`|  
|[Regolare](../../build/regular-dlls-dynamically-linked-to-mfc.md)|Windows Sockets|Classe di applicazioni derivata da `CWinApp`|`InitInstance` contiene la chiamata a `AfxSocketInit`|  
  
## Vedere anche  
 [Procedura guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md)