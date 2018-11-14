---
title: Mappe delle proprietà
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB providers, properties
- maps, property
- property maps
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
ms.openlocfilehash: 2d01c2f0d7fb581f9f7e93c1ec100e465a6d92f3
ms.sourcegitcommit: c40469825b6101baac87d43e5f4aed6df6b078f5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2018
ms.locfileid: "51556473"
---
# <a name="property-maps"></a>Mappe delle proprietà

Con la sessione, set di righe e l'oggetto comando facoltativo, ogni provider supporta una o più proprietà. Queste proprietà sono definite nelle mappe di proprietà archiviate nei file di intestazione creati dal **Creazione guidata Provider OLE DB**. Ogni file di intestazione contiene una mappa per le proprietà nel gruppo di proprietà OLE DB definite per gli oggetti definiti in tale file. Il file di intestazione che contiene l'oggetto origine dati contiene inoltre il mapping di proprietà per il [proprietà DataSource](https://msdn.microsoft.com/library/ms724188). `Session.h` contiene il mapping di proprietà per il [le proprietà della sessione](https://docs.microsoft.com/previous-versions/windows/desktop/ms714221(v=vs.85)). Gli oggetti rowset e comando sono in un unico file di intestazione denominato *projectname*RS. Queste proprietà appartengono le [proprietà set di righe](https://docs.microsoft.com/previous-versions/windows/desktop/ms711252(v=vs.85)) gruppo.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
