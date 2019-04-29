---
title: Gestione dei messaggi e destinazioni comandi
ms.date: 11/04/2016
f1_keywords:
- IOleCommandTarget
helpviewer_keywords:
- command targets [MFC]
- message handling [MFC], active documents
- IOleCommandTarget interface [MFC]
- command routing [MFC], command targets
ms.assetid: e45ce14c-e6b6-4262-8f3b-4e891e0ec2a3
ms.openlocfilehash: 702cb96da13d6109c17a28e58c08a30af3f77fd4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383802"
---
# <a name="message-handling-and-command-targets"></a>Gestione dei messaggi e destinazioni comandi

L'interfaccia di dispatch comando `IOleCommandTarget` definisce un meccanismo semplice ed estendibile per eseguire una query ed eseguire i comandi. Questo meccanismo è più semplice rispetto all'automazione `IDispatch` perché si basa interamente su un set standard di comandi; i comandi hanno raramente argomenti ed non è coinvolta alcuna informazione sul tipo (indipendenza dai tipi viene ridotto per anche gli argomenti di comando).

Nella progettazione dell'interfaccia dispatch del comando, ogni comando appartiene a un "gruppo di comandi" che viene identificato con un **GUID**. Pertanto, chiunque può definire un nuovo gruppo e tutti i comandi all'interno di tale gruppo senza dover rivolgersi a Microsoft o altri fornitori. (Si tratta fondamentalmente dello stesso metodo di definizione come una **dispinterface** plus **DISPID** in automazione. Si è in questo caso, si sovrappongono anche se questo meccanismo di routing di comandi è solo per il routing dei comandi e non per la creazione di script/programmabilità su larga scala, come gli handle di automazione).

`IOleCommandTarget` gestisce gli scenari seguenti:

- Quando un oggetto è attivato, solo in genere vengono visualizzate le barre degli strumenti dell'oggetto e le barre degli strumenti dell'oggetto potrebbero essere disponibili pulsanti per alcuni dei comandi del contenitore, ad esempio sul posto **Print**, **anteprima di stampa**,  **Salvare**, **New**, **Zoom**e così via. (Attivazione sul posto standard consigliabile rimuovere tali pulsanti dalle barre degli strumenti o in meno disabilitarli. Ne consegue che questi comandi per essere abilitato e ancora indirizzato al gestore a destra.) Attualmente, non vi è alcun meccanismo per l'oggetto inviare i comandi seguenti per il contenitore.

- Quando un documento attivo viene incorporato in un contenitore di documenti attivi (ad esempio di Raccoglitore di Office), il contenitore potrebbe essere necessario inviare comandi tali **Print**, **Imposta pagina**, **proprietà**e così via al documento attivo indipendente.

Questo comando semplice di routing può essere gestito tramite gli standard di automazione esistenti e `IDispatch`. Tuttavia, l'overhead coinvolti `IDispatch` è maggiore di questo caso, è necessario in modo `IOleCommandTarget` fornisce un mezzo più semplice per ottenere gli stessi obiettivi:

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

Il `QueryStatus` qui il metodo verifica se un determinato set di comandi, il set viene identificato con un **GUID**, è supportato. Questa chiamata riempie una matrice di **OLECMD** valori (strutture) con l'elenco supportato di comandi, nonché la restituzione di testo che descrive il nome di un comando e/o lo stato di informazioni. Quando il chiamante desidera richiamare un comando, è possibile passare il comando (e il set **GUID**) a `Exec` oltre a opzioni e argomenti, ottenere nuovamente un valore restituito.

## <a name="see-also"></a>Vedere anche

[Contenitori documenti attivi](../mfc/active-document-containers.md)
