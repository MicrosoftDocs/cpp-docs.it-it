---
title: Aggiunta guidata evento
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.event.overview
helpviewer_keywords:
- Add Event Wizard [C++]
ms.assetid: bdd2a7bb-13d5-44d7-abc9-e785ba4e05ce
ms.openlocfilehash: e8e78dce3f3f4ec9412be910cde5e0468ce533bd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50510773"
---
# <a name="add-event-wizard"></a>Aggiunta guidata evento

Questa procedura guidata aggiunge un evento al progetto di un controllo ActiveX MFC. È possibile specificare un evento personalizzato, personalizzare un evento in genere predefinito oppure selezionare un evento da un elenco di eventi predefiniti.

- **Nome evento**

   Imposta il nome usato dai client di automazione per richiedere un evento dalla classe. Immettere un nome o selezionarne uno dall'elenco.

- **Tipo evento**

   Indica il tipo di evento da aggiungere. Disponibile solo se si seleziona un'opzione dall'elenco **Nome evento**.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Predefinito**|Specifica l'implementazione di un evento predefinito per la classe, ad esempio il clic su un pulsante. Gli eventi predefiniti sono definiti nella libreria MFC (Microsoft Foundation Class).|
   |**Personalizzato**|Specifica l'implementazione personalizzata dell'evento.|

- **Nome interno**

   Imposta il nome della funzione membro che invia l'evento. Disponibile solo per gli eventi personalizzati. Il nome è basato sul **Nome evento**. Se si vuole specificare un nome diverso da **Nome evento** è possibile modificare il nome interno.

- **Tipo parametro**

   Imposta il tipo per **Nome parametro**. Selezionare il tipo dall'elenco.

- **Nome parametro**

   Imposta il nome di un parametro da passare all'evento. Dopo aver digitato il nome, è necessario fare clic su **Aggiungi** per aggiungerlo all'elenco dei parametri.

   Dopo aver fatto clic su **Aggiungi**, il nome del parametro viene visualizzato nell'**Elenco parametri**.

   > [!NOTE]
   > Se si specifica un nome di parametro e quindi si fa clic su **Fine** prima di fare clic su **Aggiungi**, il parametro non viene aggiunto all'evento. È necessario trovare il metodo e inserire il parametro manualmente. **Elenco parametri**

- **Aggiungi**

   Aggiunge il parametro specificato in **Nome parametro** e il relativo tipo all'**Elenco parametri**. È necessario fare clic su **Aggiungi** per aggiungere un parametro all'elenco.

- **Rimuovi**

   Rimuove il parametro selezionato nell'**Elenco parametri** dall'elenco.

- **Elenco parametri**

   Visualizza tutti i parametri e i relativi tipi aggiunti per il metodo. Quando si aggiungono i parametri, la procedura guidata aggiorna l'**Elenco parametri** in modo da visualizzare ogni parametro con il relativo tipo.

## <a name="see-also"></a>Vedere anche

[Aggiunta di un evento](../ide/adding-an-event-visual-cpp.md)