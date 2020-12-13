---
description: 'Altre informazioni su: server di documenti attivi'
title: Server documenti attivi
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], servers
- servers [MFC], active document
- active document servers [MFC]
ms.assetid: 131fec1e-02a0-4305-a7ab-903b911232a7
ms.openlocfilehash: 37a8e74b0c4b1b37bb031db522bed394c2a9d545
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150319"
---
# <a name="active-document-servers"></a>Server documenti attivi

I server di documenti attivi come i documenti host di Word, Excel o PowerPoint di altri tipi di applicazione sono denominati documenti attivi. A differenza degli oggetti incorporati OLE (che sono semplicemente visualizzati nella pagina di un altro documento), i documenti attivi forniscono l'interfaccia completa e completano la funzionalità nativa dell'applicazione server che li crea. Gli utenti possono creare i documenti utilizzando tutta la potenza delle applicazioni preferite (se sono abilitate per i documenti attivi), ma possono considerare il progetto risultante come una sola entità.

I documenti attivi possono avere più pagine e sono sempre attivi sul posto. I documenti attivi controllano parte dell'interfaccia utente, unendo i menu al **file** e ai menu della **Guida** del contenitore. Occupano l'intera area di modifica del contenitore e controllano le visualizzazioni e il layout della pagina della stampante (margini, piè di pagina e così via).

MFC implementa i server di documenti attivi con le interfacce documento/visualizzazione, le mappe di invio dei comandi, la stampa, la gestione dei menu e la gestione del Registro di sistema. I requisiti di programmazione specifici sono descritti in [documenti attivi](active-documents.md).

MFC supporta i documenti attivi con la classe [CDocObjectServer](reference/cdocobjectserver-class.md) , derivata da [CCmdTarget](reference/ccmdtarget-class.md)e [CDocObjectServerItem](reference/cdocobjectserveritem-class.md), derivati da [COleServerItem](reference/coleserveritem-class.md). MFC supporta i contenitori di documenti attivi con la classe [COleDocObjectItem](reference/coledocobjectitem-class.md) , derivata da [COleClientItem](reference/coleclientitem-class.md).

`CDocObjectServer` esegue il mapping delle interfacce dei documenti attivi e inizializza e attiva un documento attivo. MFC fornisce inoltre le macro per la gestione del routing dei comandi nei documenti attivi. Per utilizzare i documenti attivi nell'applicazione, importare AfxDocOb.h nel file StdAfx.h.

Un server MFC standard esegue l'associazione alla propria classe derivata da `COleServerItem`. Questa classe viene generata automaticamente dalla creazione guidata applicazione MFC se si seleziona la casella di controllo server **minimo** o **server completo** per fornire il supporto per documenti compositi del server applicazioni. Se si seleziona anche la casella di controllo **Server dei documenti attivi** , la creazione guidata applicazione MFC genera una classe derivata da `CDocObjectServerItem` .

La classe `COleDocObjectItem` consente a un contenitore OLE di diventare un contenitore di documenti attivi. È possibile utilizzare la creazione guidata applicazione MFC per creare un contenitore di documenti attivo selezionando la casella di controllo **contenitore documenti attivi** nella pagina supporto documenti compositi della creazione guidata applicazione MFC. Per altre informazioni, vedere [creazione di un'applicazione contenitore di documenti attivi](creating-an-active-document-container-application.md).

## <a name="see-also"></a>Vedi anche

[Contenimento del documento attivo](active-document-containment.md)
