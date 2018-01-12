---
title: Messaggio di gestione e destinazioni comandi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: IOleCommandTarget
dev_langs: C++
helpviewer_keywords:
- command targets [MFC]
- message handling [MFC], active documents
- IOleCommandTarget interface [MFC]
- command routing [MFC], command targets
ms.assetid: e45ce14c-e6b6-4262-8f3b-4e891e0ec2a3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 81ec1f2a1f419715a3e8e9fbac2fcba3c7584a9b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="message-handling-and-command-targets"></a>Gestione dei messaggi e destinazioni comandi
L'interfaccia dispatch comando `IOleCommandTarget` definisce un meccanismo semplice e flessibile per eseguire una query ed eseguire i comandi. Questo meccanismo è più semplice che dell'automazione `IDispatch` poiché è interamente basato su un set standard di comandi; comandi hanno raramente argomenti e informazioni sul tipo non è coinvolto (indipendenza dai tipi viene ridotto per anche gli argomenti di comando).  
  
 La progettazione dell'interfaccia dispatch di comando, ogni comando appartiene a un "gruppo di comando" che viene identificato con un **GUID**. Pertanto, chiunque può definire un nuovo gruppo e tutti i comandi all'interno del gruppo senza dover interagire con Microsoft o altri fornitori. (Si tratta fondamentalmente dello stesso metodo di definizione come un **dispinterface** più **DISPID** in automazione. È in questo caso, si sovrappongono anche se questo meccanismo di routing di comandi è solo per i comandi (routing) e non per lo scripting/programmabilità su larga scala come handle di automazione.)  
  
 `IOleCommandTarget`gestisce gli scenari seguenti:  
  
-   Quando viene attivato, solo le barre degli strumenti dell'oggetto vengono in genere visualizzati e barre degli strumenti dell'oggetto potrebbero essere disponibili pulsanti per alcuni comandi contenitore come sul posto di un oggetto **stampa**, **anteprima di stampa**,  **Salvare**, `New`, **Zoom**e altri. (Attivazione sul posto standard è consigliabile rimuovere questi pulsanti dalle barre degli strumenti, o almeno disabilitarli. Questa progettazione consente tali comandi per abilitare e ancora indirizzato al gestore di destra). Attualmente, non sono presenti meccanismi per l'oggetto per l'invio di questi comandi per il contenitore.  
  
-   Quando un documento attivo viene incorporato in un contenitore di documenti attivi (ad esempio di Raccoglitore di Office), il contenitore potrebbe essere necessario inviare comandi tali **stampa**, **Imposta pagina**, **proprietà**e altri per il documento attivo indipendente.  
  
 Questa semplici comandi (routing) può essere gestito tramite gli standard di automazione esistenti e `IDispatch`. Tuttavia, il sovraccarico con `IDispatch` supera questo caso, è necessario pertanto `IOleCommandTarget` fornisce un modo più semplice per ottenere la stessa funzione:  
  
```  
interface IOleCommandTarget : IUnknown  
    {  
    HRESULT QueryStatus(  
        [in] GUID *pguidCmdGroup,  
        [in] ULONG cCmds,  
        [in,out][size_is(cCmds)] OLECMD *prgCmds,  
        [in,out] OLECMDTEXT *pCmdText);  
    HRESULT Exec(  
        [in] GUID *pguidCmdGroup,  
        [in] DWORD nCmdID,  
        [in] DWORD nCmdExecOpt,  
        [in] VARIANTARG *pvaIn,  
        [in,out] VARIANTARG *pvaOut);  
    }  
```  
  
 Il `QueryStatus` qui metodo verifica se un determinato set di comandi, il set viene identificato con un **GUID**, è supportata. Questa chiamata riempie una matrice di **OLECMD** valori (strutture) con l'elenco supportato di comandi, nonché la restituzione di testo che descrive il nome di un comando e/o lo stato di informazioni. Quando il chiamante desidera richiamare un comando, è possibile passare il comando (e il set **GUID**) per **Exec** insieme alle opzioni e argomenti, ottenere un valore restituito.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori documenti attivi](../mfc/active-document-containers.md)

