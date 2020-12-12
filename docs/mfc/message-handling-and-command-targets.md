---
description: 'Altre informazioni su: gestione dei messaggi e destinazioni dei comandi'
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
ms.openlocfilehash: 35dc54687c7f3742f72d58f5c84cd274bc8fee09
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203289"
---
# <a name="message-handling-and-command-targets"></a>Gestione dei messaggi e destinazioni comandi

L'interfaccia dispatch del comando `IOleCommandTarget` definisce un meccanismo semplice ed estendibile per eseguire query ed eseguire comandi. Questo meccanismo è più semplice rispetto all'automazione `IDispatch` perché si basa interamente su un set standard di comandi. i comandi hanno raramente argomenti e non sono necessarie informazioni sul tipo (l'indipendenza dai tipi è diminuita anche per gli argomenti del comando).

Nella progettazione dell'interfaccia dispatch del comando ogni comando appartiene a un "gruppo di comandi", che viene identificato con un **GUID**. Pertanto, chiunque può definire un nuovo gruppo e definire tutti i comandi all'interno di tale gruppo senza che sia necessario coordinarsi con Microsoft o altri fornitori. Si tratta essenzialmente dello stesso mezzo di definizione di un' **interfaccia dispatch** più **DISPID** in automazione. Qui si verifica una sovrapposizione, anche se questo meccanismo di routing dei comandi è solo per il routing dei comandi e non per lo script o la programmabilità su larga scala come handle di automazione.

`IOleCommandTarget` gestisce gli scenari seguenti:

- Quando un oggetto viene attivato sul posto, vengono in genere visualizzate solo le barre degli strumenti dell'oggetto e le barre degli strumenti dell'oggetto possono contenere pulsanti per alcuni comandi del contenitore, ad esempio **stampa**, **Anteprima di stampa**, **Salva**, **nuovo**, **Zoom** e altro. Gli standard di attivazione sul posto consigliano agli oggetti di rimuovere tali pulsanti dalle barre degli strumenti o di disabilitarli almeno. Questa progettazione consente l'abilitazione di questi comandi e l'instradamento al gestore appropriato. Attualmente non è disponibile alcun meccanismo per l'invio di questi comandi al contenitore da parte dell'oggetto.

- Quando un documento attivo viene incorporato in un contenitore di documenti attivi (ad esempio, Binder di Office), potrebbe essere necessario che il contenitore invii comandi quali **stampa**, **Imposta pagina**, **proprietà** e altri utenti al documento attivo contenuto.

Questo semplice routing dei comandi può essere gestito tramite gli standard di automazione esistenti e `IDispatch` . Tuttavia, l'overhead associato a `IDispatch` è maggiore di quello necessario in questo caso, pertanto `IOleCommandTarget` fornisce un mezzo più semplice per ottenere le stesse estremità:

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

Il `QueryStatus` metodo verifica se è supportato un particolare set di comandi, il set identificato con un **GUID**. Questa chiamata compila una matrice di valori **OLECMD** (strutture) con l'elenco supportato di comandi, nonché la restituzione di testo che descrive il nome di un comando e/o informazioni sullo stato. Quando il chiamante desidera richiamare un comando, può passare il comando (e il **GUID** del set) a `Exec` insieme a opzioni e argomenti, ottenendo un valore restituito.

## <a name="see-also"></a>Vedi anche

[Contenitori documenti attivi](active-document-containers.md)
