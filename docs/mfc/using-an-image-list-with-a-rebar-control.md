---
title: Utilizzo di un elenco di immagini con un controllo Rebar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- image lists [MFC], rebar controls
- rebar controls [MFC], image lists
ms.assetid: 1a5836ac-019a-46aa-8741-b35c3376b839
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1786c89f4ec9cf1c0908dac5d81858d5b2e6b7db
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950706"
---
# <a name="using-an-image-list-with-a-rebar-control"></a>Utilizzo di un elenco immagini con un controllo Rebar
Ogni controllo Rebar band può contenere, tra l'altro, un'immagine proveniente da un elenco di immagini associato. Nella procedura riportata di seguito vengono descritti in dettaglio i passaggi necessari per visualizzare un'immagine in un controllo Rebar band.  
  
### <a name="to-display-images-in-a-rebar-band"></a>Per visualizzare le immagini in un Rebar band  
  
1.  Associare un elenco immagini all'oggetto controllo rebar mediante una chiamata a [SetImageList](../mfc/reference/crebarctrl-class.md#setimagelist), passando un puntatore a un elenco immagini esistente.  
  
2.  Modificare il **REBARBANDINFO** struttura per assegnare un'immagine a un controllo rebar band:  
  
    -   Impostare il *fMask* membro da `RBBIM_IMAGE`, tramite l'operatore OR bit per bit per includere flag aggiuntivi in base alle esigenze.  
  
    -   Impostare il *iImage* membro per l'indice dell'elenco immagini dell'immagine da visualizzare.  
  
3.  Inizializzare tutti i membri di dati restanti, ad esempio la dimensione, il testo e un handle della finestra figlio contenuta, con le informazioni necessarie.  
  
4.  Inserire la nuova banda (con l'immagine) con una chiamata a [CReBarCtrl::InsertBand](../mfc/reference/crebarctrl-class.md#insertband), passando il **REBARBANDINFO** struttura.  
  
 Nell'esempio seguente si presuppone che un oggetto elenco immagini esistente con due immagini sia stato assegnato all'oggetto controllo Rebar (`m_wndReBar`). Un nuovo Rebar band (definito da `rbi`), che contiene la prima immagine, viene aggiunto tramite una chiamata a `InsertBand`:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#28](../mfc/codesnippet/cpp/using-an-image-list-with-a-rebar-control_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

