---
description: 'Altre informazioni su: TN020: convenzioni di numerazione e denominazione ID'
title: 'TN020: convenzioni di numerazione e denominazione ID'
ms.date: 11/04/2016
f1_keywords:
- vc.id
helpviewer_keywords:
- TN020
- resource identifiers, naming and numbering
- resource identifiers
ms.assetid: aecbd2cf-68b3-47f6-ae21-b1f507917245
ms.openlocfilehash: 85f59e45ec9d4ce748515cf638f4fb4cf33c7d38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215872"
---
# <a name="tn020-id-naming-and-numbering-conventions"></a>TN020: convenzioni di numerazione e denominazione ID

Questa nota descrive le convenzioni di denominazione e numerazione degli ID utilizzate da MFC 2,0 per le risorse, i comandi, le stringhe, i controlli e le finestre figlio.

Le convenzioni di denominazione e numerazione degli ID MFC hanno lo scopo di soddisfare i requisiti seguenti:

- Fornire uno standard di denominazione ID coerente utilizzato nella libreria MFC e nelle applicazioni MFC supportate da Visual C++ Editor risorse. Questo rende più semplice per il programmatore interpretare il tipo e l'origine di una risorsa dal relativo ID.

- Evidenziare la forte relazione 1-a-1 tra determinati tipi di ID.

- Conformità agli standard già ampiamente usati per la denominazione degli ID in Windows.

- Partizionare lo spazio ID-numerazione. I numeri ID possono essere assegnati dal programmatore, da MFC, da Windows e dalle risorse modificate Visual C++. Il partizionamento appropriato consente di evitare la duplicazione dei numeri ID.

## <a name="the-id-prefix-naming-convention"></a>Convenzione di denominazione del prefisso ID

In un'applicazione possono essere presenti diversi tipi di ID. La convenzione di denominazione ID MFC definisce prefissi diversi per diversi tipi di risorse.

MFC usa il prefisso "IDR_" per indicare un ID risorsa che si applica a più tipi di risorse. Per una determinata finestra cornice, ad esempio, MFC utilizza lo stesso prefisso "IDR_" per indicare un menu, un tasto di scelta rapida, una stringa e una risorsa icona. La tabella seguente illustra i diversi prefissi e il relativo utilizzo:

|Prefisso|Usa|
|------------|---------|
|IDR_|Per più tipi di risorse (principalmente utilizzati per menu, acceleratori e barre multifunzione).|
|IDD_|Per le risorse del modello di finestra di dialogo, ad esempio IDD_DIALOG1.|
|IDC_|Per le risorse del cursore.|
|IDI_|Per le risorse icona.|
|IDB_|Per le risorse bitmap.|
|IDS_|Per le risorse di stringa.|

In una risorsa di dialogo MFC segue le convenzioni seguenti:

|Prefisso o etichetta|Usa|
|---------------------|---------|
|IDOK, IDCANCEL|Per gli ID dei pulsanti di push standard.|
|IDC_|Per altri controlli della finestra di dialogo.|

Il prefisso "IDC_" viene utilizzato anche per i cursori. Questo conflitto di denominazione non è in genere un problema perché un'applicazione tipica disporrà di pochi cursori e di molti controlli della finestra di dialogo.

In una risorsa di menu MFC segue le convenzioni seguenti:

|Prefisso|Usa|
|------------|---------|
|IDM_|Per le voci di menu che non utilizzano l'architettura del comando MFC.|
|ID_|Per i comandi di menu che usano l'architettura del comando MFC.|

I comandi che seguono l'architettura del comando MFC devono avere un gestore del comando ON_COMMAND e possono avere un gestore di ON_UPDATE_COMMAND_UI. Se questi gestori di comandi seguono l'architettura del comando MFC, funzioneranno correttamente se sono associati a un comando di menu, a un pulsante della barra degli strumenti o a un pulsante della barra di dialogo. Lo stesso prefisso "ID_" viene utilizzato anche per una stringa della richiesta di menu visualizzata sulla barra dei messaggi del programma. La maggior parte delle voci di menu nell'applicazione deve seguire le convenzioni dei comandi MFC. Tutti gli ID di comando standard, ad esempio ID_FILE_NEW, seguono questa convenzione.

MFC inoltre utilizza "IDP_" come forma specializzata di stringhe (anziché "IDS_"). Le stringhe con il prefisso "IDP_" sono richieste, ovvero stringhe utilizzate nelle finestre di messaggio. Le stringhe "IDP_" possono contenere "%1" e "%2" come segnaposto di stringhe determinate dal programma. Per le stringhe "IDP_" sono in genere presenti argomenti della Guida associati e non le stringhe "IDS_". Le stringhe "IDP_" sono sempre localizzate e le stringhe "IDS_" potrebbero non essere localizzate.

La libreria MFC usa inoltre il prefisso "IDW_" come una forma specializzata di ID di controllo (anziché "IDC_"). Questi ID vengono assegnati alle finestre figlio, ad esempio visualizzazioni e separatori dalle classi del Framework. Gli ID implementazione MFC hanno il prefisso "AFX_".

## <a name="the-id-numbering-convention"></a>Convenzione di ID-Numbering

Nella tabella seguente sono elencati gli intervalli validi per gli ID dei tipi specifici. Alcuni dei limiti sono i limiti di implementazione tecnica e altri sono convenzioni progettate per impedire che gli ID entrino in conflitto con gli ID predefiniti di Windows o con le implementazioni predefinite di MFC.

Si consiglia vivamente di definire tutti gli ID all'interno degli intervalli consigliati. Il limite inferiore di questi intervalli è 1 perché 0 non viene utilizzato. È consigliabile utilizzare la convenzione comune e utilizzare 100 o 101 come primo ID.

|Prefisso|Tipo di risorsa|Intervallo valido|
|------------|-------------------|-----------------|
|IDR_|multiple|da 1 a 0x6FFF|
|IDD_|modelli di finestra di dialogo|da 1 a 0x6FFF|
|IDC_, IDI_, IDB_|cursori, icone, bitmap|da 1 a 0x6FFF|
|IDS_, IDP_|stringhe generali|da 1 a 0x7FFF|
|ID_|commands|da 0x8000 a 0xDFFF|
|IDC_|controls|da 8 a 0xDFFF|

Motivi per questi limiti di intervallo:

- Per convenzione, il valore ID 0 non viene utilizzato.

- Le limitazioni di implementazione di Windows limitano gli ID di risorsa true a essere minori o uguali a 0x7FFF.

- Il Framework interno di MFC riserva questi intervalli:

  - da 0x7000 a 0x7FFF (vedere Afxres. h)

  - da 0xE000 a 0xEFFF (vedere Afxres. h)

  - da 16000 a 18000 (vedere afxribbonres. h)

  Questi intervalli possono cambiare nelle future implementazioni MFC.

- Diversi comandi di sistema di Windows usano l'intervallo di 0xF000 tramite 0xFFFF.

- Gli ID di controllo da 1 a 7 sono riservati per i controlli standard, ad esempio IDOK e IDCANCEL.

- L'intervallo di 0x8000 tramite 0xFFFF per le stringhe è riservato alle richieste di menu per i comandi.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
