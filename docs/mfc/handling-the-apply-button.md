---
description: 'Altre informazioni su: gestione del pulsante applica'
title: Gestione del pulsante Applica
ms.date: 11/04/2016
helpviewer_keywords:
- Apply button in property sheet
- property sheets, Apply button
ms.assetid: 7e977015-59b8-406f-b545-aad0bfd8d55b
ms.openlocfilehash: a626dcab04d68d19efba79465bfca46545ff6670
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254937"
---
# <a name="handling-the-apply-button"></a>Gestione del pulsante Applica

Le finestre delle proprietà hanno una funzionalità che non sono disponibili nelle finestre di dialogo standard: consentono all'utente di applicare le modifiche apportate prima di chiudere la finestra delle proprietà. Questa operazione viene eseguita usando il pulsante Applica. Questo articolo illustra i metodi che è possibile usare per implementare correttamente questa funzionalità.

Le finestre di dialogo modali in genere applicano le impostazioni a un oggetto esterno quando l'utente fa clic su OK per chiudere la finestra di dialogo. Lo stesso vale per una finestra delle proprietà: quando l'utente fa clic su OK, le nuove impostazioni nella finestra delle proprietà diventano effettive.

Tuttavia, potrebbe essere necessario consentire all'utente di salvare le impostazioni senza dover chiudere la finestra di dialogo della finestra delle proprietà. Questa è la funzione del pulsante Applica. Il pulsante Applica applica le impostazioni correnti di tutte le pagine delle proprietà all'oggetto esterno, anziché applicare solo le impostazioni correnti della pagina attualmente attiva.

Per impostazione predefinita, il pulsante Applica è sempre disabilitato. È necessario scrivere il codice per abilitare il pulsante applica nei momenti appropriati ed è necessario scrivere il codice per implementare l'effetto di Apply, come illustrato di seguito.

Se non si desidera offrire la funzionalità applica all'utente, non è necessario rimuovere il pulsante Applica. È possibile lasciarla disabilitata, in quanto sarà comune tra le applicazioni che utilizzano il supporto della finestra delle proprietà standard disponibile nelle versioni future di Windows.

Per segnalare una pagina come modificata e abilitare il pulsante Applica, chiamare `CPropertyPage::SetModified( TRUE )` . Se viene modificato un report delle pagine, il pulsante Applica rimarrà abilitato, indipendentemente dal fatto che la pagina attualmente attiva sia stata modificata.

È necessario chiamare [CPropertyPage:: Unmodified](reference/cpropertypage-class.md#setmodified) ogni volta che l'utente modifica le impostazioni nella pagina. Un modo per rilevare quando un utente modifica un'impostazione nella pagina consiste nell'implementare i gestori delle notifiche delle modifiche per ognuno dei controlli della pagina delle proprietà, ad esempio **EN_CHANGE** o **BN_CLICKED**.

Per implementare l'effetto del pulsante Applica, la finestra delle proprietà deve indicare al proprietario o a un altro oggetto esterno nell'applicazione di applicare le impostazioni correnti nelle pagine delle proprietà. Allo stesso tempo, la finestra delle proprietà deve disabilitare il pulsante Applica chiamando `CPropertyPage::SetModified( FALSE )` per tutte le pagine che applicavano le modifiche apportate all'oggetto esterno.

Per un esempio di questo processo, vedere l'esempio generale MFC [PROPDLG](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedi anche

[Finestre delle proprietà](property-sheets-mfc.md)
