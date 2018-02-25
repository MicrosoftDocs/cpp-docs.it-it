---
title: "Mapping di proprietà | Documenti Microsoft"
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
- OLE DB providers, properties
- maps, property
- property maps
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 020479236bd86659ee4df783bf2056613cfac753
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="property-maps"></a>Mappe delle proprietà
Oltre la sessione, set di righe e oggetto comando facoltativo, ogni provider supporta una o più proprietà. Queste proprietà sono definite in mappe delle proprietà contenute nel file di intestazione creati dalla creazione guidata Provider OLE DB. Ogni file di intestazione contiene una mappa per le proprietà del gruppo di proprietà OLE DB definiti per gli oggetti definiti in tale file. Il file di intestazione che contiene l'oggetto origine dati contiene inoltre il mapping di proprietà per il [le proprietà DataSource](https://msdn.microsoft.com/en-us/library/ms724188\(v=vs.140\).aspx). Session. h contiene il mapping di proprietà per il [le proprietà della sessione](https://msdn.microsoft.com/en-us/library/ms714221.aspx). Gli oggetti rowset e comando si trovano in un unico file di intestazione denominato *projectname*RS. Queste proprietà sono membri del [proprietà set di righe](https://msdn.microsoft.com/en-us/library/ms711252.aspx) gruppo.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)