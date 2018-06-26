---
title: Controlli Rebar e bande | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rebar controls [MFC], working with bands in
- bands, in rebar controls
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1ae83c3e41ebabf62ad98211f3943af2b535c806
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929507"
---
# <a name="rebar-controls-and-bands"></a>Controlli Rebar e bande
Lo scopo principale di un controllo rebar è funge da contenitore per le finestre figlio, controlli comuni di finestra di dialogo, menu, barre degli strumenti e così via. Questo contenuto è supportato dal concetto di "fuori banda". Ogni controllo rebar band può contenere qualsiasi combinazione di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio.  
  
 Classe `CReBarCtrl` ha molte funzioni membro che è possibile utilizzare per recuperare e modificare le informazioni per un determinato controllo rebar band:  
  
-   [GetBandCount](../mfc/reference/crebarctrl-class.md#getbandcount) recupera il numero di bande corrente nel controllo rebar.  
  
-   [GetBandInfo](../mfc/reference/crebarctrl-class.md#getbandinfo) Inizializza un **REBARBANDINFO** struttura con le informazioni dalla banda specificata. È presente un corrispondente [SetBandInfo](../mfc/reference/crebarctrl-class.md#setbandinfo) funzione membro.  
  
-   [GetRect](../mfc/reference/crebarctrl-class.md#getrect) recupera il rettangolo di delimitazione della banda specificata.  
  
-   [GetRowCount](../mfc/reference/crebarctrl-class.md#getrowcount) recupera il numero di righe fuori banda in un controllo rebar.  
  
-   [IDToIndex](../mfc/reference/crebarctrl-class.md#idtoindex) recupera l'indice della banda specificata.  
  
-   [GetBandBorders](../mfc/reference/crebarctrl-class.md#getbandborders) recupera i bordi di un fuori banda.  
  
 Oltre alla modifica, diverse funzioni membro sono che consentono di operare su bande rebar specifico.  
  
 [InsertBand](../mfc/reference/crebarctrl-class.md#insertband) e [DeleteBand](../mfc/reference/crebarctrl-class.md#deleteband) aggiungere e rimuovere bande rebar. [MinimizeBand](../mfc/reference/crebarctrl-class.md#minimizeband) e [MaximizeBand](../mfc/reference/crebarctrl-class.md#maximizeband) influiscono sulle dimensioni correnti di un determinato controllo rebar band. [MoveBand](../mfc/reference/crebarctrl-class.md#moveband) modifica l'indice di un determinato controllo rebar band. [ShowBand](../mfc/reference/crebarctrl-class.md#showband) Mostra o nasconde un controllo rebar band da parte dell'utente.  
  
 Nell'esempio seguente viene illustrato come aggiungere una barra degli strumenti (*m_wndToolBar*) a un controllo rebar esistente (*m_wndReBar*). Viene descritto il fuori banda da durante l'inizializzazione il `rbi` struttura e chiamando quindi il `InsertBand` funzione membro:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#27](../mfc/codesnippet/cpp/rebar-controls-and-bands_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

