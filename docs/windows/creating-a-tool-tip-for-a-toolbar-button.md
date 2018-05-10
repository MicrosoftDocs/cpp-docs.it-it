---
title: Creazione di una descrizione comando per un pulsante della barra degli strumenti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tool tips [C++], adding to toolbar buttons
- "\nin tool tip"
- toolbar buttons [C++], tool tips
- buttons [C++], tool tips
- Toolbar editor, creating tool tips
ms.assetid: 0af65342-fd78-4e78-8d0d-dc68f7fc462e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 41c2fa538a7888a2f14ae34fde9133b2872d13ba
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="creating-a-tool-tip-for-a-toolbar-button"></a>Creazione di una descrizione comandi per un pulsante della barra degli strumenti
### <a name="to-create-a-tool-tip"></a>Per creare una descrizione comando  
  
1.  Selezionare il pulsante della barra degli strumenti.  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window)nella **prompt dei comandi** campo di proprietà, aggiungere una descrizione del pulsante per la barra di stato; dopo il messaggio, aggiungere \n e il nome della descrizione comandi.  
  
 Un esempio comune di descrizione comandi è il pulsante di stampa in WordPad:  
  
 1. Aprire WordPad.  
  
 2. Posizionare il puntatore del mouse sul **stampa** pulsante della barra degli strumenti.  
  
 3. Si noti che la parola "Stampa" ora è mobile sotto il puntatore del mouse.  
  
 4. Nella barra di stato (nella parte inferiore della finestra di WordPad) - ora visualizzato il testo "Stampa il documento attivo".  
  
 Stampa nel passaggio 3 è il "nome della descrizione comandi" e il messaggio "stampa il documento attivo' dal passaggio 4 è"descrizione del pulsante per la barra di stato".  
  
 Se si desidera che questo effetto utilizzando la **barra degli strumenti** editor, impostare il **Prompt** proprietà **stampa il documento attivo\nStampa**.  
  
> [!NOTE]
>  È possibile modificare il testo del messaggio utilizzando il [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 MFC o ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione, spostamento e modifica i pulsanti della barra degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

