---
description: 'Altre informazioni su: finestre delle proprietà e pagine delle proprietà in MFC'
title: Finestre delle proprietà e pagine delle proprietà in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- property pages [MFC], MFC
- controls [MFC], property sheets
- property sheets, MFC
- tab dialog boxes
ms.assetid: e1bede2b-0285-4b88-a052-0f8a372807a2
ms.openlocfilehash: 93662dcf07e2810ad9f4f51d6df8341f9f6df6dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185427"
---
# <a name="property-sheets-and-property-pages-in-mfc"></a>Finestre delle proprietà e pagine delle proprietà in MFC

Una finestra delle proprietà, nota anche come finestra di dialogo di tabulazione, è una finestra di dialogo contenente le pagine delle proprietà. Ogni pagina delle proprietà è basata su una risorsa modello di finestra di dialogo e contiene controlli. È racchiuso in una pagina con una tabulazione nella parte superiore. La scheda denomina la pagina e ne indica lo scopo. Gli utenti fanno clic su una scheda nella finestra delle proprietà per selezionare un set di controlli.

Utilizzare le pagine per raggruppare i controlli della finestra delle proprietà in set significativi. La finestra delle proprietà contenuta contiene in genere diversi controlli. Si applicano a tutte le pagine.

Le finestre delle proprietà sono basate sulla classe [CPropertySheet](../mfc/reference/cpropertysheet-class.md). Le pagine delle proprietà sono basate sulla classe [CPropertyPage](../mfc/reference/cpropertypage-class.md).

Una finestra delle proprietà è un tipo speciale di finestra di dialogo che viene in genere utilizzata per modificare gli attributi di un oggetto esterno, ad esempio la selezione corrente in una visualizzazione. La finestra delle proprietà è costituita da tre parti principali: la finestra di dialogo contenitore, una o più pagine delle proprietà visualizzate una alla volta e una scheda nella parte superiore di ogni pagina su cui l'utente fa clic per selezionare la pagina. Le finestre delle proprietà sono utili per le situazioni in cui sono presenti diversi gruppi di impostazioni o opzioni simili da modificare. Una finestra delle proprietà raggruppa le informazioni in modo facile da comprendere.

> [!NOTE]
> Quando si tenta di visualizzare una finestra delle proprietà utilizzando `CPropertySheet::DoModal` , il sistema potrebbe generare un'eccezione first-chance. Questa eccezione si verifica perché il sistema sta tentando di modificare gli [stili della finestra](../mfc/reference/styles-used-by-mfc.md#window-styles) dell'oggetto prima che l'oggetto sia stato creato. Per ulteriori informazioni su questa eccezione e su come evitarla o gestirla, vedere [CPropertySheet::D omodal](../mfc/reference/cpropertysheet-class.md#domodal).

## <a name="see-also"></a>Vedi anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)
