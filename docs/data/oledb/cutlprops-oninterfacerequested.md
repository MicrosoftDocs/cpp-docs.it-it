---
title: 'CUtlProps:: Oninterfacerequested | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CUtlProps
dev_langs: C++
helpviewer_keywords: OnInterfaceRequested method
ms.assetid: a5e1a879-cff3-4e01-b902-2249a152984f
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c458eaf7c1e41ade5d29fa020bacfebb2b278e82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cutlpropsoninterfacerequested"></a>CUtlProps::OnInterfaceRequested
Gestisce le richieste di un'interfaccia facoltativa quando un consumer chiama un metodo in uno degli oggetti interfacce di creazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      virtual HRESULT CUtlPropsBase::OnInterfaceRequested(  
   REFIID riid  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 [in] IID per l'interfaccia richiesta. Per ulteriori informazioni, vedere la descrizione del `riid` parametro di `ICommand::Execute` nel *riferimento per programmatori OLE DB* (nel *SDK di MDAC*).  
  
## <a name="remarks"></a>Note  
 **OnInterfaceRequested** gestisce le richieste di consumer di un'interfaccia facoltativa quando un consumer chiama un metodo in uno degli oggetti interfacce di creazione (ad esempio **IDBCreateSession**, **IDBCreateCommand**, `IOpenRowset`, o `ICommand`). Imposta la proprietà OLE DB corrispondente per l'interfaccia richiesta. Ad esempio, se il consumer richiede **IID_IRowsetLocate**, **OnInterfaceRequested** imposta il **DBPROP_IRowsetLocate** interfaccia. In questo modo mantiene lo stato corretto durante la creazione di set di righe.  
  
 Questo metodo viene chiamato quando il consumer chiama **IOpenRowset:: OPENROWSET** o `ICommand::Execute`.  
  
 Se un utente apre un oggetto e richiede un'interfaccia facoltativa, il provider deve impostare la proprietà associata all'interfaccia per `VARIANT_TRUE`. Per consentire l'elaborazione di proprietà specifiche, **OnInterfaceRequested** viene chiamato prima che il provider **Execute** metodo viene chiamato. Per impostazione predefinita, **OnInterfaceRequested** gestisce le interfacce seguenti:  
  
-   `IRowsetLocate`  
  
-   `IRowsetChange`  
  
-   `IRowsetUpdate`  
  
-   **IConnectionPointContainer**  
  
-   `IRowsetScroll`  
  
 Se si desidera gestire le altre interfacce, eseguire l'override di questa funzione nella classe di origine, sessione, comando o set di righe di dati per le funzioni di processo. La sostituzione deve passare attraverso le interfacce di proprietà normale set/get per garantire che le proprietà si imposta alcuna proprietà concatenate (vedere [OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)