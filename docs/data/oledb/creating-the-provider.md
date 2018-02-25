---
title: Creazione di un Provider | Documenti Microsoft
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
- OLE DB providers, creating
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5521215560c84c19f7b661f0c9662752374b68e4
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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