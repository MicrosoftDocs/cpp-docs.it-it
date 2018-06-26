---
title: Messaggio di gestione e destinazioni comandi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- IOleCommandTarget
dev_langs:
- C++
helpviewer_keywords:
- command targets [MFC]
- message handling [MFC], active documents
- IOleCommandTarget interface [MFC]
- command routing [MFC], command targets
ms.assetid: e45ce14c-e6b6-4262-8f3b-4e891e0ec2a3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc0f00e4f660036e73e96d4beb999d37453bdf26
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929356"
---
# <a name="message-handling-and-command-targets"></a>Gestione dei messaggi e destinazioni comandi
L'interfaccia dispatch comando `IOleCommandTarget` definisce un meccanismo semplice e flessibile per eseguire una query ed eseguire i comandi. Questo meccanismo è più semplice rispetto all'automazione `IDispatch` poiché è interamente basato su un set standard di comandi; comandi hanno raramente argomenti e informazioni sul tipo non è coinvolto (indipendenza dai tipi viene ridotto per anche gli argomenti di comando).  
  
 Nella struttura di interfaccia dispatch del comando, ogni comando appartiene a un "gruppo comandi" a cui viene identificato con un **GUID**. Pertanto, chiunque può definire un nuovo gruppo e definire tutti i comandi all'interno del gruppo senza dover coordinarsi con Microsoft o altri fornitori. (Si tratta fondamentalmente dello stesso metodo di definizione come un **dispinterface** plus **DISPID** in automazione. È in questo caso, si sovrappongono anche se questo meccanismo di routing di comandi è solo per i comandi (routing) e non per lo scripting/programmabilità su larga scala come handle di automazione.)  
  
 `IOleCommandTarget` gestisce gli scenari seguenti:  
  
-   Quando un oggetto è attivata, solo le barre degli strumenti dell'oggetto in genere vengono visualizzati e le barre degli strumenti dell'oggetto potrebbero essere disponibili pulsanti per alcuni dei comandi del contenitore, ad esempio in-place **Print**, **anteprima di stampa**,  **Salvare**, **New**, **Zoom**e altri utenti. (Attivazione sul posto standard consigliabile rimuovere questi pulsanti dalle barre degli strumenti, o almeno disabilitarli. Questa progettazione consente tali comandi per abilitare e ancora indirizzato al gestore a destra). Attualmente, non esiste un meccanismo per l'oggetto inviare questi comandi per il contenitore.  
  
-   Quando un documento attivo viene incorporato in un contenitore documenti attivi (ad esempio Raccoglitore di Office), il contenitore potrebbe essere necessario inviare comandi tali **Print**, **Imposta pagina**, **proprietà**e ad altri utenti il documento attivo indipendente.  
  
 Questa semplici comandi (routing) è stato possibile gestire tramite gli standard di automazione esistenti e `IDispatch`. Tuttavia, l'overhead coinvolti `IDispatch` è maggiore di questo caso, è necessario in modo `IOleCommandTarget` fornisce un modo più semplice per ottenere la stessa funzione:  
  
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
  
 Il `QueryStatus` metodo verifica se un determinato set di comandi, il set viene identificato con un **GUID**, è supportata. Questa chiamata riempie una matrice di **OLECMD** valori (strutture) con l'elenco supportato di comandi, nonché la restituzione di testo che descrive il nome di un comando e/o lo stato di informazioni. Quando il chiamante desidera richiamare un comando, è possibile passare il comando (e il set **GUID**) a `Exec` insieme a opzioni e gli argomenti, ottenere un valore restituito.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori documenti attivi](../mfc/active-document-containers.md)

