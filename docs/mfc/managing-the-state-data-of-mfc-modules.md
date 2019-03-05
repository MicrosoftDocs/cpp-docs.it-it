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
ms.openlocfilehash: 0cdb368dc70b73ba70b3721fecdaf47de36686d5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293797"
---
# <a name="managing-the-state-data-of-mfc-modules"></a>Gestione dei dati dello stato dei moduli MFC

Questo articolo illustra i dati dello stato dei moduli MFC e come questo stato viene aggiornato quando il flusso di esecuzione (codice di path accetta tramite un'applicazione durante l'esecuzione) entra ed esce da un modulo. Cambio di stato dei moduli con le macro AFX_MANAGE_STATE e METHOD_PROLOGUE viene anche illustrata.

> [!NOTE]
>  Il termine "modulo" qui fa riferimento a un programma eseguibile o una DLL (o set di DLL) che funzionino a prescindere dal resto dell'applicazione, ma usa una copia della DLL MFC condivisa. Un controllo ActiveX è un esempio tipico di un modulo.

Come illustrato nella figura seguente, MFC include dati relativi allo stato per ogni modulo usato in un'applicazione. Esempi di questi dati includono gli handle dell'istanza di Windows (utilizzati per il caricamento delle risorse), i puntatori all'oggetto corrente `CWinApp` e `CWinThread` gli oggetti di un'applicazione, i conteggi dei riferimenti modulo OLE e un'ampia gamma di mappe che consentono di mantenere le connessioni tra Windows oggetto handle e le istanze corrispondenti di oggetti MFC. Tuttavia, quando un'applicazione usa più moduli, i dati dello stato di ciascun modulo non sono applicazione wide. Piuttosto, ogni modulo ha una propria copia privata dei dati dello stato di MFC.

![I dati di un singolo modulo sullo stato &#40;applicazione&#41;](../mfc/media/vc387n1.gif "i dati di un singolo modulo sullo stato &#40;applicazione&#41;") <br/>
Dati sullo stato di un modulo singolo (applicazione)

Dati relativi allo stato di un modulo sono contenuti in una struttura ed sono sempre disponibile tramite un puntatore alla struttura. Quando il flusso di esecuzione entra in un modulo specifico, come illustrato nella figura seguente, lo stato del modulo che deve essere lo stato "effettivo" o "corrente". Pertanto, ogni oggetto thread dispone di un puntatore alla struttura dallo stato effettivo dell'applicazione. Mantenere questo puntatore aggiornato affatto volte in cui è fondamentale per la gestione dello stato globale dell'applicazione e il mantenimento dell'integrità dello stato di ogni modulo. Corretta gestione dello stato globale può causare comportamenti imprevedibili dell'applicazione.

![Dati di più moduli dello stato](../mfc/media/vc387n2.gif "dati di più moduli dello stato") <br/>
Dati sullo stato di più moduli

In altre parole, ogni modulo è responsabile di commutazione correttamente tra gli stati di modulo in tutti i relativi punti di ingresso. Un "punto di ingresso" sia in qualsiasi luogo in cui il flusso di esecuzione possibile immettere il codice del modulo. Punti di ingresso includono:

- [Funzioni esportate in una DLL](../mfc/exported-dll-function-entry-points.md)

- [Funzioni membro delle interfacce COM](../mfc/com-interface-entry-points.md)

- [Routine della finestra](../mfc/window-procedure-entry-points.md)

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
