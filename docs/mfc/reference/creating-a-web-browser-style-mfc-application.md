---
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
ms.openlocfilehash: 12df36188bd858f73ff4834236a19583023e5f93
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62372231"
---
# <a name="creating-a-web-browser-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo browser Web

Un'applicazione di tipo browser Web può accedere a informazioni da una rete intranet o Internet (ad esempio HTML o documenti attivi), nonché le cartelle nel file system locale e in una rete. Derivando la classe di visualizzazione dell'applicazione dal [CHtmlView](../../mfc/reference/chtmlview-class.md), in modo efficace rendere l'applicazione un Web browser fornendo la visualizzazione con il controllo WebBrowser.

### <a name="to-create-a-web-browser-application-based-on-the-mfc-documentview-architecture"></a>Per creare un'applicazione Web browser basata sull'architettura documento/visualizzazione MFC

1. Seguire le istruzioni disponibili nel [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).

1. Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, assicurarsi che le **architettura documento/visualizzazione** casella è selezionata. (È possibile scegliere **singolo documento** oppure **più documenti**, ma non **basato su finestra di dialogo**.)

1. Nel [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina, utilizzare il **classe di Base** dal menu a discesa per selezionare `CHtmlView`.

1. Selezionare le altre opzioni di incorporato nell'applicazione scheletro.

1. Scegliere **Fine**.

Il controllo WebBrowser supporta l'esplorazione del Web tramite i collegamenti ipertestuali e navigazione Uniform Resource Locator (URL). Il controllo gestisce un elenco di cronologia che consente all'utente di spostarsi e con le versioni precedenti tramite visitate in precedenza siti, cartelle e documenti. Il controllo gestisce direttamente la navigazione, collegamenti ipertestuali, gli elenchi della cronologia, Preferiti e sicurezza. Le applicazioni possono usare il controllo WebBrowser come un contenitore di documenti attivi anche documenti attivi. Di conseguenza, i documenti con formattazione complessa, ad esempio fogli di calcolo Microsoft Excel o Word documenti possono essere aperto e modificati sul posto all'interno del controllo WebBrowser. Il controllo WebBrowser è anche un contenitore di controlli ActiveX che può ospitare qualsiasi controllo ActiveX.

> [!NOTE]
>  Il controllo WebBrowser ActiveX (e pertanto `CHtmlView`) è disponibile solo per le applicazioni in esecuzione in versioni di Windows in cui Internet Explorer 4.0 o versione successiva è installato.

In quanto `CHtmlView` implementa il controllo browser Web Microsoft, il supporto per la stampa non è simile ad altre [CView](../../mfc/reference/cview-class.md)-le classi derivate. Piuttosto, il controllo WebBrowser implementa l'interfaccia utente stampante e la stampa. Ne consegue `CHtmlView` viene anteprima di stampa non è supportata e il framework non fornisce altre funzioni di stampa supporto: ad esempio, [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting), [CView::OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting), e [OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting), che sono disponibili in altre applicazioni MFC.

`CHtmlView` funge da wrapper per il controllo Web browser, che fornisce all'applicazione una visualizzazione in un sito Web o in una pagina HTML. La procedura guidata crea una sostituzione per il [OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) funzione nella classe di visualizzazione, che fornisce un collegamento ipertestuale per il sito Web di Microsoft Visual C++:

```cpp
void CWebView::OnInitialUpdate()
{
    CHtmlView::OnInitialUpdate();

    // TODO: This code navigates to a popular spot on the web.
    // Change the code to go where you'd like.
    Navigate2(_T("http://www.msdn.microsoft.com/vstudio/"),
        NULL,
        NULL);
}
```

È possibile sostituire questo sito con uno personalizzato, o è possibile usare la [LoadFromResource](../../mfc/reference/chtmlview-class.md#loadfromresource) funzione membro per aprire una pagina HTML che si trova nello script di risorsa del progetto come il contenuto predefinito per la visualizzazione. Ad esempio:

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

[Esempio MFCIE di MFC](https://github.com/Microsoft/VCSamples)<br/>
[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Impostare il compilatore e le proprietà di compilazione](../../build/working-with-project-properties.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)<br/>
[Impostare il compilatore e le proprietà di compilazione](../../build/working-with-project-properties.md)

