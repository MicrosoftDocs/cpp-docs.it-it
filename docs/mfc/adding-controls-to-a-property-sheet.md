---
description: 'Altre informazioni su: aggiunta di controlli a una finestra delle proprietà'
title: Aggiunta di controlli a una finestra delle proprietà
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], adding to property sheets
- property sheets, adding controls
ms.assetid: 24ad4c0b-c1db-4850-b9f0-34aae8d74571
ms.openlocfilehash: e220d08b46f1db7e09ad1f1398731ce7a98f2dc5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339067"
---
# <a name="adding-controls-to-a-property-sheet"></a>Aggiunta di controlli a una finestra delle proprietà

Per impostazione predefinita, una finestra delle proprietà alloca l'area della finestra per le pagine delle proprietà, l'indice della scheda e i pulsanti OK, Annulla e Applica. Una finestra delle proprietà non modale non ha i pulsanti OK, Annulla e applica. È possibile aggiungere altri controlli alla finestra delle proprietà. Ad esempio, è possibile aggiungere una finestra di anteprima a destra dell'area della pagina delle proprietà per mostrare all'utente come apparirebbero le impostazioni correnti se applicate a un oggetto esterno.

È possibile aggiungere controlli alla finestra delle proprietà nel gestore di `OnCreate`. L'aggiunta di ulteriori controlli in genere richiede di espandere le dimensioni della finestra delle proprietà. Dopo la chiamata della classe di base **CPropertySheet:: OnCreate**, chiamare [GetWindowRect](reference/cwnd-class.md#getwindowrect) per ottenere la larghezza e l'altezza della finestra delle proprietà attualmente allocata, espandere le dimensioni del rettangolo e chiamare [MoveWindow](reference/cwnd-class.md#movewindow) per modificare le dimensioni della finestra della finestra delle proprietà.

## <a name="see-also"></a>Vedi anche

[Finestre delle proprietà](property-sheets-mfc.md)<br/>
[Classe CPropertyPage](reference/cpropertypage-class.md)<br/>
[Classe CPropertySheet](reference/cpropertysheet-class.md)
