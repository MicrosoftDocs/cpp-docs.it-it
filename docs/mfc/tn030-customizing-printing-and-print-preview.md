---
description: "Altre informazioni su: TN030: personalizzazione della stampa e dell'anteprima di stampa"
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
ms.openlocfilehash: 6fc0571b908f85b24b8a0752a00842077d537dce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215612"
---
# <a name="tn030-customizing-printing-and-print-preview"></a>TN030: personalizzazione della stampa e dell'anteprima di stampa

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto il processo di personalizzazione della stampa e dell'anteprima di stampa e vengono descritti gli scopi delle routine di callback utilizzate in `CView` e le routine di callback e le funzioni membro di `CPreviewView` .

## <a name="the-problem"></a>Problema

MFC offre una soluzione completa per la maggior parte delle esigenze di stampa e anteprima di stampa. Nella maggior parte dei casi, è necessario un altro codice aggiuntivo per consentire a una visualizzazione di stampare e visualizzare in anteprima. Esistono tuttavia modi per ottimizzare la stampa che richiedono un impegno significativo da parte dello sviluppatore e alcune applicazioni devono aggiungere elementi dell'interfaccia utente specifici alla modalità di anteprima di stampa.

## <a name="efficient-printing"></a>Stampa efficiente

Quando un'applicazione MFC stampa usando i metodi standard, Windows indirizza tutte le chiamate di output GDI (Graphical Device Interface) a un metafile in memoria. Quando `EndPage` viene chiamato, Windows riproduce il metafile una volta per ogni banda fisica richiesta dalla stampante per stampare una pagina. Durante questo rendering, GDI esegue spesso una query sulla procedura di interruzione per determinare se deve continuare. In genere, la procedura di interruzione consente l'elaborazione dei messaggi in modo che l'utente possa interrompere il processo di stampa utilizzando una finestra di dialogo di stampa.

Sfortunatamente, questo può rallentare il processo di stampa. Se la stampa nell'applicazione deve essere più veloce di quanto possa essere eseguita usando la tecnica standard, è necessario implementare la banda manuale.

## <a name="print-banding"></a>Bande di stampa

Per eseguire manualmente la banda, è necessario implementare di nuovo il ciclo di stampa, in modo che `OnPrint` venga chiamato più volte per pagina (una volta per banda). Il ciclo di stampa viene implementato nella `OnFilePrint` funzione in viewprnt. cpp. Nella `CView` classe derivata da, si esegue l'overload di questa funzione in modo che la voce della mappa messaggi per la gestione del comando stampa chiami la funzione di stampa. Copiare la `OnFilePrint` routine e modificare il ciclo di stampa per implementare la banda. Probabilmente si vorrà anche passare il rettangolo di banda alle funzioni di stampa per poter ottimizzare il disegno in base alla sezione della pagina da stampare.

In secondo luogo, è necessario chiamare spesso `QueryAbort` durante il disegno della banda. In caso contrario, la procedura di interruzione non viene chiamata e l'utente non sarà in grado di annullare il processo di stampa.

## <a name="print-preview-electronic-paper-with-user-interface"></a>Anteprima di stampa: carta elettronica con interfaccia utente

L'anteprima di stampa, in sostanza, tenta di trasformare la visualizzazione in un'emulazione di una stampante. Per impostazione predefinita, l'area client della finestra principale viene utilizzata per visualizzare una o due pagine completamente all'interno della finestra. L'utente è in grado di eseguire lo zoom avanti su un'area della pagina per visualizzarlo in modo più dettagliato. Con supporto aggiuntivo, l'utente può anche essere autorizzato a modificare il documento in modalità di anteprima.

## <a name="customizing-print-preview"></a>Personalizzazione dell'anteprima di stampa

Questa nota riguarda solo un aspetto della modifica dell'anteprima di stampa: aggiunta dell'interfaccia utente alla modalità anteprima. Sono possibili altre modifiche, ma tali modifiche non rientrano nell'ambito di questa discussione.

## <a name="to-add-ui-to-the-preview-mode"></a>Per aggiungere l'interfaccia utente alla modalità di anteprima

1. Derivare una classe di visualizzazione da `CPreviewView` .

2. Aggiungere gestori di comandi per gli aspetti dell'interfaccia utente desiderati.

3. Se si aggiungono aspetti visivi alla visualizzazione, eseguire l'override `OnDraw` ed eseguire il disegno dopo avere chiamato `CPreviewView::OnDraw` .

## <a name="onfileprintpreview"></a>OnFilePrintPreview

Si tratta del gestore comando per l'anteprima di stampa. L'implementazione predefinita è:

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

