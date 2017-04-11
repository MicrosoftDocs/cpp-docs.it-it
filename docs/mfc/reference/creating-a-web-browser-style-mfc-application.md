---
title: Creazione di un&quot;applicazione MFC di tipo Browser Web | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfcweb.project
dev_langs:
- C++
helpviewer_keywords:
- MFC, Web applications
- Web browsers, creating from MFC architecture
- Web browsers
- Web applications, creating
ms.assetid: 257f8c03-33c3-428c-832e-0b70aff6168d
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: da53bdff088c336b0e7eb33c49025ec0a48675f2
ms.lasthandoff: 04/01/2017

---
# <a name="creating-a-web-browser-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo browser Web
Un'applicazione di tipo browser Web può accedere a informazioni da una rete intranet o Internet (ad esempio HTML o documenti attivi), nonché le cartelle nel file system locale e in una rete. Derivando una classe di visualizzazione dell'applicazione da [CHtmlView](../../mfc/reference/chtmlview-class.md), in modo efficace rendere l'applicazione un Web browser, fornendo la visualizzazione con il controllo WebBrowser.  
  
### <a name="to-create-a-web-browser-application-based-on-the-mfc-documentview-architecture"></a>Per creare un'applicazione Web browser in base all'architettura documento/visualizzazione MFC  
  
1.  Seguire le istruzioni [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, accertarsi che il **architettura documento/visualizzazione** casella è selezionata. (È possibile scegliere una **singolo documento** o **più documenti**, ma non **basato su finestra di dialogo**.)  
  
3.  Nel [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina, utilizzare il **classe di Base** dal menu a discesa per selezionare `CHtmlView`.  
  
4.  Selezionare eventuali altre opzioni incorporate lo scheletro di applicazione.  
  
5.  Scegliere **Fine**.  
  
 Il controllo WebBrowser supporta l'esplorazione del Web mediante i collegamenti ipertestuali e navigazione Uniform Resource Locator (URL). Il controllo gestisce un elenco di cronologia che consente all'utente di spostarsi e con le versioni precedenti tramite già visualizzati siti, cartelle e documenti. Il controllo gestisce direttamente la navigazione, collegamenti ipertestuali, elenchi della cronologia, report Preferiti e sicurezza. Le applicazioni possono utilizzare il controllo WebBrowser come un contenitore di documenti attivi di documenti attivi come host. Di conseguenza, documenti di Word o documenti in formato RTF, ad esempio fogli di calcolo Microsoft Excel possono essere aperti e modificati all'interno del controllo WebBrowser. Il controllo WebBrowser è anche un contenitore di controlli ActiveX in grado di ospitare un controllo ActiveX.  
  
> [!NOTE]
>  Il controllo WebBrowser ActiveX (e pertanto `CHtmlView`) è disponibile solo per le applicazioni in esecuzione in versioni di Windows in cui Internet Explorer 4.0 o versioni successive è stato installato.  
  
 Perché `CHtmlView` implementa il controllo di Microsoft Web browser, il supporto per la stampa non è disponibile come altro [CView](../../mfc/reference/cview-class.md)-classi derivate. Invece, il controllo WebBrowser implementa l'interfaccia utente della stampante e la stampa. Di conseguenza, `CHtmlView` does supporta l'anteprima di stampa e il framework non fornisce altre funzioni di stampa supporto: ad esempio, [CView:: OnPreparePrinting](../../mfc/reference/cview-class.md#onprepareprinting), [CView:: OnBeginPrinting](../../mfc/reference/cview-class.md#onbeginprinting), e [OnEndPrinting](../../mfc/reference/cview-class.md#onendprinting), che sono disponibili in altre applicazioni MFC.  
  
 `CHtmlView`funge da wrapper per il controllo Web browser, che fornisce all'applicazione di una vista in una pagina Web o HTML. La procedura guidata crea una sostituzione per il [OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) funzione nella classe di visualizzazione, che fornisce un collegamento al sito Web di Microsoft Visual C++:  
  
```  
void CWebView::OnInitialUpdate()  
{  
    CHtmlView::OnInitialUpdate();

 *// TODO: This code navigates to a popular spot on the web. *//  change the code to go where you'd like.  
    Navigate2(_T("http://www.msdn.microsoft.com/vstudio/"),
    NULL,
    NULL);

} 
```  
  
 È possibile sostituire questo sito con uno proprio, oppure è possibile utilizzare il [LoadFromResource](../../mfc/reference/chtmlview-class.md#loadfromresource) funzione membro per aprire una pagina HTML che si trova nello script di risorsa del progetto come contenuto predefinito per la visualizzazione. Ad esempio:  
  
```  
void CWebView::OnInitialUpdate()  
{  
    CHtmlView::OnInitialUpdate();

 *// TODO: This code navigates to a popular spot on the web. *//  change the code to go where you'd like.  
    LoadFromResource(IDR_HTML1);

} 
```  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFCIE di MFC](http://msdn.microsoft.com/en-us/7391aa0c-fca8-4994-a6c9-6c5c7470fba0)   
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Utilizzo di proprietà del progetto](../../ide/working-with-project-properties.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   
 [Utilizzo di proprietà del progetto](../../ide/working-with-project-properties.md)   
 [Distribuzione di applicazioni](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)


