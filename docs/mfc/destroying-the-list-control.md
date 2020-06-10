---
title: Distruzione del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- list controls [MFC], destroying
- CListCtrl class [MFC], destroying controls
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
ms.openlocfilehash: d128a613a2a4cb595f362f843a5ae2eba830e538
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621904"
---
# <a name="destroying-the-list-control"></a>Distruzione del controllo List

Se l'oggetto [CListCtrl](reference/clistctrl-class.md) viene incorporato come membro dati di una vista o di una classe della finestra di dialogo, viene eliminato definitivamente quando il proprietario viene eliminato definitivamente. Se si usa un [CListView](reference/clistview-class.md), il Framework Elimina il controllo quando elimina la visualizzazione.

Se si dispone che alcuni dei dati dell'elenco siano archiviati nell'applicazione anziché nel controllo elenco, sarà necessario disporre la relativa deallocazione. Per altre informazioni, vedere [elementi di callback e maschera di callback](/windows/win32/Controls/using-list-view-controls) nel Windows SDK.

Inoltre, l'utente è responsabile della deallocazione di qualsiasi elenco di immagini creato e associato all'oggetto controllo elenco.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
