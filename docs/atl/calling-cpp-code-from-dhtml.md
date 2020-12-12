---
description: 'Altre informazioni su: chiamata di codice C++ da DHTML'
title: Chiamata di codice C++ da DHTML
ms.date: 11/04/2016
helpviewer_keywords:
- DHTML, calling C++ code from
ms.assetid: 37329acd-4c22-40ca-a85a-b7480748f75f
ms.openlocfilehash: d880b0e9cb2f0b9d5228df7da4fc96fceeb87943
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148486"
---
# <a name="calling-c-code-from-dhtml"></a>Chiamata di codice C++ da DHTML

Un controllo DHTML può essere ospitato in un contenitore, ad esempio test container o Internet Explorer. Per informazioni su come accedere a test container, vedere test di [proprietà ed eventi con test container](../mfc/testing-properties-and-events-with-test-container.md) .

Il contenitore che ospita il controllo comunica con il controllo usando le normali interfacce del controllo. DHTML usa l'interfaccia dispatch che termina con "UI" per comunicare con il codice C++ e con la risorsa HTML. Quando si [modifica il controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md), è possibile provare ad aggiungere i metodi che devono essere chiamati da queste interfacce differenti.

Per visualizzare un esempio di chiamata di codice C++ da DHTML, [creare un controllo DHTML](../atl/creating-an-atl-dhtml-control.md) utilizzando la creazione guidata controllo ATL ed esaminare il codice nel file di intestazione e nel file HTML.

## <a name="declaring-webbrowser-methods-in-the-header-file"></a>Dichiarazione di Metodi WebBrowser nel file di intestazione

Per richiamare i metodi C++ dall'interfaccia utente di DHTML, è necessario aggiungere metodi all'interfaccia dell'interfaccia utente del controllo. Il file di intestazione creato dalla creazione guidata controllo ATL, ad esempio, contiene il metodo C++ `OnClick` , che è un membro dell'interfaccia utente del controllo generato dalla procedura guidata.

Esaminare `OnClick` il file con estensione h del controllo:

[!code-cpp[NVC_ATL_COM#4](../atl/codesnippet/cpp/calling-cpp-code-from-dhtml_1.h)]

Il primo parametro, *pdispBody*, è un puntatore all'interfaccia dispatch dell'oggetto Body. Il secondo parametro, *Varcolor*, identifica il colore da applicare al controllo.

## <a name="calling-c-code-in-the-html-file"></a>Chiamata di codice C++ nel file HTML

Una volta dichiarati i metodi WebBrowser nel file di intestazione, è possibile richiamare i metodi dal file HTML. Nel file HTML si noti che la creazione guidata controllo ATL inserisce tre metodi di invio di Windows: tre `OnClick` metodi che inviano messaggi per modificare il colore di sfondo del controllo.

Esaminare uno dei metodi nel file HTML:

`<BUTTON onclick='window.external.OnClick(theBody, "red");'>Red</BUTTON>`

Nel codice HTML precedente, il metodo esterno della finestra, `OnClick` , viene chiamato come parte del tag Button. Il metodo ha due parametri: `theBody` , che fa riferimento al corpo del documento HTML e `"red"` , che indica che il colore di sfondo del controllo verrà modificato in rosso quando si fa clic sul pulsante. Il `Red` tag seguente è l'etichetta del pulsante.

Per ulteriori informazioni sulla specifica di metodi personalizzati, vedere [modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md) . Per ulteriori informazioni sul file HTML, vedere [identificazione degli elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) .

## <a name="see-also"></a>Vedi anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
