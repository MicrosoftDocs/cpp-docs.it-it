---
description: 'Altre informazioni su: comandi standard'
title: Comandi standard
ms.date: 11/04/2016
helpviewer_keywords:
- File menu
- identifiers [MFC], command IDs
- command IDs, standard commands
- OLE commands
- commands [MFC], standard
- standard command IDs
- Window menu commands
- standard commands
- View menu commands
- Edit menu standard commands
- Help [MFC], menus
- programmer-defined IDs [MFC]
ms.assetid: 88cf3ab4-79b3-4ac6-9365-8ac561036fbf
ms.openlocfilehash: 09c0afecf5b34565c3ab14e276c7c43a20189a0a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216743"
---
# <a name="standard-commands"></a>Comandi standard

Il Framework definisce molti messaggi di comando standard. Gli ID per questi comandi in genere hanno il formato seguente:

**ID_** *origine* _ *elemento*

dove *source* è in genere un nome di menu e l' *elemento* è una voce di menu. Ad esempio, l'ID comando per il nuovo comando nel menu file è ID_FILE_NEW. Gli ID di comando standard sono visualizzati in grassetto nella documentazione. Gli ID definiti dal programmatore sono visualizzati in un tipo di carattere diverso dal testo circostante.

Di seguito è riportato un elenco di alcuni dei comandi più importanti supportati:

*Comandi di menu file*<br/>
Nuovo, Apri, Chiudi, Salva, Salva con nome, Imposta pagina, imposta stampa, stampa, anteprima di stampa, Esci e file usati più di recente.

*Comandi di menu modifica*<br/>
Deselezionare, Cancella tutto, copia, taglia, trova, incolla, Ripeti, Sostituisci, seleziona tutto, Annulla e Ripeti.

*Comandi del menu Visualizza*<br/>
Barra degli strumenti e barra di stato.

*Comandi del menu finestra*<br/>
Nuovo, disponi, Cascade, affianca orizzontali, affianca verticalmente e Split.

*Comandi di menu della Guida*<br/>
Indice, utilizzo della guida e informazioni su.

*Comandi OLE (menu modifica)*<br/>
Inserire nuovo oggetto, modifica collegamenti, Incolla collegamento, Incolla speciale e oggetto *typeName* (comandi verbo).

Il Framework fornisce diversi livelli di supporto per questi comandi. Alcuni comandi sono supportati solo come ID di comando definiti, mentre altri sono supportati con implementazioni complete. Ad esempio, il Framework implementa il comando Apri nel menu file creando un nuovo oggetto documento, visualizzando una finestra di dialogo aperta e aprendo e leggendo il file. Al contrario, è necessario implementare manualmente i comandi dal menu modifica, poiché i comandi come ID_EDIT_COPY dipendono dalla natura dei dati da copiare.

Per ulteriori informazioni sui comandi supportati e sul livello di implementazione fornito, vedere la [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md). I comandi standard vengono definiti nel file AFXRES. H.

## <a name="see-also"></a>Vedi anche

[Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)
