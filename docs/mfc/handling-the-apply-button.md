---
title: Gestione del pulsante Applica
ms.date: 11/04/2016
helpviewer_keywords:
- Apply button in property sheet
- property sheets, Apply button
ms.assetid: 7e977015-59b8-406f-b545-aad0bfd8d55b
ms.openlocfilehash: 7402f99148f20be4ce56c44b5ce7f66f0c24bd36
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591265"
---
# <a name="handling-the-apply-button"></a>Gestione del pulsante Applica

Finestre delle proprietà dispone di una funzione che non li supportano finestre di dialogo standard: consentono all'utente di applicare le modifiche apportate prima di chiudere la finestra delle proprietà. Questa operazione viene eseguita utilizzando il pulsante Applica. Questo articolo illustra i metodi che è possibile usare per implementare correttamente questa funzionalità.

In genere le finestre di dialogo modale applicano le impostazioni a un oggetto esterno quando l'utente fa clic su OK per chiudere la finestra di dialogo. Lo stesso vale per una finestra delle proprietà: quando l'utente fa clic su OK, le nuove impostazioni nella finestra delle proprietà diventano effettive.

Tuttavia, è possibile consentire all'utente di salvare le impostazioni senza dover chiudere la finestra di dialogo Proprietà foglio. Questa è la funzione del pulsante Applica. Il pulsante Applica applica le impostazioni correnti in tutte le pagine delle proprietà per l'oggetto esterno, invece di applicare solo le impostazioni correnti della pagina attualmente attiva.

Per impostazione predefinita, il pulsante Applica è sempre disabilitato. È necessario scrivere codice per attivare il pulsante Applica nel momento appropriato, ed è necessario scrivere codice per implementare l'effetto dell'applicazione, come illustrato di seguito.

Se non si desidera offrire la funzionalità di applica all'utente, non è necessario rimuovere il pulsante Applica. È possibile lasciarla disattivata, poiché saranno comuni tra le applicazioni che usano il supporto di finestra delle proprietà standard disponibile nelle versioni future di Windows.

Per una pagina come modificata del report e abilitare il pulsante Applica, chiamare `CPropertyPage::SetModified( TRUE )`. Se uno dei report di pagine in fase di modifica, il pulsante Applica rimane abilitato, indipendentemente dal fatto che la pagina attualmente attiva è stata modificata.

È necessario chiamare [CPropertyPage:: SetModified](../mfc/reference/cpropertypage-class.md#setmodified) ogni volta che l'utente modifica le impostazioni nella pagina. Un modo per rilevare quando un utente cambia un'impostazione nella pagina consiste nell'implementare i gestori di notifica di modifica per ognuno dei controlli nella pagina delle proprietà, ad esempio **EN_CHANGE** oppure **BN_CLICKED**.

Per implementare l'effetto del pulsante Applica, la finestra delle proprietà deve indicare il relativo proprietario o un altro oggetto esterno nell'applicazione, per applicare le impostazioni correnti in pagine delle proprietà. Allo stesso tempo, la finestra delle proprietà debba disabilitare il pulsante Applica chiamando `CPropertyPage::SetModified( FALSE )` per tutte le pagine che hanno applicato le modifiche all'oggetto esterno.

Per un esempio di questo processo, vedere l'esempio MFC generale [PROPDLG](../visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)

