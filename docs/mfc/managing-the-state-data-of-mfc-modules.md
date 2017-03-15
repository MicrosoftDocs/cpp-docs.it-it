---
title: "Gestione dei dati dello stato dei moduli MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione dei dati [C++]"
  - "gestione dei dati [C++], moduli MFC"
  - "interfacce esportate e stato globale [C++]"
  - "stato globale [C++]"
  - "MFC [C++], gestione dei dati sullo stato"
  - "stato del modulo ripristinato"
  - "stati dei moduli, salvataggio e ripristino"
  - "più moduli"
  - "punti di ingresso della routine della finestra [C++]"
ms.assetid: 81889c11-0101-4a66-ab3c-f81cf199e1bb
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Gestione dei dati dello stato dei moduli MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono illustrati i dati relativi allo stato dei moduli MFC e come questo stato viene aggiornato quando il flusso di esecuzione \(il codice del percorso accetta con un'applicazione quando esegue\) entra o esce in un modulo.  Gli stati del modulo di commutazione a macro di `METHOD_PROLOGUE` e di `AFX_MANAGE_STATE` viene illustrato.  
  
> [!NOTE]
>  Il termine "modulo" qui si riferisce a un programma eseguibile, o a una DLL \(o al set di DLL\) che funziona indipendentemente dal resto dell'applicazione, ma utilizza una copia DLL condivisa di MFC.  Un controllo ActiveX è un tipico esempio di un modulo.  
  
 Come illustrato nella figura seguente, MFC include dati sullo stato di ogni modulo utilizzato in un'applicazione.  Esempi di questi dati includono gli handle di windows \(utilizzate per il caricamento delle risorse\), puntatori a `CWinApp` e agli oggetti correnti di `CWinThread` di un'applicazione, conteggi dei riferimenti OLE del modulo e varie mappe che gestiscono le connessioni tra l'handle di windows e le istanze corrispondenti degli oggetti MFC.  Tuttavia, se l'applicazione utilizza più moduli, i dati sullo stato di ogni modulo non sono applicazione ampia.  Piuttosto, ogni modulo ha una propria copia privata dei dati sullo stato di MFC.  
  
 ![Dati dello stato di un modulo singolo &#40;applicazione&#41;](../mfc/media/vc387n1.png "vc387N1")  
Dati sullo stato di un modulo singolo \(applicazione\)  
  
 I dati relativi allo stato di un form sono contenuti in una struttura e sono sempre disponibili tramite un puntatore a tale struttura.  Quando il flusso di esecuzione offre un modulo particolare, come illustrato nella figura seguente, che lo stato del modulo deve essere "current" o "efficace" per indicare.  Di conseguenza, ogni oggetto thread ha un puntatore all'effettiva struttura di stato dell'applicazione.  La conservazione del puntatore this aggiornato sempre è un elemento essenziale per gestire lo stato complessivo dell'applicazione e di mantenere l'integrità dello stato di ogni modulo.  L'errata gestione dello stato globale può produrre un comportamento imprevedibile di applicazione.  
  
 ![Dati dello stato di più moduli](../mfc/media/vc387n2.png "vc387N2")  
Dati sullo stato di più moduli  
  
 Ovvero ogni modulo è responsabile corretto di passare tra gli stati del modulo qualsiasi dei relativi punti di ingresso.  "Un punto di ingresso" è il punto in cui il flusso di esecuzione può immettere codice del form.  I punti di ingresso includono:  
  
-   [Funzioni esportate da una DLL](../mfc/exported-dll-function-entry-points.md)  
  
-   [Funzioni membro delle interfacce COM](../mfc/com-interface-entry-points.md)  
  
-   [Procedure della finestra](../mfc/window-procedure-entry-points.md)  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)