---
description: 'Altre informazioni su: conversione dei dati non supportati dal provider'
title: Conversione di dati non supportati dal provider
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB provider templates, unsupported data types
ms.assetid: f495e50f-530a-4fab-ab54-e0c359785845
ms.openlocfilehash: 9fb449247ff40118e89dbebee5f43a1208a1f181
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323366"
---
# <a name="converting-data-not-supported-by-the-provider"></a>Conversione di dati non supportati dal provider

Quando il consumer richiede un tipo di dati non supportato dal provider, il codice del modello del provider OLE DB per `IRowsetImpl::GetData` chiama Msdadc.dll per convertire il tipo di dati.

Se si implementa un'interfaccia come `IRowsetChange` che richiede la conversione dei dati, è possibile chiamare Msdaenum.dll per eseguire la conversione. Usare `GetData` , definito in ATLDB. h, come esempio.

## <a name="see-also"></a>Vedi anche

[Uso dei modelli di provider di OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)
