---
description: 'Altre informazioni su: mappe delle proprietà'
title: Mappe delle proprietà
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB providers, properties
- maps, property
- property maps
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
ms.openlocfilehash: 30b277451d871de45902661f7b7e56cbc7409c97
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316908"
---
# <a name="property-maps"></a>Mappe delle proprietà

Con la sessione, il set di righe e l'oggetto Command facoltativo, ogni provider supporta una o più proprietà. Queste proprietà sono definite nelle mappe delle proprietà archiviate nei file di intestazione creati dalla **procedura guidata del Provider OLE DB**. Ogni file di intestazione contiene una mappa per le proprietà del gruppo di proprietà OLE DB definito per l'oggetto o gli oggetti definiti in tale file. Il file di intestazione che contiene l'oggetto origine dati contiene anche il mapping delle proprietà per le [Proprietà](/previous-versions/windows/desktop/ms724188(v=vs.85))dell'origine dati. `Session.h` contiene il mapping delle proprietà per le [proprietà della sessione](/previous-versions/windows/desktop/ms714221(v=vs.85)). Il set di righe e gli oggetti Command si trovano in un unico file di intestazione, denominato *NomeProgetto* RS. h. Queste proprietà sono membri del gruppo di [proprietà del set di righe](/previous-versions/windows/desktop/ms711252(v=vs.85)) .

## <a name="see-also"></a>Vedi anche

[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
