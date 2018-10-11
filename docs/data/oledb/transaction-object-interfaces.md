---
title: Interfacce dell'oggetto transazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- interfaces, OLE DB
- transaction object interfaces
- OLE DB, interfaces
- OLE DB providers, transaction support
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: caf57ab85b7a37b8e43230dc9bcf1caf031f7a78
ms.sourcegitcommit: 3a141cf07b5411d5f1fdf6cf67c4ce928cf389c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2018
ms.locfileid: "49083788"
---
# <a name="transaction-object-interfaces"></a>Interfacce dell'oggetto Transaction

Oggetto transazione definisce un'unità atomica di lavoro su un'origine dati e determina le unità di lavoro correlazione tra loro. Questo oggetto non è supportato direttamente tramite i modelli di provider OLE DB (vale a dire, è necessario creare il proprio oggetto).  
  
Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di transazione.  
  
|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|  
|---------------|---------------|--------------------------------------|  
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Obbligatorio|No|  
|[ITransaction](/previous-versions/windows/desktop/ms723053)|Obbligatorio|No|  
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816)|Facoltativo|No|  
  
## <a name="see-also"></a>Vedere anche  

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)