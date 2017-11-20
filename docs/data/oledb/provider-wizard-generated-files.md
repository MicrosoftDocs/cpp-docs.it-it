---
title: File generato dalla creazione guidata provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: OLE DB providers, wizard-generated files
ms.assetid: 6e1ac94b-eb90-4abf-82b3-06944b947ebc
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 24da0ab4b3ab27cdb9a70c0f9cc05e3ca86e117d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="provider-wizard-generated-files"></a>File del provider generati tramite procedura guidata
La creazione guidata Provider OLE DB ATL genera i seguenti file. Gli argomenti seguenti di utilizzare il nome breve "MyProvider", ma i nomi esatti del file dipenderanno la scelta effettuata quando si crea il provider.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|MyProviderRS. cpp|Contiene il supporto di comandi `Execute` metodo e la mappa delle colonne del provider.|  
|MyProviderDS. H|Implementa l'oggetto origine dati. Questo file di intestazione contiene il mapping di proprietà dell'origine dati.|  
|MyProviderRS. H|Implementa gli oggetti comando e set di righe. Questo file di intestazione contiene il mapping di proprietà per proprietà rowset e comando.|  
|MyProviderSess. H|Implementa l'oggetto di sessione. Questo file di intestazione contiene il mapping di proprietà per proprietà della sessione.|  
|MyProvider|Contiene gli oggetti registrati generati dalla creazione guidata Provider OLE DB.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)