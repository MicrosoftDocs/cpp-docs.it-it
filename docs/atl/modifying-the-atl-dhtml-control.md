---
title: La modifica del controllo DHTML ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTML controls, modifying
- DHTML controls
- DHTML controls, modifying
ms.assetid: c053f35f-8629-4600-9595-721f5956777a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ed2e1f8f24b3d33dd7d45bb597b252ead1453647
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861148"
---
# <a name="modifying-the-atl-dhtml-control"></a>La modifica del controllo DHTML ATL

La creazione guidata controllo ATL fornisce codice di avvio è possibile compilare ed eseguire il controllo e perciò è possibile vedere come i metodi vengono scritti nei file di progetto e come DHTML chiama codice di C++ del controllo mediante i metodi di invio. È possibile aggiungere qualsiasi metodo di invio all'interfaccia. Quindi, è possibile chiamare i metodi nella risorsa di HTML.

## <a name="to-modify-the-atl-dhtml-control"></a>Per modificare il controllo DHTML ATL

1. Nelle **Visualizzazione classi**, espandere il progetto di controllo.

   Si noti che l'interfaccia che termina con "UI" ha un solo metodo, `OnClick`. L'interfaccia che non termina con "UI" è privo di metodi.

1. Aggiungere un metodo denominato `MethodInvoked` all'interfaccia che non termina con "Dell'interfaccia utente."

   Questo metodo verrà aggiunto all'interfaccia che viene usato per interagire con il contenitore, non per l'interfaccia utilizzata da DHTML per interagire con il controllo nel contenitore del controllo. Solo il contenitore può richiamare questo metodo.

1. Individuare il metodo sottoposto a stub orizzontale nel file con estensione cpp e aggiungere codice per visualizzare una finestra di messaggio, ad esempio:

   [!code-cpp[NVC_ATL_COM#5](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_1.cpp)]

1. Aggiungere un altro metodo denominato `HelloHTML`, solo questa volta, aggiungerlo all'interfaccia che termina con "Dell'interfaccia utente." Trovare i messaggi sottoposti a stub `HelloHTML` metodo nell'estensione cpp file e aggiungere codice per visualizzare una finestra di messaggio, ad esempio:

   [!code-cpp[NVC_ATL_COM#6](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_2.cpp)]

1. Aggiungere un terzo metodo `GoToURL`, all'interfaccia che non termina con "Dell'interfaccia utente." Implementare questo metodo chiamando [IWebBrowser2:: Navigate](https://msdn.microsoft.com/library/aa752133.aspx), come indicato di seguito:

   [!code-cpp[NVC_ATL_COM#7](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_3.cpp)]

   È possibile usare il `IWebBrowser2` metodi perché ATL fornisce un puntatore a interfaccia per l'utente nel file con estensione h.

Successivamente, modificare la risorsa HTML per richiamare i metodi che è stato creato. Si aggiungeranno tre pulsanti per richiamare tali metodi.

## <a name="to-modify-the-html-resource"></a>Per modificare la risorsa HTML

1. Nelle **Esplora soluzioni**, fare doppio clic sul file con estensione htm per visualizzare la risorsa HTML.

   Esaminare il codice HTML, in particolare le chiamate ai metodi di distribuzione Windows esterni. Il codice HTML chiama il progetto `OnClick` metodo e i parametri di indicano il corpo del controllo (`theBody`) e il colore da assegnare ("`red`"). Il testo che segue la chiamata al metodo è l'etichetta visualizzata sul pulsante.

1. Aggiungere un altro `OnClick` metodo, cambia solo il colore. Ad esempio:

    ```html
    <br>
    <br>
    <BUTTON onclick='window.external.OnClick(theBody, "white");'>Refresh</BUTTON>
    ```

   Questo metodo creerà un pulsante, etichettato **Aggiorna**, che l'utente può fare clic per restituire il controllo per lo sfondo bianco originale.

1. Aggiungere la chiamata al `HelloHTML` metodo creato. Ad esempio:

    ```html
    <br>
    <br>
    <BUTTON onclick='window.external.HelloHTML();'>HelloHTML</BUTTON>
    ```

   Questo metodo creerà un pulsante, etichettato **HelloHTML**, che l'utente può fare clic per visualizzare il `HelloHTML` finestra di messaggio.

È ora possibile compilare e [testare il controllo modificato DHTML](../atl/testing-the-modified-atl-dhtml-control.md).

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
