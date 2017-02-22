---
title: "TN020: convenzioni di numerazione e denominazione ID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.id"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "identificatori di risorsa"
  - "identificatori di risorsa, denominazione e numerazione"
  - "TN020"
ms.assetid: aecbd2cf-68b3-47f6-ae21-b1f507917245
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# TN020: convenzioni di numerazione e denominazione ID
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa nota vengono descritte le convenzioni di denominazione ed numerazione dell'ID che MFC 2.0 utilizza per le risorse, i comandi, le stringhe, i controlli e le finestre figlie.  
  
 Le convenzioni MFC di denominazione ed numerazione degli ID hanno lo scopo di soddisfare i seguenti requisiti:  
  
-   Offrire un ID di denominazione coerente mediante l'utilizzo della libreria MFC e delle applicazioni MFC supportate dall'editor delle risorse di Visual C\+\+.  Ciò semplifica al programmatore l'interpretazione del tipo e dell'origine di una risorsa per un relativo ID.  
  
-   Enfatizzare la stretta relazione 1\-a\-1 tra determinati tipi di ID.  
  
-   Conformi agli standard già largamente adottati per denominare gli ID di Windows.  
  
-   Partizione dello spazio di numerazione degli ID.  I numeri ID possono essere assegnati dal programmatore, da MFC, da Windows e dalle risorse modificate in Visual C\+\+.  Un partizionamento appropriato consentirà di evitare la duplicazione dei numeri ID.  
  
## La convenzione di denominazione del prefisso ID.  
 Possono verificarsi diversi tipi di ID in un'applicazione.  La convenzione MFC di denominazione degli ID definisce prefissi diversi per tipi di risorsa diversi.  
  
 MFC utilizza il prefisso "IDR\_" per indicare l'ID di una risorsa che viene applicato a molteplici tipi di risorsa.  Ad esempio, per una specifica cornice di una finestra, MFC utilizza lo stesso prefisso "IDR\_" per indicare una risorsa del menu, un tasto di scelta rapida, una stringa e un'icona.  Nella tabella seguente sono illustrati i vari prefissi ed il relativo utilizzo:  
  
|Prefisso|Utilizzo|  
|--------------|--------------|  
|IDR\_|Per tipi di risorsa multipli \(principalmente utilizzato per menu, tasti di scelta rapida e barre multifunzione\).|  
|IDD\_|Per i modelli delle risorse delle finestre di dialogo \(ad esempio, IDD\_DIALOG1\).|  
|IDC\_|Per le risorse cursore.|  
|IDI\_|Per le risorse icona.|  
|IDB\_|Per le risorse bitmap.|  
|IDS\_|Per le risorse di tipo stringa.|  
  
 All'interno di una risorsa DIALOG, MFC utilizza le seguenti convenzioni:  
  
|Prefisso o etichetta|Utilizzo|  
|--------------------------|--------------|  
|IDOK, IDCANCEL|Per i pulsanti ID di tipo standard.|  
|IDC\_|Per altri controlli della finestra di dialogo.|  
  
 Il prefisso "IDC\_" viene inoltre utilizzato per i cursori.  Questo conflitto di denominazione non è in genere un problema perché un'applicazione tipica avrà pochi cursori e molte finestre di dialogo.  
  
 All'interno di un menu delle risorse, MFC utilizza le seguenti convenzioni:  
  
|Prefisso|Utilizzo|  
|--------------|--------------|  
|IDM\_|Per le voci di un menu che non utilizzano l'architettura dei comandi MFC.|  
|ID\_|Per i comandi dei menu che utilizzano l'architettura dei comandi MFC.|  
  
 I controlli che seguono l'architettura dei comandi MFC, devono disporre di un gestore di comando `ON_COMMAND` e possono avere un gestore `ON_UPDATE_COMMAND_UI`.  Se questi gestori dei comandi seguono l'architettura dei comandi MFC, funzionano correttamente se vengono associati ad un comando del menu, ad un pulsante della barra degli strumenti o ad un pulsante della barra della finestra di dialogo.  Lo stesso prefisso "ID\_" viene inoltre utilizzato per una stringa di richiesta del menu che viene visualizzata nella barra dei messaggi del programma.  La maggior parte delle voci del menu nell'applicazione dovrebbero seguire le convenzioni dei comandi MFC.  Tutti i comandi standard per gli ID \(ad esempio, `ID_FILE_NEW`\) seguono la convenzione.  
  
 MFC utilizza anche "IDP\_" come un tipo specializzato di stringhe \(anziché "IDS\_"\).  Le stringhe con il prefisso "IDP\_" sono richieste, ovvero, le stringhe vengono utilizzate nelle finestre di messaggio. Le stringhe "IDP\_" possono contenere "%1 " e "%2 " come segnaposto di stringhe determinate dal programma. Le stringhe "IDP\_" in genere presentano argomenti associati, al contrario delle stringhe "IDS\_". Le stringhe "IDP\_" sono spesso localizzate e le stringhe "IDS\_" possono non essere localizzate.  
  
 La libreria MFC inoltre utilizza il prefisso "IDW\_" come una forma specializzata di controllo degli ID \(anziché di "IDC\_"\)  Questi ID sono assegnati alle finestre figlie così come le viste e le divisioni sono assegnate alle classi del framework.  L'implementazione MFC degli ID è preceduta da "AFX\_".  
  
## La convenzione di numerazione degli ID  
 Nella seguente tabella sono elencati gli intervalli validi per gli ID dei tipi specificati.  Alcuni dei limiti sono limiti tecnici di implementazione e altre convenzioni sono progettate per impedire agli ID di provocare conflitti con gli ID predefiniti Windows o con le implementazioni predefinite MFC.  
  
 Si consiglia vivamente di definire tutti gli ID all'interno degli intervalli consigliati.  Il limite inferiore di questi intervalli è 1 perché 0 non viene utilizzato.  Si consiglia di utilizzare la convenzione comune e utilizzare 100 o 101 come primo ID.  
  
|Prefisso|Tipo di risorsa.|Intervallo valido|  
|--------------|----------------------|-----------------------|  
|IDR\_|multipli|1 a 0x6FFF|  
|IDD\_|modelli di una finestra di dialogo|1 a 0x6FFF|  
|IDC\_,IDI\_,IDB\_|cursori, icone, bitmap|1 a 0x6FFF|  
|IDS\_, IDP\_|stringhe generali|1 a 0x7FFF|  
|ID\_|comandi|0x8000 a 0xDFFF|  
|IDC\_|controlli|8 a 0xDFFF|  
  
 Motivazione di questi limiti sull'intervallo:  
  
-   Per convenzione, non viene utilizzato il valore ID di 0.  
  
-   Le limitazione dell'implementazione di Windows restringono gli ID delle risorse affinché siano minori o uguali a 0x7FFF.  
  
-   Il framework interno MFC riserva questi intervalli:  
  
    -   0x7000 a 0x7FFF \(vedere afxres.h\)  
  
    -   0xE000 a 0xEFFF \(vedere afxres.h\)  
  
    -   16000 a 18000 \(vedere afxribbonres.h\)  
  
     Questi intervalli possono cambiare nelle future implementazioni MFC.  
  
-   Numerosi comandi di sistema Windows utilizzano l'intervallo da 0xF000 a 0xFFFF.  
  
-   Il controllo degli ID da 1 a 7 sono riservati per i controlli standard come IDOK e IDCANCEL.  
  
-   L'intervallo da 0x8000 a 0xFFFF per le stringhe è riservato per le richieste del menu per i comandi.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)