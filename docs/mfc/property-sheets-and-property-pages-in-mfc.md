---
title: Finestre delle proprietà e pagine delle proprietà in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- property pages [MFC], MFC
- controls [MFC], property sheets
- property sheets, MFC
- tab dialog boxes
ms.assetid: e1bede2b-0285-4b88-a052-0f8a372807a2
ms.openlocfilehash: 10fb34c79745e672d30dd2d3c3b97d457583f795
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371179"
---
# <a name="property-sheets-and-property-pages-in-mfc"></a>Finestre delle proprietà e pagine delle proprietà in MFC

Una finestra delle proprietà, nota anche come finestra di dialogo a schede, è una finestra di dialogo che contiene le pagine delle proprietà. Ogni pagina delle proprietà è basata su una risorsa modello di finestra di dialogo e contiene controlli. È racchiuso in una pagina con una scheda in alto. La scheda assegna un nome alla pagina e ne indica lo scopo. Gli utenti fanno clic su una scheda nella finestra delle proprietà per selezionare un set di controlli.

Utilizzare le pagine per raggruppare i controlli nella finestra delle proprietà in set significativi. La finestra delle proprietà contenuta include in genere diversi controlli propri. Questi si applicano a tutte le pagine.

Le finestre delle proprietà sono basate sulla classe [CPropertySheet](../mfc/reference/cpropertysheet-class.md). Le pagine delle proprietà sono basate sulla classe [CPropertyPage](../mfc/reference/cpropertypage-class.md).

Una finestra delle proprietà è un tipo speciale di finestra di dialogo che viene in genere utilizzata per modificare gli attributi di un oggetto esterno, ad esempio la selezione corrente in una vista. La finestra delle proprietà è costituita da tre parti principali: la finestra di dialogo contenitore, una o più pagine delle proprietà visualizzate una alla volta e una scheda nella parte superiore di ogni pagina su cui l'utente fa clic per selezionare la pagina. Le finestre delle proprietà sono utili per le situazioni in cui si dispone di diversi gruppi simili di impostazioni o opzioni da modificare. Una finestra delle proprietà raggruppa le informazioni in modo facilmente comprensibile.

> [!NOTE]
> Quando si tenta di visualizzare una `CPropertySheet::DoModal`finestra delle proprietà utilizzando , il sistema potrebbe generare un'eccezione first-chance. Questa eccezione si verifica perché il sistema sta tentando di modificare gli stili di [finestra](../mfc/reference/styles-used-by-mfc.md#window-styles) dell'oggetto prima che l'oggetto sia stato creato. Per ulteriori informazioni su questa eccezione e su come evitarla o gestirla, vedere [CPropertySheet::DoModal](../mfc/reference/cpropertysheet-class.md#domodal).

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)
