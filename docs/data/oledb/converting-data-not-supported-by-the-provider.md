---
title: La conversione dei dati non supportati dal Provider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB provider templates, unsupported data types
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d0be19345ff6c425cfbc020f2096ca82680586d8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095466"
---
# <a name="converting-data-not-supported-by-the-provider"></a>Conversione di dati non supportati dal provider
Quando il consumer richiede un tipo di dati che non è supportato dal provider, il modello di provider OLE DB il codice per `IRowsetImpl::GetData` chiama Msdadc per convertire il tipo di dati.  
  
 Se si implementa un'interfaccia come `IRowsetChange` che richiede la conversione dei dati, è possibile chiamare Msdaenum. dll per eseguire la conversione. Utilizzare `GetData`, definito in Atldb. h, ad esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)