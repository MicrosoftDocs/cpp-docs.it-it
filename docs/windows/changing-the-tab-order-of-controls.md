---
title: Modifica l'ordine di tabulazione dei controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], tab order
- focus, tab order
- tab controls [C++], tab order
- Tabstop property for controls
- controls [C++], focus
- dialog box controls [C++], tab order
ms.assetid: e2cee764-4367-42d7-9563-65a68f76f5ff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 330fe056a4b06e006d69e630cc933b4402eeb0c0
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44316601"
---
# <a name="changing-the-tab-order-of-controls"></a>Modifica dell'ordine di tabulazione dei controlli

L'ordine di tabulazione è l'ordine in cui il **scheda** chiave sposta lo stato attivo di input da un controllo successivo all'interno di una finestra di dialogo. In genere l'ordine di tabulazione procede da sinistra a destra e dall'alto verso il basso in una finestra di dialogo. Ogni controllo ha un **Tabstop** proprietà che determina se un controllo riceve lo stato attivo.

### <a name="to-set-input-focus-for-a-control"></a>Per impostare lo stato attivo di input per un controllo

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), selezionare **True** oppure **False** nel **Tabstop** proprietà.

Anche i controlli che non hanno le **Tabstop** impostata su **True** devono far parte dell'ordine di tabulazione. Ciò può rivelarsi importante, ad esempio, quando si [definire le chiavi di accesso (tasti di scelta)](../windows/defining-mnemonics-access-keys.md) per i controlli privi di didascalie. Testo statico che contiene una chiave di accesso per un controllo correlato deve precedere il relativo controllo nell'ordine di tabulazione.

> [!NOTE]
> Se la finestra di dialogo contiene la sovrapposizione di controlli, la modifica dell'ordine di tabulazione può cambiare il modo in cui che vengono visualizzati i controlli. Controlli disponibili più avanti nell'ordine di tabulazione vengono sempre visualizzati sopra i controlli sovrapposti che li precedono nell'ordine di tabulazione.

### <a name="to-view-the-current-tab-order-for-all-controls-in-a-dialog-box"></a>Per visualizzare l'ordine di tabulazione corrente per tutti i controlli in una finestra di dialogo

1. Nel **formato** menu, fare clic su **ordine di tabulazione**.

\- oppure -

- Premere **Ctrl**+**1!d**.

### <a name="to-change-the-tab-order-for-all-controls-in-a-dialog-box"></a>Per modificare l'ordine di tabulazione per tutti i controlli in una finestra di dialogo

1. Nel **formato** menu, fare clic su **ordine di tabulazione**.

   Un numero nell'angolo superiore sinistro di ogni controllo indica la posizione nell'ordine di tabulazione corrente.

2. Impostare l'ordine di tabulazione facendo clic su ogni controllo nell'ordine desiderato la **scheda** chiave da seguire.

3. Premere **invio** per uscire **ordine di tabulazione** modalità.

   > [!TIP]
   > Dopo aver immesso **ordine di tabulazione** modalità, è possibile premere **Esc** oppure **invio** per disabilitare la possibilità di modificare l'ordine di tabulazione.

### <a name="to-change-the-tab-order-for-two-or-more-controls"></a>Per modificare l'ordine di tabulazione per due o più controlli

1. Dal **formato** menu, scegliere **ordine di tabulazione**.

2. Specificare dove inizierà la modifica nell'ordine. A tale scopo, tenere premuto il **Ctrl** della chiave e fare clic sul controllo prima di quello in cui si desidera modificare l'ordine per iniziare.

   Ad esempio, se si desidera modificare l'ordine dei controlli `7` attraverso `9`, tenere premuto **Ctrl**, quindi selezionare controllo `6` prima.

   > [!NOTE]
   > Per impostare un controllo specifico al numero `1` (innanzitutto in ordine di tabulazione), fare doppio clic sul controllo.

3. Versione di **Ctrl** chiave, quindi fare clic sui controlli nell'ordine desiderato la **scheda** chiave da seguire da quel punto.

4. Premere **invio** per uscire **ordine di tabulazione** modalità.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)  
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)  
[Controlli](../mfc/controls-mfc.md)