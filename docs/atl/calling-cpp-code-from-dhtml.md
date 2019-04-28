---
title: Chiamata di codice C++ da DHTML
ms.date: 11/04/2016
helpviewer_keywords:
- DHTML, calling C++ code from
ms.assetid: 37329acd-4c22-40ca-a85a-b7480748f75f
ms.openlocfilehash: fb63f8671770f57972a4c789d983bdf9658d5ecb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62251733"
---
# <a name="calling-c-code-from-dhtml"></a>Chiamata di codice C++ da DHTML

Un controllo DHTML può essere ospitato in un contenitore, ad esempio Test Container o in Internet Explorer. Visualizzare [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni sull'accesso ai Test Container.

Il contenitore che ospita il controllo comunica con il controllo tramite le interfacce di controllo normale. DHTML Usa l'interfaccia dispatch che termina con "UI" per comunicare con il codice C++ e la risorsa HTML. Nelle [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md), sarà possibile applicare aggiungendo i metodi da chiamare da queste interfacce diverse.

Per vedere un esempio di chiamata di codice C++ da DHTML, [creare un controllo DHTML](../atl/creating-an-atl-dhtml-control.md) utilizzando la creazione guidata controllo ATL ed esaminare il codice nel file di intestazione e nel file HTML.

## <a name="declaring-webbrowser-methods-in-the-header-file"></a>Dichiarazione dei metodi WebBrowser nel File di intestazione

Per richiamare metodi C++ di DHTML UI, è necessario aggiungere i metodi di interfaccia utente del controllo. Ad esempio, il file di intestazione creato dalla creazione guidata controllo ATL contiene il metodo C++ `OnClick`, che è un membro dell'interfaccia utente del controllo generato dalla procedura guidata.

Esaminare `OnClick` nel file con estensione h del controllo:

[!code-cpp[NVC_ATL_COM#4](../atl/codesnippet/cpp/calling-cpp-code-from-dhtml_1.h)]

Il primo parametro, *pdispBody*, è un puntatore a interfaccia dispatch dell'oggetto del corpo. Il secondo parametro, *varColor*, identifica il colore da applicare al controllo.

## <a name="calling-c-code-in-the-html-file"></a>Chiamata di codice C++ in File HTML

Dopo aver dichiarato i metodi WebBrowser nel file di intestazione, è possibile richiamare i metodi dal file HTML. Si noti che nel file HTML che la creazione guidata controllo ATL inserisce tre metodi di distribuzione Windows: tre `OnClick` metodi che inviano messaggi per modificare il colore di sfondo del controllo.

Esaminare uno dei metodi nel file HTML:

`<BUTTON onclick='window.external.OnClick(theBody, "red");'>Red</BUTTON>`

Nel codice HTML in precedenza, il metodo esterno della finestra, `OnClick`, viene chiamata come parte del tag del pulsante. Il metodo ha due parametri: `theBody`, che fa riferimento al corpo del documento HTML, e `"red"`, che indica che il colore di sfondo del controllo verrà modificato e impostato su rosso quando si fa clic sul pulsante. Il `Red` dopo il tag è l'etichetta del pulsante.

Visualizzare [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md) per altre informazioni su come fornire i propri metodi. Visualizzare [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) per altre informazioni sul file HTML.

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
