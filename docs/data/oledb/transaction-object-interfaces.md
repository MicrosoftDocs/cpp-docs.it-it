---
title: Interfacce dell'oggetto Transaction | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- interfaces, OLE DB
- transaction object interfaces
- OLE DB, interfaces
- OLE DB providers, transaction support
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5731d4d187fa02b0b68c9e4b764bf9aeb1f653dc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="transaction-object-interfaces"></a>Interfacce dell'oggetto Transaction
Oggetto di transazione definisce un'unità atomica di lavoro su un'origine dati e determina come le unità di lavoro correlati tra loro. Questo oggetto non è supportato direttamente tramite i modelli di provider OLE DB (ovvero, è necessario creare un oggetto personalizzato).  
  
 Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di transazione.  
  
|Interfaccia|Obbligatorio?|Implementata dai modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Obbligatorio|No|  
|[ITransaction](https://msdn.microsoft.com/en-us/library/ms723053.aspx)|Obbligatorio|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/en-us/library/ms715816.aspx)|Facoltativo|No|  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)