---
description: 'Altre informazioni su: controlli Rebar e bande'
title: Controlli Rebar e bande
ms.date: 11/04/2016
helpviewer_keywords:
- rebar controls [MFC], working with bands in
- bands, in rebar controls
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
ms.openlocfilehash: 27ada3633a560ad8b5852b05bdd6330a0936fb99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248567"
---
# <a name="rebar-controls-and-bands"></a>Controlli Rebar e bande

Lo scopo principale di un controllo Rebar è fungere da contenitore per le finestre figlio, i controlli comuni della finestra di dialogo, i menu, le barre degli strumenti e così via. Questo contenimento è supportato dal concetto di "band". Ogni banda Rebar può contenere qualsiasi combinazione di una barra di pinza, una bitmap, un'etichetta di testo e una finestra figlio.

La classe `CReBarCtrl` dispone di molte funzioni membro che è possibile utilizzare per recuperare e modificare le informazioni relative a una banda Rebar specifica:

- [GetBandCount](../mfc/reference/crebarctrl-class.md#getbandcount) Recupera il numero di bande correnti nel controllo Rebar.

- [GetBandInfo](../mfc/reference/crebarctrl-class.md#getbandinfo) Inizializza una struttura **REBARBANDINFO** con le informazioni della banda specificata. Esiste una funzione membro [SetBandInfo](../mfc/reference/crebarctrl-class.md#setbandinfo) corrispondente.

- [GetRect](../mfc/reference/crebarctrl-class.md#getrect) Recupera il rettangolo di delimitazione di una banda specificata.

- [GetRowCount](../mfc/reference/crebarctrl-class.md#getrowcount) Recupera il numero di righe di banda in un controllo Rebar.

- [IDToIndex](../mfc/reference/crebarctrl-class.md#idtoindex) Recupera l'indice di una banda specificata.

- [GetBandBorders](../mfc/reference/crebarctrl-class.md#getbandborders) Recupera i bordi di una banda.

Oltre alla manipolazione, vengono fornite diverse funzioni membro che consentono di operare su bande Rebar specifiche.

[InsertBand](../mfc/reference/crebarctrl-class.md#insertband) e [DeleteBand](../mfc/reference/crebarctrl-class.md#deleteband) aggiungono e rimuovono le bande del controllo Rebar. [MinimizeBand](../mfc/reference/crebarctrl-class.md#minimizeband) e [MaximizeBand](../mfc/reference/crebarctrl-class.md#maximizeband) influiscono sulle dimensioni correnti di una banda Rebar specifica. [MoveBand](../mfc/reference/crebarctrl-class.md#moveband) modifica l'indice di una banda Rebar specifica. [Showband](../mfc/reference/crebarctrl-class.md#showband) Mostra o nasconde una banda Rebar dall'utente.

Nell'esempio seguente viene illustrata l'aggiunta di una banda della barra degli strumenti (*m_wndToolBar*) a un controllo Rebar esistente (*m_wndReBar*). La banda viene descritta inizializzando la `rbi` struttura e quindi chiamando la `InsertBand` funzione membro:

[!code-cpp[NVC_MFCControlLadenDialog#27](../mfc/codesnippet/cpp/rebar-controls-and-bands_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
