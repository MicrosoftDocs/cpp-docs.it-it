---
description: 'Ulteriori informazioni su: finestre delle proprietà come procedure guidate'
title: Finestre delle proprietà come procedure guidate
ms.date: 11/04/2016
helpviewer_keywords:
- property sheets, as wizards
ms.assetid: 1ea66ecb-23b0-484a-838d-58671a2999b5
ms.openlocfilehash: 2a68a16936e8ab134bab2fe78dac0d29c125b4db
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248865"
---
# <a name="property-sheets-as-wizards"></a>Finestre delle proprietà come procedure guidate

Una caratteristica chiave delle finestre delle proprietà di una procedura guidata è che la navigazione avviene tramite i pulsanti Avanti o Fine, Indietro e Annulla, anziché tramite schede. Per sfruttare i vantaggi di questa funzionalità, è necessario chiamare [CPropertySheet:: SetWizardMode](../mfc/reference/cpropertysheet-class.md#setwizardmode) prima di chiamare [CPropertySheet::D omodal](../mfc/reference/cpropertysheet-class.md#domodal) nell'oggetto finestra delle proprietà.

L'utente riceve le stesse notifiche [CPropertyPage:: OnSetActive](../mfc/reference/cpropertypage-class.md#onsetactive) e [CPropertyPage:: OnKillActive](../mfc/reference/cpropertypage-class.md#onkillactive) durante il passaggio da una pagina a un'altra. I pulsanti Fine e Avanti sono controlli che si escludono a vicenda, vale a dire che ne viene visualizzato uno solo alla volta. Nella prima pagina dovrebbe essere abilitato il pulsante Avanti. Se l'utente visualizza l'ultima pagina, dovrebbe essere abilitato il pulsante Fine. Questa operazione non viene eseguita automaticamente dal framework. Per ottenere questo risultato, è necessario chiamare [CPropertySheet:: SetWizardButton](../mfc/reference/cpropertysheet-class.md#setwizardbuttons) nell'ultima pagina.

Per visualizzare tutti i pulsanti predefiniti, è necessario mostrare il pulsante Fine e spostare il pulsante Avanti. Spostare quindi il pulsante Indietro in modo da mantenerne la posizione relativa rispetto al pulsante Avanti.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#5](../mfc/codesnippet/cpp/property-sheets-as-wizards_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Finestre delle proprietà](../mfc/property-sheets-mfc.md)
