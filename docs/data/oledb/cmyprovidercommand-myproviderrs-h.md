---
title: CMyProviderCommand (MyProviderRS. H) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- cmyprovidercommand
- myproviderrs.h
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderCommand class in MyProviderRS.H
ms.assetid: b30b956e-cc91-4cf5-9fe6-f8b1ce9cc2a5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 919455c1f0e1bae0491226e2f2d0f53bb35f7ad8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46046602"
---
# <a name="cmyprovidercommand-myproviderrsh"></a>CMyProviderCommand (MyProviderRS.H)

Il `CMyProviderCommand` classe è l'implementazione per l'oggetto provider di comandi. Fornisce l'implementazione per il `IAccessor`, `ICommandText`, e `ICommandProperties` interfacce. Il `IAccessor` interfaccia è identica a quella del set di righe. L'oggetto comando Usa la funzione di accesso per specificare le associazioni per i parametri. L'oggetto set di righe li utilizza per specificare le associazioni per le colonne di output. Il `ICommandText` interfaccia è un modo utile per specificare un comando in formato testo. Questo esempio Usa la `ICommandText` quando si aggiunge codice personalizzato di interfaccia in un secondo momento; viene anche eseguito l'override di `ICommand::Execute` (metodo). Il `ICommandProperties` interfaccia gestisce tutte le proprietà per gli oggetti comando e set di righe.  
  
```cpp  
// CMyProviderCommand  
class ATL_NO_VTABLE CMyProviderCommand :   
class ATL_NO_VTABLE CMyProviderCommand :   
   public CComObjectRootEx<CComSingleThreadModel>,  
   public IAccessorImpl<CMyProviderCommand>,  
   public ICommandTextImpl<CMyProviderCommand>,  
   public ICommandPropertiesImpl<CMyProviderCommand>,  
   public IObjectWithSiteImpl<CMyProviderCommand>,  
   public IConvertTypeImpl<CMyProviderCommand>,  
   public IColumnsInfoImpl<CMyProviderCommand>  
```  
  
Il `IAccessor` interfaccia gestisce tutti i binding utilizzati in comandi e i set di righe. Il consumer chiama `IAccessor::CreateAccessor` con una matrice di `DBBINDING` strutture. Ogni `DBBINDING` struttura contiene le informazioni sul modo in cui le associazioni di colonna devono essere gestite (ad esempio tipo e lunghezza). Il provider riceve le strutture e quindi determina come devono essere trasferiti i dati e se sono necessarie tutte le conversioni. Il `IAccessor` interfaccia viene utilizzata nell'oggetto comando per gestire eventuali parametri nel comando.  
  
L'oggetto comando fornisce anche un'implementazione di `IColumnsInfo`. OLE DB richiede il `IColumnsInfo` interfaccia. L'interfaccia consente al consumer di recuperare informazioni sui parametri del comando. L'oggetto set di righe utilizza la `IColumnsInfo` interfaccia per restituire informazioni sulle colonne di output per il provider.  
  
Il provider contiene anche un'interfaccia denominata `IObjectWithSite`. Il `IObjectWithSite` è stata implementata in 2.0 ATL e consente all'implementatore di passare le informazioni su se stesso al relativo elemento figlio. L'oggetto comando Usa il `IObjectWithSite` informazioni per indicare qualsiasi generati oggetti set di righe su chi li ha creati.  
  
## <a name="see-also"></a>Vedere anche  

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)