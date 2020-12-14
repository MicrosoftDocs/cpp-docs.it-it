---
description: 'Altre informazioni su: tracker'
title: Tracker
ms.date: 11/04/2016
helpviewer_keywords:
- trackers [MFC]
- OLE applications [MFC], trackers
- applications [OLE], trackers
- tracking OLE items [MFC]
- OLE containers [MFC], trackers
- CDC class [MFC], trackers
- CRectTracker class [MFC], implementing trackers
- OLE server applications [MFC], trackers
ms.assetid: dcd09399-6637-4621-80e5-d12670429787
ms.openlocfilehash: e82766ecfabf2b5ebb0147b9f2c462f3b4460869
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264247"
---
# <a name="trackers"></a>Tracker

La classe [CRectTracker](../mfc/reference/crecttracker-class.md) fornisce un'interfaccia utente tra gli elementi rettangolari nell'applicazione e l'utente fornendo un'ampia gamma di stili di visualizzazione. Questi stili includono bordi a tinta unita, tratteggiata o tratteggiata; motivo tratteggiato che copre l'elemento; e ridimensionare gli handle che possono essere posizionati all'esterno o all'interno di un bordo. I tracker vengono spesso usati insieme agli elementi OLE, ovvero gli oggetti derivati da `COleClientItem` . I rettangoli di rilevamento forniscono segnali visivi sullo stato corrente dell'elemento.

L'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md) illustra un'interfaccia comune che usa i tracker e gli elementi client OLE dal punto di vista di un'applicazione contenitore. Per una dimostrazione dei diversi stili e capacità di un oggetto tracker, vedere la pagina relativa al [rilevamento](../overview/visual-cpp-samples.md)generale di esempio MFC.

Per altre informazioni sull'implementazione di tracker nell'applicazione OLE, vedere [Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)

## <a name="see-also"></a>Vedi anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[COleClientItem (classe)](../mfc/reference/coleclientitem-class.md)
