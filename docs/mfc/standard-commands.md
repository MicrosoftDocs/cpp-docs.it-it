---
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
ms.openlocfilehash: 987023322e38584d10901c1ab1fe20ac46926bd2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57272087"
---
# <a name="standard-commands"></a>Comandi standard

Il framework definisce molti messaggi di comando standard. In genere, gli ID per questi comandi hanno il formato:

**ID _** *sorgente*_*elemento*

in cui *origine* è in genere un nome di menu e *elemento* è una voce di menu. Ad esempio, l'ID di comando per il nuovo comando dal menu File è ID_FILE_NEW. ID di comando standard vengono visualizzati in grassetto nella documentazione. ID definiti dall'utente vengono visualizzati in un tipo di carattere diverso da testo adiacente.

Di seguito è riportato un elenco di alcuni dei più importanti comandi supportati:

*Comandi del Menu file*<br/>
Nuovo, Apri, chiudere, salvare, Salva con nome, Imposta pagina, il programma di installazione di stampa, stampa, anteprima di stampa, uscita e i file usati di recente.

*Comandi del Menu Modifica*<br/>
Deselezionare, deselezionare tutto, copia, Taglia, Find, Incolla, ripetere, Replace, selezionare tutti, annullare e ripetere.

*Comandi del menu Visualizza*<br/>
Sulla barra degli strumenti e barra di stato.

*Comandi del menu Finestra*<br/>
Nuovo, Disponi, supporta la propagazione, Affianca orizzontalmente, riquadro verticale e Split.

*Comandi del menu?*<br/>
Indicizzare, utilizzo della Guida e circa.

*Comandi OLE (Menu di modifica)*<br/>
Inserisci nuovo oggetto, modificare i collegamenti, collegamento Incolla, Incolla speciale, e *typename* oggetto (comandi di verbo).

Il framework offre vari livelli di supporto per i comandi seguenti. Alcuni comandi sono supportati solo come ID di comando definiti, mentre altri sono supportati con implementazioni complete. Ad esempio, il framework implementa il comando Apri del menu File creando un nuovo oggetto di documento, visualizzando una finestra di dialogo Apri e apertura e la lettura del file. Al contrario, è necessario implementare i comandi dal menu Modifica, poiché i comandi, ad esempio ID_EDIT_COPY variano a seconda della natura dei dati copiato.

Per altre informazioni sui comandi supportati e il livello di implementazione fornita, vedere [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md). I comandi standard sono definiti nel file AFXRES. H.

## <a name="see-also"></a>Vedere anche

[Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)
