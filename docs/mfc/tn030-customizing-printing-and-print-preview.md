---
title: "TN030: personalizzazione della stampa e dell'anteprima di stampa"
ms.date: 06/28/2018
f1_keywords:
- vc.print
helpviewer_keywords:
- TN030
- customizing printing and print preview
- printing [MFC], views
- printing views [MFC]
- print preview [MFC], customizing
ms.assetid: 32744697-c91c-41b6-9a12-b8ec01e0d438
ms.openlocfilehash: 09938c5cec2812998d5e76e15154754ad3ac3e0b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667909"
---
# <a name="tn030-customizing-printing-and-print-preview"></a>TN030: personalizzazione della stampa e dell'anteprima di stampa

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota descrive il processo di personalizzazione di stampa e anteprima di stampa e vengono descritti gli scopi delle routine di callback usate nel `CView` e le routine di callback e funzioni di membro di `CPreviewView`.

## <a name="the-problem"></a>Il problema

MFC offre una soluzione completa per la maggior parte di stampa e anteprima di stampa deve. Nella maggior parte dei casi, poco codice aggiuntivo è necessario disporre di una vista in grado di stampare e visualizzare in anteprima. Tuttavia, esistono modi per ottimizzare la stampa che richiedono una notevole impegno da parte dello sviluppatore e alcune applicazioni è necessario aggiungere gli elementi dell'interfaccia utente specifico per la modalità di anteprima di stampa.

## <a name="efficient-printing"></a>Stampa efficiente

Quando un'applicazione MFC stampa utilizzando i metodi standard, Windows indirizza tutte le chiamate di output dell'interfaccia GDI (Graphical Device) a un metafile in memoria. Quando si `EndPage` viene chiamato, viene riprodotto Windows metafile una volta per ogni fuori banda fisica che la stampante necessita per stampare una pagina. Durante il rendering GDI esegue una query di frequente la procedura di interruzione per determinare se deve continuare. Procedura di interruzione consente in genere i messaggi da elaborare in modo che l'utente può interrompere il processo di stampa tramite una finestra di dialogo Stampa.

Sfortunatamente, ciò può rallentare il processo di stampa. Se la stampa nell'applicazione deve essere superiore a quella che può essere ottenuto tramite la tecnica standard, è necessario implementare rappresentazione per bande manuale.

## <a name="print-banding"></a>Stampa di rappresentazione per bande

Per poter manualmente fuori banda, è necessario re implementare il ciclo di stampa in modo che `OnPrint` viene chiamato più volte per ogni pagina (una sola volta per ogni fuori banda). Il ciclo di stampa viene implementato nel `OnFilePrint` funzione in viewprnt.cpp. Nel `CView`-classe derivata rapporto di overload questa funzione in modo che la voce della mappa messaggi per la gestione del comando Stampa chiama la funzione di stampa. Copia il `OnFilePrint` routine e modificare il ciclo di stampa deve implementare rappresentazione per bande. Probabilmente si userà per trasferire il rettangolo di rappresentazione per bande per le funzioni di stampa in modo che è possibile ottimizzare il disegno di base la sezione della pagina da stampare.

In secondo luogo, è necessario chiamare spesso `QueryAbort` durante il disegno della banda. In caso contrario, la procedura di interruzione non verrà chiamata e l'utente sarà in grado di annullare il processo di stampa.

## <a name="print-preview-electronic-paper-with-user-interface"></a>Anteprima di stampa: Carta elettronico con interfaccia utente

Anteprima di stampa, in sostanza, tenta di attivare la visualizzazione in un'emulazione di una stampante. Per impostazione predefinita, l'area client della finestra principale utilizzato per visualizzare una o due pagine completamente all'interno della finestra. L'utente è in grado di fare zoom avanti su un'area della pagina per visualizzarlo in modo più dettagliato. Con supporto aggiuntivo, l'utente può anche essere autorizzato a modificare il documento in modalità di anteprima.

## <a name="customizing-print-preview"></a>Personalizzazione di anteprima di stampa

Un aspetto della modifica dell'anteprima di stampa sono disponibili solo in questa nota: l'aggiunta dell'interfaccia utente per la modalità di anteprima. Sono possibili altre modifiche, ma tali modifiche non rientrano nell'ambito di questa discussione.

## <a name="to-add-ui-to-the-preview-mode"></a>Per aggiungere l'interfaccia utente per la modalità anteprima

1. Derivare una classe di visualizzazione da `CPreviewView`.

2. Aggiungere gestori di comandi per gli aspetti dell'interfaccia utente desiderata.

3. Se si aggiungono gli aspetti visivi sullo schermo, eseguire l'override `OnDraw` ed eseguire il disegno dopo la chiamata `CPreviewView::OnDraw`.

## <a name="onfileprintpreview"></a>OnFilePrintPreview

Questo è il gestore di comando per l'anteprima di stampa. L'implementazione predefinita è:

