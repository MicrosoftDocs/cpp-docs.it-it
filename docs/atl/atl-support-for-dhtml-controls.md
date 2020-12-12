---
description: 'Altre informazioni su: supporto ATL per controlli DHTML'
title: Supporto ATL per controlli DHTML
ms.date: 11/04/2016
helpviewer_keywords:
- HTML controls, ATL support
- DHTML controls, ATL support
- DHTML controls
ms.assetid: 4ba98098-da5d-4362-96ad-8372f816c307
ms.openlocfilehash: 7527527bc5574470fd361bae2375c25ce9345f3a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148590"
---
# <a name="atl-support-for-dhtml-controls"></a>Supporto ATL per controlli DHTML

Con ATL è possibile creare un controllo con funzionalità DHTML (Dynamic HTML). Controllo DHTML ATL:

- Ospita il controllo WebBrowser.

- Specifica, usando HTML, l'interfaccia utente (UI) del controllo DHTML.

- Accede all'oggetto WebBrowser e ai relativi metodi tramite la relativa interfaccia [IWebBrowser2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752127\(v=vs.85\)).

- Gestisce la comunicazione tra il codice C++ e HTML.

Un controllo DHTML è simile a qualsiasi altro controllo ATL, ad eccezione del fatto che il controllo DHTML include un'interfaccia dispatch aggiuntiva. Vedere la figura in [identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) per un'illustrazione delle interfacce fornite nel progetto DHTML predefinito.

È possibile visualizzare il controllo DHTML ATL in un Web browser o in un altro contenitore, ad esempio il contenitore di test del controllo ActiveX.

## <a name="in-this-section"></a>Contenuto della sezione

[Identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md)<br/>
Descrive gli elementi di un progetto di controllo DHTML.

[Chiamata di codice C++ da DHTML](../atl/calling-cpp-code-from-dhtml.md)<br/>
Viene fornito un esempio di chiamata di codice C++ da un controllo DHTML.

[Creazione di un controllo DHTML ATL](../atl/creating-an-atl-dhtml-control.md)<br/>
Elenca i passaggi per la creazione di un controllo DHTML.

[Test del controllo DHTML ATL](../atl/testing-the-atl-dhtml-control.md)<br/>
Viene illustrato come compilare e testare il progetto di controllo DHTML iniziale.

[Modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md)<br/>
Mostra come aggiungere alcune funzionalità al controllo.

[Test del controllo DHTML ATL modificato](../atl/testing-the-modified-atl-dhtml-control.md)<br/>
Viene illustrato come compilare e testare la funzionalità aggiunta del controllo.

## <a name="related-sections"></a>Sezioni correlate

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Fornisce collegamenti ad argomenti concettuali sulla programmazione con Active Template Library.
