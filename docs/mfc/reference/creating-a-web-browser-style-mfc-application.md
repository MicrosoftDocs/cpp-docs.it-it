---
title: "Creazione di un&#39;applicazione MFC di tipo browser Web | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfcweb.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, applicazioni Web"
  - "applicazioni Web, creazione"
  - "Web (browser)"
  - "Web (browser), creazione da architetture MFC"
ms.assetid: 257f8c03-33c3-428c-832e-0b70aff6168d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Creazione di un&#39;applicazione MFC di tipo browser Web
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un'applicazione di tipo browser Web è in grado di accedere a informazioni su Internet, quali documenti attivi o HTML, e su una Intranet, nonché a cartelle nel file system locale e in rete.  Un'applicazione di tipo browser Web viene creata derivando la classe di visualizzazione dell'applicazione da [CHtmlView](../../mfc/reference/chtmlview-class.md), fornendo così alla visualizzazione il controllo WebBrowser.  
  
### Per creare un'applicazione di tipo browser Web basata sull'architettura documento\/visualizzazione MFC  
  
1.  Attenersi alla procedura illustrata in [Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella schermata [Tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della Creazione guidata applicazione MFC, accertarsi che la casella **Architettura documento\/visualizzazione** sia selezionata. È possibile scegliere **Documento singolo** o **Documenti multipli**, ma non **Basato su finestra di dialogo**.  
  
3.  Nella schermata [Classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) selezionare `CHtmlView` dalla casella di riepilogo a discesa **Classe base**.  
  
4.  Selezionare le altre opzioni che si desidera integrare nello scheletro di applicazione.  
  
5.  Scegliere **Fine**.  
  
 Il controllo WebBrowser supporta l'esplorazione del Web mediante collegamenti ipertestuali e la navigazione degli URL \(Uniform Resource Locator\).  Mantiene inoltre un elenco cronologia che consente di spostarsi tra i siti, le cartelle e i documenti esplorati in precedenza  e gestisce direttamente la navigazione, i collegamenti ipertestuali, gli elenchi cronologia, l'elenco Preferiti e la sicurezza.  È anche possibile utilizzare il controllo WebBrowser nelle applicazioni come contenitore di documenti attivi.  Ciò consente di aprire e modificare all'interno del controllo WebBrowser documenti dalla formattazione complessa, quali fogli di lavoro di Microsoft Excel o documenti di Word.  Il controllo WebBrowser costituisce inoltre un contenitore in grado di contenere qualsiasi controllo ActiveX.  
  
> [!NOTE]
>  Il controllo ActiveX Web Browser, così come `CHtmlView`, è disponibile solo per le applicazioni eseguite in ambienti Windows in cui è installato Internet Explorer 4.0 o versioni successive.  
  
 Poiché `CHtmlView` implementa il controllo Microsoft Web Browser, il supporto per la stampa è diverso rispetto alle altre classi derivate da [CView](../../mfc/reference/cview-class.md).  Il controllo WebBrowser implementa infatti la stampa e l'interfaccia utente della stampante.  Di conseguenza, `CHtmlView` non supporta l'anteprima di stampa e il framework non offre altre funzioni di supporto di stampa, quali [CView::OnPreparePrinting](../Topic/CView::OnPreparePrinting.md), [CView::OnBeginPrinting](../Topic/CView::OnBeginPrinting.md) e [CView::OnEndPrinting](../Topic/CView::OnEndPrinting.md), disponibili in altre applicazioni MFC.  
  
 `CHtmlView` funge da wrapper per il controllo WebBrowser, che fornisce all'applicazione una visualizzazione su una pagina Web o HTML.  Viene eseguito un override della funzione [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) nella classe di visualizzazione, con cui viene fornito un collegamento di esplorazione al sito Web Microsoft Visual C\+\+:  
  
```  
void CWebView::OnInitialUpdate()  
{  
   CHtmlView::OnInitialUpdate();  
  
   // TODO: This code navigates to a popular spot on the web.  
   //  change the code to go where you'd like.  
   Navigate2(_T("http://www.msdn.microsoft.com/vstudio/"),NULL,NULL);  
}  
```  
  
 È possibile sostituire questo sito con uno diverso oppure utilizzare la funzione membro [LoadFromResource](../Topic/CHtmlView::LoadFromResource.md) per aprire una pagina HTML che risiede nello script di risorsa del progetto come contenuto predefinito per la visualizzazione.  Di seguito è riportato un esempio.  
  
```  
void CWebView::OnInitialUpdate()  
{  
   CHtmlView::OnInitialUpdate();  
  
   // TODO: This code navigates to a popular spot on the web.  
   //  change the code to go where you'd like.  
   LoadFromResource(IDR_HTML1);  
}  
```  
  
## Vedere anche  
 [MFC Sample MFCIE](http://msdn.microsoft.com/it-it/7391aa0c-fca8-4994-a6c9-6c5c7470fba0)   
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md)   
 [Pagine delle proprietà](../../ide/property-pages-visual-cpp.md)   
 [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md)   
 [Deploying Applications](http://msdn.microsoft.com/it-it/4ff8881d-0daf-47e7-bfe7-774c625031b4)