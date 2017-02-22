---
title: "Gestione dei messaggi e destinazioni comandi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IOleCommandTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi (routing), destinazioni comandi"
  - "destinazioni comandi"
  - "IOleCommandTarget (interfaccia)"
  - "gestione dei messaggi, documenti attivi"
ms.assetid: e45ce14c-e6b6-4262-8f3b-4e891e0ec2a3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Gestione dei messaggi e destinazioni comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'interfaccia dispatch `IOleCommandTarget` di comando definisce un semplice meccanismo estendibile e l'esecuzione di query ed eseguire comandi.  Questo meccanismo è più semplice per `IDispatch` di automazione interamente in quanto si basa su un insieme standard dei comandi; i controlli dispongono raramente argomenti e non sono presenti informazioni sul tipo coinvolte \(indipendenza dai tipi è ridotta per gli argomenti passati dalla riga di comando anche\).  
  
 Nella progettazione di un'interfaccia dispatch di comando, ogni comando "appartiene a un gruppo di controlli" che a sua volta identificato con **GUID**.  Di conseguenza, chiunque può definire un nuovo gruppo e definire tutti i controlli contenuti in tale gruppo senza alcuna necessità di coordinare con Microsoft o qualsiasi altro fornitore. \(Si tratta essenzialmente nello stesso modo della definizione come **dispinterface** più **dispIDs** di automazione.  C'è sovrapposizione di seguito, sebbene questo meccanismo di routing dei comandi sia solo per il routing dei comandi e non per gli script\/programmazione su vasta scala come handle di automazione.\)  
  
 `IOleCommandTarget` gestisce gli scenari seguenti:  
  
-   Quando un oggetto viene attivata sul posto, solo le barre degli strumenti dell'oggetto in genere visualizzato e le barre degli strumenti dell'oggetto possono disporre di pulsanti per alcuni controlli contenitore come **Stampa**, **Stampa Anteprima**, **Salva**, `New`, **Zoom** e altri. Gli standard in grado di attivazione consigliabile che gli oggetti rimuovono tali pulsanti dalle barre degli strumenti, o almeno le disabilita.  Questa progettazione consente tali controlli essere attivato ma solo al gestore di destra.\) Attualmente, non esiste alcun meccanismo per l'oggetto inviare questi controlli al contenitore.  
  
-   Quando un documento attivo viene incorporato in un contenitore di documenti attivi \(come il Raccoglitore Office\), il contenitore può avere l'esigenza di inviare comandi tale **Stampa**, **Page Installazione**, **Proprietà** e altri al documento attivo contenuto.  
  
 Il routing di comandi semplice potrebbe essere gestito agli standard esistenti e `IDispatch`di automazione.  Tuttavia, il sovraccarico coinvolto con `IDispatch` è più in questo caso, in modo da `IOleCommandTarget` fornisce un mezzo più semplice per ottenere gli stessi scopi:  
  
 `interface IOleCommandTarget : IUnknown`  
  
 `{`  
  
 `HRESULT QueryStatus(`  
  
 `[in] GUID *pguidCmdGroup,`  
  
 `[in] ULONG cCmds,`  
  
 `[in,out][size_is(cCmds)] OLECMD *prgCmds,`  
  
 `[in,out] OLECMDTEXT *pCmdText);`  
  
 `HRESULT Exec(`  
  
 `[in] GUID *pguidCmdGroup,`  
  
 `[in] DWORD nCmdID,`  
  
 `[in] DWORD nCmdExecOpt,`  
  
 `[in] VARIANTARG *pvaIn,`  
  
 `[in,out] VARIANTARG *pvaOut);`  
  
 `}`  
  
 Il metodo di `QueryStatus` di seguito consente di verificare se un insieme di controlli, il set di particolare identificato con **GUID**, è supportato.  Questa chiamata si riempie una matrice di valori di **OLECMD** \(strutture\) di elenco supportati di controlli nonché restituisce il testo che descrive il nome di un comando e\/o delle informazioni sullo stato.  Quando il chiamante desidera richiamare un comando, può passare il comando \(e **GUID**set\) a **Exec** con le opzioni e argomenti, dopo aver ottenuto indietro un valore restituito.  
  
## Vedere anche  
 [Contenitore documenti attivi](../mfc/active-document-containers.md)