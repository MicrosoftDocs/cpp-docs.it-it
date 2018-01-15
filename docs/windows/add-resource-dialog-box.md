---
title: Aggiungi risorsa (finestra di dialogo) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.insertresource
dev_langs: C++
helpviewer_keywords:
- resources [Visual Studio], adding
- Add Resource dialog box
ms.assetid: e9fb6967-738f-47e8-ab58-728cf35b3af0
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fde90f5d7c7822155e36b77c74cd80cdf56b10d2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="add-resource-dialog-box"></a>Aggiungi risorsa (finestra di dialogo)
Usare questa finestra di dialogo per aggiungere risorse a un progetto di applicazione desktop di Windows in C++.  
  
> [!NOTE]
>  Queste informazioni non si applicano alle risorse in app di Windows Store. Per ulteriori informazioni su questo, vedere [definizione delle risorse dell'App](http://msdn.microsoft.com/en-us/476ea844-632c-4467-9ce3-966be1350dd4).  
  
 **Tipo di risorsa**  
 Specifica il tipo di risorsa che si vuole creare.  
  
 È possibile espandere le categorie di risorse della finestra di dialogo e del cursore per visualizzare risorse aggiuntive. Queste risorse si trovano in Visual Studio ...\Microsoft `version`\VC\VCResourceTemplates\\< LCID\>\mfc.rct.. Se si aggiungono file con estensione rct, è necessario inserirli in questa directory oppure è necessario specificare un [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md) per loro. Le risorse contenute in tali file verranno quindi visualizzate in corrispondenza del secondo livello nella categoria appropriata. Non esiste un limite predefinito per il numero di file con estensione rct che è possibile aggiungere.  
  
 Le risorse visualizzate al primo livello del controllo albero sono le risorse predefinite fornite da Visual Studio.  
  
 **Nuovo**  
 Crea una risorsa in base al tipo selezionato nel **tipo di risorsa** casella. La risorsa viene visualizzata nell'editor appropriato. Ad esempio, se si crea una risorsa finestra di dialogo, viene aperto nel [editor finestre](../windows/dialog-editor.md).  
  
 **Import**  
 Apre il **importare** la finestra di dialogo in cui è possibile accedere a una risorsa quale si desidera importare nel progetto corrente. È possibile importare una bitmap, un'icona, un cursore, un file sorgente HTML, un file audio (WAV) o un file di risorse personalizzato.  
  
 **Personalizzato**  
 Apre il [la finestra di dialogo Nuova risorsa personalizzata](../windows/new-custom-resource-dialog-box.md) in cui è possibile creare una risorsa personalizzata. Le risorse personalizzate possono essere modificate solo nell'editor binario.  
  
## <a name="requirements"></a>Requisiti  
 nessuno  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Creare una risorsa](../windows/how-to-create-a-resource.md)