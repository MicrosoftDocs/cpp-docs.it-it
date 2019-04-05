---
title: Mappe delle proprietà
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB providers, properties
- maps, property
- property maps
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
ms.openlocfilehash: 9df98dc85c9242693319542cea0730341d87a052
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59035374"
---
# <a name="property-maps"></a>Mappe delle proprietà

Con la sessione, set di righe e l'oggetto comando facoltativo, ogni provider supporta una o più proprietà. Queste proprietà sono definite nelle mappe di proprietà archiviate nei file di intestazione creati dal **Creazione guidata Provider OLE DB**. Ogni file di intestazione contiene una mappa per le proprietà nel gruppo di proprietà OLE DB definite per gli oggetti definiti in tale file. Il file di intestazione che contiene l'oggetto origine dati contiene inoltre il mapping di proprietà per il [proprietà DataSource](https://msdn.microsoft.com/library/ms724188). `Session.h` contiene il mapping di proprietà per il [le proprietà della sessione](/previous-versions/windows/desktop/ms714221(v=vs.85)). Gli oggetti rowset e comando sono in un unico file di intestazione denominato *projectname*RS. Queste proprietà appartengono le [proprietà set di righe](/previous-versions/windows/desktop/ms711252(v=vs.85)) gruppo.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
