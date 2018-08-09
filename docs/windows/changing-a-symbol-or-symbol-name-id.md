---
title: Modifica di un simbolo o il nome del simbolo (ID) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.changing
dev_langs:
- C++
helpviewer_keywords:
- symbol names
- symbols, names
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cd9d2429f1257711d766d8e51b890e2e8a59b8d1
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642256"
---
# <a name="changing-a-symbol-or-symbol-name-id"></a>Modifica di un simbolo o del nome di un simbolo (ID)
Quando si crea una nuova risorsa o un oggetto risorsa, l'ambiente di sviluppo gli assegna un nome di simbolo predefinito, ad esempio IDD_DIALOG1. È possibile usare la [finestra proprietà](/visualstudio/ide/reference/properties-window) per modificare il nome del simbolo predefinito o per modificare il nome di qualsiasi simbolo già associato a una risorsa.  
  
### <a name="to-change-a-resources-symbol-name"></a>Per modificare il nome del simbolo di una risorsa  
  
1.  Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la risorsa.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel **delle proprietà** finestra, digitare un nuovo nome di simbolo o selezionare dall'elenco dei simboli esistenti nella **ID** casella.  
  
     Se si digita il nuovo nome di un simbolo, gli viene assegnato automaticamente un valore.  
  
 È possibile usare la [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md) per modificare i nomi dei simboli non attualmente assegnati a una risorsa. Per altre informazioni, vedere [modifica di simboli non assegnati](../windows/changing-unassigned-symbols.md).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md)   
 [ID simbolo predefiniti](../windows/predefined-symbol-ids.md)