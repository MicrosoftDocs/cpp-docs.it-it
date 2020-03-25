---
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
ms.openlocfilehash: afa8571173117a23962eb84f6fa5b4cf2c3c46e7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211757"
---
# <a name="ccustomcommand-customrsh"></a>CCustomCommand (CustomRS.H)

La classe `CCustomCommand` è l'implementazione per l'oggetto comando del provider. Fornisce l'implementazione per le interfacce `IAccessor`, `ICommandText`e `ICommandProperties`. L'interfaccia `IAccessor` è uguale a quella del set di righe. L'oggetto Command utilizza la funzione di accesso per specificare le associazioni per i parametri. L'oggetto set di righe li utilizza per specificare le associazioni per le colonne di output. L'interfaccia `ICommandText` è un modo utile per specificare un comando testuale. Questo esempio usa l'interfaccia `ICommandText` in un secondo momento quando aggiunge codice personalizzato; esegue anche l'override del metodo `ICommand::Execute`. L'interfaccia `ICommandProperties` gestisce tutte le proprietà per gli oggetti comando e set di righe.

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

L'interfaccia `IAccessor` gestisce tutti i binding utilizzati nei comandi e nei set di righe. Il consumer chiama `IAccessor::CreateAccessor` con una matrice di strutture di `DBBINDING`. Ogni `DBBINDING` struttura contiene le informazioni sul modo in cui devono essere gestite le associazioni di colonna (ad esempio tipo e lunghezza). Il provider riceve le strutture e quindi determina il modo in cui i dati devono essere trasferiti e se sono necessarie conversioni. L'interfaccia `IAccessor` viene utilizzata nell'oggetto Command per gestire tutti i parametri nel comando.

L'oggetto Command fornisce inoltre un'implementazione di `IColumnsInfo`. OLE DB richiede l'interfaccia `IColumnsInfo`. L'interfaccia consente al consumer di recuperare informazioni sui parametri dal comando. L'oggetto set di righe utilizza l'interfaccia `IColumnsInfo` per restituire al provider informazioni sulle colonne di output.

Il provider contiene anche un'interfaccia denominata `IObjectWithSite`. L'interfaccia `IObjectWithSite` è stata implementata in ATL 2,0 e consente all'implementatore di passare le informazioni relative a se stesso al relativo elemento figlio. L'oggetto Command usa le informazioni `IObjectWithSite` per indicare a tutti gli oggetti set di righe generati chi li ha creati.

## <a name="see-also"></a>Vedere anche

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)
