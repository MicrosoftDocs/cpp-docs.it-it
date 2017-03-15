---
title: "TN030: personalizzazione della stampa e dell&#39;anteprima di stampa | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.print"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "personalizzazione della stampa e dell'anteprima di stampa"
  - "anteprima di stampa, personalizzazione"
  - "stampa [MFC], visualizzazioni"
  - "visualizzazioni di stampa"
  - "TN030"
ms.assetid: 32744697-c91c-41b6-9a12-b8ec01e0d438
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN030: personalizzazione della stampa e dell&#39;anteprima di stampa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive il processo di personalizzazione della stampa e anteprima di stampa e descrive gli scopi delle routine di callback utilizzate in `CView` e delle routine di callback e delle funzioni membro di **CPreviewView**.  
  
## Il problema  
 MFC fornisce una soluzione completa per la maggior parte delle necessità di stampa e di anteprima di stampa.  Nella maggior parte dei casi è necessario poco codice aggiuntivo per avere una visualizzazione in grado di stampare e visualizzare l'anteprima di stampa.  Tuttavia, esistono diversi modi per ottimizzare la stampa che richiedono sforzo significativo da parte dello sviluppatore e alcune applicazioni richiedono l'aggiunta di elementi dell'interfaccia utente specifici alla modalità dell'anteprima di stampa.  
  
## Stampa efficiente  
 Quando un'applicazione MFC stampa utilizzando i metodi standard, Windows indirizza tutte le chiamate di output di GDI \(Graphical Device Interface\) a un metafile presente in memoria.  Quando viene chiamato `EndPage`, Windows esegue il metafile una volta per ogni fascia fisica che la stampante richiede per stampare una pagina.  Durante il rendering, GDI esegue query frequentemente la routine di interruzione per determinare se continuare o meno.  In genere la routine di interruzione consente ai messaggi di essere processati in modo che l'utente possa interrompere il processo di stampa utilizzando una finestra di dialogo stampa.  
  
 Sfortunatamente, questo può rallentare il processo di stampa.  Se la stampa nell'applicazione deve essere più veloce rispetto a quella che può essere raggiunta utilizzando la tecnica standard, è necessario implementare una meccanismo di definizione delle fasce manuale.  
  
## Definizione delle fasce di stampa  
 Per determinare manualmente le fasce, è necessario implementare da capo il ciclo di stampa in modo tale che `OnPrint` venga chiamato più volte per ciascuna pagina \(una volta per ogni fascia\).  Il ciclo di stampa è implementato nella funzione **OnFilePrint** in viewprnt.cpp.  Nella classe derivata da `CView`, si esegue l'overload della funzione in modo che la voce della mappa messaggi per la gestione del comando di stampa chiami la funzione di stampa.  Copiare la routine **OnFilePrint** e modificare il ciclo di stampa per implementare la definizione delle fasce.  Probabilmente si vuole anche passare il rettangolo per determinare le fasce alle proprie funzioni di stampa in modo da ottimizzare il disegno in base alla sezione della pagina che viene stampata.  
  
 In secondo luogo, è necessario chiamare spesso `QueryAbort` mentre si sta disegnando la fascia.  In caso contrario, la routine di interruzione non verrà chiamata e l'utente non sarà in grado di annullare il processo di stampa.  
  
## Anteprima di stampa: Carta elettronica con interfaccia utente  
 Anteprima di stampa, in pratica, tenta di trasformare il monitor in una emulazione di una stampante.  Per impostazione predefinita, l'area client della finestra principale viene utilizzata per visualizzare completamente all'interno della finestra una o due pagine.  L'utente può ingrandire un'area della pagina per una visualizzazione più dettagliata.  Con supporto aggiuntivo, l'utente può inoltre avere la possibilità di modificare il documento in modalità di anteprima.  
  
## Personalizzare l'anteprima di stampa  
 Questa nota riguarda solo un aspetto della modifica dell'anteprima di stampa: Aggiungere l'interfaccia utente alla modalità di anteprima.  Sono possibili altre modifiche, ma esse sono al di fuori dell'ambito di questa discussione.  
  
## Per aggiungere l'interfaccia utente alla modalità di anteprima  
  
1.  Derivare una classe di visualizzazione da **CPreviewView**.  
  
2.  Aggiungere gestori dei comandi per gli aspetti dell'interfaccia utente desiderati.  
  
3.  Se si aggiungono aspetti visivi alla visualizzazione, eseguire l'override di `OnDraw` ed eseguire il disegno dopo aver chiamato **CPreviewView::OnDraw.**  
  
## OnFilePrintPreview  
 Si tratta del gestore dei comandi per l'anteprima di stampa.  La sua un'implementazione predefinita è:  
  
