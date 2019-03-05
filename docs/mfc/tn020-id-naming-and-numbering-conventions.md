---
title: 'TN020: Convenzioni di numerazione e denominazione ID'
ms.date: 11/04/2016
f1_keywords:
- vc.id
helpviewer_keywords:
- TN020
- resource identifiers, naming and numbering
- resource identifiers
ms.assetid: aecbd2cf-68b3-47f6-ae21-b1f507917245
ms.openlocfilehash: f1cd44ed448cc4c0fc60d490a613f0ad91071376
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267394"
---
# <a name="tn020-id-naming-and-numbering-conventions"></a>TN020: Convenzioni di numerazione e denominazione ID

In questa nota descrive la denominazione degli ID e convenzioni di numerazione 2.0 MFC utilizzate per le risorse, i comandi, le stringhe, controlli e finestre figlio.

Convenzioni di numerazione e denominazione ID MFC sono destinati a soddisfare i requisiti seguenti:

- Fornire uno standard di denominazione degli ID coerente utilizzato tra le applicazioni MFC sono supportate dall'editor di risorse di Visual C++ e la libreria MFC. Questo rende più semplice per i programmatori di interpretare il tipo e l'origine di una risorsa dal relativo ID.

- Evidenziare il forte relazione 1 a 1 tra determinati tipi di ID.

- È conforme agli standard già ampiamente usati per la denominazione degli ID di Windows.

- Lo spazio per la numerazione di ID di partizione. I numeri ID possono essere assegnati dal programmatore, MFC, Windows e le risorse di Visual C++ modificate. Partizionamento appropriato consentirà di evitare la duplicazione dei numeri ID.

## <a name="the-id-prefix-naming-convention"></a>La convenzione di denominazione prefisso ID

Diversi tipi di ID possono verificarsi in un'applicazione. La convenzione di denominazione degli ID di MFC definisce prefissi diversi per diversi tipi di risorse.

MFC utilizza il prefisso "IDR _" per indicare un ID di risorsa che si applica a più tipi di risorsa. Per una finestra cornice specificata, ad esempio, MFC utilizza il medesimo prefisso "IDR _" per indicare una risorsa di menu, tasti di scelta rapida, stringa e icona. La tabella seguente illustra i vari prefissi e il relativo utilizzo:

|Prefisso|Usa|
|------------|---------|
|IDR_|Per più tipi di risorsa (principalmente usati per i menu, tasti di scelta rapida e le barre multifunzione).|
|IDD_|Per le risorse modello di finestra di dialogo (ad esempio IDD_DIALOG1).|
|IDC_|Per le risorse di cursore.|
|IDI_|Per le risorse di icona.|
|IDB_|Per le risorse di bitmap.|
|IDS_|Per le risorse stringa.|

All'interno di una risorsa, finestra di dialogo MFC adotta queste convenzioni:

|Prefisso o l'etichetta|Usa|
|---------------------|---------|
|IDOK, IDCANCEL|Per gli ID standard del pulsante push.|
|IDC_|Per altri controlli di finestra di dialogo.|

Il prefisso "IDC _" è utilizzato anche per i cursori. Questo conflitto di denominazione non è in genere un problema perché un'applicazione tipica avrà alcuni cursori e molti controlli di finestra di dialogo.

All'interno di una risorsa di menu, MFC adotta queste convenzioni:

|Prefisso|Usa|
|------------|---------|
|IDM_|Per le voci di menu che non utilizzano l'architettura di comando MFC.|
|ID_|Per i comandi di menu che usano l'architettura di comando MFC.|

I comandi che seguono l'architettura di comandi MFC devono includere un gestore comando ON_COMMAND e possono avere un gestore ON_UPDATE_COMMAND_UI. Se questi gestori comando seguono l'architettura di comandi MFC, devono funzionare correttamente se sono associate a un comando di menu, un pulsante della barra degli strumenti o un pulsante della barra di finestra di dialogo. Lo stesso prefisso "ID _" è utilizzato anche per una stringa di richiesta dal menu visualizzato nella barra dei messaggi del programma. La maggior parte delle voci di menu nell'applicazione devono seguire le convenzioni di comando MFC. Tutti gli ID di comando standard (ad esempio, ID_FILE_NEW) seguono questa convenzione.

MFC utilizza anche "Caso del" come un tipo specializzato di stringhe (invece di "IDS _"). Le stringhe con il prefisso "Caso del" sono messaggi di richiesta, ovvero stringhe usate nelle finestre di messaggio. Le stringhe "Caso del" possono contenere "%1" e "%2" come segnaposto di stringhe determinate dal programma. Le stringhe "Caso del" hanno in genere gli argomenti della Guida associati e non le stringhe "IDS _". Vengono sempre localizzate le stringhe di "caso del" e le stringhe "IDS _" potrebbero non essere localizzate.

La libreria MFC Usa anche il prefisso "IDW _" come un tipo specializzato di ID (invece di "IDC _") di controllo. Questi ID vengono assegnati alle finestre figlio, ad esempio le visualizzazioni e con separatori dalle classi del framework. Gli ID di implementazione di MFC hanno il prefisso "AFX _".

## <a name="the-id-numbering-convention"></a>La convenzione di numerazione ID

Nella tabella seguente elenca gli intervalli validi per gli ID dei tipi specifici. Alcuni dei limiti sono i limiti di implementazione tecnica e altre sono le convenzioni progettate per impedire che l'ID che entrino in conflitto con ID predefiniti di Windows o MFC le implementazioni predefinite.

Si consiglia di definire tutti gli ID all'interno di intervalli consigliati. Il limite inferiore di questi intervalli è 1, perché non viene utilizzato 0. È consigliabile usare la convenzione comune e usare 100 o 101 come primo ID.

|Prefisso|Tipo di risorsa|Intervallo valido|
|------------|-------------------|-----------------|
|IDR_|multipli|tra 1 e 0x6FFF|
|IDD_|modelli di finestra di dialogo|tra 1 e 0x6FFF|
|IDC_,IDI_,IDB_|cursori, icone, bitmap|tra 1 e 0x6FFF|
|IDS_, IDP_|stringhe di generale|da 1 a 0x7FFF|
|ID_|comandi|0x8000 e 0xDFFF|
|IDC_|controlli|8 e 0xDFFF|

Motivi per i limiti di intervallo:

- Per convenzione, non viene utilizzato il valore di ID pari a 0.

- Limitazioni di implementazione di Windows di limitare l'ID deve essere inferiore o uguale a 0x7FFF risorsa true.

- Framework interni di MFC riserva questi intervalli:

  - 0x7000 tramite 0x7FFF (vedere AFXRES. h)

  - 0xE000 tramite 0xEFFF (vedere AFXRES. h)

  - 16000 tramite 18000 (vedere afxribbonres.h)

  Questi intervalli possono cambiare in futuro le implementazioni di MFC.

- Alcuni comandi di sistema di Windows usano l'intervallo di 0xF000 e 0xFFFF.

- ID dei controlli di 1 a 7 sono riservati per i controlli standard, ad esempio IDOK e IDCANCEL.

- L'intervallo di 0x8000 e 0xFFFF per le stringhe è riservato per le richieste di menu per i comandi.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
