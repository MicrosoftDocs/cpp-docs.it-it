---
description: 'Ulteriori informazioni su: funzionalità interfaccia utente, creazione guidata applicazione MFC'
title: Funzionalità interfaccia utente, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.ui
helpviewer_keywords:
- MFC Application Wizard, user interface features
ms.assetid: 59e7b829-a665-42eb-be23-3f2a36eb2dad
ms.openlocfilehash: ac2c3dc7881fd5e931539224bed121c617b940a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218511"
---
# <a name="user-interface-features-mfc-application-wizard"></a>Funzionalità interfaccia utente, Creazione guidata applicazione MFC

In questo argomento vengono illustrate le opzioni che è possibile utilizzare per specificare l'aspetto dell'applicazione. Le funzionalità dell'interfaccia utente disponibili per il progetto dipendono dal tipo di applicazione specificato nella pagina [creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) della creazione guidata applicazione MFC. Se, ad esempio, si crea un'applicazione con interfaccia a documenti singoli, non è possibile aggiungere gli stili dei frame figlio.

- **Stili del frame principale**

   Imposta le funzionalità della cornice della finestra principale dell'applicazione.

   |Opzione|Description|
   |------------|-----------------|
   |**Frame spessa**|Crea una finestra con un bordo di ridimensionamento. Valore predefinito.|
   |**Riduci a icona**|Include una casella di riduzione a icona nella finestra cornice principale. Valore predefinito.|
   |**Ingrandisci box**|Include una casella Ingrandisci nella finestra cornice principale. Valore predefinito.|
   |**Ridotta a icona**|Apre la finestra cornice principale come icona.|
   |**Ingrandita**|Apre la finestra cornice principale fino alle dimensioni massime dello schermo.|
   |**Menu di sistema**|Include un menu di sistema nella finestra cornice principale. Valore predefinito.|
   |**Finestra informazioni su**|Include una finestra **informazioni su** per l'applicazione. L'utente può accedere a questa casella dal menu **Guida** dell'applicazione. Il valore predefinito e non è modificabile, a meno che non si selezioni la **finestra basata su finestre di dialogo**, nella pagina [tipo di applicazione della creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) .<br /><br /> **Nota** In genere, un'opzione non disponibile indica che la procedura guidata non applica l'opzione al progetto, indipendentemente dal fatto che la casella di controllo dell'elemento non disponibile sia selezionata o deselezionata. In questo caso, la procedura guidata aggiunge sempre una finestra **informazioni su** al progetto, a meno che non si specifichi prima il progetto come basato su finestra di dialogo e quindi deselezionare la casella.|
   |**Barra di stato iniziale**|Aggiunge una barra di stato all'applicazione. La barra di stato contiene gli indicatori automatici per i tasti BLOC MAIUSC, BLOC NUM e BLOC SCORR della tastiera e una riga di messaggio che visualizza le stringhe della Guida per i comandi di menu e i pulsanti della barra degli strumenti. Se si seleziona questa opzione, verranno aggiunti anche i comandi di menu per visualizzare o nascondere la barra di stato. Per impostazione predefinita, un'applicazione dispone di una barra di stato. Non disponibile per i tipi di applicazione basati su finestra di dialogo.|
   |**Dividi finestra**|Fornisce una barra di divisione. La barra di divisione suddivide le visualizzazioni principali dell'applicazione. In un'applicazione con interfaccia a documenti multipli (MDI) la finestra del client del frame figlio MDI è una finestra con separatore e in un'applicazione con interfaccia a documento singolo (SDI) e in più applicazioni per documenti di primo livello, la finestra client del frame principale è una finestra con separatore. Non disponibile per i tipi di applicazione basati su finestra di dialogo.|

- **Stili frame figlio**

   Specifica l'aspetto e lo stato iniziale dei frame figlio nell'applicazione. Gli stili dei frame figlio sono disponibili solo per le applicazioni MDI.

   |Opzione|Description|
   |------------|-----------------|
   |**Casella Riduci a icona figlio**|Specifica se una finestra figlio ha un pulsante Riduci a icona (abilitato per impostazione predefinita).|
   |**Casella Ingrandisci figlio**|Specifica se una finestra figlio ha un pulsante Ingrandisci (abilitato per impostazione predefinita).|
   |**Figlio ingrandito**|Specifica se inizialmente una finestra figlio viene ingrandita impostando il flag CS. Style WS_MAXIMIZE nella funzione membro [PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow) di `CChildFrame` .|

- **Barre dei comandi (menu/barra degli strumenti/barra multifunzione)**

   Indica se l'applicazione include menu, barre degli strumenti e/o una barra multifunzione. Non disponibile per le applicazioni basate su finestra di dialogo.

   |Opzione|Description|
   |------------|-----------------|
   |**Usare un menu classico**|Specifica che l'applicazione contiene un menu classico non trascinabile.|
   |**Usare una barra degli strumenti di ancoraggio classica**|Aggiunge una barra degli strumenti standard di Windows all'applicazione. La barra degli strumenti contiene i pulsanti per la creazione di un nuovo documento; apertura e salvataggio di file di documento; tagliando, incollando o stampando testo; e immettendo la modalità della guida. Se si abilita questa opzione, verranno aggiunti anche i comandi di menu per visualizzare o nascondere la barra degli strumenti.|
   |**Usare una barra degli strumenti di tipo browser**|Aggiunge una barra degli strumenti di tipo Internet Explorer all'applicazione.|
   |**Usare una barra dei menu e una barra degli strumenti**|Indica che l'applicazione contiene una barra dei menu trascinabile e una barra degli strumenti.|
   |**Barre degli strumenti e immagini definite dall'utente**|Consente all'utente di personalizzare la barra degli strumenti e le immagini della barra degli strumenti in fase di esecuzione.|
   |**Comportamento dei menu personalizzati**|Specifica se il menu contiene l'elenco completo di elementi all'apertura o se contiene solo i comandi utilizzati più di frequente dall'utente.|
   |**Usare una barra multifunzione**|Usa una barra multifunzione di tipo Office 2007 nell'applicazione anziché una barra dei menu o una barra degli strumenti.|

- **Titolo della finestra di dialogo**

   Per le applicazioni CDialog basate su [classi](../../mfc/reference/cdialog-class.md), questo titolo viene visualizzato nella barra del titolo della finestra di dialogo. Per modificare questo campo, è innanzitutto necessario selezionare l'opzione **basata sulla finestra di dialogo** in **tipo di applicazione**. Per ulteriori informazioni, vedere [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md).

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
