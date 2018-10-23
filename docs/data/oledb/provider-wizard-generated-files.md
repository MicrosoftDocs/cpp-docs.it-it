---
title: I file generati dalla procedura guidata del provider | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
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
ms.openlocfilehash: f22c5e21d1f648a8235207713391306b24e0a6cf
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49807290"
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata

La creazione guidata Provider OLE DB ATL genera i file seguenti. Gli argomenti seguenti usano il nome abbreviato *Custom*, ma i nomi esatti del file dipendono dalle scelte effettuate durante la creazione del provider.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|*Custom*RS.cpp|Contiene l'helper comando `Execute` metodo e la mappa delle colonne del provider.|  
|*Custom*DS.h|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping di proprietà dell'origine dati.|  
|*Custom*RS|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping di proprietà per proprietà rowset e comando.|  
|*Custom*Sess.h|Implementa l'oggetto sessione. Questo file di intestazione contiene il mapping di proprietà per proprietà della sessione.|  
|*Custom*RGS|Contiene gli oggetti registrati generati dalla creazione guidata Provider OLE DB.|  
  
## <a name="see-also"></a>Vedere anche  

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)