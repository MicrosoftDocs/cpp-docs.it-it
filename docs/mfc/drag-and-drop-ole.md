---
title: Trascinamento della selezione (OLE) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE server applications [MFC], drag and drop
- drag and drop [MFC]
- OLE applications [MFC], drag and drop
- File Manager drag and drop support [MFC]
- drag and drop [MFC], about OLE drag and drop
- OLE drag and drop [MFC]
ms.assetid: a4595350-ca06-4400-88a1-f0175c76b77b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cc23c7695bf5afa22734c382ddc72e8418ff74c5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="drag-and-drop-ole"></a>Trascinamento della selezione (OLE)
La funzionalità di trascinamento e rilascio OLE è principalmente un collegamento per copiare e incollare i dati. Quando si utilizzano gli Appunti per copiare o incollare i dati, è necessaria una serie di passaggi. Selezionare i dati, fare clic su **Taglia** o **copia** dal **modifica** menu, spostare il file di destinazione, una finestra o applicazione, posizionare il cursore nella posizione desiderata e fare clic su **Incolla** dal **modifica** menu.  
  
 Trascinamento della selezione OLE è diverso dal meccanismo di trascinamento e rilascio di gestione File, che può gestire solo i nomi di file ed è progettato specificamente per passare i nomi di file per le applicazioni. Trascinamento della selezione OLE è molto più generale. È possibile trascinare e rilasciare tutti i dati che potrebbero essere inseriti anche negli Appunti.  
  
 Quando si usa il trascinamento della selezione OLE, rimuovere i due passaggi dal processo. Selezionare i dati dalla finestra di origine (il "origine del trascinamento"), trascinarlo nella destinazione desiderata ("destinazione") e rilasciando il pulsante del mouse. L'operazione Elimina la necessità di menu ed è più veloce rispetto alla sequenza di copia/incolla. L'unico requisito è che l'origine di trascinamento e l'obiettivo di rilascio devono essere aperte e almeno parzialmente visibile sullo schermo.  
  
 Tramite trascinamento OLE, dati possono essere trasferiti da una posizione a altra all'interno di un documento, tra documenti diversi o tra applicazioni. E può essere implementato in un contenitore o un'applicazione server e qualsiasi applicazione può essere un'origine di rilascio, una destinazione di rilascio o entrambi. Se un'applicazione ha implementato il supporto di origine di trascinamento sia la destinazione di trascinamento, trascinamento della selezione è abilitata tra finestre figlio, o all'interno di una finestra. Questa funzionalità, è possibile rendere l'applicazione più facili da usare.  
  
 Se si desidera utilizzare le funzionalità di trascinamento e rilascio OLE, vedere [trascinamento della selezione: personalizzazione](../mfc/drag-and-drop-customizing.md). Per eliminare le origini delle applicazioni non OLE, è possibile utilizzare le tecniche descritte in questo articolo. L'articolo [trascinamento della selezione: implementazione di un obiettivo di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md) viene descritto come implementare il supporto di destinazione di rilascio per OLE e le applicazioni non OLE. Può anche essere utile esaminare gli esempi OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md).  
  
 Se non sono state lette le [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md) serie di articoli, si consiglia di farlo ora. Questi articoli illustrano le nozioni di base del trasferimento dei dati e la relativa implementazione nelle applicazioni.  
  
 Per ulteriori informazioni sull'operazione di trascinamento, vedere:  
  
-   [Trascinamento della selezione: implementazione di un'origine di rilascio](../mfc/drag-and-drop-implementing-a-drop-source.md)  
  
-   [Trascinamento della selezione: implementazione di un obiettivo di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md)  
  
-   [Trascinamento della selezione: personalizzazione](../mfc/drag-and-drop-customizing.md)  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [Oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md)

