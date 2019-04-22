---
title: Specificare le pagine delle proprietà (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- ISpecifyPropertyPages method
- property pages, specifying
ms.assetid: ee8678cf-c708-49ab-b0ad-fc2db31f1ac3
ms.openlocfilehash: 47ee0c7d6d2ed464318ab80385ac71cff426a002
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58770980"
---
# <a name="specifying-property-pages"></a>Specificare le pagine delle proprietà

Quando si crea un controllo ActiveX, è spesso consigliabile associarlo a pagine delle proprietà che può essere utilizzati per impostare le proprietà del controllo. Controlla l'uso di contenitori di `ISpecifyPropertyPages` interfaccia per scoprire quali pagine delle proprietà possono essere utilizzati per impostare le proprietà del controllo. È necessario implementare questa interfaccia nel controllo.

Per implementare `ISpecifyPropertyPages` utilizzando ATL, procedere come segue:

1. Derivare la classe da [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md).

1. Aggiungere una voce per `ISpecifyPropertyPages` alla mappa COM della classe.

1. Aggiungere un [PROP_PAGE](reference/property-map-macros.md#prop_page) voce alla mappa delle proprietà per ogni pagina associato al controllo.

> [!NOTE]
> Durante la generazione di un controllo standard usando il [Creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md), sarà solo necessario aggiungere le voci PROP_PAGE al mapping della proprietà. La procedura guidata genera il codice necessario per gli altri passaggi.

I contenitori ben progettati visualizzerà le pagine delle proprietà specificato nello stesso ordine delle voci di PROP_PAGE nel mapping della proprietà. In generale, è opportuno inserire le voci della pagina proprietà standard dopo le voci per le pagine personalizzate nel mapping della proprietà, in modo che gli utenti visualizzano prima di tutto le pagine specifiche per il controllo.

## <a name="example"></a>Esempio

La classe seguente per un calendario di controllo viene utilizzato il `ISpecifyPropertyPages` interfaccia per comunicare ai contenitori che è possono impostare le relative proprietà usando una pagina di date personalizzato e la pagina colore predefinita.

[!code-cpp[NVC_ATL_Windowing#72](../atl/codesnippet/cpp/specifying-property-pages_1.h)]

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../atl/atl-com-property-pages.md)<br/>
[Esempio ATLPages](../overview/visual-cpp-samples.md)
