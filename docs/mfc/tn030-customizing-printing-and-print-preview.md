---
title: 'TN030: Personalizzazione della stampa e anteprima di stampa | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.print
dev_langs:
- C++
helpviewer_keywords:
- TN030
- customizing printing and print preview
- printing [MFC], views
- printing views [MFC]
- print preview [MFC], customizing
ms.assetid: 32744697-c91c-41b6-9a12-b8ec01e0d438
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 208d179cb8131a690c0ca842f392c934b4386549
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951305"
---
# <a name="tn030-customizing-printing-and-print-preview"></a>TN030: personalizzazione della stampa e dell'anteprima di stampa
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota viene descritto il processo di personalizzazione di stampa e anteprima di stampa e vengono descritti gli scopi delle routine di callback utilizzate `CView` e la routine di callback e le funzioni membro di `CPreviewView`.  
  
## <a name="the-problem"></a>Il problema  
 MFC offre una soluzione completa per la maggior parte dei stampa e anteprima di stampa deve. Nella maggior parte dei casi, è necessario disporre di una vista in grado di stampa e anteprima poco codice aggiuntivo. Tuttavia, esistono modi per ottimizzare la stampa che richiedono notevole impegno da parte dello sviluppatore e alcune applicazioni è necessario aggiungere gli elementi dell'interfaccia utente specifico per la modalità di anteprima di stampa.  
  
## <a name="efficient-printing"></a>Stampa efficiente  
 Quando un'applicazione MFC viene stampata utilizzando i metodi standard, Windows indirizza tutte le chiamate di output interfaccia GDI (Graphical Device) in un metafile in memoria. Quando `EndPage` viene chiamato, Windows riproduce il metafile una volta per ogni fuori banda fisico che richiede la stampante per stampare una pagina. Durante il rendering GDI esegue una query di frequente la procedura di interruzione per determinare se deve continuare. Procedura di interruzione consente in genere i messaggi da elaborare in modo che l'utente può interrompere il processo di stampa tramite una finestra di dialogo Stampa.  
  
 Sfortunatamente, questo può rallentare il processo di stampa. Se la stampa nell'applicazione deve essere più veloce rispetto a quello ottenibile utilizzando la tecnica standard, è necessario implementare bande manuale.  
  
## <a name="print-banding"></a>Stampare bande  
 Per poter manualmente fuori banda, è necessario re implementare il ciclo di stampato in modo che `OnPrint` viene chiamato più volte per ogni pagina (una volta per ogni fuori banda). Ciclo di stampa viene implementato nel `OnFilePrint` funzione viewprnt.cpp. Nel `CView`-derivata, si esegue l'overload questa funzione in modo che la voce della mappa messaggi per la gestione del comando stampato chiama la funzione di stampa. Copia il `OnFilePrint` routine e modificare il ciclo di stampato per implementare bande. Sarà inoltre si desidera passare il rettangolo di rappresentazione per bande delle funzioni di stampa in modo che è possibile ottimizzare il disegno in base alla sezione della pagina da stampare.  
  
 In secondo luogo, è necessario chiamare spesso `QueryAbort` durante il disegno il fuori banda. In caso contrario, la procedura di interruzione non verrà chiamata e l'utente sarà in grado di annullare il processo di stampa.  
  
## <a name="print-preview-electronic-paper-with-user-interface"></a>Anteprima di stampa: Elettronico con interfaccia utente  
 Anteprima di stampa, in pratica, tenta di attivare la visualizzazione in un'emulazione di una stampante. Per impostazione predefinita, l'area client della finestra principale consente di visualizzare una o due pagine completamente all'interno della finestra. L'utente è in grado di eseguire lo zoom avanti su un'area della pagina per visualizzare in modo più dettagliato. Con il supporto aggiuntivo, l'utente potrebbe anche essere consentito modificare il documento in modalità di anteprima.  
  
## <a name="customizing-print-preview"></a>Personalizzazione di anteprima di stampa  
 In questa nota prende in considerazione solo con un aspetto della modifica dell'anteprima di stampa: aggiunta dell'interfaccia utente per la modalità di anteprima. È possibile apportare altre modifiche, ma tali modifiche siano esterni all'ambito di questo argomento.  
  
## <a name="to-add-ui-to-the-preview-mode"></a>Aggiunta dell'interfaccia utente per la modalità di anteprima  
  
1.  Derivare una classe di visualizzazione da `CPreviewView`.  
  
2.  Aggiungere gestori di comandi per gli aspetti dell'interfaccia utente desiderato.  
  
3.  Se si siano aggiungendo gli aspetti visivi per la visualizzazione, eseguire l'override `OnDraw` ed eseguire il disegno dopo la chiamata `CPreviewView::OnDraw`.  
  
## <a name="onfileprintpreview"></a>OnFilePrintPreview  
 Questo è il gestore del comando per l'anteprima di stampa. L'implementazione predefinita è:  
  
