---
description: 'Altre informazioni su: eliminazione definitiva del controllo elenco'
title: Distruzione del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- list controls [MFC], destroying
- CListCtrl class [MFC], destroying controls
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
ms.openlocfilehash: b909889a6365de639f67359859641af6e2bc6525
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327832"
---
# <a name="destroying-the-list-control"></a>Distruzione del controllo List

Se l'oggetto [CListCtrl](reference/clistctrl-class.md) viene incorporato come membro dati di una vista o di una classe della finestra di dialogo, viene eliminato definitivamente quando il proprietario viene eliminato definitivamente. Se si usa un [CListView](reference/clistview-class.md), il Framework Elimina il controllo quando elimina la visualizzazione.

Se si dispone che alcuni dei dati dell'elenco siano archiviati nell'applicazione anziché nel controllo elenco, sarà necessario disporre la relativa deallocazione. Per altre informazioni, vedere [elementi di callback e maschera di callback](/windows/win32/Controls/using-list-view-controls) nel Windows SDK.

Inoltre, l'utente è responsabile della deallocazione di qualsiasi elenco di immagini creato e associato all'oggetto controllo elenco.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
