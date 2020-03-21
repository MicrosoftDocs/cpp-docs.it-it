---
title: CCustomSession (CustomSess.H)
ms.date: 10/22/2018
f1_keywords:
- cmyprovidersession
- myprovidersess.h
- ccustomsession
- customsess.h
helpviewer_keywords:
- CMyProviderSession class in MyProviderSess.H
- OLE DB providers, wizard-generated files
- CCustomSession class in CustomSess.H
ms.assetid: d37ad471-cf05-49c5-aa47-cd10824d777f
ms.openlocfilehash: 4775f21c1e0fa7666d24b4d6a55e099bc6ae55a2
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80079753"
---
# <a name="ccustomsession-customsessh"></a>CCustomSession (CustomSess.H)

*Personalizzata* Sess. H contiene la dichiarazione e l'implementazione per l'oggetto OLE DB sessione. L'oggetto origine dati crea l'oggetto sessione e rappresenta una conversazione tra un consumer e un provider. È possibile aprire diverse sessioni simultanee per un'origine dati. L'elenco di ereditarietà per `CCustomSession` segue:

```cpp
/////////////////////////////////////////////////////////////////////////
// CCustomSession
class ATL_NO_VTABLE CCustomSession :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IGetDataSourceImpl<CCustomSession>,
   public IOpenRowsetImpl<CCustomSession>,
   public ISessionPropertiesImpl<CCustomSession>,
   public IObjectWithSiteSessionImpl<CCustomSession>,
   public IDBSchemaRowsetImpl<CCustomSession>,
   public IDBCreateCommandImpl<CCustomSession, CCustomCommand>
```

L'oggetto Session eredita da `IGetDataSource`, `IOpenRowset`, `ISessionProperties`e `IDBCreateCommand`. L'interfaccia `IGetDataSource` consente a una sessione di recuperare l'origine dati che l'ha creata. Questa operazione è utile se è necessario ottenere proprietà dall'origine dati creata o da altre informazioni che l'origine dati è in grado di fornire. L'interfaccia `ISessionProperties` gestisce tutte le proprietà della sessione. Le interfacce `IOpenRowset` e `IDBCreateCommand` vengono utilizzate per eseguire il lavoro del database. Se il provider supporta i comandi, implementa l'interfaccia `IDBCreateCommand`. Viene usato per creare l'oggetto Command che può eseguire comandi. Il provider implementa sempre l'oggetto `IOpenRowset`. Viene usato per generare un set di righe da un provider. Si tratta di un set di righe predefinito, ad esempio `"select * from mytable"`, da un provider.

La procedura guidata genera anche tre classi di sessione: `CCustomSessionColSchema`, `CCustomSessionPTSchema`e `CCustomSessionTRSchema`. Queste sessioni vengono utilizzate per i set di righe dello schema. I set di righe dello schema consentono al provider di restituire i metadati al consumer senza che l'utente debba eseguire una query o recuperare i dati. Il recupero dei metadati può essere molto più rapido rispetto alla ricerca delle funzionalità di un provider.

La specifica OLE DB richiede che i provider che implementano l'interfaccia `IDBSchemaRowset` supportino tre tipi di set di righe dello schema: DBSCHEMA_COLUMNS, DBSCHEMA_PROVIDER_TYPES e DBSCHEMA_TABLES. La procedura guidata genera implementazioni per ogni set di righe dello schema. Ogni classe generata dalla procedura guidata contiene un metodo `Execute`. In questo `Execute` metodo è possibile restituire i dati al provider per informazioni sulle tabelle, le colonne e i tipi di dati supportati. Questi dati sono noti in fase di compilazione.

## <a name="see-also"></a>Vedere anche

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)<br/>
