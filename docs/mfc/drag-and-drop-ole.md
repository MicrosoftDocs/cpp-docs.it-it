---
title: Trascinamento (OLE)
ms.date: 11/04/2016
helpviewer_keywords:
- OLE server applications [MFC], drag and drop
- drag and drop [MFC]
- OLE applications [MFC], drag and drop
- File Manager drag and drop support [MFC]
- drag and drop [MFC], about OLE drag and drop
- OLE drag and drop [MFC]
ms.assetid: a4595350-ca06-4400-88a1-f0175c76b77b
ms.openlocfilehash: 98bd58745e56a62bf5700e9b5fe4963a7b584953
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58766807"
---
# <a name="drag-and-drop-ole"></a>Trascinamento (OLE)

La funzionalità di trascinamento e rilascio di OLE è principalmente un collegamento per copiare e incollare dati. Quando si utilizzano gli Appunti per copiare o incollare i dati, è necessaria una serie di passaggi. Selezionano i dati, fare clic su **tagliare** o **copia** dal **Edit** menu, spostare il file di destinazione, finestra o l'applicazione, posizionare il cursore nella posizione desiderata e fare clic su **Incolla** dalle **modificare** menu.

Trascinamento della selezione OLE è diverso dal meccanismo di trascinamento e rilascio di gestione File, che può gestire solo i nomi file ed è progettato specificamente per passare i nomi di file per le applicazioni. Trascinamento della selezione OLE è molto più generale. Consente di trascinare e rilasciare tutti i dati che può anche essere inseriti negli Appunti.

Quando si usa il trascinamento della selezione OLE, è rimuovere due passaggi dal processo. Selezionare i dati dalla finestra di origine (il "origine di rilascio"), trascinarlo nella destinazione desiderata (la "destinazione di rilascio") e rilasciando il pulsante del mouse. L'operazione Elimina la necessità per i menu e più rapido rispetto alla sequenza di copia/incolla. L'unico requisito è che sia l'origine di trascinamento e obiettivo di rilascio deve essere aperta e almeno parzialmente visibile sullo schermo.

Uso della selezione e trascinamento OLE, dati possono essere trasferiti da una posizione a un'altra all'interno di un documento, tra documenti diversi o tra le applicazioni. Può essere implementata in un contenitore o un'applicazione server e qualsiasi applicazione può essere un'origine di rilascio, un obiettivo di rilascio o entrambi. Se un'applicazione ha implementato il supporto sia origine di trascinamento e obiettivo di rilascio, trascinamento della selezione è abilitata tra le finestre figlio, o all'interno di una finestra. Questa funzionalità può rendere più facile da utilizzare l'applicazione.

Se si vuole solo usare le funzionalità di trascinamento e rilascio di OLE, vedere [trascinamento della selezione: Personalizzazione](../mfc/drag-and-drop-customizing.md). È possibile usare le tecniche descritte in questo articolo per rendere le applicazioni non OLE di origini di trascinamento. L'articolo [trascinamento della selezione: Implementazione di obiettivo di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md) viene descritto come implementare il supporto per la destinazione di trascinamento per OLE e le applicazioni non OLE. Inoltre sarà utile esaminare gli esempi OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) e [HIERSVR](../overview/visual-cpp-samples.md).

Se non è stato letto il [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md) serie di articoli, è possibile farlo ora. Questi articoli illustrano le nozioni di base del trasferimento di dati e come implementarla nelle proprie applicazioni.

Per altre informazioni sull'operazione di trascinamento, vedere:

- [Trascinamento della selezione: Implementazione di un'origine di rilascio](../mfc/drag-and-drop-implementing-a-drop-source.md)

- [Trascinamento della selezione: Implementazione di un obiettivo di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md)

- [Trascinamento della selezione: Personalizzazione di](../mfc/drag-and-drop-customizing.md)

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md)
