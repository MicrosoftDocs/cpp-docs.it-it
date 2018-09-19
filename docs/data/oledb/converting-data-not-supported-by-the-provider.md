---
title: Conversione di dati non supportati dal Provider | Microsoft Docs
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
ms.openlocfilehash: fa9fed1f7c779efc7104ec8138d618b85aeb2a33
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081741"
---
# <a name="converting-data-not-supported-by-the-provider"></a>Conversione di dati non supportati dal provider

Quando il consumer richiede un tipo di dati che non è supportato dal provider, il modello di provider OLE DB di codice per `IRowsetImpl::GetData` chiama Msdadc per convertire il tipo di dati.  
  
Se si implementa un'interfaccia simile alla `IRowsetChange` che richiede la conversione dei dati, è possibile chiamare Msdaenum. dll per eseguire la conversione. Usare `GetData`, definito in Atldb. h, ad esempio.  
  
## <a name="see-also"></a>Vedere anche  

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)