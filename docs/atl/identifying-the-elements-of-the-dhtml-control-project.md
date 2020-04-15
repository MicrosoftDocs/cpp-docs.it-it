---
title: Identificazione degli elementi del progetto di controllo DHTMLIdentifying the Elements of the DHTML Control Project
ms.date: 11/19/2018
helpviewer_keywords:
- HTML controls, ATL support
- DHTML controls, ATL support
ms.assetid: b627547a-3768-4346-9900-4b7a21fb8e27
ms.openlocfilehash: 5fabdc815989c21bdf6b0932b9d6826e28d7012a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319509"
---
# <a name="identifying-the-elements-of-the-dhtml-control-project"></a>Identificazione degli elementi del progetto di controllo DHTMLIdentifying the Elements of the DHTML Control Project

La maggior parte del codice di controllo DHTML è esattamente simile a quello creato per qualsiasi controllo ATL. Per una conoscenza di base del codice generico, utilizzare [l'esercitazione ATL](../atl/active-template-library-atl-tutorial.md)e leggere le sezioni [Creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md) e [nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md).

Un controllo DHTML è simile a qualsiasi controllo ATL, ad eccezione di:

- Oltre alle interfacce regolari implementate da un controllo, implementa un'interfaccia aggiuntiva che viene utilizzata per comunicare tra il codice c'è e l'interfaccia utente HTML (UI). L'interfaccia utente HTML chiama il codice C , utilizzando questa interfaccia.

- Crea una risorsa HTML per l'interfaccia utente del controllo.

- Consente l'accesso al modello a oggetti `m_spBrowser`DHTML tramite la variabile membro , che è un puntatore intelligente di tipo [IWebBrowser2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752127\(v=vs.85\)). Utilizzare questo puntatore per accedere a qualsiasi parte del modello a oggetti DHTML.

Nella figura seguente viene illustrata la relazione tra la DLL, il controllo DHTML, il browser Web e la risorsa HTML.

![Elementi di un progetto controllo DHTML](../atl/media/vc52en1.gif "Elementi di un progetto controllo DHTML")

> [!NOTE]
> I nomi in questo elemento grafico sono segnaposto. I nomi della risorsa HTML e le interfacce esposte nel controllo si basano sui nomi assegnati nella creazione guidata controllo ATL.

In questo grafico, gli elementi sono:

- **La mia DLL** DLL creata mediante la Creazione guidata progetto ATL.

- **Controllo DHTML** (`m_spBrowser`) Il controllo DHTML, creato utilizzando la Creazione guidata oggetto ATL. Questo controllo accede all'oggetto del browser Web e ai `IWebBrowser2`relativi metodi tramite l'interfaccia dell'oggetto del browser Web, . Il controllo stesso espone le due interfacce seguenti, oltre alle altre interfacce standard necessarie per un controllo.

  - `IDHCTL1`Interfaccia esposta dal controllo per l'utilizzo solo da parte del contenitore.

  - `IDHCTLUI1`L'interfaccia di invio per la comunicazione tra il codice c'è e l'interfaccia utente HTML. Il browser Web utilizza l'interfaccia dispatch del controllo per visualizzare il controllo. È possibile chiamare vari metodi di questa interfaccia dispatch dall'interfaccia utente del controllo richiamando `window.external`, seguito dal nome del metodo su questa interfaccia dispatch che si desidera richiamare. Si accederebbe `window.external` da un tag SCRIPT all'interno del codice HTML che costituisce l'interfaccia utente per questo controllo. Per ulteriori informazioni sulla chiamata di metodi esterni nel file di risorse, vedere Chiamata di [codice C .](../atl/calling-cpp-code-from-dhtml.md)

- **IDR_CTL1** ID risorsa della risorsa HTML. Il nome del file, in questo caso, è DHCTL1UI.htm. Il controllo DHTML utilizza una risorsa HTML che contiene tag HTML standard e comandi di invio di finestre esterne che è possibile modificare utilizzando l'editor di testo.

- **Browser Web** Il browser Web visualizza l'interfaccia utente del controllo, in base al codice HTML nella risorsa HTML. Un puntatore all'interfaccia `IWebBrowser2` del browser Web è disponibile nel controllo DHTML per consentire l'accesso al modello a oggetti DHTML.

La Creazione guidata controllo ATL genera un controllo con codice predefinito sia nella risorsa HTML che nel file cpp. È possibile compilare ed eseguire il controllo come generato dalla procedura guidata e quindi visualizzare il controllo nel browser Web o in ActiveX Control Test Container. L'immagine seguente mostra il controllo DHTML ATL predefinito con tre pulsanti visualizzati in Test Container:

![Controllo DHTML ATL](../atl/media/vc52en2.gif "Controllo DHTML ATL")

Vedere [Creazione di un controllo DHTML ATL](../atl/creating-an-atl-dhtml-control.md) per iniziare a compilare un controllo DHTML. Per informazioni su come accedere a Test Container, vedere [Test di proprietà ed eventi con Test Container.See Testing Properties](../mfc/testing-properties-and-events-with-test-container.md) and Events with Test Container for information on how to access Test Container.

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
