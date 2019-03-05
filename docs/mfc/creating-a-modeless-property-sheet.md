---
title: Creazione di una finestra delle proprietà non modale
ms.date: 11/04/2016
helpviewer_keywords:
- modeless property sheets
- property sheets, modeless
- Create method [MFC], property sheets
ms.assetid: eafd8a92-cc67-4a69-a5fb-742c920d1ae8
ms.openlocfilehash: 39285927b67091f5b8762dab56009712d806d259
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57302260"
---
# <a name="creating-a-modeless-property-sheet"></a>Creazione di una finestra delle proprietà non modale

In genere, le finestre delle proprietà che si crea è modale. Quando si usa una finestra delle proprietà modali, l'utente deve chiudere la finestra delle proprietà prima di usare qualsiasi altra parte dell'applicazione. Questo articolo descrive i metodi che è possibile usare per creare una finestra delle proprietà non modale che consente all'utente di tenere aperta la finestra delle proprietà durante l'utilizzo di altre parti dell'applicazione.

Per visualizzare una finestra delle proprietà come finestra di dialogo non modale anziché come una finestra di dialogo modale, chiamare [CPropertySheet:: Create](../mfc/reference/cpropertysheet-class.md#create) invece di [DoModal](../mfc/reference/cpropertysheet-class.md#domodal). È inoltre necessario implementare alcune attività aggiuntive per supportare una finestra delle proprietà non modale.

Una delle attività aggiuntive è lo scambio di dati tra la finestra delle proprietà e l'oggetto esterno che sta modificando una volta aperta la finestra delle proprietà. Si tratta in genere la stessa attività per le finestre di dialogo non modale standard. Parte di questa attività viene implementata da un canale di comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno a cui applicare le impostazioni delle proprietà. Questa implementazione è molto più semplice se si deriva una classe dalla classe [CPropertySheet](../mfc/reference/cpropertysheet-class.md) per la finestra delle proprietà non modale. Questo articolo presuppone che si è fatto.

Un metodo per la comunicazione tra la finestra delle proprietà non modale ed esterno oggetto (la selezione corrente in una vista, ad esempio) consiste nel definire un puntatore dalla finestra delle proprietà per l'oggetto esterno. Definire una funzione (chiamato simile `SetMyExternalObject`) nel `CPropertySheet`-per modificare il puntatore quando cambia lo stato attivo da un oggetto esterno a un'altra classe derivata. Il `SetMyExternalObject` funzione deve reimpostare le impostazioni per ogni pagina delle proprietà in modo da riflettere l'oggetto esterno appena selezionato. A tale scopo, il `SetMyExternalObject` funzione deve essere in grado di accedere il [CPropertyPage](../mfc/reference/cpropertypage-class.md) oggetti appartenenti al `CPropertySheet` classe.

Il modo più semplice per fornire l'accesso alle pagine delle proprietà all'interno di una finestra delle proprietà consiste nell'incorporare il `CPropertyPage` oggetti nel `CPropertySheet`-oggetto derivato. Incorporamento `CPropertyPage` oggetti nel `CPropertySheet`-oggetto derivato differisce dalla struttura del tipica delle finestre di dialogo modale, in cui il proprietario della finestra delle proprietà crea la `CPropertyPage` degli oggetti e li passa alla finestra delle proprietà tramite [ :: AddPage](../mfc/reference/cpropertysheet-class.md#addpage).

Sono disponibili diverse alternative di interfaccia utente per determinare quando le impostazioni della finestra delle proprietà non modale devono essere applicate a un oggetto esterno. Un'alternativa consiste nell'applicare le impostazioni della pagina delle proprietà correnti ogni volta che l'utente modifica qualsiasi valore. Un'altra alternativa consiste nel fornire un pulsante Applica, che consente all'utente l'accumulo delle modifiche nelle pagine delle proprietà prima di eseguirne il commit per l'oggetto esterno. Per informazioni sulle modalità di gestione del pulsante Applica, vedere l'articolo [gestione del pulsante Applica](../mfc/handling-the-apply-button.md).

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)<br/>
[Scambio di dati](../mfc/exchanging-data.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
