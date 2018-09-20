---
title: Finestre delle proprietà e pagine delle proprietà in MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- property pages [MFC], MFC
- controls [MFC], property sheets
- property sheets, MFC
- tab dialog boxes
ms.assetid: e1bede2b-0285-4b88-a052-0f8a372807a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f35282ce46aff3a3f0fba5fca505653cd892a392
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46430047"
---
# <a name="property-sheets-and-property-pages-in-mfc"></a>Finestre delle proprietà e pagine delle proprietà in MFC

Una finestra delle proprietà, noto anche come una scheda della finestra di dialogo è una finestra di dialogo che contiene le pagine delle proprietà. Ogni pagina delle proprietà si basa su una risorsa modello di finestra di dialogo e contiene i controlli. Viene racchiuso in una pagina con una scheda nella parte superiore. Nella scheda nome della pagina e ne indica lo scopo. Gli utenti di fare clic su una scheda nella finestra delle proprietà per selezionare un set di controlli.

Usare le pagine per raggruppare i controlli nella finestra delle proprietà in modo logico. La finestra delle proprietà indipendenti include in genere diversi controlli propri. Queste si applicano a tutte le pagine.

Finestre delle proprietà sono basate sulla classe [CPropertySheet](../mfc/reference/cpropertysheet-class.md). Pagine delle proprietà sono basate sulla classe [CPropertyPage](../mfc/reference/cpropertypage-class.md).

Una finestra delle proprietà è un tipo speciale di finestra di dialogo che viene generalmente usato per modificare gli attributi di alcuni oggetti esterni, ad esempio la selezione corrente in una vista. La finestra delle proprietà dispone di tre parti principali: il contenitore della finestra di dialogo Pagine delle proprietà di uno o più illustrato uno alla volta e una scheda nella parte superiore di ogni pagina che l'utente fa clic per selezionare tale pagina. Finestre delle proprietà sono utili nelle situazioni in cui si dispone di diversi gruppi simili delle opzioni per modificare o impostazioni. Le informazioni vengono raggruppate in un modo facilmente comprensibile una finestra delle proprietà.

> [!NOTE]
>  Quando si sta tentando di visualizzare una finestra delle proprietà tramite `CPropertySheet::DoModal`, il sistema potrebbe generare un'eccezione first-chance. Questa eccezione si verifica perché il sistema sta tentando di modificare la [stili di finestra](../mfc/reference/styles-used-by-mfc.md#window-styles) dell'oggetto prima che l'oggetto è stato creato. Per altre informazioni su questa eccezione, nonché come evitarli o di gestirlo, vedere [CPropertySheet:: DoModal](../mfc/reference/cpropertysheet-class.md#domodal).

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)

