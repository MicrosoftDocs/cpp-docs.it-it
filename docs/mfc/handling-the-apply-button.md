---
title: Gestione del pulsante Applica | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Apply button in property sheet
- property sheets, Apply button
ms.assetid: 7e977015-59b8-406f-b545-aad0bfd8d55b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d80dc3d02a7530ee54c9ff26cd0a03465bd77cdd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33345045"
---
# <a name="handling-the-apply-button"></a>Gestione del pulsante Applica
Finestre delle proprietà sono una funzionalità che non le finestre di dialogo standard: consentono all'utente di applicare le modifiche apportate prima di chiudere la finestra delle proprietà. Questa operazione viene eseguita utilizzando il pulsante Applica. In questo articolo vengono descritti i metodi che è possibile utilizzare per implementare correttamente questa funzionalità.  
  
 Quando l'utente fa clic su OK per chiudere la finestra di dialogo, finestre di dialogo modale applicano in genere le impostazioni a un oggetto esterno. Lo stesso vale per una finestra delle proprietà: quando l'utente fa clic su OK, le nuove impostazioni nella finestra delle proprietà diventano effettive.  
  
 Tuttavia, è consigliabile consentire all'utente di salvare le impostazioni senza la necessità di chiudere la finestra di dialogo Proprietà finestra. Si tratta della funzione del pulsante Applica. Il pulsante Applica applica le impostazioni correnti in tutte le pagine delle proprietà nell'oggetto esterno, anziché l'applicazione solo le impostazioni correnti di pagina attualmente attiva.  
  
 Per impostazione predefinita, il pulsante Applica è sempre disabilitato. È necessario scrivere codice per abilitare il pulsante Applica in momenti appropriati e, è necessario scrivere codice per implementare l'effetto dell'applicazione, come illustrato di seguito.  
  
 Se non si desidera fornire la funzionalità all'utente, non è necessario rimuovere il pulsante Applica. È possibile lasciare disattivato, come le applicazioni che usano a supporto della finestra delle proprietà standard disponibile nelle versioni future di Windows.  
  
 Per una pagina come in fase di modifica del report e abilitare il pulsante Applica, chiamare **CPropertyPage:: SetModified (TRUE)**. Se uno dei report di pagine in fase di modifica, pulsante Applica rimane abilitato, indipendentemente dal fatto che la pagina attiva sia stata modificata.  
  
 È necessario chiamare [CPropertyPage:: SetModified](../mfc/reference/cpropertypage-class.md#setmodified) ogni volta che l'utente modifica le impostazioni nella pagina. Per rilevare quando un utente cambia un'impostazione nella pagina è possibile implementare i gestori di notifica di modifica per ognuno dei controlli nella pagina delle proprietà, ad esempio **EN_CHANGE** o **BN_CLICKED**.  
  
 Per implementare l'effetto del pulsante Applica, con la finestra delle proprietà è necessario indicare al proprietario o un altro oggetto esterno nell'applicazione, per applicare le impostazioni correnti nelle pagine delle proprietà. Allo stesso tempo, la finestra delle proprietà necessario disabilitare il pulsante Applica chiamando **CPropertyPage:: SetModified (FALSE)** per tutte le pagine che hanno applicato le modifiche all'oggetto esterno.  
  
 Per un esempio di questo processo, vedere l'esempio MFC generale [PROPDLG](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)

