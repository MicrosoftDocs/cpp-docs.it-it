---
title: Controlli Rebar e bande
ms.date: 11/04/2016
helpviewer_keywords:
- rebar controls [MFC], working with bands in
- bands, in rebar controls
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
ms.openlocfilehash: 4bb7b4aeab1478138aa2b52649f41ca943b5daa4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62378164"
---
# <a name="rebar-controls-and-bands"></a>Controlli Rebar e bande

Lo scopo principale di un controllo rebar è agire come un contenitore per finestre figlio, controlli comuni di finestra di dialogo, menu, barre degli strumenti e così via. Questo contenuto è supportato dal concetto di "fuori banda". Ogni controllo rebar band può contenere qualsiasi combinazione di una barra gripper, una bitmap, un'etichetta di testo e una finestra figlio.

Classe `CReBarCtrl` ha molte funzioni membro che è possibile usare per recuperare e modificare le informazioni di un determinato controllo rebar band:

- [GetBandCount](../mfc/reference/crebarctrl-class.md#getbandcount) recupera il numero di bande corrente nel controllo rebar.

- [GetBandInfo](../mfc/reference/crebarctrl-class.md#getbandinfo) Inizializza un **REBARBANDINFO** struttura con le informazioni sulla banda specificata. È presente un corrispondente [SetBandInfo](../mfc/reference/crebarctrl-class.md#setbandinfo) funzione membro.

- [GetRect](../mfc/reference/crebarctrl-class.md#getrect) recupera il rettangolo di delimitazione della banda specificata.

- [GetRowCount](../mfc/reference/crebarctrl-class.md#getrowcount) recupera il numero di righe fuori banda in un controllo rebar.

- [IDToIndex](../mfc/reference/crebarctrl-class.md#idtoindex) recupera l'indice della banda specificata.

- [GetBandBorders](../mfc/reference/crebarctrl-class.md#getbandborders) recupera i bordi di un fuori banda.

Oltre alla manipolazione, diverse funzioni membro sono che consentono di operare su bande rebar specifico.

[InsertBand](../mfc/reference/crebarctrl-class.md#insertband) e [DeleteBand](../mfc/reference/crebarctrl-class.md#deleteband) aggiungere e rimuovere le bande rebar. [MinimizeBand](../mfc/reference/crebarctrl-class.md#minimizeband) e [MaximizeBand](../mfc/reference/crebarctrl-class.md#maximizeband) influiscono sulle dimensioni correnti di un determinato controllo rebar band. [MoveBand](../mfc/reference/crebarctrl-class.md#moveband) viene modificato l'indice di un determinato controllo rebar band. [ShowBand](../mfc/reference/crebarctrl-class.md#showband) Mostra o nasconde un controllo rebar band da parte dell'utente.

Nell'esempio seguente viene illustrato come aggiungere una barra degli strumenti (*m_wndToolBar*) a un controllo rebar esistente (*m_wndReBar*). La banda è descritta l'inizializzazione di `rbi` struttura e chiamando quindi il `InsertBand` funzione membro:

[!code-cpp[NVC_MFCControlLadenDialog#27](../mfc/codesnippet/cpp/rebar-controls-and-bands_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
