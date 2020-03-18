---
title: Classi correlate a OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE classes [MFC]
- OLE [MFC], classes
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
ms.openlocfilehash: dfcc07b3fbd0c5badce8e397f4d52bc7d8d3028c
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447601"
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
