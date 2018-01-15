---
title: Modifica l'ordine di tabulazione dei controlli | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [C++], tab order
- focus, tab order
- tab controls, tab order
- Tabstop property for controls
- controls [C++], focus
- dialog box controls, tab order
ms.assetid: e2cee764-4367-42d7-9563-65a68f76f5ff
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dca6b1bb894aa2219a0352ba9c359e6f3c5a4677
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changing-the-tab-order-of-controls"></a>Modifica dell'ordine di tabulazione dei controlli
Ordine di tabulazione è l'ordine in cui il tasto TAB sposta lo stato attivo da un controllo a quella successiva all'interno di una finestra di dialogo. In genere l'ordine di tabulazione procede da sinistra a destra e dall'alto verso il basso nella finestra di dialogo. Ogni controllo dispone di un **Tabstop** proprietà che determina se un controllo riceve lo stato attivo di input.  
  
### <a name="to-set-input-focus-for-a-control"></a>Per impostare lo stato attivo di input per un controllo  
  
1.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window)selezionare **True** o **False** nel **Tabstop** proprietà.  
  
 Anche i controlli che non contengono la proprietà Tabstop impostata su True devono essere parte di ordine di tabulazione. Questo può essere importante, ad esempio, quando si [definire tasti di scelta (tasti di scelta)](../windows/defining-mnemonics-access-keys.md) per i controlli che non dispongono di didascalie. Testo statico che contiene una chiave di accesso per un controllo correlato deve precedere il controllo correlato nell'ordine di tabulazione.  
  
> [!NOTE]
>  Se la finestra di dialogo contiene controlli sovrapposti, la modifica dell'ordine di tabulazione potrebbe modificare il modo in cui che vengono visualizzati i controlli. I controlli in un secondo momento nell'ordine di tabulazione vengono sempre visualizzati sopra i controlli sovrapposti che li precedono nell'ordine di tabulazione.  
  
#### <a name="to-view-the-current-tab-order-for-all-controls-in-a-dialog-box"></a>Per visualizzare l'ordine di tabulazione corrente per tutti i controlli in una finestra di dialogo  
  
1.  Nel **formato** menu, fare clic su **ordine di tabulazione**.  
  
 \- oppure -  
  
-   Premere CTRL + D.  
  
#### <a name="to-change-the-tab-order-for-all-controls-in-a-dialog-box"></a>Per modificare l'ordine di tabulazione per tutti i controlli in una finestra di dialogo  
  
1.  Nel **formato** menu, fare clic su **ordine di tabulazione**.  
  
     Un numero nell'angolo superiore sinistro di ogni controllo indica la posizione nell'ordine di tabulazione corrente.  
  
2.  Facendo clic su ogni controllo nell'ordine desiderato il tasto TAB per seguire l'impostazione dell'ordine di tabulazione.  
  
3.  Premere **invio** per uscire dall'installazione **ordine di tabulazione** modalità.  
  
    > [!TIP]
    >  Quando si attiva la modalità di ordine di tabulazione, è possibile premere ESC o INVIO per disabilitare la possibilità di modificare l'ordine di tabulazione.  
  
#### <a name="to-change-the-tab-order-for-two-or-more-controls"></a>Per modificare l'ordine di tabulazione per due o più controlli  
  
1.  Dal **formato** menu, scegliere **ordine di tabulazione**.  
  
2.  Specificare dove si inizierà la modifica dell'ordine. A tale scopo, tenere premuto il **CTRL** chiave e fare clic sul controllo prima di quello in cui si desidera modificare l'ordine per iniziare.  
  
     Ad esempio, se si desidera modificare l'ordine dei controlli da 7 a 9, tenere premuto CTRL, quindi selezionare il controllo 6.  
  
    > [!NOTE]
    >  Per impostare un controllo specifico al numero 1 (prima nell'ordine di tabulazione), fare doppio clic sul controllo.  
  
3.  Rilasciare il tasto CTRL, quindi fare clic sui controlli nell'ordine che si desidera che il tasto TAB per seguire da tale punto.  
  
4.  Premere **invio** per uscire dall'installazione **ordine di tabulazione** modalità.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)   
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

