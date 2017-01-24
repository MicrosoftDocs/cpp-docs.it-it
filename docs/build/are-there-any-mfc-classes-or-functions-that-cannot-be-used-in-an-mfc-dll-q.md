---
title: "Esistono funzioni o classi MFC che non &#232; possibile utilizzare in una DLL MFC? | Microsoft Docs"
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
  - "DLL [C++], MFC"
  - "DLL [C++], restrizioni"
  - "DLL MFC [C++], restrizioni"
ms.assetid: 18e2f1cb-4f72-4d3a-a951-3488208872c7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esistono funzioni o classi MFC che non &#232; possibile utilizzare in una DLL MFC?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le DLL di estensione utilizzano la classe derivata da `CWinApp` dell'applicazione client.  Non occorre che dispongano della propria classe derivata da `CWinApp`.  
  
 Le DLL regolari devono avere una classe derivata da `CWinApp` e un singolo oggetto di tale classe applicazione, come le applicazioni MFC.  A differenza dell'oggetto `CWinApp` di un'applicazione, l'oggetto `CWinApp` della DLL non dispone di un message pump principale.  
  
 Poiché il meccanismo `CWinApp::Run` non è applicabile a una DLL, l'applicazione possiede il message pump principale.  Se la DLL apre finestre di dialogo non modali o dispone di una propria finestra cornice principale, il message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL, che chiama a sua volta la funzione membro `CWinApp::PreTranslateMessage` dell'oggetto applicazione della DLL.  
  
## Vedere anche  
 [Domande frequenti relative alle DLL](../build/dll-frequently-asked-questions.md)