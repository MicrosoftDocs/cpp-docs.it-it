---
title: "Registrazione di classi di finestre | Microsoft Docs"
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
  - "WndProc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AfxRegisterWndClass (metodo)"
  - "classi [C++], registrazione di classi di finestra"
  - "MFC, finestre"
  - "registrazione di classi di finestra"
  - "Registro di sistema, registrazione di classi"
  - "classi di finestra, registrazione"
  - "WinMain (metodo)"
  - "WinMain (metodo), e registrazione di classi di finestra"
  - "WndProc (metodo)"
ms.assetid: 30994bc4-a362-43da-bcc5-1bf67a3fc929
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Registrazione di classi di finestre
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La finestra "classi" nella programmazione tradizionale per Windows definisce le caratteristiche di una "classe" \(non una classe C\+\+\) da cui possono essere create un numero qualsiasi di finestre.  Questo tipo di classe è un template o un modello per la creazione di finestre.  
  
## Registrazione delle classi di finestre in programmi tradizionali per Windows  
 In un programma tradizionale per Windows, senza MFC, si elaborano tutti i messaggi in una finestra nella sua "procedura della finestra" o "**WndProc**". **WndProc** viene associato ad una finestra mediante un processo di "registrazione della classe finestra".  La finestra principale è registrata nella funzione `WinMain`, ma altre classi di finestre possono essere registrate in qualsiasi punto dell'applicazione.  La registrazione dipende da una struttura che contiene un puntatore alla funzione **WndProc** insieme alle specifiche del cursore, del pennello per lo sfondo, e così via.  La struttura viene passata come parametro, insieme al nome in stringa della classe, in una precedente chiamata alla funzione **RegisterClass**.  Pertanto, una classe di registrazione può essere condivisa da più finestre.  
  
## Registrazione della classe della finestra in programmi MFC  
 Al contrario, la maggior parte delle operazioni di registrazione della classe della finestra viene eseguita automaticamente in un programma del framework MFC.  Se si utilizza MFC, solitamente la classe della finestra C\+\+ viene derivata da una classe di libreria esistente utilizzando la normale sintassi di C\+\+ per l'ereditarietà di classe.  Il framework utilizza ancora le tradizionali "classi di registrazione" e fornisce i diversi standard, registrati per voi quando necessario.  È possibile registrare le classi aggiuntive di registrazione chiamando la funzione globale [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) e quindi si passa la classe registrata alla funzione membro **Crea** di `CWnd`.  Come descritto in questo argomento, la tradizionale "classe di registrazione" di Windows non deve essere confusa con la classe C\+\+.  
  
 Per ulteriori informazioni, vedere [Nota Tecnica 1](../mfc/tn001-window-class-registration.md).  
  
## Vedere anche  
 [Creazione di finestre](../mfc/creating-windows.md)