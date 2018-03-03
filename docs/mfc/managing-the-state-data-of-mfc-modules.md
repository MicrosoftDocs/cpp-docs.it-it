---
title: Gestione dei dati dello stato dei moduli MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- global state [MFC]
- data management [MFC], MFC modules
- window procedure entry points [MFC]
- exported interfaces and global state [MFC]
- module states [MFC], saving and restoring
- data management [MFC]
- MFC, managing state data
- multiple modules [MFC]
- module state restored [MFC]
ms.assetid: 81889c11-0101-4a66-ab3c-f81cf199e1bb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2d070bb91d9c1c229feaa563123c12702a7b5027
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="managing-the-state-data-of-mfc-modules"></a>Gestione dei dati dello stato dei moduli MFC
Questo articolo illustra i dati dello stato dei moduli MFC e modalità di aggiornamento di questo stato quando il flusso di esecuzione (il codice di percorso richiede tramite un'applicazione durante l'esecuzione) entra ed esce da un modulo. Stati dei moduli con cambio di `AFX_MANAGE_STATE` e `METHOD_PROLOGUE` descritta anche le macro.  
  
> [!NOTE]
>  Il termine "modulo" qui si riferisce a un programma eseguibile o una DLL (o set di DLL) che operano in modo indipendente dal resto dell'applicazione, ma utilizza una copia della DLL MFC condivisa. Un controllo ActiveX è un esempio tipico di un modulo.  
  
 Come illustrato nella figura seguente, MFC include dati di stato per ogni modulo utilizzato in un'applicazione. Esempi di tali dati handle di istanza di Windows (utilizzati per il caricamento delle risorse), i puntatori all'oggetto corrente `CWinApp` e `CWinThread` gli oggetti di un'ampia gamma di mappe che gestiscono le connessioni tra un'applicazione e i conteggi dei riferimenti modulo OLE Windows oggetto handle e delle corrispondenti istanze degli oggetti MFC. Tuttavia, quando un'applicazione usa più moduli, i dati dello stato di ogni modulo non sono applicazione wide. Invece, ogni modulo dispone della propria copia privata dei dati dello stato di MFC.  
  
 ![Dati sullo stato di un singolo modulo &#40; applicazione &#41; ] (../mfc/media/vc387n1.gif "vc387n1")  
Dati sullo stato di un modulo singolo (applicazione)  
  
 Dati relativi allo stato di un modulo sono contenuti in una struttura ed sono sempre disponibile tramite un puntatore alla struttura. Quando il flusso di esecuzione entra in un modulo specifico, come illustrato nella figura seguente, lo stato del modulo che deve essere lo stato "effettivo" o "corrente". Pertanto, ogni oggetto thread dispone di un puntatore alla struttura di stato effettivo dell'applicazione. Mantenendo l'indicatore di misura aggiornato in tutti i casi è fondamentale per la gestione dello stato globale dell'applicazione e per mantenere l'integrità dello stato di ogni modulo. Gestione non corretta dello stato globale può causare comportamenti imprevedibili dell'applicazione.  
  
 ![I dati di più moduli di stato](../mfc/media/vc387n2.gif "vc387n2")  
Dati sullo stato di più moduli  
  
 In altre parole, ogni modulo è responsabile correttamente il passaggio tra stati dei moduli in tutti i relativi punti di ingresso. Un "punto di ingresso" è in qualsiasi luogo in cui il flusso di esecuzione possibile immettere il codice del modulo. Punti di ingresso includono:  
  
-   [Funzioni esportate in una DLL](../mfc/exported-dll-function-entry-points.md)  
  
-   [Funzioni membro delle interfacce COM](../mfc/com-interface-entry-points.md)  
  
-   [Routine della finestra](../mfc/window-procedure-entry-points.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

