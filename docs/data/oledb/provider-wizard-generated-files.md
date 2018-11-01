---
title: File del provider generati tramite procedura guidata
ms.date: 10/18/2018
helpviewer_keywords:
- OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
ms.openlocfilehash: c93618ebe9d3140864c2c47867ea970777c208b6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50580934"
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata

Il **Creazione guidata Provider OLE DB ATL** genera i file seguenti. Gli argomenti seguenti usano il nome abbreviato *Custom*, ma i nomi esatti del file dipendono dalle scelte effettuate durante la creazione del provider.

|Nome file|Descrizione|
|---------------|-----------------|
|*Custom*RS.cpp|Contiene l'helper comando `Execute` metodo e la mappa delle colonne del provider.|
|*Custom*DS.h|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping di proprietà dell'origine dati.|
|*Custom*RS|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping di proprietà per proprietà rowset e comando.|
|*Custom*Sess.h|Implementa l'oggetto sessione. Questo file di intestazione contiene il mapping di proprietà per proprietà della sessione.|
|*Custom*RGS|Contiene gli oggetti registrati generati per il **Creazione guidata Provider OLE DB**.|

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
