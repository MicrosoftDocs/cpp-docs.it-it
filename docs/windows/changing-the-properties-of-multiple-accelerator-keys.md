---
title: Modifica delle proprietà di più tasti di scelta rapida | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keyboard shortcuts [C++], property changing
- accelerator tables [C++], changing properties
ms.assetid: b55c9bd6-b430-48bb-b942-0e6f21d7abf9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 11705fcbcdb3dc73fe5c3a87844b2bc5d90cd135
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="changing-the-properties-of-multiple-accelerator-keys"></a>Modifica delle proprietà di più tasti di scelta rapida
### <a name="to-change-the-properties-of-multiple-accelerator-keys"></a>Per modificare le proprietà di più tasti di scelta rapida  
  
1.  Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona in [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Selezionare i tasti di scelta rapida che si desidera modificare tenendo premuto il **CTRL** mentre si fa clic su ciascuno di essi.  
  
3.  Passare al [finestra proprietà](/visualstudio/ide/reference/properties-window) e digitare i valori da tutti i tasti di scelta rapida selezionati per condividere.  
  
    > [!NOTE]
    >  Ogni valore del modificatore viene visualizzato come una proprietà booleana nella finestra Proprietà. Se si modifica un [modificatore](../windows/accelerator-modifier-property.md) valore nella finestra Proprietà, la tabella di tasti di scelta rapida considera il nuovo modificatore come un'aggiunta ai modificatori già presenti. Per questo motivo, se si imposta alcun valore di modificatore, sarà necessario impostare in modo da garantire che ogni acceleratore condivide le stesse impostazioni di modificatore tutte.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle tabelle di tasti di scelta rapida](../windows/editing-accelerator-tables.md)   
 [Editor tasti di scelta rapida](../windows/accelerator-editor.md)