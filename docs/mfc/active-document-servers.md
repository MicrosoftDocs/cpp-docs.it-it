---
title: Server documenti attivi
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], servers
- servers [MFC], active document
- active document servers [MFC]
ms.assetid: 131fec1e-02a0-4305-a7ab-903b911232a7
ms.openlocfilehash: 7050b810bb5e1f0c240222cd9b8c4922ced4238a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57270774"
---
# <a name="active-document-servers"></a>Server documenti attivi

I server di documenti attivi come i documenti host di Word, Excel o PowerPoint di altri tipi di applicazione sono denominati documenti attivi. A differenza degli oggetti incorporati OLE (che sono semplicemente visualizzati nella pagina di un altro documento), i documenti attivi forniscono l'interfaccia completa e completano la funzionalità nativa dell'applicazione server che li crea. Gli utenti possono creare i documenti utilizzando tutta la potenza delle applicazioni preferite (se sono abilitate per i documenti attivi), ma possono considerare il progetto risultante come una sola entità.

I documenti attivi possono avere più pagine e sono sempre attivi sul posto. Documenti attivi controllano parte dell'interfaccia utente, uniscono i propri menu con il **File** e **Guida** i menu del contenitore. Occupano l'intera area di modifica del contenitore e controllano le visualizzazioni e il layout della pagina della stampante (margini, piè di pagina e così via).

MFC implementa i server di documenti attivi con le interfacce documento/visualizzazione, le mappe di invio dei comandi, la stampa, la gestione dei menu e la gestione del Registro di sistema. Requisiti specifici di programmazione sono illustrati nella [documenti attivi](../mfc/active-documents.md).

MFC supporta i documenti attivi con il [CDocObjectServer](../mfc/reference/cdocobjectserver-class.md) classe, derivata da [CCmdTarget](../mfc/reference/ccmdtarget-class.md), e [CDocObjectServerItem](../mfc/reference/cdocobjectserveritem-class.md), derivata da [ COleServerItem](../mfc/reference/coleserveritem-class.md). MFC supporta contenitori documenti attivi con il [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md) classe, derivata da [COleClientItem](../mfc/reference/coleclientitem-class.md).

`CDocObjectServer` esegue il mapping delle interfacce dei documenti attivi e inizializza e attiva un documento attivo. MFC fornisce inoltre le macro per la gestione del routing dei comandi nei documenti attivi. Per utilizzare i documenti attivi nell'applicazione, importare AfxDocOb.h nel file StdAfx.h.

Un server MFC standard esegue l'associazione alla propria classe derivata da `COleServerItem`. La creazione guidata applicazione MFC genera questa classe per l'utente se si seleziona il **server ridotto** oppure **server completo** casella di controllo per fornire supporto documenti compositi del server applicazioni. Se si seleziona anche il **server documenti attivi** casella di controllo, la creazione guidata applicazione MFC genera una classe derivata da `CDocObjectServerItem` invece.

La classe `COleDocObjectItem` consente a un contenitore OLE di diventare un contenitore di documenti attivi. È possibile usare la creazione guidata applicazione MFC per creare un contenitore di documenti attivi selezionando la **contenitore di documenti attivi** casella di controllo nella pagina Supporto documenti compositi della creazione guidata applicazione MFC. Per altre informazioni, vedere [creazione di un'applicazione contenitore documenti attivi](../mfc/creating-an-active-document-container-application.md).

## <a name="see-also"></a>Vedere anche

[Contenimento dei documenti attivi](../mfc/active-document-containment.md)
