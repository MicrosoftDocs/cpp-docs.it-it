---
title: Debug del Provider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- debugging [C++], providers
- OLE DB providers, debugging
- Visual C++ debugger, debugging providers
- Visual C++ debugger
ms.assetid: 90d4e7db-06ea-4de0-a7f4-4f3751d50d93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c6258ddd3fd4317c608cb20486c364918fb5c73a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="debugging-your-provider"></a>Debug del provider
Esistono due modi per eseguire il debug del provider:  
  
-   Poiché i provider vengono creati nel processo, è possibile creare tramite i modelli consumer OLE DB e istruzioni del provider in genere il codice del consumer.  
  
-   È possibile utilizzare l'utilità ITEST fornito con Visual C++.  
  
### <a name="to-use-the-itest-utility"></a>Utilizzare l'utilità ITEST  
  
1.  Aprire il progetto del provider.  
  
2.  Nel **progetti** menu, fare clic su **impostazioni**.  
  
3.  Nel **pagine delle proprietà** la finestra di dialogo, fare clic sul **Debug** scheda.  
  
4.  Nel **eseguibile per la sessione di Debug** , selezionare l'applicazione ITEST.  
  
5.  Impostare punti di interruzione e quindi eseguire il debug come di consueto.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)