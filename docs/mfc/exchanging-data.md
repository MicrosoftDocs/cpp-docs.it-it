---
title: Scambio di dati
ms.date: 11/04/2016
helpviewer_keywords:
- property sheets [MFC], data exchange
- exchanging data with property sheets [MFC]
- DDX (dialog data exchange) [MFC], property sheets
ms.assetid: 689f02d0-51a9-455b-8ffb-5b44f0aefa28
ms.openlocfilehash: de82a337f19b7b2ac6039fd3f3c16ab67aa1dc99
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265925"
---
# <a name="exchanging-data"></a>Scambio di dati

Come con la maggior parte delle finestre di dialogo, lo scambio di dati tra la finestra delle proprietà e l'applicazione è una delle funzioni più importanti della finestra delle proprietà. Questo articolo descrive come eseguire questa attività.

Scambio di dati con una finestra delle proprietà è effettivamente una questione di scambio di dati con le singole pagine della finestra delle proprietà. La procedura per lo scambio di dati con una pagina delle proprietà è identico a quello di scambio di dati con una finestra di dialogo, poiché un [CPropertyPage](../mfc/reference/cpropertypage-class.md) oggetto è un specializzati [CDialog](../mfc/reference/cdialog-class.md) oggetto. La procedura di utilizza del framework finestra di dialogo data exchange (DDX), che consente di scambiare dati tra i controlli in una finestra di dialogo casella e le variabili membro dell'oggetto della finestra di dialogo.

L'importante differenza tra lo scambio di dati con una finestra delle proprietà e con una normale finestra di dialogo è che la finestra delle proprietà dispone di più pagine, pertanto è necessario scambiare dati con tutte le pagine nella finestra delle proprietà. Per altre informazioni su DDX, vedere [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).

Nell'esempio seguente viene illustrato lo scambio di dati da una vista a due pagine di una finestra delle proprietà:

[!code-cpp[NVC_MFCDocView#4](../mfc/codesnippet/cpp/exchanging-data_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)
