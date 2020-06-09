---
title: Creazione di una finestra delle proprietà non modale
ms.date: 11/04/2016
helpviewer_keywords:
- modeless property sheets
- property sheets, modeless
- Create method [MFC], property sheets
ms.assetid: eafd8a92-cc67-4a69-a5fb-742c920d1ae8
ms.openlocfilehash: 7a44d96adf0a25a401fbc2e561bd7d32758a37d2
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617162"
---
# <a name="creating-a-modeless-property-sheet"></a>Creazione di una finestra delle proprietà non modale

In genere, le finestre delle proprietà create saranno modali. Quando si utilizza una finestra delle proprietà modale, l'utente deve chiudere la finestra delle proprietà prima di utilizzare qualsiasi altra parte dell'applicazione. In questo articolo vengono descritti i metodi che è possibile utilizzare per creare una finestra delle proprietà non modale che consente all'utente di aprire la finestra delle proprietà durante l'utilizzo di altre parti dell'applicazione.

Per visualizzare una finestra delle proprietà come finestra di dialogo non modale anziché come finestra di dialogo modale, chiamare [CPropertySheet:: create](reference/cpropertysheet-class.md#create) anziché [DoModal](reference/cpropertysheet-class.md#domodal). È inoltre necessario implementare alcune attività aggiuntive per supportare una finestra delle proprietà non modale.

Una delle attività aggiuntive consiste nello scambiare dati tra la finestra delle proprietà e l'oggetto esterno che sta modificando quando la finestra delle proprietà è aperta. Si tratta in genere della stessa attività utilizzata per le finestre di dialogo non modali standard. Parte di questa attività sta implementando un canale di comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno a cui si applicano le impostazioni delle proprietà. Questa implementazione è molto più semplice se si deriva una classe da [CPropertySheet](reference/cpropertysheet-class.md) per la finestra delle proprietà non modale. Questo articolo presuppone che sia stato fatto.

Un metodo per la comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno, ad esempio la selezione corrente in una visualizzazione, consiste nel definire un puntatore dalla finestra delle proprietà all'oggetto esterno. Definire una funzione (denominata like `SetMyExternalObject` ) nella `CPropertySheet` classe derivata da per modificare il puntatore ogni volta che lo stato attivo cambia da un oggetto esterno a un altro. La `SetMyExternalObject` funzione deve ripristinare le impostazioni per ogni pagina delle proprietà in modo da riflettere l'oggetto esterno appena selezionato. A tale scopo, la `SetMyExternalObject` funzione deve essere in grado di accedere agli oggetti [CPropertyPage](reference/cpropertypage-class.md) appartenenti alla `CPropertySheet` classe.

Il modo più pratico per fornire l'accesso alle pagine delle proprietà in una finestra delle proprietà consiste nell'incorporare gli `CPropertyPage` oggetti nell' `CPropertySheet` oggetto derivato da. `CPropertyPage`Gli oggetti incorporati nell' `CPropertySheet` oggetto derivato da differiscono dalla progettazione tipica per le finestre di dialogo modali, in cui il proprietario della finestra delle proprietà crea gli `CPropertyPage` oggetti e li passa alla finestra delle proprietà tramite [CPropertySheet:: AddPage](reference/cpropertysheet-class.md#addpage).

Sono disponibili diverse alternative dell'interfaccia utente per determinare quando le impostazioni della finestra delle proprietà non modale devono essere applicate a un oggetto esterno. Una alternativa consiste nell'applicare le impostazioni della pagina delle proprietà corrente ogni volta che l'utente modifica qualsiasi valore. Un'altra alternativa consiste nel fornire un pulsante Applica, che consente all'utente di accumulare le modifiche nelle pagine delle proprietà prima di eseguirne il commit nell'oggetto esterno. Per informazioni sulle modalità di gestione del pulsante Applica, vedere l'articolo [gestione del pulsante Applica](handling-the-apply-button.md).

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](property-sheets-mfc.md)<br/>
[Scambio di dati](exchanging-data.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
