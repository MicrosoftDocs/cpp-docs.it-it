---
title: Conversione di dati non supportati dal provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB provider templates, unsupported data types
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
ms.openlocfilehash: a53781f71a55dfb07dc996e5e25644d9337e4c63
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50473439"
---
# <a name="converting-data-not-supported-by-the-provider"></a>Conversione di dati non supportati dal provider

Quando il consumer richiede un tipo di dati che non è supportato dal provider, il modello di provider OLE DB di codice per `IRowsetImpl::GetData` chiama Msdadc per convertire il tipo di dati.

Se si implementa un'interfaccia simile alla `IRowsetChange` che richiede la conversione dei dati, è possibile chiamare Msdaenum. dll per eseguire la conversione. Usare `GetData`, definito in Atldb. h, ad esempio.

## <a name="see-also"></a>Vedere anche

[Uso dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)