---
description: 'Altre informazioni su: uso di un elenco immagini con un controllo Rebar'
title: Utilizzo di un elenco immagini con un controllo Rebar
ms.date: 11/04/2016
helpviewer_keywords:
- image lists [MFC], rebar controls
- rebar controls [MFC], image lists
ms.assetid: 1a5836ac-019a-46aa-8741-b35c3376b839
ms.openlocfilehash: ae4aa0259cbe850dbab8ef4bc04277014b39e357
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271798"
---
# <a name="using-an-image-list-with-a-rebar-control"></a>Utilizzo di un elenco immagini con un controllo Rebar

Ogni controllo Rebar band può contenere, tra l'altro, un'immagine proveniente da un elenco di immagini associato. Nella procedura riportata di seguito vengono descritti in dettaglio i passaggi necessari per visualizzare un'immagine in un controllo Rebar band.

### <a name="to-display-images-in-a-rebar-band"></a>Per visualizzare le immagini in un Rebar band

1. Alleghi un elenco di immagini all'oggetto controllo Rebar effettuando una chiamata a [subImage](../mfc/reference/crebarctrl-class.md#setimagelist)list, passando un puntatore a un elenco di immagini esistente.

1. Modificare la struttura **REBARBANDINFO** per assegnare un'immagine a un controllo Rebar Band:

   - Impostare il membro *fmask* su `RBBIM_IMAGE` , utilizzando l'operatore OR bit per bit per includere i flag aggiuntivi in base alle esigenze.

   - Impostare il membro *IImage* sull'indice dell'elenco immagini dell'immagine da visualizzare.

1. Inizializzare tutti i membri di dati restanti, ad esempio la dimensione, il testo e un handle della finestra figlio contenuta, con le informazioni necessarie.

1. Inserire la nuova banda (con l'immagine) con una chiamata a [CReBarCtrl:: InsertBand](../mfc/reference/crebarctrl-class.md#insertband), passando la struttura **REBARBANDINFO** .

Nell'esempio seguente si presuppone che un oggetto elenco immagini esistente con due immagini sia stato assegnato all'oggetto controllo Rebar (`m_wndReBar`). Un nuovo Rebar band (definito da `rbi`), che contiene la prima immagine, viene aggiunto tramite una chiamata a `InsertBand`:

[!code-cpp[NVC_MFCControlLadenDialog#28](../mfc/codesnippet/cpp/using-an-image-list-with-a-rebar-control_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
