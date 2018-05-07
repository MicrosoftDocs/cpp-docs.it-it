---
title: Creazione di un Provider semplice in sola lettura | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, creating
- OLE DB provider templates, creating providers
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2662a071f443967b921c4a8db27713bc7c3e8bb4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura
Dopo avere creato un provider OLE DB utilizzando la creazione guidata progetto ATL e la creazione guidata Provider OLE DB ATL, è possibile aggiungere altre funzionalità che si desidera supportare. Iniziare a progettare il provider esaminando il tipo di dati saranno inviati al consumer e le condizioni. È particolarmente importante determinare se è necessario supportare i comandi, transazioni e altri oggetti facoltativi. Una buona progettazione di velocizzare l'implementazione e testing.  
  
 Nell'esempio verrà presentata in due parti:  
  
-   Il primo Mostra parte come [creare un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) che legge una coppia di stringhe.  
  
-   Il secondo Mostra parte come [migliorare un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo il `IRowsetLocate` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)