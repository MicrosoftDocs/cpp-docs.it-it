---
title: Identificazione degli elementi del progetto controllo DHTML
ms.date: 11/04/2016
helpviewer_keywords:
- HTML controls, ATL support
- DHTML controls, ATL support
ms.assetid: b627547a-3768-4346-9900-4b7a21fb8e27
ms.openlocfilehash: bb7fa67e6a3009922596c225895032bfb2f4fbb5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50533692"
---
# <a name="identifying-the-elements-of-the-dhtml-control-project"></a>Identificazione degli elementi del progetto controllo DHTML

Gran parte del codice di controllo DHTML viene creata esattamente come quello di qualsiasi controllo ATL. Per una conoscenza di base del codice generico, usare il [esercitazione ATL](../atl/active-template-library-atl-tutorial.md), e la lettura delle sezioni [creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md) e [nozioni fondamentali su oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md).

Un controllo DHTML è simile a qualsiasi controllo ATL, ad eccezione di:

- Oltre alle interfacce regolare che implementa un controllo, implementa un'interfaccia aggiuntiva che consente di stabilire la comunicazione tra il codice C++ e l'interfaccia utente HTML (UI). L'interfaccia utente HTML chiama codice C++ mediante questa interfaccia.

- Crea una risorsa HTML per il controllo dell'interfaccia utente.

- Consente di accedere al modello a oggetti DHTML tramite la variabile membro `m_spBrowser`, che è un puntatore intelligente di tipo [IWebBrowser2](https://msdn.microsoft.com/library/aa752127.aspx). Utilizzare questo puntatore per accedere a qualsiasi parte del modello a oggetti DHTML.

Il grafico seguente illustra la relazione tra la DLL, il controllo DHTML, il Web browser e la risorsa HTML.

![Elementi di un progetto controllo DHTML](../atl/media/vc52en1.gif "vc52en1")

> [!NOTE]
>  I nomi in questa immagine sono segnaposto. I nomi di risorsa di HTML e le interfacce esposte sul controllo si basano sui nomi delle che assegnazione nella creazione guidata controllo ATL.

In questo grafico, gli elementi sono:

- **La DLL** la DLL creata utilizzando la creazione guidata progetto ATL.

- **Controllo DHTML** (`m_spBrowser`) il controllo DHTML, creato utilizzando la creazione guidata oggetto ATL. L'oggetto del browser Web e i relativi metodi accede a questo controllo tramite l'interfaccia dell'oggetto browser Web, `IWebBrowser2`. Lo stesso controllo espone le seguenti due interfacce, oltre alle altre interfacce standard necessari per un controllo.

   - `IDHCTL1` L'interfaccia esposta dal controllo per l'uso solo dal contenitore.

   - `IDHCTLUI1` L'interfaccia di dispatch per le comunicazioni tra il codice C++ e dell'interfaccia utente HTML. Il browser Web Usa l'interfaccia dispatch del controllo per visualizzare il controllo. È possibile chiamare diversi metodi di questa interfaccia di dispatch dall'interfaccia utente del controllo richiamando `window.external`, seguito dal nome del metodo sull'interfaccia dispatch che si vuole richiamare. È possibile accedere a `window.external` da un tag SCRIPT all'interno dell'HTML che costituisce l'interfaccia utente per questo controllo. Per altre informazioni sulla chiamata di metodi esterni nel file di risorse, vedere [chiamata di codice C++ di DHTML](../atl/calling-cpp-code-from-dhtml.md).

- **IDR_CTL1** l'ID risorsa della risorsa HTML. Il nome di file, in questo caso, è DHCTL1UI. Il controllo DHTML utilizza una risorsa HTML che contiene tag HTML standard e finestra esterna invia i comandi che è possibile modificare tramite l'editor di testo.

- **Web Browser** browser Web Visualizza l'interfaccia utente del controllo, basata su HTML all'interno della risorsa HTML. Un puntatore per il Web browser `IWebBrowser2` interfaccia è disponibile nel controllo DHTML per consentire l'accesso al modello a oggetti DHTML.

La creazione guidata controllo ATL genera un controllo con il codice predefinito in risorsa HTML e il file con estensione cpp. È possibile compilare il controllo venga eseguito come generato dalla procedura guidata e quindi il controllo di visualizzazione nel browser Web o di ActiveX Control Test Container. L'immagine seguente mostra il valore predefinito di un controllo DHTML ATL con tre pulsanti visualizzati nel contenitore di Test:

![Controllo DHTML ATL](../atl/media/vc52en2.gif "vc52en2")

Visualizzare [creazione di un controllo DHTML ATL](../atl/creating-an-atl-dhtml-control.md) per iniziare a compilare un controllo DHTML. Visualizzare [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni sull'accesso ai Test Container.

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

