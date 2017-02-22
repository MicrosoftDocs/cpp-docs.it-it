---
title: "CWinApp: classe Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWinApp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application (classe)"
  - "CWinApp (classe), CWinThread"
  - "CWinApp (classe), multithreading"
  - "CWinApp (classe), WinMain"
  - "CwinThread (classe), e CWinApp"
  - "InitApplication (metodo)"
  - "MFC [C++], WinMain e"
  - "WinMain (metodo)"
  - "WinMain (metodo), in MFC"
ms.assetid: 935822bb-d463-481b-a5f6-9719d68ed1d5
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CWinApp: classe Application
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe principale dell'applicazione in MFC incapsula l'inizializzazione, l'esecuzione e la chiusura di un'applicazione in sistema operativo Windows.  Un'applicazione compilata nel framework deve essere presente un solo oggetto di una classe derivata da [CWinApp](../mfc/reference/cwinapp-class.md).  Questo oggetto viene costruito prima delle finestre vengano create.  
  
 `CWinApp` è derivato da `CWinThread`, che rappresenta il thread di esecuzione principale per l'applicazione, che potrebbe contenere uno o più thread.  Nelle versioni più recenti di MFC, `InitInstance`, **Esegui**, `ExitInstance` e le funzioni membro di `OnIdle` sono effettivamente all'interno di una classe `CWinThread`.  Queste funzioni sono descritte qui come se fossero membri di `CWinApp` al contrario, poiché la discussione sul ruolo di oggetto come oggetto applicazione anziché come thread primario.  
  
> [!NOTE]
>  La classe app costituisce il thread principale dell'applicazione di esecuzione.  Utilizzando le funzioni API Win32, è anche possibile creare i thread secondari di esecuzione.  Questi thread possono utilizzare la libreria MFC.  Per ulteriori informazioni, vedere [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
 Come qualsiasi programma per il sistema operativo Windows, l'applicazione del framework dispone di una funzione di `WinMain`.  In un'applicazione del framework, tuttavia, non si scrive `WinMain`.  Viene fornita dalla libreria di classi e viene chiamata all'avvio.  `WinMain` esegue i servizi standard come registrare le classi della finestra.  Quindi chiamare le funzioni membro dell'oggetto applicazione per inizializzare ed eseguire l'applicazione. È possibile personalizzare `WinMain` eseguire l'override delle funzioni membro di `CWinApp` che `WinMain` chiama.\)  
  
 Per inizializzare l'applicazione, `WinMain` chiama le funzioni membro di `InitApplication` e di `InitInstance` dell'applicazione.  Per eseguire il ciclo dell'applicazione, `WinMain` chiama la funzione membro di **Esegui**.  Nella chiusura, `WinMain` chiama la funzione membro di `ExitInstance` dell'oggetto applicazione.  
  
> [!NOTE]
>  I nomi mostrati in **bold** in questa documentazione indicano gli elementi forniti dalla libreria MFC e di Visual C\+\+.  I nomi mostrati in tipo di `monospaced` indicano gli elementi creati o override.  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CWinApp e la Creazione guidata applicazione MFC](../mfc/cwinapp-and-the-mfc-application-wizard.md)   
 [Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)   
 [Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)