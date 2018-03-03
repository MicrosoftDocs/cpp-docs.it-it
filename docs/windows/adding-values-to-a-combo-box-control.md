---
title: Aggiunta di valori a un controllo casella combinata | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.editors.dialog.combo
dev_langs:
- C++
helpviewer_keywords:
- combo boxes [C++], Data property
- controls [Visual Studio], testing values in combo boxes
- combo boxes [C++], adding values
- combo boxes [C++], previewing values
- controls [C++], testing values in combo boxes
- Data property
- combo boxes [C++], testing values
ms.assetid: 22a78f98-fada-48b3-90d8-7fa0d8e4de51
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9125ad60648f6f867e1214763a6af164d0239a04
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-values-to-a-combo-box-control"></a>Aggiunta di valori a un controllo casella combinata
Fino a quando è aperto l'editor finestre, è possibile aggiungere valori a un controllo casella combinata.  
  
> [!TIP]
>  È consigliabile aggiungere tutti i valori nella casella combinata *prima* di ridimensionare la casella nell'editor finestre, oppure è possibile troncare il testo che deve essere visualizzato nel controllo di riepilogo.  
  
#### <a name="to-enter-values-into-a-combo-box-control"></a>Per immettere valori in un controllo casella combinata  
  
1.  Selezionare la casella combinata facendo clic su di esso.  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), scorrere verso il basso il **dati** proprietà.  
  
    > [!NOTE]
    >  Se si visualizzano le proprietà raggruppate per tipo, **dati** è presente il **varie** proprietà.  
  
3.  Fare clic nell'area del valore per il **dati** proprietà e digitare i valori di dati, separati da punti e virgola.  
  
    > [!NOTE]
    >  Non inserire spazi tra i valori poiché gli spazi interferiscono con l'ordinamento alfabetico nell'elenco a discesa.  
  
4.  Fare clic su **invio** dopo aver terminato l'aggiunta di valori.  
  
 Per informazioni sull'ingrandimento dell'area di riepilogo a discesa di una casella combinata, vedere [impostazione delle dimensioni della casella combinata e dell'elenco a discesa](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).  
  
> [!NOTE]
>  Non è possibile aggiungere valori per i progetti Win32 mediante questa procedura (il **dati** proprietà non è disponibile per i progetti Win32). Progetti Win32 non dispone di librerie che aggiungono questa funzionalità, è necessario aggiungere valori a livello di codice in una casella combinata con un progetto Win32.  
  
#### <a name="to-test-the-appearance-of-values-in-a-combo-box"></a>Per verificare l'aspetto dei valori in una casella combinata  
  
1.  Dopo l'immissione di valori di **dati** proprietà, fare clic sul **Test** pulsante il [barra degli strumenti finestra di dialogo Editor](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).  
  
     Scorrere verso il basso l'intero elenco di valori. I valori vengono visualizzati esattamente come vengono digitati nel **dati** proprietà nella finestra Proprietà. Non è presente alcun ortografia o controllo maiuscole/minuscole.  
  
     Premere ESC per tornare alla finestra di dialogo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
### <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

