---
title: 'TN020: ID convenzioni di numerazione e denominazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.id
dev_langs:
- C++
helpviewer_keywords:
- TN020
- resource identifiers, naming and numbering
- resource identifiers
ms.assetid: aecbd2cf-68b3-47f6-ae21-b1f507917245
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 17b27b4cfc1b624c9c12138154a660951a0f2a13
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn020-id-naming-and-numbering-conventions"></a>TN020: convenzioni di numerazione e denominazione ID
Questa nota descrive la denominazione degli ID e le convenzioni di numerazione MFC 2.0 utilizzate per le risorse, i comandi, stringhe, controlli e finestre figlio.  
  
 Convenzioni di numerazione e denominazione ID MFC sono destinati a soddisfare i requisiti seguenti:  
  
-   Fornire uno standard di denominazione ID coerenza usato nella libreria MFC e le applicazioni MFC che sono supportate dall'editor di risorse di Visual C++. Questo rende più semplice per i programmatori di interpretare il tipo e l'origine di una risorsa dal relativo ID.  
  
-   Evidenziare la forte relazione 1 a 1 tra determinati tipi di ID.  
  
-   Conforme allo standard già ampiamente usato per la denominazione degli ID di Windows.  
  
-   Lo spazio di numeri di ID di partizione. Dal programmatore, MFC, Windows e le risorse di Visual C++ modificate, è possono assegnare i numeri di ID. Partizionamento appropriato consentirà di evitare la duplicazione dei numeri ID.  
  
## <a name="the-id-prefix-naming-convention"></a>La convenzione di denominazione del prefisso dell'ID  
 In un'applicazione, possono verificarsi diversi tipi di ID. La convenzione di denominazione ID MFC definisce i prefissi diversi per diversi tipi di risorse.  
  
 MFC utilizza il prefisso "IDR _" per indicare un ID di risorsa che si applica a più tipi di risorsa. Per una finestra cornice specificata, ad esempio, MFC Usa lo stesso prefisso "IDR _" per indicare una risorsa di menu, tasti di scelta rapida, stringa e l'icona. La tabella seguente illustra i vari prefissi e il relativo utilizzo:  
  
|Prefisso|Usa|  
|------------|---------|  
|IDR _|Per più tipi di risorsa (utilizzati principalmente per i tasti di scelta rapida, menu e barre multifunzione).|  
|IDD _|Per le risorse modello di finestra di dialogo (ad esempio IDD_DIALOG1).|  
|IDC_|Per le risorse di cursore.|  
|IDI_|Per le risorse di icona.|  
|IDB _|Per le risorse bitmap.|  
|IDS_|Per le risorse di stringa.|  
  
 All'interno di una risorsa finestra di dialogo, MFC segue queste convenzioni:  
  
|Prefisso o l'etichetta|Usare|  
|---------------------|---------|  
|IDOK, IDCANCEL|Per gli ID standard del pulsante push.|  
|IDC_|Per altri controlli della finestra di dialogo.|  
  
 Il prefisso "IDC _" è utilizzato anche per i cursori. Questo conflitto di denominazione non è in genere un problema perché una tipica applicazione sarà necessario alcuni cursori e molti controlli di finestra di dialogo.  
  
 All'interno di una risorsa di menu, MFC segue queste convenzioni:  
  
|Prefisso|Usa|  
|------------|---------|  
|IDM _|Per le voci di menu che non utilizzano l'architettura di comando MFC.|  
|ID_|Per i comandi di menu che utilizzano l'architettura di comando MFC.|  
  
 Comandi che seguono l'architettura di comando MFC devono avere un `ON_COMMAND` comando gestore e può avere un `ON_UPDATE_COMMAND_UI` gestore. Se questi gestori di comando seguono l'architettura di comando MFC, funzioneranno correttamente se vengono associati a un comando di menu, un pulsante della barra degli strumenti o un pulsante della barra di finestra di dialogo. Lo stesso prefisso "ID _" è utilizzato anche per una stringa di prompt dei comandi di menu che viene visualizzata sulla barra dei messaggi del programma. La maggior parte delle voci di menu dell'applicazione deve seguire le convenzioni di comando MFC. ID di comando tutti dello standard (ad esempio, `ID_FILE_NEW`) seguono questa convenzione.  
  
 MFC utilizza anche "Caso del" come un tipo specializzato di stringhe (invece di "IDS _"). Le stringhe con il prefisso "Caso del" sono richieste di conferma, ovvero stringhe usate nelle finestre di messaggio. Le stringhe di "caso del" possono contenere "%1" e "%2" come segnaposto di stringhe, determinate dal programma. Le stringhe di "caso del" hanno in genere gli argomenti della Guida associati e non stringhe "IDs _". Le stringhe "Caso del" sono sempre localizzate e stringhe "IDs _" potrebbero non essere localizzate.  
  
 La libreria MFC Usa anche il prefisso "IDW _" come un tipo speciale di ID (invece di "IDC _"). Gli ID assegnati alle finestre figlio, ad esempio le visualizzazioni e finestre con separatore dalle classi framework. ID di implementazione di MFC sono precedute dal prefisso "AFX _".  
  
## <a name="the-id-numbering-convention"></a>La convenzione di numerazione ID  
 Nella tabella seguente sono elencati i valori validi per gli ID dei tipi specifici. Alcuni dei limiti sono i limiti di implementazione tecnica e altre informazioni sulle convenzioni sono progettati per impedire che gli ID in conflitto con ID predefiniti di Windows o MFC implementazioni predefinite.  
  
 È consigliabile definire tutti gli ID all'interno di intervalli consigliati. Il limite inferiore di questi intervalli è 1, perché non viene utilizzato 0. È consigliabile utilizzare la convenzione comune e utilizzare 100 o 101 come ID del primo.  
  
|Prefisso|Tipo di risorsa|Intervallo valido|  
|------------|-------------------|-----------------|  
|IDR _|multipli|tra 1 e 0x6FFF|  
|IDD _|modelli di finestra di dialogo|tra 1 e 0x6FFF|  
|IDB _ IDC _, IDI_,|cursori, icone, bitmap|tra 1 e 0x6FFF|  
|IDS _, CASO DELL'|stringhe generale|tra 1 e 0x7FFF|  
|ID_|comandi|0x8000 e 0xDFFF|  
|IDC_|controlli|8 e 0xDFFF|  
  
 Motivi per i limiti di intervallo:  
  
-   Per convenzione, il valore di ID pari a 0 non è utilizzato.  
  
-   Limitazioni di implementazione di Windows limitano ID deve essere inferiore o uguale a 0x7FFF effettivo della risorsa.  
  
-   Interno del framework MFC riserva questi intervalli:  
  
    -   0x7000 tramite 0x7FFF (vedere AFXRES)  
  
    -   0xE000 tramite 0xEFFF (vedere AFXRES)  
  
    -   16000 tramite 18000 (vedere afxribbonres.h)  
  
     Questi intervalli potrebbero cambiare nelle future implementazioni di MFC.  
  
-   Diversi comandi di sistema di Windows utilizzano l'intervallo di 0xF000 e 0xFFFF.  
  
-   ID di controllo 1 a 7 sono riservati per i controlli standard, ad esempio IDOK e IDCANCEL.  
  
-   L'intervallo di 0x8000 e 0xFFFF per le stringhe è riservato per le richieste per i comandi di menu.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

