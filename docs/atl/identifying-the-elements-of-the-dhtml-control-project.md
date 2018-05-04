---
title: Identificazione degli elementi del progetto controllo DHTML | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTML controls, ATL support
- DHTML controls, ATL support
ms.assetid: b627547a-3768-4346-9900-4b7a21fb8e27
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 525ad4e073607064234641f6544a11901ded0096
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="identifying-the-elements-of-the-dhtml-control-project"></a>Identificazione degli elementi del progetto controllo DHTML
Gran parte del codice DHTML controllo esattamente come il viene creata per qualsiasi controllo ATL. Per una conoscenza di base del codice generico, utilizzare il [esercitazione ATL](../atl/active-template-library-atl-tutorial.md), e la lettura delle sezioni [creazione di un progetto ATL](../atl/reference/creating-an-atl-project.md) e [nozioni fondamentali su oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md).  
  
 Un controllo DHTML è simile a qualsiasi controllo ATL, ad eccezione di:  
  
-   Oltre alle interfacce regolari che implementa un controllo, implementa un'interfaccia aggiuntiva che viene utilizzata per la comunicazione tra il codice C++ e l'interfaccia utente HTML (UI). L'interfaccia utente HTML chiama codice C++ mediante questa interfaccia.  
  
-   Crea una risorsa HTML per il controllo dell'interfaccia utente.  
  
-   Consente l'accesso al modello a oggetti DHTML tramite la variabile membro `m_spBrowser`, ovvero un puntatore intelligente di tipo [IWebBrowser2](https://msdn.microsoft.com/library/aa752127.aspx). Utilizzare questo puntatore per accedere a qualsiasi parte del modello a oggetti DHTML.  
  
 Nella figura seguente viene illustrata la relazione tra la DLL, il controllo DHTML, il Web browser e la risorsa HTML.  
  
 ![Elementi di un progetto controllo DHTML](../atl/media/vc52en1.gif "vc52en1")  
  
> [!NOTE]
>  I nomi presenti in questa illustrazione sono segnaposti. I nomi di risorsa HTML e le interfacce esposte sul controllo sono in base ai nomi assegnati tramite la creazione guidata controllo ATL.  
  
 In questo grafico, gli elementi sono:  
  
-   **La DLL** la DLL creata utilizzando la creazione guidata progetto ATL.  
  
-   **Controllo DHTML** (`m_spBrowser`) il controllo DHTML, creato utilizzando la creazione guidata oggetto ATL. Oggetto del Web browser e i relativi metodi accede a questo controllo tramite l'interfaccia dell'oggetto del Web browser, **IWebBrowser2**. Il controllo espone le seguenti due interfacce, oltre alle altre interfacce standard necessari per un controllo.  
  
    -   **IDHCTL1** l'interfaccia esposta dal controllo per l'uso solo dal contenitore.  
  
    -   **IDHCTLUI1** l'interfaccia dispatch per la comunicazione tra il codice C++ e l'interfaccia utente HTML. Il browser Web utilizza l'interfaccia dispatch per visualizzare il controllo. È possibile chiamare vari metodi dell'interfaccia dispatch dall'interfaccia utente del controllo richiamando `window.external`, seguito dal nome del metodo sull'interfaccia dispatch che si desidera richiamare. È possibile accedere a `window.external` da un tag SCRIPT all'interno dell'HTML che costituisce l'interfaccia utente per questo controllo. Per ulteriori informazioni sulla chiamata di metodi esterni nel file di risorse, vedere [chiamata di codice C++ da DHTML](../atl/calling-cpp-code-from-dhtml.md).  
  
-   **IDR_CTL1** l'ID risorsa della risorsa HTML. Il nome di file, in questo caso, è DHCTL1UI. Il controllo DHTML utilizza una risorsa HTML che contiene tag HTML standard e finestra esterna invia i comandi che è possibile modificare tramite l'editor di testo.  
  
-   **Browser Web** browser Web consente di visualizzare la propria interfaccia utente, in base a HTML nella risorsa HTML. Un puntatore al browser **IWebBrowser2** interfaccia è disponibile nel controllo DHTML per consentire l'accesso al modello a oggetti DHTML.  
  
 Creazione guidata controllo ATL genera un controllo con il codice predefinito sia la risorsa HTML e il file con estensione cpp. È possibile compilare eseguire il controllo generato dalla procedura guidata e quindi visualizzare il controllo nel Web browser o di ActiveX Control Test Container. Nell'immagine seguente mostra il valore predefinito di un controllo DHTML ATL con tre pulsanti visualizzati nel contenitore di Test:  
  
 ![Controllo DHTML ATL](../atl/media/vc52en2.gif "vc52en2")  
  
 Vedere [creazione di un controllo DHTML ATL](../atl/creating-an-atl-dhtml-control.md) per iniziare a creare un controllo DHTML. Vedere [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere Test Container.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

