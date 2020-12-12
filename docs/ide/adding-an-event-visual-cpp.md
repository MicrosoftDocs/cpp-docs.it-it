---
description: 'Altre informazioni su: aggiungere un evento'
title: Aggiungere un evento
ms.date: 11/12/2018
f1_keywords:
- vc.codewiz.event.overview
helpviewer_keywords:
- ActiveX controls [C++], adding events to
- MFC ActiveX controls [C++], adding events
- events [C++], ActiveX controls
- add event wizard [C++]
ms.assetid: fe34832a-edfc-4f86-aacb-8df77001873d
ms.openlocfilehash: c369be0fe241867b101ab458344ae706b1fd440d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97240819"
---
# <a name="add-an-event"></a>Aggiungere un evento

Dalla Visualizzazione classi è possibile aggiungere un evento usando l'[Aggiunta guidata evento](#add-event-wizard) solo alla classe del controllo nel progetto del [controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md). Se si vuole aggiungere un evento a un altro tipo di progetto, usare il pulsante **Eventi** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

**Per aggiungere un evento al progetto del controllo ActiveX MFC:**

1. Nella Visualizzazione classi espandere il nodo del progetto per visualizzare le classi nel progetto.

1. Fare clic con il pulsante destro del mouse sulla classe del controllo del progetto.

1. Nel menu di scelta rapida scegliere **Aggiungi** e quindi **Aggiungi evento** per visualizzare l'Aggiunta guidata evento.

1. Specificare le informazioni sull'evento nelle caselle appropriate della procedura guidata.

1. Selezionare **Fine** per aggiungere l'evento al progetto.

## <a name="in-this-section"></a>Contenuto della sezione

- [Aggiunta guidata evento](#add-event-wizard)

## <a name="add-event-wizard"></a>Aggiunta guidata evento

Questa procedura guidata aggiunge un evento al progetto di un controllo ActiveX MFC. È possibile specificare un evento personalizzato, personalizzare un evento predefinito oppure selezionare un evento da un elenco di eventi predefiniti.

- **Nome evento**

   Imposta il nome usato dai client di automazione per richiedere un evento dalla classe. Immettere un nome o selezionarne uno dall'elenco.

- **Tipo di evento**

   Indica il tipo di evento da aggiungere. Disponibile solo se si seleziona dall'elenco **nome evento** .

   |Opzione|Description|
   |------------|-----------------|
   |**Grafico azionario**|Specifica l'implementazione di un evento predefinito per la classe, ad esempio il clic su un pulsante. Gli eventi predefiniti sono definiti nella libreria MFC (Microsoft Foundation Class).|
   |**Personalizzato**|Specifica l'uso dell'implementazione personalizzata dell'evento.|

- **Nome interno**

   Imposta il nome della funzione membro che invia l'evento. Disponibile solo per gli eventi personalizzati. Il nome è basato sul **Nome evento**. Se si vuole specificare un nome diverso da **Nome evento** è possibile modificare il nome interno.

- **Tipo parametro**

   Imposta il tipo per **Nome parametro**. Selezionare il tipo dall'elenco.

- **Nome parametro**

   Imposta il nome di un parametro da passare all'evento. Dopo aver digitato il nome, è necessario selezionare **Aggiungi** per aggiungerlo all'elenco dei parametri.

   Dopo aver selezionato **Aggiungi**, il nome del parametro viene visualizzato nell'**Elenco parametri**.

   > [!NOTE]
   > Se si specifica un nome di parametro e quindi si seleziona **Fine** prima di selezionare **Aggiungi**, il parametro non viene aggiunto all'evento. È necessario trovare il metodo e inserire il parametro manualmente.

- **Aggiungere**

   Aggiunge il parametro specificato in **Nome parametro** e il relativo tipo all'**Elenco parametri**. Selezionare **Aggiungi** per aggiungere un parametro all'elenco.

- **Rimuovi**

   Rimuove il parametro selezionato nell'**Elenco parametri** dall'elenco.

- **Elenco di parametri**

   Visualizza tutti i parametri e i relativi tipi aggiunti per il metodo. Quando si aggiungono i parametri, la procedura guidata aggiorna l'**Elenco parametri** in modo da visualizzare ogni parametro con il relativo tipo.
