---
title: CMyProviderSession (MyProviderSess. H) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- cmyprovidersession
- myprovidersess.h
dev_langs: C++
helpviewer_keywords:
- CMyProviderSession class in MyProviderSess.H
- OLE DB providers, wizard-generated files
ms.assetid: d37ad471-cf05-49c5-aa47-cd10824d777f
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3e2268e110df7a5111f6ccb0fa4dd4d3a2f4a9b8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cmyprovidersession-myprovidersessh"></a>CMyProviderSession (MyProviderSess.H)
MyProviderSess. H contiene la dichiarazione e l'implementazione per l'oggetto di sessione di OLE DB. L'oggetto origine dati crea l'oggetto di sessione e rappresenta una conversazione tra un provider e consumer. Più sessioni simultanee possono essere aperte per un'origine dati. L'elenco di ereditarietà per `CMyProviderSession` segue:  
  
```  
/////////////////////////////////////////////////////////////////////////  
// CMyProviderSession  
class ATL_NO_VTABLE CMyProviderSession :   
   public CComObjectRootEx<CComSingleThreadModel>,  
   public IGetDataSourceImpl<CMyProviderSession>,  
   public IOpenRowsetImpl<CMyProviderSession>,  
   public ISessionPropertiesImpl<CMyProviderSession>,  
   public IObjectWithSiteSessionImpl<CMyProviderSession>,  
   public IDBSchemaRowsetImpl<CMyProviderSession>,  
   public IDBCreateCommandImpl<CMyProviderSession, CMyProviderCommand>  
```  
  
 L'oggetto sessione eredita da **IGetDataSource**, `IOpenRowset`, **ISessionProperties**, e **IDBCreateCommand**. Il **IGetDataSource** interfaccia consente a una sessione di recuperare l'origine dati che li ha creati. Ciò è utile se si desidera ottenere le proprietà dall'origine dei dati che è stato creato o altre informazioni che può fornire l'origine dati. Il **ISessionProperties** interfaccia gestisce tutte le proprietà della sessione. Il `IOpenRowset` e **IDBCreateCommand** interfacce sono usate per le operazioni di database. Se il provider supporta i comandi, implementa la **IDBCreateCommand** interfaccia. Utilizzato per creare l'oggetto comando che è possibile eseguire i comandi. Il provider implementa sempre il `IOpenRowset` oggetto. Utilizzato per generare un semplice set di righe da un provider. È un set di righe predefinito (ad esempio, `"select * from mytable"`) da un provider.  
  
 La procedura guidata genera inoltre tre classi di sessione: `CMyProviderSessionColSchema`, `CMyProviderSessionPTSchema`, e `CMyProviderSessionTRSchema`. Queste sessioni vengono utilizzate per i set di righe dello schema. Set di righe dello schema consente al provider di restituire i metadati al consumer senza il consumer di dover eseguire una query o recuperare dati. Recupero dei metadati può essere molto più veloce rispetto alla capacità di un provider di ricerca.  
  
 La specifica OLE DB richiede che i provider che implementano il **IDBSchemaRowset** tipi di set di righe dello schema supporta tre interfaccia: **DBSCHEMA_COLUMNS**, **DBSCHEMA_PROVIDER_TYPES** , e `DBSCHEMA_TABLES`. La procedura guidata genera le implementazioni per ogni set di righe dello schema. Ogni classe generata dalla procedura guidata contiene un `Execute` metodo. In questo `Execute` metodo, è possibile restituire dati al provider sulle tabelle, colonne e tipi di dati che si supportano. In genere, questi dati sono noto in fase di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)