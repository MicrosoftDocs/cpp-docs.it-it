---
title: Gestione dei dati dello stato dei moduli MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e5c2bced4f7f04cf75c72e68db0f99e0f89d2566
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930516"
---
# <a name="managing-the-state-data-of-mfc-modules"></a>Gestione dei dati dello stato dei moduli MFC
Questo articolo illustra i dati dello stato dei moduli MFC e modalità di aggiornamento di questo stato quando il flusso di esecuzione (il codice di percorso accetta tramite un'applicazione durante l'esecuzione) entra ed esce da un modulo. Viene anche illustrato in cambio di stati dei moduli con le macro AFX_MANAGE_STATE e METHOD_PROLOGUE.  
  
> [!NOTE]
>  Il termine "modulo" qui si riferisce a un programma eseguibile o una DLL (o set di DLL) che operano in modo indipendente dal resto dell'applicazione, ma utilizza una copia della DLL MFC condivisa. Un controllo ActiveX è un esempio tipico di un modulo.  
  
 Come illustrato nella figura seguente, MFC include dati di stato per ogni modulo utilizzato in un'applicazione. Esempi di questi dati includono gli handle dell'istanza di Windows (utilizzati per il caricamento delle risorse), i puntatori all'oggetto corrente `CWinApp` e `CWinThread` gli oggetti di un'applicazione, i conteggi dei riferimenti modulo OLE e una varietà di mappe che gestiscono le connessioni tra Windows oggetto handle e istanze corrispondenti degli oggetti MFC. Tuttavia, quando un'applicazione usa più moduli, i dati dello stato di ogni modulo non sono applicazione "wide". Piuttosto, ogni modulo con la propria copia privata dei dati dello stato di MFC.  
  
 ![I dati di un singolo modulo di stato &#40;applicazione&#41;](../mfc/media/vc387n1.gif "vc387n1")  
Dati sullo stato di un modulo singolo (applicazione)  
  
 Dati relativi allo stato di un modulo sono contenuti in una struttura ed sono sempre disponibili tramite un puntatore alla struttura. Quando il flusso di esecuzione entra in un modulo specifico, come illustrato nella figura seguente, lo stato del modulo deve essere lo stato "effettivo" o "corrente". Pertanto, ogni oggetto thread dispone di un puntatore alla struttura di stato effettivo dell'applicazione. Mantenere l'indicatore di misura aggiornati affatto volte in cui è fondamentale per la gestione dello stato globale dell'applicazione e per mantenere l'integrità dello stato di ogni modulo. Gestione corretta dello stato globale può causare comportamenti imprevedibili dell'applicazione.  
  
 ![Dati di più moduli dello stato](../mfc/media/vc387n2.gif "vc387n2")  
Dati sullo stato di più moduli  
  
 In altre parole, ciascun modulo è responsabile correttamente il passaggio tra stati dei moduli in tutti i relativi punti di ingresso. Un "punto di ingresso" sia in qualsiasi luogo in cui il flusso di esecuzione possibile immettere il codice del modulo. Punti di ingresso includono:  
  
-   [Funzioni esportate in una DLL](../mfc/exported-dll-function-entry-points.md)  
  
-   [Funzioni membro delle interfacce COM](../mfc/com-interface-entry-points.md)  
  
-   [Routine della finestra](../mfc/window-procedure-entry-points.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

