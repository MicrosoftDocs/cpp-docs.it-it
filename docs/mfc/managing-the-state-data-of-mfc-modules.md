---
title: Gestione dei dati dello stato dei moduli MFC
ms.date: 11/19/2018
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
ms.openlocfilehash: 64888b8ab53ebd80f328e1efe79df6256f30f9b6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622577"
---
# <a name="managing-the-state-data-of-mfc-modules"></a>Gestione dei dati dello stato dei moduli MFC

Questo articolo illustra i dati sullo stato dei moduli MFC e il modo in cui questo stato viene aggiornato quando il flusso di esecuzione (il codice del percorso passa attraverso un'applicazione durante l'esecuzione) entra e lascia un modulo. Viene anche illustrato come cambiare gli Stati dei moduli con le macro AFX_MANAGE_STATE e METHOD_PROLOGUE.

> [!NOTE]
> Il termine "modulo" si riferisce a un programma eseguibile o a una DLL (o set di dll) che opera indipendentemente dal resto dell'applicazione, ma usa una copia condivisa della DLL MFC. Un controllo ActiveX è un esempio tipico di un modulo.

Come illustrato nella figura seguente, in MFC sono disponibili dati di stato per ogni modulo utilizzato in un'applicazione. Esempi di questi dati includono gli handle di istanza di Windows (utilizzati per il caricamento delle risorse), i puntatori all'oggetto corrente `CWinApp` e `CWinThread` gli oggetti di un'applicazione, i conteggi dei riferimenti del modulo OLE e un'ampia gamma di mappe che gestiscono le connessioni tra gli handle di oggetti di Windows e le istanze corrispondenti di oggetti MFC. Tuttavia, quando un'applicazione usa più moduli, i dati relativi allo stato di ogni modulo non sono a livello di applicazione. Ogni modulo dispone invece di una propria copia privata dei dati di stato di MFC.

![Dati sullo stato di un singolo modulo &#40;applicazione&#41;](../mfc/media/vc387n1.gif "Dati sullo stato di un singolo modulo &#40;applicazione&#41;") <br/>
Dati sullo stato di un modulo singolo (applicazione)

I dati di stato di un modulo sono contenuti in una struttura ed è sempre disponibile tramite un puntatore a tale struttura. Quando il flusso di esecuzione entra in un particolare modulo, come illustrato nella figura seguente, lo stato del modulo deve essere "corrente" o "effettivo". Ogni oggetto thread dispone pertanto di un puntatore alla struttura di stato effettiva di tale applicazione. Mantenere il puntatore aggiornato in qualsiasi momento è essenziale per gestire lo stato globale dell'applicazione e mantenere l'integrità dello stato di ogni modulo. Una gestione non corretta dello stato globale può causare un comportamento imprevedibile dell'applicazione.

![Dati sullo stato di più moduli](../mfc/media/vc387n2.gif "Dati dello stato di più moduli") <br/>
Dati sullo stato di più moduli

In altre parole, ogni modulo è responsabile del corretto cambio tra gli Stati dei moduli in tutti i relativi punti di ingresso. Un "punto di ingresso" è la posizione in cui il flusso di esecuzione può immettere il codice del modulo. I punti di ingresso includono:

- [Funzioni esportate in una DLL](exported-dll-function-entry-points.md)

- [Funzioni membro delle interfacce COM](com-interface-entry-points.md)

- [Routine della finestra](window-procedure-entry-points.md)

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](general-mfc-topics.md)
