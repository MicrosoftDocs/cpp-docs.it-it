---
title: Creazione di una finestra delle proprietà non modale
ms.date: 11/04/2016
helpviewer_keywords:
- modeless property sheets
- property sheets, modeless
- Create method [MFC], property sheets
ms.assetid: eafd8a92-cc67-4a69-a5fb-742c920d1ae8
ms.openlocfilehash: 90f6dcd5659d308a4b39d6a7d5a42003fc1f2111
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685692"
---
# <a name="creating-a-modeless-property-sheet"></a>Creazione di una finestra delle proprietà non modale

In genere, le finestre delle proprietà create saranno modali. Quando si utilizza una finestra delle proprietà modale, l'utente deve chiudere la finestra delle proprietà prima di utilizzare qualsiasi altra parte dell'applicazione. In questo articolo vengono descritti i metodi che è possibile utilizzare per creare una finestra delle proprietà non modale che consente all'utente di aprire la finestra delle proprietà durante l'utilizzo di altre parti dell'applicazione.

Per visualizzare una finestra delle proprietà come finestra di dialogo non modale anziché come finestra di dialogo modale, chiamare [CPropertySheet:: create](../mfc/reference/cpropertysheet-class.md#create) anziché [DoModal](../mfc/reference/cpropertysheet-class.md#domodal). È inoltre necessario implementare alcune attività aggiuntive per supportare una finestra delle proprietà non modale.

Una delle attività aggiuntive consiste nello scambiare dati tra la finestra delle proprietà e l'oggetto esterno che sta modificando quando la finestra delle proprietà è aperta. Si tratta in genere della stessa attività utilizzata per le finestre di dialogo non modali standard. Parte di questa attività sta implementando un canale di comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno a cui si applicano le impostazioni delle proprietà. Questa implementazione è molto più semplice se si deriva una classe da [CPropertySheet](../mfc/reference/cpropertysheet-class.md) per la finestra delle proprietà non modale. Questo articolo presuppone che sia stato fatto.

Un metodo per la comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno, ad esempio la selezione corrente in una visualizzazione, consiste nel definire un puntatore dalla finestra delle proprietà all'oggetto esterno. Definire una funzione (denominata `SetMyExternalObject`) nella classe derivata da `CPropertySheet`per modificare il puntatore ogni volta che lo stato attivo cambia da un oggetto esterno a un altro. La funzione `SetMyExternalObject` deve ripristinare le impostazioni per ogni pagina delle proprietà in modo da riflettere l'oggetto esterno appena selezionato. A tale scopo, la funzione `SetMyExternalObject` deve essere in grado di accedere agli oggetti [CPropertyPage](../mfc/reference/cpropertypage-class.md) appartenenti alla classe `CPropertySheet`.

Il modo più pratico per fornire l'accesso alle pagine delle proprietà in una finestra delle proprietà consiste nell'incorporare gli oggetti `CPropertyPage` nell'oggetto derivato da `CPropertySheet`. L'incorporamento di oggetti `CPropertyPage` nell'oggetto derivato da `CPropertySheet`differisce dalla progettazione tipica per le finestre di dialogo modali, in cui il proprietario della finestra delle proprietà crea gli oggetti di `CPropertyPage` e li passa alla finestra delle proprietà tramite [CPropertySheet:: AddPage](../mfc/reference/cpropertysheet-class.md#addpage).

Sono disponibili diverse alternative dell'interfaccia utente per determinare quando le impostazioni della finestra delle proprietà non modale devono essere applicate a un oggetto esterno. Una alternativa consiste nell'applicare le impostazioni della pagina delle proprietà corrente ogni volta che l'utente modifica qualsiasi valore. Un'altra alternativa consiste nel fornire un pulsante Applica, che consente all'utente di accumulare le modifiche nelle pagine delle proprietà prima di eseguirne il commit nell'oggetto esterno. Per informazioni sulle modalità di gestione del pulsante Applica, vedere l'articolo [gestione del pulsante Applica](../mfc/handling-the-apply-button.md).

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)<br/>
[Scambio di dati](../mfc/exchanging-data.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
