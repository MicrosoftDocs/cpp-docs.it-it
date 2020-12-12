---
description: 'Altre informazioni su: CCustomCommand (Customers. H)'
title: CCustomCommand (CustomRS.H)
ms.date: 10/22/2018
f1_keywords:
- cmyprovidercommand
- ccustomcommand
helpviewer_keywords:
- OLE DB providers, wizard-generated files
- CMyProviderCommand class in MyProviderRS.H
- CCustomCommand class in CustomRS.H
ms.assetid: b30b956e-cc91-4cf5-9fe6-f8b1ce9cc2a5
ms.openlocfilehash: 35b0e1a1628920a85343a52ce4a003302468884b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170503"
---
# <a name="ccustomcommand-customrsh"></a>CCustomCommand (CustomRS.H)

La `CCustomCommand` classe è l'implementazione per l'oggetto comando del provider. Fornisce l'implementazione per le `IAccessor` interfacce, `ICommandText` e `ICommandProperties` . L' `IAccessor` interfaccia è uguale a quella del set di righe. L'oggetto Command utilizza la funzione di accesso per specificare le associazioni per i parametri. L'oggetto set di righe li utilizza per specificare le associazioni per le colonne di output. L' `ICommandText` interfaccia è un modo utile per specificare un comando testuale. Questo esempio usa l' `ICommandText` interfaccia in un secondo momento quando aggiunge codice personalizzato; esegue anche l'override del `ICommand::Execute` metodo. L' `ICommandProperties` interfaccia gestisce tutte le proprietà per gli oggetti comando e set di righe.

```cpp
// CCustomCommand
class ATL_NO_VTABLE CCustomCommand :
class ATL_NO_VTABLE CCustomCommand :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IAccessorImpl<CCustomCommand>,
   public ICommandTextImpl<CCustomCommand>,
   public ICommandPropertiesImpl<CCustomCommand>,
   public IObjectWithSiteImpl<CCustomCommand>,
   public IConvertTypeImpl<CCustomCommand>,
   public IColumnsInfoImpl<CCustomCommand>
```

L' `IAccessor` interfaccia gestisce tutti i binding utilizzati nei comandi e nei set di righe. Il consumer chiama `IAccessor::CreateAccessor` con una matrice di `DBBINDING` strutture. Ogni `DBBINDING` struttura contiene le informazioni sul modo in cui devono essere gestite le associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e quindi determina il modo in cui i dati devono essere trasferiti e se sono necessarie conversioni. L' `IAccessor` interfaccia viene utilizzata nell'oggetto Command per gestire tutti i parametri nel comando.

L'oggetto Command fornisce inoltre un'implementazione di `IColumnsInfo` . OLE DB richiede l' `IColumnsInfo` interfaccia. L'interfaccia consente al consumer di recuperare informazioni sui parametri dal comando. L'oggetto set di righe utilizza l' `IColumnsInfo` interfaccia per restituire al provider informazioni sulle colonne di output.

Il provider contiene anche un'interfaccia denominata `IObjectWithSite` . L' `IObjectWithSite` interfaccia è stata implementata in ATL 2,0 e consente all'implementatore di passare le informazioni relative a se stesso al relativo elemento figlio. L'oggetto Command utilizza le `IObjectWithSite` informazioni per indicare a tutti gli oggetti set di righe generati chi li ha creati.

## <a name="see-also"></a>Vedi anche

[File di Wizard-Generated del provider](../../data/oledb/provider-wizard-generated-files.md)
