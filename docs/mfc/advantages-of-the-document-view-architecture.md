---
title: Vantaggi dell'architettura documento/visualizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- views [MFC], advantages
- document/view architecture [MFC], advantages of
ms.assetid: 0bc27071-e120-4889-939c-ce1e61fb9cb3
ms.openlocfilehash: 80f7141ec62d509defdea361586399bd375df0d1
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623282"
---
# <a name="advantages-of-the-documentview-architecture"></a>Vantaggi dell'architettura documento/visualizzazione

Il vantaggio principale dell'utilizzo dell'architettura documento/visualizzazione MFC è che l'architettura supporta più visualizzazioni dello stesso documento in particolare. (Se non sono necessarie più visualizzazioni e il piccolo overhead di documento/visualizzazione è eccessivo nell'applicazione, è possibile evitare l'architettura. [Alternative all'architettura documento/visualizzazione](alternatives-to-the-document-view-architecture.md).

Si supponga che l'applicazione consenta agli utenti di visualizzare dati numerici in formato foglio di calcolo o in formato grafico. È possibile che un utente desideri visualizzare contemporaneamente sia i dati non elaborati, in formato foglio di calcolo, sia un grafico risultante dai dati. Queste visualizzazioni separate vengono visualizzate in finestre cornice separate o nei riquadri con barra di divisione all'interno di un'unica finestra. Si supponga ora che l'utente possa modificare i dati nel foglio di calcolo e visualizzare immediatamente le modifiche riflesse nel grafico.

In MFC la visualizzazione del foglio di calcolo e la visualizzazione del grafico sono basate su classi diverse derivate da CView. Entrambe le visualizzazioni verrebbero associate a un singolo oggetto documento. Il documento archivia i dati o può ottenerli da un database. Entrambe le visualizzazioni accedono al documento e visualizzano i dati da cui vengono recuperati.

Quando un utente aggiorna una delle visualizzazioni, viene chiamato l'oggetto `CDocument::UpdateAllViews` . Questa funzione Invia una notifica a tutte le visualizzazioni del documento e ogni visualizzazione viene aggiornata usando i dati più recenti del documento. La singola chiamata per `UpdateAllViews` Sincronizza le diverse visualizzazioni.

Questo scenario sarebbe difficile da codificare senza la separazione dei dati dalla visualizzazione, in particolare se le visualizzazioni archiviavano i dati stessi. Con Document/view è facile. Il Framework esegue la maggior parte delle operazioni di coordinamento.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Alternative a Document/view](alternatives-to-the-document-view-architecture.md)

- [CDocument](reference/cdocument-class.md)

- [CView](reference/cview-class.md)

- [CDocument:: UpdateAllViews](reference/cdocument-class.md#updateallviews)

- [CView:: GetDocument](reference/cview-class.md#getdocument)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
