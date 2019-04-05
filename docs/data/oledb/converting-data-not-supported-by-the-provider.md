---
title: Conversione di dati non supportati dal provider
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB provider templates, unsupported data types
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
ms.openlocfilehash: e60f6cd4f7dca1ed3e176cabefc42f69946436a4
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033839"
---
# <a name="converting-data-not-supported-by-the-provider"></a>Conversione di dati non supportati dal provider

Quando il consumer richiede un tipo di dati che non è supportato dal provider, il modello di provider OLE DB di codice per `IRowsetImpl::GetData` chiama Msdadc per convertire il tipo di dati.

Se si implementa un'interfaccia simile alla `IRowsetChange` che richiede la conversione dei dati, è possibile chiamare Msdaenum. dll per eseguire la conversione. Usare `GetData`, definito in Atldb. h, ad esempio.

## <a name="see-also"></a>Vedere anche

[Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)