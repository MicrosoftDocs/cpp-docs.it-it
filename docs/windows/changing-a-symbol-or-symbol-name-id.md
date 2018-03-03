---
title: Modifica di un simbolo o il nome del simbolo (ID) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.editors.symbol.changing
dev_langs:
- C++
helpviewer_keywords:
- symbol names
- symbols, names
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b0ed56fc3663b99af311c52e463bd2f16fcef0a2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changing-a-symbol-or-symbol-name-id"></a>Modifica di un simbolo o del nome di un simbolo (ID)
Quando si crea una nuova risorsa o un oggetto risorsa, l'ambiente di sviluppo gli assegna un nome di simbolo predefinito, ad esempio IDD_DIALOG1. È possibile utilizzare il [finestra proprietà](/visualstudio/ide/reference/properties-window) per modificare il nome del simbolo predefinito o per modificare il nome di un simbolo già associato a una risorsa.  
  
### <a name="to-change-a-resources-symbol-name"></a>Per modificare il nome del simbolo di una risorsa  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel **proprietà** finestra, digitare un nuovo nome di simbolo o selezionare dall'elenco dei simboli esistenti di **ID** casella.  
  
     Se si digita il nuovo nome di un simbolo, gli viene assegnato automaticamente un valore.  
  
 È possibile utilizzare il [la finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare i nomi dei simboli non attualmente assegnati a una risorsa. Per ulteriori informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  

  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md)   
 [ID simbolo predefiniti](../windows/predefined-symbol-ids.md)