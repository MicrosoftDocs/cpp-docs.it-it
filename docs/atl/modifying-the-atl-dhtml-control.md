---
description: 'Altre informazioni su: modifica del controllo DHTML ATL'
title: Modifica del controllo DHTML ATL
ms.date: 11/04/2016
helpviewer_keywords:
- HTML controls, modifying
- DHTML controls
- DHTML controls, modifying
ms.assetid: c053f35f-8629-4600-9595-721f5956777a
ms.openlocfilehash: 7ae9c102addd7a33341a8f16105a3581de10481e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159453"
---
# <a name="modifying-the-atl-dhtml-control"></a>Modifica del controllo DHTML ATL

La creazione guidata controllo ATL fornisce codice iniziale per poter compilare ed eseguire il controllo, in modo da visualizzare il modo in cui i metodi vengono scritti nei file di progetto e il modo in cui il DHTML chiama il codice C++ del controllo usando i metodi dispatch. È possibile aggiungere qualsiasi metodo Dispatch all'interfaccia. Quindi, è possibile chiamare i metodi nella risorsa HTML.

## <a name="to-modify-the-atl-dhtml-control"></a>Per modificare il controllo DHTML ATL

1. In **Visualizzazione classi** espandere il progetto di controllo.

   Si noti che l'interfaccia che termina con "UI" ha un solo metodo, `OnClick` . L'interfaccia che non termina con "UI" non dispone di metodi.

1. Aggiungere un metodo denominato `MethodInvoked` all'interfaccia che non termina con "UI".

   Questo metodo verrà aggiunto all'interfaccia utilizzata nel contenitore dei controlli per l'interazione del contenitore e non per l'interfaccia utilizzata da DHTML per interagire con il controllo. Solo il contenitore può richiamare questo metodo.

1. Individuare il metodo di cui è stato effettuato il stub nel file con estensione cpp e aggiungere il codice per visualizzare una finestra di messaggio, ad esempio:

   [!code-cpp[NVC_ATL_COM#5](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_1.cpp)]

1. Aggiungere un altro metodo denominato `HelloHTML` , solo questa volta, aggiungerlo all'interfaccia che termina con "UI". Individuare il metodo di cui è stato effettuato il Stub `HelloHTML` nel file con estensione cpp e aggiungere il codice per visualizzare una finestra di messaggio, ad esempio:

   [!code-cpp[NVC_ATL_COM#6](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_2.cpp)]

1. Aggiungere un terzo metodo, `GoToURL` , all'interfaccia che non termina con "UI". Implementare questo metodo chiamando [IWebBrowser2:: Navigate](/previous-versions//aa752133\(v=vs.85\)), come indicato di seguito:

   [!code-cpp[NVC_ATL_COM#7](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_3.cpp)]

   È possibile utilizzare i `IWebBrowser2` metodi perché ATL fornisce un puntatore a tale interfaccia nel file con estensione h.

Modificare quindi la risorsa HTML per richiamare i metodi creati. Per richiamare questi metodi vengono aggiunti tre pulsanti.

## <a name="to-modify-the-html-resource"></a>Per modificare la risorsa HTML

1. In **Esplora soluzioni** fare doppio clic sul file con estensione htm per visualizzare la risorsa HTML.

   Esaminare il codice HTML, in particolare le chiamate ai metodi di invio esterni di Windows. Il codice HTML chiama il metodo del progetto `OnClick` e i parametri indicano il corpo del controllo ( `theBody` ) e il colore da assegnare (" `red` "). Il testo che segue la chiamata al metodo è l'etichetta visualizzata sul pulsante.

1. Aggiungere un altro `OnClick` metodo, modificare solo il colore. Ad esempio:

    ```html
    <br>
    <br>
    <BUTTON onclick='window.external.OnClick(theBody, "white");'>Refresh</BUTTON>
    ```

   Questo metodo creerà un pulsante, denominato **Refresh**, su cui l'utente può fare clic per restituire il controllo allo sfondo bianco originale.

1. Aggiungere la chiamata al `HelloHTML` metodo creato. Ad esempio:

    ```html
    <br>
    <br>
    <BUTTON onclick='window.external.HelloHTML();'>HelloHTML</BUTTON>
    ```

   Questo metodo creerà un pulsante, denominato **HelloHTML**, su cui l'utente può fare clic per visualizzare la `HelloHTML` finestra di messaggio.

È ora possibile compilare e [testare il controllo DHTML modificato](../atl/testing-the-modified-atl-dhtml-control.md).

## <a name="see-also"></a>Vedi anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
