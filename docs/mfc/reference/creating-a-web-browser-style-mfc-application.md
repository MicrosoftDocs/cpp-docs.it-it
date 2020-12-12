---
description: "Altre informazioni su: creazione di un'applicazione MFC Browser-Style Web"
title: Creazione di un'applicazione MFC di tipo browser Web
ms.date: 06/25/2018
f1_keywords:
- vc.appwiz.mfcweb.project
helpviewer_keywords:
- MFC, Web applications
- Web browsers, creating from MFC architecture
- Web browsers
- Web applications [MFC], creating
ms.assetid: 257f8c03-33c3-428c-832e-0b70aff6168d
ms.openlocfilehash: 0ee8250be20b53979c2a3e059d83237389091e72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301282"
---
# <a name="creating-a-web-browser-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo browser Web

Un'applicazione di tipo Web browser può accedere alle informazioni da Internet (ad esempio HTML o documenti attivi) o da una rete Intranet, nonché le cartelle nel file system locale e in una rete. Derivando la classe di visualizzazione dell'applicazione da [CHtmlView](../../mfc/reference/chtmlview-class.md), è possibile rendere l'applicazione un Web browser fornendo la visualizzazione con il controllo WebBrowser.

## <a name="to-create-a-web-browser-application-based-on-the-mfc-documentview-architecture"></a>Per creare un'applicazione Web browser basata sull'architettura documento/visualizzazione MFC

1. Seguire le istruzioni riportate in [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).

1. Nella pagina [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della creazione guidata applicazione MFC verificare che sia selezionata la casella **architettura documento/visualizzazione** . È possibile scegliere un **singolo documento** o **più documenti**, ma non **basato su finestra di dialogo**.

1. Nella pagina [Verifica classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) utilizzare il menu a discesa **classe di base** per selezionare `CHtmlView` .

1. Selezionare le altre opzioni che si vuole compilare nell'applicazione Skeleton.

1. Fare clic su **Fine**.

Il controllo WebBrowser supporta l'esplorazione Web attraverso collegamenti ipertestuali e la navigazione Uniform Resource Locator (URL). Il controllo gestisce un elenco di cronologia che consente all'utente di spostarsi avanti e indietro attraverso i siti, le cartelle e i documenti precedentemente esplorati. Il controllo gestisce direttamente la navigazione, i collegamenti ipertestuali, gli elenchi di cronologia, i Preferiti e la sicurezza. Le applicazioni possono utilizzare il controllo WebBrowser come contenitore di documenti attivo anche per ospitare documenti attivi. In questo modo, è possibile aprire e modificare i documenti formattati in modo completo, ad esempio fogli di calcolo di Microsoft Excel o documenti di Word, dall'interno del controllo WebBrowser. Il controllo WebBrowser è anche un contenitore di controlli ActiveX che può ospitare qualsiasi controllo ActiveX.

> [!NOTE]
> Il controllo ActiveX WebBrowser (e quindi `CHtmlView` ) è disponibile solo per le applicazioni in esecuzione in versioni di Windows in cui è stato installato Internet Explorer 4,0 o versione successiva.

Poiché `CHtmlView` implementa semplicemente il controllo Web browser Microsoft, il suo supporto per la stampa non è analogo ad altre classi derivate da [CView](../../mfc/reference/cview-class.md). Il controllo WebBrowser implementa invece l'interfaccia utente della stampante e la stampa. Di conseguenza, non `CHtmlView` supporta l'anteprima di stampa e il Framework non fornisce altre funzioni di supporto per la stampa, ad esempio [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting), [CView:: OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting)e [CView:: OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting), che sono disponibili in altre applicazioni MFC.

`CHtmlView` funge da wrapper per il controllo Web browser, che consente all'applicazione di visualizzare una pagina Web o HTML. La procedura guidata crea una sostituzione per la funzione [OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) nella classe View, fornendo un collegamento di navigazione al sito Web Microsoft Visual C++:

```cpp
void CWebView::OnInitialUpdate()
{
    CHtmlView::OnInitialUpdate();

    // TODO: This code navigates to a popular spot on the web.
    // Change the code to go where you'd like.
    Navigate2(_T("http://www.docs.microsoft.com/"),
        NULL,
        NULL);
}
```

È possibile sostituire il sito con uno dei propri oppure è possibile usare la funzione membro [LoadFromResource](../../mfc/reference/chtmlview-class.md#loadfromresource) per aprire una pagina HTML che risiede nello script di risorsa del progetto come contenuto predefinito per la visualizzazione. Ad esempio:

```cpp
void CWebView::OnInitialUpdate()
{
    CHtmlView::OnInitialUpdate();

    // TODO: This code navigates to a popular spot on the web.
    // Change the code to go where you'd like.
    LoadFromResource(IDR_HTML1);
}
```

## <a name="see-also"></a>Vedere anche

[Esempio MFCIE di MFC](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/internet)<br/>
[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Impostare il compilatore e le proprietà di compilazione](../../build/working-with-project-properties.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)<br/>
[Impostare il compilatore e le proprietà di compilazione](../../build/working-with-project-properties.md)
