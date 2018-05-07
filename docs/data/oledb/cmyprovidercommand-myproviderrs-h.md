---
title: CMyProviderCommand (MyProviderRS. H) | Documenti Microsoft
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
ms.openlocfilehash: 8c18742d9b3b1039033ad8d42939e0f5a4578fbb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmyprovidercommand-myproviderrsh"></a>CMyProviderCommand (MyProviderRS.H)
La `CMyProviderCommand` classe è l'implementazione per l'oggetto comando provider. Fornisce l'implementazione per il `IAccessor`, `ICommandText`, e **ICommandProperties** interfacce. Il `IAccessor` interfaccia è identico a quello nel set di righe. L'oggetto comando utilizza la funzione di accesso per specificare le associazioni per i parametri. Oggetto set di righe utilizzati per specificare le associazioni per le colonne di output. Il `ICommandText` interfaccia è un modo utile per specificare un comando in formato testo. Questo esempio viene utilizzato il `ICommandText` interfaccia in un secondo momento quando aggiunge codice personalizzato, viene eseguito l'override anche di `ICommand::Execute` metodo. Il **ICommandProperties** interfaccia gestisce tutte le proprietà per gli oggetti comando e set di righe.  
  
```  
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
  
 Il `IAccessor` interfaccia gestisce tutte le associazioni utilizzate in comandi e i set di righe. Il consumer chiama **IAccessor:: CreateAccessor** con una matrice di **DBBINDING** strutture. Ogni **DBBINDING** struttura contiene le informazioni sulle modalità di gestione le associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e quindi determina come devono essere trasferiti i dati e se tutte le conversioni sono necessarie. Il `IAccessor` interfaccia viene utilizzata nell'oggetto comando per gestire eventuali parametri nel comando.  
  
 L'oggetto comando fornisce anche un'implementazione di `IColumnsInfo`. OLE DB richiede il `IColumnsInfo` interfaccia. L'interfaccia consente al consumer di recuperare informazioni sui parametri dal comando. L'oggetto set di righe utilizza il `IColumnsInfo` interfaccia per restituire informazioni sulle colonne di output per il provider.  
  
 Il provider contiene inoltre un'interfaccia denominata `IObjectWithSite`. Il `IObjectWithSite` è stata implementata in ATL 2.0 e consente all'implementatore di passare le informazioni su se stesso al relativo elemento figlio. L'oggetto comando Usa il `IObjectWithSite` informazioni per indicare qualsiasi generate oggetti set di righe su chi li ha creati.  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)