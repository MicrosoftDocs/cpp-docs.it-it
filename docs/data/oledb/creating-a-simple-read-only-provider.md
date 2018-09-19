---
title: Creazione di un Provider semplice in sola lettura | Microsoft Docs
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
ms.openlocfilehash: 9f951fba45b23b7e4dde92fc11f2faabb53bd43d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46101566"
---
# <a name="creating-a-simple-read-only-provider"></a>Creazione di un provider semplice in sola lettura

Dopo avere creato un provider OLE DB tramite la creazione guidata progetto ATL e creazione guidata Provider OLE DB ATL, è possibile aggiungere altre funzionalità che si desidera supportare. Inizia a progettare il provider esaminando il tipo di dati vengono inviati al consumatore e in quali condizioni. È particolarmente importante determinare se è necessario supportare i comandi, transazioni e altri oggetti facoltativi. Una buona progettazione fin dall'inizio offre una maggiore velocità di implementazione e di test.  
  
Nell'esempio è presentato in due parti:  
  
- Mostra la parte prima procedura [creare un provider semplice in sola lettura](../../data/oledb/implementing-the-simple-read-only-provider.md) che legge una coppia di stringhe.  
  
- Il secondo Mostra parte come [migliorare provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md) aggiungendo il `IRowsetLocate` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)