```cpp
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
        delete pState;  // preview failed to initialize, delete State now
    }
}
```

`DoPrintPreview` nasconde il riquadro principale dell'applicazione. Barre di controllo, ad esempio la barra di stato, possono essere conservate specificandole nel pState ->*dwStates* membro (questa è una maschera di bit e i bit per le barre di controllo singoli vengono definite da AFX_CONTROLBAR_MASK (AFX_IDW_MYBAR)). -> La finestra pState*nIDMainPane* è la finestra che verrà automaticamente nascosta e reshown. `DoPrintPreview` creerà quindi una barra dei pulsanti per l'interfaccia utente di anteprima standard. Se è necessaria la gestione speciale di finestra, ad esempio nascondere o visualizzare altre finestre, che devono essere eseguite prima `DoPrintPreview` viene chiamato.

Per impostazione predefinita, al termine dell'anteprima di stampa, restituisce le barre di controllo per gli stati originali e nel riquadro principale in visibile. Se è necessaria una gestione speciale, deve essere eseguita in un override di `EndPrintPreview`. Se `DoPrintPreview` ha esito negativo, fornire anche una gestione speciale.

DoPrintPreview viene chiamato con:

- L'ID risorsa del modello di finestra di dialogo per la barra degli strumenti dell'anteprima.

- Puntatore alla visualizzazione per eseguire la stampa per l'anteprima di stampa.

- La classe di runtime della classe di visualizzazione di anteprima. Verrà in modo dinamico creato in DoPrintPreview.

- Il puntatore CPrintPreviewState. Si noti che la struttura CPrintPreviewState (o la struttura derivata, se l'applicazione necessita di ulteriori stato mantenuto) necessario *non* creato nel frame. Questa struttura deve resistere fino a quando non viene chiamato EndPrintPreview DoPrintPreview è non modale.

  > [!NOTE]
  > Se una classe di visualizzazione o una vista separata è necessaria per il supporto della stampa, un puntatore a tale oggetto deve essere passato come secondo parametro.

## <a name="endprintpreview"></a>EndPrintPreview

Viene chiamato per terminare la modalità di anteprima di stampa. Spesso è consigliabile passare alla pagina del documento che è stato ultima visualizzata in anteprima di stampa. `EndPrintPreview` è la probabilità dell'applicazione a tale scopo. -> PInfo*m_nCurPage* membro è la pagina dell'ultima è stata visualizzata (all'estrema sinistra se sono state visualizzate due pagine) e il puntatore è un hint per cui nella pagina l'utente era interessato. Poiché la struttura della visualizzazione dell'applicazione è sconosciuta al framework, sarà necessario fornire il codice per passare al punto di scelta.

È consigliabile eseguire la maggior parte delle azioni prima di chiamare `CView::EndPrintPreview`. Questa chiamata inverte gli effetti di `DoPrintPreview` pView, pDC e pInfo ed eliminate.

```cpp
// Any further cleanup should be done here.
CView::EndPrintPreview(pDC, pInfo, point, pView);
```

## <a name="cwinapponfileprintsetup"></a>CWinApp::OnFilePrintSetup

Questo deve essere mappato per la voce di menu impostazioni di stampa. Nella maggior parte dei casi, non è necessario eseguire l'override dell'implementazione.

## <a name="page-nomenclature"></a>Nomenclatura pagina

Un altro problema è che della numerazione di pagine e dell'ordine. Per le applicazioni di tipo semplice elaboratore di testo, si tratta di un problema semplice. La maggior parte dei sistemi di anteprima di stampa presuppongono che ogni pagina stampata corrisponde a una pagina nel documento.

Nel tentativo di fornire una soluzione generalizzata, esistono diversi aspetti da considerare. Si immagini un sistema CAD. L'utente ha un disegno che copre più fogli E dimensioni. In una dimensione E (o in scala ridotta e) plotter, numerazione di pagine verrebbe visualizzato come caso più semplice. Ma su una stampante laser, la stampa di pagine in formato 16 per ogni foglio, quali l'anteprima di stampa considera una "pagina"

Come indicato nel paragrafo introduttivo, anteprima di stampa viene utilizzato, ad esempio una stampante. Pertanto, l'utente vedrà cosa arriva all'esterno della stampante specifica che sia selezionata. È compito di visualizzazione per determinare quale immagine verrà stampata in ogni pagina.

La stringa di descrizione pagina nel `CPrintInfo` struttura consente di visualizzare il numero di pagina all'utente se può essere rappresentata come un numero per ogni pagina (come in "Pagina 1" o "pagine 1-2"). Questa stringa viene utilizzata per l'implementazione predefinita di `CPreviewView::OnDisplayPageNumber`. Se è necessaria una visualizzazione diversa, uno può eseguire l'override di questa funzione virtuale per fornire, ad esempio "Foglio1, sezioni A, B".

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
