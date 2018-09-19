---
title: I file generati dalla procedura guidata del provider | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 26e20e0417e2253158930a8d3d055171fe767001
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108404"
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata

La creazione guidata Provider OLE DB ATL genera i file seguenti. Gli argomenti seguenti usano il nome breve "MyProvider", ma i nomi esatti del file dipendono dalle scelte effettuate durante la creazione del provider.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|MyProviderRS.cpp|Contiene l'helper comando `Execute` metodo e la mappa delle colonne del provider.|  
|MyProviderDS.h|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping di proprietà dell'origine dati.|  
|MyProviderRS.h|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping di proprietà per proprietà rowset e comando.|  
|MyProviderSess.h|Implementa l'oggetto sessione. Questo file di intestazione contiene il mapping di proprietà per proprietà della sessione.|  
|MyProvider.rgs|Contiene gli oggetti registrati generati dalla creazione guidata Provider OLE DB.|  
  
## <a name="see-also"></a>Vedere anche  

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)