---
title: CCustomSession (CustomSess.H) | Microsoft Docs
ms.custom: ''
ms.date: 10/22/2018
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- cmyprovidersession
- myprovidersess.h
- ccustomsession
- customsess.h
dev_langs:
- C++
helpviewer_keywords:
- CMyProviderSession class in MyProviderSess.H
- OLE DB providers, wizard-generated files
- CCustomSession class in CustomSess.H
ms.assetid: d37ad471-cf05-49c5-aa47-cd10824d777f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5f31e3275ea341c2617ef54f88fc591a5400e15e
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49807497"
---
# <a name="ccustomsession-customsessh"></a>CCustomSession (CustomSess.H)

*Custom*Sess.H contiene la dichiarazione e implementazione per l'oggetto di sessione di OLE DB. L'oggetto origine dati crea l'oggetto sessione e rappresenta una conversazione tra un utente e il provider. È possibile aprire per un'origine dati diverse sessioni simultanee. L'elenco di ereditarietà per `CCustomSession` segue:  
  
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
  
L'oggetto sessione eredita da `IGetDataSource`, `IOpenRowset`, `ISessionProperties`, e `IDBCreateCommand`. Il `IGetDataSource` interfaccia consente a una sessione per recuperare l'origine dati che l'ha creata. Ciò è utile se si desidera ottenere le proprietà dall'origine dei dati che è stato creato o che l'origine dati può fornire altre informazioni. Il `ISessionProperties` interfaccia gestisce tutte le proprietà della sessione. Il `IOpenRowset` e `IDBCreateCommand` interfacce vengono usate per eseguire le operazioni di database. Se il provider supporta i comandi, implementa la `IDBCreateCommand` interfaccia. Utilizzato per creare l'oggetto comando che è possibile eseguire i comandi. Il provider implementa sempre il `IOpenRowset` oggetto. Viene utilizzato per generare un semplice set di righe da un provider. È un set di righe predefinito (ad esempio, `"select * from mytable"`) da un provider.  
  
La procedura guidata genera inoltre le tre classi di sessione: `CCustomSessionColSchema`, `CCustomSessionPTSchema`, e `CCustomSessionTRSchema`. Queste sessioni vengono usate per i set di righe dello schema. I set di righe dello schema consente al provider di restituire i metadati al consumer senza il consumer di dover eseguire una query o recuperare dati. Il recupero dei metadati può essere molto più veloce rispetto alla capacità di un provider di ricerca.  
  
La specifica OLE DB richiede che i provider che implementano il `IDBSchemaRowset` tipi di set di righe dello schema supporta tre interfaccia: DBSCHEMA_COLUMNS DBSCHEMA_PROVIDER_TYPES e DBSCHEMA_TABLES. La procedura guidata genera le implementazioni per ogni set di righe dello schema. Ogni classe generata dalla procedura guidata contiene un `Execute` (metodo). In questo `Execute` metodo, è possibile restituire dati al provider sui quali tabelle, colonne e tipi di dati supportate. In genere, questi dati sono noto in fase di compilazione.  
  
## <a name="see-also"></a>Vedere anche  

[File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)