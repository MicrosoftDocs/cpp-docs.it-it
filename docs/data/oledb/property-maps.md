---
title: Mappe delle proprietà | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, properties
- maps, property
- property maps
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bbed70f7871cb215a944a5143793b26b4196d7bc
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50052752"
---
# <a name="property-maps"></a>Mappe delle proprietà

Oltre la sessione, set di righe e l'oggetto comando facoltativo, ogni provider supporta una o più proprietà. Queste proprietà sono definite nelle proprietà mappe contenute nei file di intestazione creati dalla creazione guidata Provider OLE DB. Ogni file di intestazione contiene una mappa per le proprietà nel gruppo di proprietà OLE DB definite per gli oggetti definiti in tale file. Il file di intestazione che contiene l'oggetto origine dati contiene inoltre il mapping di proprietà per il [proprietà DataSource](https://msdn.microsoft.com/library/ms724188). Session. h contiene il mapping di proprietà per il [le proprietà della sessione](/previous-versions/windows/desktop/ms714221). Gli oggetti rowset e comando si trovano in un unico file di intestazione denominato *projectname*RS. Queste proprietà appartengono le [proprietà set di righe](/previous-versions/windows/desktop/ms711252) gruppo.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)