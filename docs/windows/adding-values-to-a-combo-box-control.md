---
title: Aggiunta di valori a un controllo casella combinata | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3760da2fad7596938acf881cd36af099ad1253cf
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39643796"
---
# <a name="adding-values-to-a-combo-box-control"></a>Aggiunta di valori a un controllo casella combinata
È possibile aggiungere valori per un controllo casella combinata, purché hanno le **finestra di dialogo** editor aperto.  
  
> [!TIP]
>  È una buona idea per aggiungere tutti i valori alla casella combinata *prima* di ridimensionare la casella di **dialogo** editor oppure è possibile troncare il testo che deve essere visualizzato nel controllo casella combinata.  
  
### <a name="to-enter-values-into-a-combo-box-control"></a>Immettere i valori in un controllo casella combinata  
  
1.  Selezionare la casella combinata facendo clic su di esso.  
  
2.  Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), scorrere verso il basso il **dati** proprietà.  
  
    > [!NOTE]
    >  Se si siano visualizzando le proprietà raggruppate per tipo, **dati** viene visualizzato nei **varie** proprietà.  
  
3.  Fare clic nell'area del valore per il **dati** proprietà e digitare i valori di dati, separati da punti e virgola.  
  
    > [!NOTE]
    >  Non inserire spazi tra i valori perché spazi interferiscano con l'ordinamento alfabetico nell'elenco a discesa.  
  
4.  Fare clic su **invio** dopo aver terminato l'aggiunta di valori.  
  
 Per informazioni su ingrandimento dell'area di riepilogo a discesa di una casella combinata, vedere [impostazione delle dimensioni della casella combinata e dell'elenco a discesa](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).  
  
> [!NOTE]
>  Non è possibile aggiungere valori per i progetti Win32 tramite questa procedura (il **dati** proprietà è disabilitata per i progetti Win32). Poiché i progetti Win32 non dispongono di librerie che aggiungono questa funzionalità, è necessario aggiungere valori a una casella combinata con un progetto Win32 a livello di codice.  
  
### <a name="to-test-the-appearance-of-values-in-a-combo-box"></a>Per verificare l'aspetto dei valori in una casella combinata  
  
1.  Dopo aver immesso i valori nel **dati** proprietà, fare clic sul **Test** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).  
  
     Provare a scorrere l'elenco di valore intero. I valori vengono visualizzati esattamente come vengono digitati nel **dati** proprietà nel **proprietà** finestra. Non sono ortografia o controllo maiuscole/minuscole.  
  
     Premere **Esc** da restituire per il **nella finestra di dialogo** editor.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)