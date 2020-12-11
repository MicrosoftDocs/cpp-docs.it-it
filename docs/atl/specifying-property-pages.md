---
description: 'Altre informazioni su: specifica di pagine delle proprietà'
title: Specifica di pagine delle proprietà (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- ISpecifyPropertyPages method
- property pages, specifying
ms.assetid: ee8678cf-c708-49ab-b0ad-fc2db31f1ac3
ms.openlocfilehash: 171440dde11178c85d1f636874b0b161691cb9cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157425"
---
# <a name="specifying-property-pages"></a>Specifica di pagine delle proprietà

Quando si crea un controllo ActiveX, sarà spesso necessario associarlo alle pagine delle proprietà che possono essere utilizzate per impostare le proprietà del controllo. I contenitori di controllo usano l' `ISpecifyPropertyPages` interfaccia per individuare le pagine delle proprietà che è possibile usare per impostare le proprietà del controllo. Sarà necessario implementare questa interfaccia sul controllo.

Per implementare `ISpecifyPropertyPages` con ATL, seguire questa procedura:

1. Derivare la classe da [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md).

1. Aggiungere una voce per `ISpecifyPropertyPages` alla mappa com della classe.

1. Aggiungere una voce [PROP_PAGE](reference/property-map-macros.md#prop_page) alla mappa delle proprietà per ogni pagina associata al controllo.

> [!NOTE]
> Quando si genera un controllo standard utilizzando la [creazione guidata controllo ATL](../atl/reference/atl-control-wizard.md), è necessario aggiungere solo le voci PROP_PAGE al mapping delle proprietà. La procedura guidata genera il codice necessario per gli altri passaggi.

I contenitori con il corretto comportamento visualizzeranno le pagine delle proprietà specificate nello stesso ordine delle voci PROP_PAGE nel mapping delle proprietà. In genere, è consigliabile inserire le voci della pagina delle proprietà standard dopo le voci per le pagine personalizzate nella mappa delle proprietà, in modo che gli utenti visualizzino prima le pagine specifiche del controllo.

## <a name="example"></a>Esempio

La classe seguente per un controllo Calendar utilizza l' `ISpecifyPropertyPages` interfaccia per indicare ai contenitori che è possibile impostare le relative proprietà utilizzando una pagina di data personalizzata e la pagina dei colori azionaria.

[!code-cpp[NVC_ATL_Windowing#72](../atl/codesnippet/cpp/specifying-property-pages_1.h)]

## <a name="see-also"></a>Vedi anche

[Pagine delle proprietà](../atl/atl-com-property-pages.md)<br/>
[Esempio ATLPages](../overview/visual-cpp-samples.md)
