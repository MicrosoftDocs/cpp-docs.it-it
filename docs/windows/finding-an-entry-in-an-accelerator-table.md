---
title: Ricerca di una voce in una tabella di tasti di scelta rapida (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- searching, in accelarator tables
- accelerator tables [C++], finding entries
ms.assetid: 98146b12-571e-48ea-a660-eb6b1834a79b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 01785329b23ced8dd9ea5b22387f418173815ac8
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44314976"
---
# <a name="finding-an-entry-in-an-accelerator-table"></a>Ricerca di una voce in una tabella dei tasti di scelta rapida

### <a name="to-find-an-entry-in-an-open-accelerator-table"></a>Per cercare una voce in una tabella dei tasti di scelta rapida aperta

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Fare clic su un'intestazione di colonna per ordinare il contenuto della colonna in ordine alfabetico. Ad esempio, fare clic su **ID** per visualizzare tutti gli ID della tabella dei tasti di scelta rapida in ordine alfabetico.

È quindi possibile analizzare l'elenco e individuare la voce.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)