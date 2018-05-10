---
title: Modifica di un simbolo&#39;valore numerico s | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.changing.value
dev_langs:
- C++
helpviewer_keywords:
- numeric values
- symbols, numeric values
- numeric values, changing symbols
ms.assetid: 468e903b-9c07-4251-ae09-3b6cb754cc2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8beacf5195e108d98a0004fe79c2a66cb2b3b610
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="changing-a-symbol39s-numeric-value"></a>Modifica di un simbolo&#39;s valore numerico
Per i simboli associati a una singola risorsa, è possibile utilizzare il [finestra proprietà](/visualstudio/ide/reference/properties-window) per modificare il valore di simbolo. È possibile utilizzare il [la finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare il valore dei simboli non attualmente assegnati a una risorsa. Per ulteriori informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  
### <a name="to-change-a-symbol-value-assigned-to-a-single-resource-or-object"></a>Per modificare il valore di un simbolo assegnato a una singola risorsa o oggetto  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel **proprietà** finestra digitare il nome del simbolo seguito da un segno di uguale e un numero intero di **ID** casella, ad esempio:  
  
    ```  
    IDC_EDITNAME=5100  
    ```  
  
 Il nuovo valore viene archiviato nel file di intestazione simboli la volta successiva che si salva il progetto. Solo il nome del simbolo rimane visibile nella casella ID; il segno di uguale e il valore non vengono visualizzati dopo essere stati convalidati.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Restrizioni relative ai valori di simboli](../windows/symbol-value-restrictions.md)   
 [ID simbolo predefiniti](../windows/predefined-symbol-ids.md)