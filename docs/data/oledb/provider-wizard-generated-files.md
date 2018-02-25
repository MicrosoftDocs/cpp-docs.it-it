---
title: File generato dalla creazione guidata provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9cfcce4242cf985b8ffa50b9df234d609cfe7f3f
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata
La creazione guidata Provider OLE DB ATL genera i seguenti file. Gli argomenti seguenti di utilizzare il nome breve "MyProvider", ma i nomi esatti del file dipenderanno la scelta effettuata quando si crea il provider.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|MyProviderRS.cpp|Contiene il supporto di comandi `Execute` metodo e la mappa delle colonne del provider.|  
|MyProviderDS.h|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping di proprietà dell'origine dati.|  
|MyProviderRS.h|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping di proprietà per proprietà rowset e comando.|  
|MyProviderSess.h|Implementa l'oggetto di sessione. Questo file di intestazione contiene il mapping di proprietà per proprietà della sessione.|  
|MyProvider.rgs|Contiene gli oggetti registrati generati dalla creazione guidata Provider OLE DB.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)