`DoPrintPreview` il riquadro principale dell'applicazione verrà nascosto. Le barre di controllo, ad esempio la barra di stato, possono essere conservate specificandone il membro pState->*dwStates* (si tratta di una maschera di bit e i bit per le singole barre di controllo sono definiti da AFX_CONTROLBAR_MASK (AFX_IDW_MYBAR)). La finestra pState->*nIDMainPane* è la finestra che verrà nascosta e visualizzata automaticamente. `DoPrintPreview` creerà quindi una barra dei pulsanti per l'interfaccia utente di anteprima standard. Se è necessaria una gestione speciale della finestra, ad esempio per nascondere o mostrare altre finestre, questa operazione deve essere eseguita prima che `DoPrintPreview` venga chiamato.

Per impostazione predefinita, al termine dell'anteprima di stampa, le barre di controllo vengono restituite agli stati originali e il riquadro principale è visibile. Se è necessaria una gestione speciale, è necessario eseguire l'override di `EndPrintPreview` . Se ha `DoPrintPreview` esito negativo, fornisce anche una gestione speciale.

DoPrintPreview viene chiamato con:

- ID risorsa del modello di finestra di dialogo per la barra degli strumenti di anteprima.

- Puntatore alla visualizzazione per eseguire la stampa per l'anteprima di stampa.

- Classe della fase di esecuzione della classe di visualizzazione dell'anteprima. Questa operazione verrà creata dinamicamente in DoPrintPreview.

- Puntatore CPrintPreviewState. Si noti che la struttura CPrintPreviewState (o la struttura derivata se l'applicazione necessita di un maggiore stato mantenuto) *non* deve essere creata nel frame. DoPrintPreview non è modale e la struttura deve sopravvivere fino a quando non viene chiamato EndPrintPreview.

  > [!NOTE]
  > Se è necessaria una vista o una classe di visualizzazione separata per il supporto della stampa, è necessario passare un puntatore a tale oggetto come secondo parametro.

## <a name="endprintpreview"></a>EndPrintPreview

Questa operazione viene chiamata per terminare la modalità di anteprima di stampa. Spesso è consigliabile spostarsi nella pagina del documento che è stato visualizzato per l'ultima volta nell'anteprima di stampa. `EndPrintPreview` è possibile che l'applicazione esegua questa operazione. Il pInfo->*m_nCurPage* membro è la pagina che è stata visualizzata l'ultima volta (a sinistra se sono state visualizzate due pagine) e il puntatore è un suggerimento relativo alla posizione della pagina a cui l'utente era interessato. Poiché la struttura della visualizzazione dell'applicazione non è nota per il Framework, è necessario fornire il codice per passare al punto scelto.

È necessario eseguire la maggior parte delle azioni prima di chiamare `CView::EndPrintPreview` . Questa chiamata inverte gli effetti di `DoPrintPreview` ed Elimina PView, PDC e pInfo.

```cpp
// Any further cleanup should be done here.
CView::EndPrintPreview(pDC, pInfo, point, pView);
```

## <a name="cwinapponfileprintsetup"></a>CWinApp:: OnFilePrintSetup

È necessario eseguirne il mapping per la voce di menu configurazione di stampa. Nella maggior parte dei casi, non è necessario eseguire l'override dell'implementazione.

## <a name="page-nomenclature"></a>Nomenclatura pagina

Un altro problema è costituito dalla numerazione e dall'ordine delle pagine. Per le semplici applicazioni di tipo elaboratore di testo, si tratta di un problema semplice. La maggior parte dei sistemi di anteprima di stampa presuppone che ogni pagina stampata corrisponda a una pagina del documento.

Nel tentativo di fornire una soluzione generalizzata, è necessario prendere in considerazione diversi aspetti. Immaginate un sistema CAD. L'utente dispone di un disegno che copre diversi fogli di dimensioni E. In un plotter di dimensioni E di dimensioni inferiori, la numerazione delle pagine è come nel caso più semplice. Tuttavia, su una stampante laser, stampa di 16 pagine di dimensioni per foglio, che cosa fa l'anteprima di stampa, si consideri una "pagina"

Come indicato dal paragrafo introduttivo, l'anteprima di stampa funge da stampante. Di conseguenza, l'utente visualizzerà il risultato della stampante specifica selezionata. Spetta alla vista determinare quale immagine viene stampata in ogni pagina.

La stringa di descrizione della pagina nella `CPrintInfo` struttura fornisce un mezzo per visualizzare il numero di pagina all'utente se può essere rappresentato come un numero per pagina (come in "pagina 1" o "pagine 1-2"). Questa stringa viene utilizzata dall'implementazione predefinita di `CPreviewView::OnDisplayPageNumber` . Se è necessaria una visualizzazione diversa, è possibile eseguire l'override di questa funzione virtuale per fornire, ad esempio, "Sheet1, sections A, B".

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
