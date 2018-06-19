---
title: Finestre delle proprietà come procedure guidate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- property sheets, as wizards
ms.assetid: 1ea66ecb-23b0-484a-838d-58671a2999b5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 634359763f24e02987664fe3de1094e3e7fec64c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347331"
---
# <a name="property-sheets-as-wizards"></a>Finestre delle proprietà come procedure guidate
Una caratteristica chiave delle finestre delle proprietà di una procedura guidata è che la navigazione avviene tramite i pulsanti Avanti o Fine, Indietro e Annulla, anziché tramite schede. È necessario chiamare [CPropertySheet:: SetWizardMode](../mfc/reference/cpropertysheet-class.md#setwizardmode) prima di chiamare [CPropertySheet:: DoModal](../mfc/reference/cpropertysheet-class.md#domodal) sull'oggetto finestra delle proprietà per poter sfruttare questa funzionalità.  
  
 L'utente riceve lo stesso [CPropertyPage:: OnSetActive](../mfc/reference/cpropertypage-class.md#onsetactive) e [CPropertyPage:: OnKillActive](../mfc/reference/cpropertypage-class.md#onkillactive) notifiche durante lo spostamento da una pagina a un'altra pagina. I pulsanti Fine e Avanti sono controlli che si escludono a vicenda, vale a dire che ne viene visualizzato uno solo alla volta. Nella prima pagina dovrebbe essere abilitato il pulsante Avanti. Se l'utente visualizza l'ultima pagina, dovrebbe essere abilitato il pulsante Fine. Questa operazione non viene eseguita automaticamente dal framework. È necessario chiamare [CPropertySheet:: SetWizardButton](../mfc/reference/cpropertysheet-class.md#setwizardbuttons) nell'ultima pagina per ottenere questo risultato.  
  
 Per visualizzare tutti i pulsanti predefiniti, è necessario mostrare il pulsante Fine e spostare il pulsante Avanti. Spostare quindi il pulsante Indietro in modo da mantenerne la posizione relativa rispetto al pulsante Avanti.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#5](../mfc/codesnippet/cpp/property-sheets-as-wizards_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)

