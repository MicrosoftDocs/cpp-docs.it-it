---
description: 'Altre informazioni su: provider Wizard-Generated file'
title: File del provider generati tramite procedura guidata
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
ms.openlocfilehash: 95c9641f10acef4a55b8de15752eb125e75d874a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316895"
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata

::: moniker range="msvc-160"

La Creazione guidata provider OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

La **Creazione guidata provider OLE DB ATL** genera i file seguenti. Gli argomenti seguenti usano il nome abbreviato *Custom*, ma i nomi di file esatti dipendono dalle scelte effettuate durante la creazione del provider.

|Nome file|Descrizione|
|---------------|-----------------|
|*Custom* RS.cpp|Contiene il metodo hepler `Execute` del comando e il mapping delle colonne del provider.|
|*Custom* DS.h|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping delle proprietà dell'origine dati.|
|*Custom* RS.h|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping delle proprietà del set di righe e del comando.|
|*Custom* Sess.h|Implementa l'oggetto sessione. Questo file di intestazione contiene il mapping delle proprietà della sessione.|
|*Custom*.rgs|Contiene gli oggetti registrati generati dalla **Creazione guidata provider OLE DB**.|

::: moniker-end

## <a name="see-also"></a>Vedi anche

[Creazione di un provider di OLE DB](../../data/oledb/creating-an-ole-db-provider.md)<br/>
