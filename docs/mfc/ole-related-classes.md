---
title: Classi correlate a OLE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE classes [MFC]
- OLE [MFC], classes
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f43dadaa4aaefa677106710d1adbcdf0e60be59d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411313"
---
# <a name="ole-related-classes"></a>Classi correlate a OLE

Queste classi forniscono numerosi servizi, che spaziano dalle eccezioni all'input e all'output di file.

[COleObjectFactory](../mfc/reference/coleobjectfactory-class.md)<br/>
Utilizzata per creare elementi quando richiesti da altri contenitori. Questa classe funge da classe base per i tipi più specifici di factory, inclusi `COleTemplateServer`.

[COleMessageFilter](../mfc/reference/colemessagefilter-class.md)<br/>
Utilizzata per gestire la concorrenza con chiamate LRPC (Lightweight Remote Procedure Call).

[COleStreamFile](../mfc/reference/colestreamfile-class.md)<br/>
Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi. Questa classe (derivata da `CFile`) consente la serializzazione di MFC per utilizzare una struttura di archiviazione OLE.

[CRectTracker](../mfc/reference/crecttracker-class.md)<br/>
Utilizzata per consentire lo spostamento, il ridimensionamento e il riorientamento degli elementi sul posto.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

