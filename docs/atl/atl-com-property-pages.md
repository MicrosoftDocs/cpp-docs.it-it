---
description: 'Ulteriori informazioni su: pagine delle proprietà COM ATL'
title: Pagine delle proprietà COM ATL
ms.date: 11/04/2016
helpviewer_keywords:
- property pages, COM
- ATL COM objects
- COM property pages
- property pages, ATL
- COM objects, ATL
- ATL property pages
ms.assetid: 663c7caa-2e5e-4b5c-b8ea-fd434ceb1654
ms.openlocfilehash: 252e8a98f4f34a07a374c77fc48aacd7eee8969f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165979"
---
# <a name="atl-com-property-pages"></a>Pagine delle proprietà COM ATL

Le pagine delle proprietà COM forniscono un'interfaccia utente per l'impostazione delle proprietà o la chiamata dei metodi di uno o più oggetti COM. Le pagine delle proprietà vengono ampiamente utilizzate dai controlli ActiveX per fornire interfacce utente avanzate che consentono di impostare le proprietà del controllo in fase di progettazione.

Le pagine delle proprietà sono oggetti COM che implementano l'interfaccia [IPropertyPage](/windows/win32/api/ocidl/nn-ocidl-ipropertypage) o [IPropertyPage2](/windows/win32/api/ocidl/nn-ocidl-ipropertypage2) . Queste interfacce forniscono metodi che consentono di associare la pagina a un `site` (oggetto com che rappresenta il contenitore della pagina) e a un numero di *oggetti* (oggetti com i cui metodi verranno chiamati in risposta alle modifiche apportate dall'utente della pagina delle proprietà). Il contenitore della pagina delle proprietà è responsabile della chiamata dei metodi nell'interfaccia della pagina delle proprietà per indicare alla pagina quando visualizzare o nascondere l'interfaccia utente e quando applicare le modifiche apportate dall'utente agli oggetti sottostanti.

Ogni pagina delle proprietà può essere compilata completamente indipendentemente dagli oggetti di cui è possibile impostare le proprietà. La necessità di una pagina di proprietà consiste nel comprendere una particolare interfaccia (o set di interfacce) e fornire un'interfaccia utente per la chiamata di metodi su tale interfaccia.

Per ulteriori informazioni, vedere [finestre delle proprietà e pagine delle proprietà](/windows/win32/com/property-sheets-and-property-pages) nell'Windows SDK.

## <a name="in-this-section"></a>Contenuto della sezione

[Specifica di pagine delle proprietà](../atl/specifying-property-pages.md)<br/>
Elenca i passaggi per specificare le pagine delle proprietà per il controllo e Mostra una classe di esempio.

[Implementazione di pagine delle proprietà](../atl/implementing-property-pages.md)<br/>
Elenca i passaggi per l'implementazione di pagine delle proprietà, inclusi i metodi di sostituzione. Viene illustrato un esempio completo basato sul programma di esempio ATLPages.

## <a name="related-sections"></a>Sezioni correlate

[Esempio ATLPages](../overview/visual-cpp-samples.md)<br/>
Esempio astratto per l'esempio ATLPages, che implementa una pagina delle proprietà usando `IPropertyPageImpl` .

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)
