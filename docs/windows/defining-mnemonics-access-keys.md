---
title: La definizione di tasti di scelta (chiavi di accesso) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- access keys [C++], adding
- keyboard shortcuts [C++], controls
- dialog box controls [C++], mnemonics
- access keys [C++], checking
- mnemonics [C++], checking for duplicate
- mnemonics
- mnemonics [C++], dialog box controls
- keyboard shortcuts [C++], uniqueness checking
- Check Mnemonics command
- controls [C++], access keys
- access keys [C++]
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6ab44d406d71eb1cc23c803f1074636e9e5cc38a
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44316237"
---
# <a name="defining-mnemonics-access-keys"></a>Definizione di tasti di scelta

In genere, gli utenti della tastiera spostare lo stato attivo di input da un controllo a un'altra in una finestra di dialogo con il **della scheda** e **freccia** chiavi. Tuttavia, è possibile definire una chiave di accesso (nome di tasti di scelta rapida o facile da ricordare) che consente agli utenti di scegliere un controllo premendo una singola chiave.

### <a name="to-define-an-access-key-for-a-control-with-a-visible-caption-push-buttons-check-boxes-and-radio-buttons"></a>Per definire una chiave di accesso per un controllo con una didascalia visibile (push pulsanti, caselle di controllo e pulsanti di opzione)

1. Selezionare il controllo nella finestra di dialogo.

2. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), nella **didascalia** proprietà, digitare un nuovo nome per il controllo, digitare una e commerciale (`&`) davanti alla lettera desiderata come chiave di accesso per tale controllo. Ad esempio `&Radio1`.

3. Premere **INVIO**.

   Nella barra del titolo visualizzato per indicare la chiave di accesso, ad esempio, viene visualizzata una sottolineatura **R**adio1.

### <a name="to-define-an-access-key-for-a-control-without-a-visible-caption"></a>Per definire una chiave di accesso per un controllo senza un titolo visibile

1. Creare una didascalia per il controllo utilizzando un **testo statico** controllare nel [della casella degli strumenti](/visualstudio/ide/reference/toolbox).

2. Nella didascalia di testo statico, digitare una e commerciale (`&`) davanti alla lettera desiderata come tasto di scelta rapida.

3. Assicurarsi che il controllo di testo statico precede immediatamente il controllo che etichetta nell'ordine di tabulazione.

Tutte le chiavi di accesso all'interno di una finestra di dialogo devono essere univoche.

### <a name="to-check-for-duplicate-access-keys"></a>Per verificare la presenza di chiavi di accesso duplicati

1. Nel **formato** menu, fare clic su **tasti**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)  
[Controlli](../mfc/controls-mfc.md)