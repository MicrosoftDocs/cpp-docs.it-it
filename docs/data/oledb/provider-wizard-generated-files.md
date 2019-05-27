---
title: File del provider generati tramite procedura guidata
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
ms.openlocfilehash: 0638680482546f56f26b70660ab43bd9848438a3
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707481"
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata

::: moniker range="vs-2019"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

La **Creazione guidata provider OLE DB ATL** genera i file seguenti. Gli argomenti seguenti usano il nome abbreviato *Custom*, ma i nomi di file esatti dipendono dalle scelte effettuate durante la creazione del provider.

|Nome file|Description|
|---------------|-----------------|
|*Custom*RS.cpp|Contiene il metodo hepler `Execute` del comando e il mapping delle colonne del provider.|
|*Custom*DS.h|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping delle proprietà dell'origine dati.|
|*Custom*RS.h|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping delle proprietà del set di righe e del comando.|
|*Custom*Sess.h|Implementa l'oggetto sessione. Questo file di intestazione contiene il mapping delle proprietà della sessione.|
|*Custom*.rgs|Contiene gli oggetti registrati generati dalla **Creazione guidata provider OLE DB**.|

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
