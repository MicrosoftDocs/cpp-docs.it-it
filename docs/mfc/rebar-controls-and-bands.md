---
title: Controlli Rebar e bande | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- rebar controls [MFC], working with bands in
- bands, in rebar controls
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6426a25746858ed5bd7c0d8ef70575e029453bae
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="rebar-controls-and-bands"></a>Controlli Rebar e bande
Lo scopo principale di un controllo rebar è di agire come un contenitore per le finestre figlio, controlli comuni di finestra di dialogo, menu, barre degli strumenti e così via. Questo contenuto è supportato dal concetto di "banda". Ogni controllo rebar band può contenere qualsiasi combinazione di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio.  
  
 Classe `CReBarCtrl` ha molte funzioni membro che è possibile utilizzare per recuperare e modificare le informazioni di un determinato controllo rebar band:  
  
-   [GetBandCount](../mfc/reference/crebarctrl-class.md#getbandcount) recupera il numero di bande corrente nel controllo rebar.  
  
-   [GetBandInfo](../mfc/reference/crebarctrl-class.md#getbandinfo) Inizializza un **REBARBANDINFO** struttura con le informazioni dalla banda specificata. È un corrispondente [SetBandInfo](../mfc/reference/crebarctrl-class.md#setbandinfo) funzione membro.  
  
-   [GetRect](../mfc/reference/crebarctrl-class.md#getrect) recupera il rettangolo di delimitazione della banda specificata.  
  
-   [GetRowCount](../mfc/reference/crebarctrl-class.md#getrowcount) recupera il numero di righe di banda in un controllo rebar.  
  
-   [IDToIndex](../mfc/reference/crebarctrl-class.md#idtoindex) recupera l'indice della banda specificata.  
  
-   [GetBandBorders](../mfc/reference/crebarctrl-class.md#getbandborders) recupera i bordi della banda.  
  
 Oltre alla modifica, diverse funzioni membro sono che consentono di operare su bande rebar specifiche.  
  
 [InsertBand](../mfc/reference/crebarctrl-class.md#insertband) e [DeleteBand](../mfc/reference/crebarctrl-class.md#deleteband) aggiungere e rimuovere bande rebar. [MinimizeBand](../mfc/reference/crebarctrl-class.md#minimizeband) e [MaximizeBand](../mfc/reference/crebarctrl-class.md#maximizeband) influenza la dimensione corrente di un determinato controllo rebar band. [MoveBand](../mfc/reference/crebarctrl-class.md#moveband) modifica l'indice di un determinato controllo rebar band. [ShowBand](../mfc/reference/crebarctrl-class.md#showband) Mostra o nasconde un controllo rebar band da parte dell'utente.  
  
 Nell'esempio seguente viene illustrato come aggiungere una barra degli strumenti (`m_wndToolBar`) a un controllo rebar esistente (`m_wndReBar`). La banda è descritta l'inizializzazione di `rbi` struttura e chiamando quindi il `InsertBand` funzione membro:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#27](../mfc/codesnippet/cpp/rebar-controls-and-bands_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