```  
void CView::OnFilePrintPreview()  
{ *// In derived classes,
    implement special window handling here *// Be sure to Unhook Frame Window close if hooked.  
 *// must not create this on the frame. Must outlive this function  
    CPrintPreviewState* pState = new CPrintPreviewState;  
 
    if (!DoPrintPreview(AFX_IDD_PREVIEW_TOOLBAR,
    this,  
    RUNTIME_CLASS(CPreviewView),
    pState))  
 { *// In derived classes,
    reverse special window handling *// here for Preview failure case  
 
    TRACE0("Error: DoPrintPreview failed");

    AfxMessageBox(AFX_IDP_COMMAND_FAILURE);

 delete pState;      // preview failed to initialize, *// delete State now  
 }  
}  
```  
  
 `DoPrintPreview` verranno nascosti nel riquadro principale dell'applicazione. Barre di controllo, ad esempio la barra di stato, possono essere conservate specificandoli nel pState ->*dwStates* membro (ovvero una maschera di bit e i bit per le barre di controllo singoli vengono definite da AFX_CONTROLBAR_MASK (AFX_IDW_MYBAR)). La finestra pState ->*nIDMainPane* è la finestra che verrà automaticamente nascosta e reshown. `DoPrintPreview` creerà quindi una barra dei pulsanti per l'interfaccia utente anteprima standard. Se è necessaria una gestione speciale di finestra, ad esempio nascondere o visualizzare altre finestre, che devono essere eseguite prima `DoPrintPreview` viene chiamato.  
  
 Per impostazione predefinita, al termine dell'anteprima di stampa, restituisce le barre di controllo per gli stati originali e nel riquadro principale vengono visualizzate. Se è necessaria una gestione speciale, deve essere eseguita in un override di `EndPrintPreview`. Se `DoPrintPreview` ha esito negativo, fornire anche una gestione speciale.  
  
 DoPrintPreview viene chiamato con:  
  
-   L'ID di risorsa del modello di finestra di dialogo per la barra degli strumenti di anteprima.  
  
-   Puntatore alla visualizzazione per eseguire la stampa per l'anteprima di stampa.  
  
-   La classe di runtime della classe di visualizzazione Anteprima. Questo verrà in modo dinamico creato in DoPrintPreview.  
  
-   Il puntatore CPrintPreviewState. Si noti che la struttura CPrintPreviewState (o la struttura derivata se l'applicazione necessita di ulteriori stato mantenuto) necessario *non* creato sul frame. DoPrintPreview è non modale e questa struttura deve passano fino a quando non viene chiamato EndPrintPreview.  
  
    > [!NOTE]
    >  Se una classe di visualizzazione o una vista separata è necessaria per il supporto di stampa, un puntatore a quell'oggetto deve essere passato come secondo parametro.  
  
## <a name="endprintpreview"></a>EndPrintPreview  
 Si tratta per terminare la modalità di anteprima di stampa. Spesso è consigliabile passare alla pagina nel documento che è stato ultima visualizzata in anteprima di stampa. `EndPrintPreview` è la probabilità dell'applicazione a tale scopo. -> PInfo*m_nCurPage* membro è la pagina visualizzata è stato ultimo (all'estrema sinistra se sono state visualizzate due pagine) e il puntatore è un hint per in cui è stato interessato l'utente nella pagina. Poiché la struttura della visualizzazione dell'applicazione è sconosciuta alla versione di framework, è necessario fornire il codice per passare al punto selezionato.  
  
 È necessario eseguire la maggior parte delle azioni prima di chiamare `CView::EndPrintPreview`. Questa chiamata inverte gli effetti di `DoPrintPreview` ed Elimina pView pDC e pInfo.  
  
```  
// Any further cleanup should be done here.  
CView::EndPrintPreview(pDC,
    pInfo,
    point,
    pView);
```  
  
## <a name="cwinapponfileprintsetup"></a>CWinApp::OnFilePrintSetup  
 Questo deve essere mappato per la voce di menu di impostazioni di stampa. Nella maggior parte dei casi, non è necessario eseguire l'override dell'implementazione.  
  
## <a name="page-nomenclature"></a>Pagina nomenclatura  
 Un altro problema è quello di numerazione di pagine e l'ordine. Per le applicazioni di tipo semplice elaboratore di testo, questo è un problema semplice. La maggior parte dei sistemi di anteprima di stampa presuppongono che ogni pagina stampata corrisponde a una pagina nel documento.  
  
 Tentativo di fornire una soluzione generalizzata, esistono diversi aspetti da considerare. Si supponga un sistema CAD. L'utente ha un disegno che copre più fogli E dimensioni. In una dimensione E (o in scala ridotta e) numerazione di pagine sarebbe plotter, come nel caso più semplice. Ma su una stampante laser, stampa di pagine in formato 16 per ogni foglio, quali l'anteprima di stampa "pagina"  
  
 Come indicato nel paragrafo introduttivo, anteprima di stampa agisce come una stampante. Pertanto, l'utente vedrà cosa sarebbe risultanti dal determinata stampante selezionata. In questo caso, la vista per determinare quale immagine viene stampata in ogni pagina.  
  
 La stringa di descrizione della pagina nel `CPrintInfo` struttura consente di visualizzare il numero di pagina all'utente se può essere rappresentato come un numero per ogni pagina (come in "Pagina 1" o "pagine 1-2"). Questa stringa viene utilizzata per l'implementazione predefinita di `CPreviewView::OnDisplayPageNumber`. Se è necessaria una visualizzazione diversa, uno può eseguire l'override di questa funzione virtuale per fornire, ad esempio, "Sheet1, sezioni A, B".  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

