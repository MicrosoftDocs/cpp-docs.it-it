---
title: Creazione di una descrizione comando per un pulsante della barra degli strumenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- tool tips [C++], adding to toolbar buttons
- "\nin tool tip"
- toolbar buttons [C++], tool tips
- buttons [C++], tool tips
- Toolbar editor, creating tool tips
ms.assetid: 0af65342-fd78-4e78-8d0d-dc68f7fc462e
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e9399341f19a614783c0f8f873051ed048d89b35
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](https://msdn.microsoft.com/library/f45fce5x.aspx) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](https://msdn.microsoft.com/library/xbx3z216.aspx). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 Requisiti  
  
 MFC o ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione, spostamento e modifica i pulsanti della barra degli strumenti](../windows/creating-moving-and-editing-toolbar-buttons.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

