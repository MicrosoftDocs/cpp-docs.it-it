---
title: Creazione di un Provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6e590461d359c2ab2ee750f0393f6c2f9ec7ac95
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-the-provider"></a>Creazione di un provider
#### <a name="to-create-an-ole-db-provider-with-the-atl-ole-db-provider-wizard"></a>Per creare un provider OLE DB con la creazione guidata Provider OLE DB ATL  
  
1.  Fare clic sul progetto.  
  
2.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi classe**.  
  
3.  Nel **Aggiungi classe** la finestra di dialogo, seleziona il **Provider OLE DB ATL** icona e quindi fare clic su **aprire**.  
  
4.  Nella creazione guidata Provider OLE DB ATL immettere un nome breve per il provider nel **nome breve** casella. Gli argomenti seguenti di utilizzare il nome breve "MyProvider", ma è possibile utilizzare un altro nome. Le altre caselle Nome popolano in base al nome specificato.  
  
5.  Modificare le altre caselle di nome, se necessario. Oltre ai nomi di oggetto e il file, è possibile modificare le operazioni seguenti:  
  
    -   **Coclasse**: il nome utilizzato da COM per creare il provider.  
  
    -   **ProgID**: l'identificatore a livello di codice, che è una stringa di testo che può essere utilizzata invece di un GUID.  
  
    -   **Versione**: utilizzata con il ProgID e la coclasse per generare un ID di livello di codice dipendente dalla versione.  
  
6.  Scegliere **Fine**.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)