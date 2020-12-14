---
description: 'Altre informazioni su: OLE-Related classi'
title: Classi correlate a OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE classes [MFC]
- OLE [MFC], classes
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
ms.openlocfilehash: c54ebbedabc2e44095d06b0e842f7c73d5dbb43e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244030"
---
# <a name="ole-related-classes"></a>Classi correlate a OLE

Queste classi forniscono numerosi servizi, che spaziano dalle eccezioni all'input e all'output di file.

[COleObjectFactory](reference/coleobjectfactory-class.md)<br/>
Utilizzata per creare elementi quando richiesti da altri contenitori. Questa classe funge da classe base per i tipi più specifici di factory, inclusi `COleTemplateServer`.

[COleMessageFilter](reference/colemessagefilter-class.md)<br/>
Utilizzata per gestire la concorrenza con chiamate LRPC (Lightweight Remote Procedure Call).

[COleStreamFile](reference/colestreamfile-class.md)<br/>
Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi. Questa classe (derivata da `CFile`) consente la serializzazione di MFC per utilizzare una struttura di archiviazione OLE.

[CRectTracker](reference/crecttracker-class.md)<br/>
Utilizzata per consentire lo spostamento, il ridimensionamento e il riorientamento degli elementi sul posto.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
