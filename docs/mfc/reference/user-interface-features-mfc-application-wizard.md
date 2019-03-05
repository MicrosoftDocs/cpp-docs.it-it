---
title: Funzionalità interfaccia utente, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.ui
helpviewer_keywords:
- MFC Application Wizard, user interface features
ms.assetid: 59e7b829-a665-42eb-be23-3f2a36eb2dad
ms.openlocfilehash: 6ca67d4cac3786ce8bb059464d47acf17e3ecdc7
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266066"
---
# <a name="user-interface-features-mfc-application-wizard"></a>Funzionalità interfaccia utente, Creazione guidata applicazione MFC

In questo argomento illustra le opzioni che è possibile usare per specificare l'aspetto dell'applicazione. La funzionalità dell'interfaccia utente disponibili per il progetto dipendono dal tipo di applicazione specificato nella [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC. Ad esempio, se si crea un'applicazione single document interface, è possibile aggiungere stili dei frame figlio.

- **Stili del frame principale**

   Imposta le funzionalità di cornice della finestra principale dell'applicazione.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Frame con bordo spesso**|Crea una finestra che ha un bordo di ridimensionamento. Valore predefinito.|
   |**Finestra di ridurre al minimo**|Include un pulsante di ingrandimento nella finestra cornice principale. Valore predefinito.|
   |**Pulsante di ingrandimento**|Include un pulsante di ingrandimento nella finestra cornice principale. Valore predefinito.|
   |**Ridotta a icona**|Ridotta a icona, verrà visualizzata la finestra cornice principale.|
   |**Maximized**|Apre la finestra cornice principale alla dimensione completa dello schermo.|
   |**Menu di sistema**|Include un menu di sistema nella finestra cornice principale. Valore predefinito.|
   |**Finestra informazioni su**|Include un' **sulle** casella per l'applicazione. L'utente può accedere a questa casella da dell'applicazione **aiutare** menu. L'impostazione predefinita e non modificabile se non si seleziona **basato su finestra di dialogo**, nella [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) pagina.<br /><br /> **Nota** indica che la procedura guidata non si applica l'opzione per il progetto, se viene selezionata o deselezionata la casella di controllo dell'elemento non disponibile in genere, un'opzione disponibile. In questo caso, la procedura guidata aggiunge sempre un **sulle** casella al progetto se non si specifica innanzitutto il progetto come finestra di dialogo in base e quindi deselezionare la casella di controllo.|
   |**Barra di stato iniziale**|Aggiunge una barra di stato all'applicazione. La barra di stato contiene indicatori automatica per i tasti della tastiera BLOC MAIUSC, BLOC NUM e BLOC SCORR e stringhe di una riga di messaggio che visualizza la Guida per i comandi di menu e barra degli strumenti pulsanti. Se si seleziona questa opzione aggiunge anche i comandi di menu per visualizzare o nascondere la barra di stato. Per impostazione predefinita, un'applicazione ha una barra di stato. Non è disponibile per i tipi di applicazioni basate su finestra di dialogo.|
   |**Dividi finestra**|Fornisce una barra di divisione. La barra di divisione divide viste principali dell'applicazione. In un'applicazione (MDI) interfaccia a documenti multipli, client finestra della cornice figlio MDI è una finestra con separatore, e in un'applicazione single document interface (SDI) e più applicazioni di documento di livello superiore, finestra di client del frame principale è una finestra con separatore. Non è disponibile per i tipi di applicazioni basate su finestra di dialogo.|

- **Stili dei frame figlio**

   Specifica l'aspetto e lo stato iniziale dei frame figlio nell'applicazione. Stili dei frame figlio sono disponibili per le applicazioni MDI solo.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Pulsante di riduzione a finestra**|Specifica se una finestra figlio ha un pulsante Riduci a icona (abilitato per impostazione predefinita).|
   |**Ingrandimento**|Specifica se una finestra figlio contiene un pulsante di ingrandimento (abilitato per impostazione predefinita).|
   |**Ingrandita**|Specifica se una finestra figlio viene ingrandita inizialmente impostando il cs. Style flag WS_MAXIMIZE nel [PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow) funzione di membro di `CChildFrame`.|

- **Barre dei comandi (menu / / barra multifunzione degli strumenti)**

   Indica se l'applicazione include i menu, barre degli strumenti e/o una barra multifunzione. Non è disponibile per le applicazioni basate su finestra di dialogo.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Usa menu classico**|Specifica che l'applicazione contiene un menu classico, non trascinabile.|
   |**Usare una barra degli strumenti ancorabile classico**|Aggiunge una barra degli strumenti standard di Windows per l'applicazione. Barra degli strumenti contiene pulsanti per la creazione di un nuovo documento. apertura e salvataggio di file di documento; Taglia, copia o lo stampa il testo. e l'immissione di modalità della Guida. L'abilitazione di questa opzione aggiunge anche i comandi di menu per visualizzare o nascondere la barra degli strumenti.|
   |**Usare una barra degli strumenti lo stile del browser**|Aggiunge una barra degli strumenti basato su Internet Explorer all'applicazione.|
   |**Usare una barra dei menu e barra degli strumenti**|Indica che l'applicazione contiene una barra dei menu trascinabile e una barra degli strumenti.|
   |**Le immagini e barre degli strumenti definite dall'utente**|Consente all'utente di personalizzare la barra degli strumenti e le immagini della barra degli strumenti in fase di esecuzione.|
   |**Comportamento menu personalizzati**|Specifica se il menu contiene l'elenco completo degli elementi all'apertura, o se contiene solo i comandi che l'utente usa più di frequente.|
   |**Usare una barra multifunzione**|Usa una barra multifunzione di Office 2007 nell'applicazione anziché una barra dei menu o sulla barra degli strumenti.|

- **Titolo della finestra**

   Per la [classe CDialog](../../mfc/reference/cdialog-class.md)-solo le applicazioni basate su questo titolo viene visualizzato nella barra del titolo della finestra di dialogo. Per modificare questo campo, è innanzitutto necessario selezionare la **finestra di dialogo basata** l'opzione nella **tipo di applicazione**. Per altre informazioni, vedere [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md).

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
