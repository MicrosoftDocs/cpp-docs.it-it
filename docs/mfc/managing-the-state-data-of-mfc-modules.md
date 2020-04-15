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
ms.openlocfilehash: c8e79f54ed586201a7d82327662643a9a241b8f4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81357272"
---
# <a name="managing-the-state-data-of-mfc-modules"></a>Gestione dei dati dello stato dei moduli MFC

In questo articolo vengono illustrati i dati di stato dei moduli MFC e come questo stato viene aggiornato quando il flusso di esecuzione (il codice di percorso passa attraverso un'applicazione durante l'esecuzione) entra e esce da un modulo. Viene inoltre discusso il passaggio da uno stato di modulo all'altro con le macro AFX_MANAGE_STATE e METHOD_PROLOGUE.

> [!NOTE]
> Il termine "modulo" qui si riferisce a un programma eseguibile o a una DLL (o insieme di DLL) che operano indipendentemente dal resto dell'applicazione, ma utilizza una copia condivisa della DLL MFC. Un controllo ActiveX è un esempio tipico di un modulo.

Come illustrato nella figura seguente, MFC dispone di dati sullo stato per ogni modulo utilizzato in un'applicazione. Esempi di questi dati includono handle di istanza di Windows `CWinApp` `CWinThread` (utilizzati per il caricamento delle risorse), puntatori all'oggetto corrente e agli oggetti di un'applicazione, conteggi dei riferimenti ai moduli OLE e una varietà di mappe che gestiscono le connessioni tra gli handle di oggetti Windows e le istanze corrispondenti di oggetti MFC. Tuttavia, quando un'applicazione utilizza più moduli, i dati di stato di ogni modulo non sono a livello di applicazione. Piuttosto, ogni modulo ha la propria copia privata dei dati di stato di MFC.

![Dati di stato di un singolo modulo &#40;&#41;dell'applicazione](../mfc/media/vc387n1.gif "Dati di stato di un singolo modulo &#40;&#41; dell'applicazione") <br/>
Dati sullo stato di un modulo singolo (applicazione)

I dati sullo stato di un modulo sono contenuti in una struttura ed è sempre disponibile tramite un puntatore a tale struttura. Quando il flusso di esecuzione entra in un particolare modulo, come illustrato nella figura seguente, lo stato del modulo deve essere lo stato "corrente" o "efficace". Pertanto, ogni oggetto thread dispone di un puntatore alla struttura di stato effettivo dell'applicazione. Mantenere questo puntatore aggiornato in ogni momento è fondamentale per gestire lo stato globale dell'applicazione e mantenere l'integrità dello stato di ogni modulo. Una gestione non corretta dello stato globale può causare un comportamento imprevedibile dell'applicazione.

![Dati di stato di più moduli](../mfc/media/vc387n2.gif "Dati dello stato di più moduli") <br/>
Dati sullo stato di più moduli

In altre parole, ogni modulo è responsabile del passaggio corretto tra gli stati del modulo in tutti i relativi punti di ingresso. Un "punto di ingresso" è qualsiasi luogo in cui il flusso di esecuzione può inserire il codice del modulo. I punti di ingresso includono:

- [Funzioni esportate in una DLLExported functions in a DLL](../mfc/exported-dll-function-entry-points.md)

- [Funzioni membro delle interfacce COM](../mfc/com-interface-entry-points.md)

- [Procedure per finestre](../mfc/window-procedure-entry-points.md)

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
