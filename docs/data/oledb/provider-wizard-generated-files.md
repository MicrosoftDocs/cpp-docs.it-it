---
title: File del provider generati tramite procedura guidata
ms.date: 10/18/2018
helpviewer_keywords:
- OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
ms.openlocfilehash: a9a706463326249135a55bc907cb8a664a3ca808
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037091"
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
