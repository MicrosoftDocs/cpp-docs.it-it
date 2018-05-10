---
title: Modifica dei nomi di file di intestazione simboli | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.changing.header
dev_langs:
- C++
helpviewer_keywords:
- resource files, multiple
- Resource Includes dialog box
- symbol header files, changing names
- symbol header files
- header files, changing names
- names [C++], symbol header files
- symbols, symbol header files
- Resource.h
ms.assetid: b948284a-7899-402e-ab12-9f2c8480ca9d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 953ac59958748bd58fa7e9027c595bf7905e5f27
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="changing-the-names-of-symbol-header-files"></a>Modifica dei nomi nei file di intestazione simboli
In genere tutte le definizioni di simboli vengono salvate in Resource.h. Tuttavia, potrebbe essere necessario modificare il nome file di inclusione in modo da poter, ad esempio, usare più file di risorse nella stessa directory.  
  
### <a name="to-change-the-name-of-the-resource-symbol-header-file"></a>Per modificare il nome del file di intestazione simboli di risorsa  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md)destro del mouse sul file RC e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel **file di intestazione simboli** , digitare il nuovo nome per il file di inclusione.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.*  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)   
 [ID simbolo predefiniti](../windows/predefined-symbol-ids.md)