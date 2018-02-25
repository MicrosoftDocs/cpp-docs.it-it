---
title: Debug del Provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- debugging [C++], providers
- OLE DB providers, debugging
- Visual C++ debugger, debugging providers
- Visual C++ debugger
ms.assetid: 90d4e7db-06ea-4de0-a7f4-4f3751d50d93
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c5dcca9888f22aadb629bcd79a5eb73b39cddcfa
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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