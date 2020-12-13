---
description: 'Altre informazioni su: identificazione degli elementi del progetto di controllo DHTML'
title: Identificazione degli elementi del progetto di controllo DHTML
ms.date: 11/19/2018
helpviewer_keywords:
- HTML controls, ATL support
- DHTML controls, ATL support
ms.assetid: b627547a-3768-4346-9900-4b7a21fb8e27
ms.openlocfilehash: 7f04857378564a86fc875e9874b79f6ae6c6a625
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148018"
---
# <a name="identifying-the-elements-of-the-dhtml-control-project"></a>Identificazione degli elementi del progetto di controllo DHTML

La maggior parte del codice di controllo DHTML è identica a quella creata per qualsiasi controllo ATL. Per una conoscenza di base del codice generico, utilizzare l' [esercitazione](../atl/active-template-library-atl-tutorial.md)relativa a ATL e leggere le sezioni [creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md) e [nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md).

Un controllo DHTML è simile a qualsiasi controllo ATL, tranne:

- Oltre alle interfacce regolari implementate da un controllo, viene implementata un'interfaccia aggiuntiva utilizzata per la comunicazione tra il codice C++ e l'interfaccia utente (UI) HTML. L'interfaccia utente HTML chiama il codice C++ usando questa interfaccia.

- Crea una risorsa HTML per l'interfaccia utente del controllo.

- Consente l'accesso al modello a oggetti DHTML tramite la variabile membro `m_spBrowser` , che è un puntatore intelligente di tipo [IWebBrowser2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752127\(v=vs.85\)). Utilizzare questo puntatore per accedere a qualsiasi parte del modello a oggetti DHTML.

Il grafico seguente illustra la relazione tra la DLL, il controllo DHTML, il Web browser e la risorsa HTML.

![Elementi di un progetto controllo DHTML](../atl/media/vc52en1.gif "Elementi di un progetto controllo DHTML")

> [!NOTE]
> I nomi di questa immagine sono segnaposto. I nomi della risorsa HTML e le interfacce esposte sul controllo si basano sui nomi assegnati alla creazione guidata controllo ATL.

In questo grafico gli elementi sono:

- **Dll personale** DLL creata utilizzando la creazione guidata progetto ATL.

- **Controllo DHTML** ( `m_spBrowser` ) il controllo DHTML, creato mediante la creazione guidata oggetto ATL. Questo controllo accede all'oggetto Web browser e ai relativi metodi tramite l'interfaccia dell'oggetto Web browser, `IWebBrowser2` . Il controllo stesso espone le due interfacce seguenti, oltre alle altre interfacce standard necessarie per un controllo.

  - `IDHCTL1` Interfaccia esposta dal controllo per l'utilizzo solo da parte del contenitore.

  - `IDHCTLUI1` Interfaccia dispatch per la comunicazione tra il codice C++ e l'interfaccia utente HTML. Il Web browser utilizza l'interfaccia dispatch del controllo per visualizzare il controllo. È possibile chiamare diversi metodi di questa interfaccia dispatch dall'interfaccia utente del controllo richiamando `window.external` , seguito dal nome del metodo su questa interfaccia di invio che si desidera richiamare. È possibile accedere `window.external` da un tag di script all'interno del codice HTML che costituisce l'interfaccia utente per questo controllo. Per ulteriori informazioni sulla chiamata di metodi esterni nel file di risorse, vedere [chiamata di codice C++ da DHTML](../atl/calling-cpp-code-from-dhtml.md).

- **IDR_CTL1** ID risorsa della risorsa HTML. Il nome del file, in questo caso, è DHCTL1UI.htm. Il controllo DHTML usa una risorsa HTML che contiene tag HTML standard e comandi di invio della finestra esterna che è possibile modificare tramite l'editor di testo.

- **Web browser** Il Web browser Visualizza l'interfaccia utente del controllo, in base al codice HTML nella risorsa HTML. Un puntatore all'interfaccia del Web browser `IWebBrowser2` è disponibile nel controllo DHTML per consentire l'accesso al modello a oggetti DHTML.

La creazione guidata controllo ATL genera un controllo con il codice predefinito sia nella risorsa HTML che nel file con estensione cpp. È possibile compilare ed eseguire il controllo come generato dalla procedura guidata e quindi visualizzare il controllo in Web browser o nel contenitore di test del controllo ActiveX. Nell'immagine seguente viene illustrato il controllo DHTML ATL predefinito con tre pulsanti visualizzati in test container:

![Controllo DHTML ATL](../atl/media/vc52en2.gif "Controllo DHTML ATL")

Vedere [creazione di un controllo DHTML ATL](../atl/creating-an-atl-dhtml-control.md) per iniziare a compilare un controllo DHTML. Per informazioni su come accedere a test container, vedere test di [proprietà ed eventi con test container](../mfc/testing-properties-and-events-with-test-container.md) .

## <a name="see-also"></a>Vedi anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
