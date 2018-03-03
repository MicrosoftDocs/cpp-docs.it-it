---
title: Definizione di tasti di scelta (tasti di scelta) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- access keys [C++], adding
- keyboard shortcuts [C++], controls
- dialog box controls, mnemonics
- access keys [C++], checking
- mnemonics, checking for duplicate
- mnemonics
- mnemonics, dialog box controls
- keyboard shortcuts [C++], uniqueness checking
- Check Mnemonics command
- controls [C++], access keys
- access keys [C++]
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 167947e51ed773f765432148cbe879c926c57d5f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="defining-mnemonics-access-keys"></a>Definizione di tasti di scelta
In genere, gli utenti di tastiera spostare lo stato attivo di input da un controllo a un'altra in una finestra di dialogo con i tasti freccia e TAB. Tuttavia, è possibile definire una chiave di accesso (nome di tasto di scelta o facile da ricordare) che consente agli utenti di scegliere un controllo premendo un tasto singolo.  
  
### <a name="to-define-an-access-key-for-a-control-with-a-visible-caption-push-buttons-check-boxes-and-radio-buttons"></a>Per definire una chiave di accesso per un controllo con una didascalia visibile (pulsanti, caselle di controllo e pulsanti di opzione)  
  
1.  Selezionare il controllo nella finestra di dialogo.  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window)nella **didascalia** proprietà, digitare un nuovo nome per il controllo, digitare una e commerciale (**&**) prima della lettera che si vuole usare come il chiave di accesso per tale controllo. Ad esempio `&Radio1`.  
  
3.  Premere **INVIO**.  
  
     Un carattere di sottolineatura viene visualizzata nella didascalia per indicare la chiave di accesso, ad esempio, **R**adio1.  
  
### <a name="to-define-an-access-key-for-a-control-without-a-visible-caption"></a>Per definire una chiave di accesso per un controllo senza una didascalia visibile  
  
1.  Creare una didascalia per il controllo utilizzando un **testo statico** controllo il [della casella degli strumenti](/visualstudio/ide/reference/toolbox).  
  
2.  Nella didascalia di testo statico, digitare una e commerciale (**&**) prima della lettera che si vuole usare come tasto di scelta rapida.  
  
3.  Verificare che il controllo di testo statico precede immediatamente il controllo che etichetta nell'ordine di tabulazione.  
  
 Tutte le chiavi di accesso all'interno di una finestra di dialogo devono essere univoche.  
  
#### <a name="to-check-for-duplicate-access-keys"></a>Per verificare la presenza di chiavi di accesso duplicati  
  
1.  Nel **formato** menu, fare clic su **tasti**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