```  
void CView::OnFilePrintPreview()  
{  
    // In derived classes, implement special window handling here  
    // Be sure to Unhook Frame Window close if hooked.  
  
    // must not create this on the frame. Must outlive this function  
    CPrintPreviewState* pState = new CPrintPreviewState;  
  
    if (!DoPrintPreview(AFX_IDD_PREVIEW_TOOLBAR, this,  
                RUNTIME_CLASS(CPreviewView), pState))  
    {  
        // In derived classes, reverse special window handling  
        // here for Preview failure case  
  
        TRACE0("Error: DoPrintPreview failed");  
        AfxMessageBox(AFX_IDP_COMMAND_FAILURE);  
        delete pState;      // preview failed to initialize,   
                    // delete State now  
    }  
}  
```  
  
 **DoPrintPreview** nasconde il riquadro principale dell'applicazione.  Le barre di controllo, come la barra di stato, possono essere mantenute specificandole nel membro pState\-\>**dwStates** \(si tratta di una maschera di bit ed i bit per le singole barre di controllo sono definiti da **AFX\_CONTROLBAR\_MASK**\( AFX\_IDW\_MYBAR\)\).  Il pState\-\>**nIDMainPane** della finestra è la finestra che verrà nascosta e mostrata nuovamente in modo automatico.  **DoPrintPreview** quindi crea una barra del pulsante per l'anteprima standard dell'interfaccia utente.  Se è richiesta una gestione speciale delle finestre, come ad esempio nascondere o mostrare altre finestre, ciò dovrebbe essere fatto prima che venga chiamato **DoPrintPreview**.  
  
 Per impostazione predefinita, quando l'anteprima di stampa termina, essa restituisce le barre di controllo ai relativi stati originali ed il riquadro principale come visibili.  Se è necessaria una gestione speciale, essa deve essere eseguita in un override di **EndPrintPreview.** Se **DoPrintPreview** ha esito negativo, è necessario anche fornire gestione speciale.  
  
 DoPrintPreview viene chiamato con:  
  
-   ID di risorsa del modello di finestra di dialogo per la barra degli strumenti dell'anteprima.  
  
-   Un puntatore alla visualizzazione per eseguire la stampa per l'anteprima di stampa.  
  
-   La classe di runtime della classe di visualizzazione dell'anteprima.  Verrà creato dinamicamente in DoPrintPreview.  
  
-   Il puntatore a CPrintPreviewState.  Si noti che la struttura di CPrintPreviewState \(o la struttura derivata se l'applicazione richiede che vengano preservati più stati\) *non* deve essere creata nel frame.  DoPrintPreview è modale e questa struttura deve sopravvivere fino a quando viene chiamata EndPrintPreview.  
  
    > [!NOTE]
    >  Se è necessaria una visualizzazione o una classe di visualizzazione separata per il supporto alla stampa, un puntatore a tale oggetto deve essere passato come secondo parametro.  
  
## EndPrintPreview  
 Ciò viene definito terminare la modalità anteprima di stampa.  È spesso opportuno passare alla pagina nel documento che è stato visualizzato per ultimo nell'anteprima di stampa.  **EndPrintPreview** è l'occasione dell'applicazione per farlo.  Il membro pInfo\-\>`m_nCurPage` è la pagina che è stata visualizzata per ultima \(quella più a sinistra se vengono visualizzate due pagine\) e il puntatore è un suggerimento alla porzione di pagina a cui l'utente era interessato.  Poiché la struttura della visualizzazione dell'applicazione è sconosciuta al framework, allora è necessario fornire il codice per passare al punto scelto.  
  
 È opportuno eseguire più azioni prima di chiamare **CView::EndPrintPreview**.  Questa chiamata inverte gli effetti di **DoPrintPreview** e elimina pView, pDC e pInfo.  
  
```  
// Any further cleanup should be done here.  
CView::EndPrintPreview(pDC, pInfo, point, pView);  
```  
  
## CWinApp::OnFilePrintSetup  
 Ciò deve essere mappato per la voce di menu Impostazioni di stampa.  Nella maggior parte dei casi, non è necessario eseguire l'override dell'implementazione.  
  
## Nomenclatura della pagina  
 Un altro problema è quello della numerazione di pagina e dell'ordine.  Per le applicazioni semplici di elaborazione di testi si tratta di un problema chiaro.  La maggior parte dei sistemi di anteprima di stampa presuppongono che in ogni pagina stampata corrisponda ad una pagina nel documento.  
  
 Se si tenta di fornire una soluzione generalizzata, è necessario tenere in considerazione diverse questioni.  Si consideri un sistema CAD.  L'utente ha un disegno che copre diversi fogli di dimensione E.  In un plotter per la stampa di fogli con dimensione E \(o più piccoli, scalati\), la numerazione delle pagine risulterebbe come nel caso più semplice.  Ma in una stampante laser, nello stampare 16 pagine con dimensione A per foglio, quali l'anteprima di stampa considera una "pagina"?  
  
 Come afferma il paragrafo introduttivo, l'anteprima di stampa si comporta come una stampante.  Di conseguenza, l'utente vedrà che cosa uscirebbe dalla particolare stampante selezionata.  Spetta alla visualizzazione determinare quale immagine va stampata in ogni pagina.  
  
 La stringa descrittiva della pagina nella struttura `CPrintInfo` fornisce all'utente un mezzo di visualizzazione per il numero di pagina se può essere rappresentata come un numero di pagina \(come in "Pagina 1" o "Pagine 1\-2"\). Questa stringa viene utilizzata dall'implementazione predefinita di **CPreviewView::OnDisplayPageNumber**.  Se è richiesta una visualizzazione diversa, è possibile eseguire l'override di questa funzione virtuale per fornire, ad esempio, "Foglio1, Sezioni A, B".  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)