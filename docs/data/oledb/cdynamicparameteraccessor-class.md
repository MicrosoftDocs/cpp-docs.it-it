---
title: CDynamicParameterAccessor (classe) | Documenti Microsoft
ms.custom: 
ms.date: 02/14/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CDynamicParameterAccessor
- ATL::CDynamicParameterAccessor
- CDynamicParameterAccessor
dev_langs:
- C++
helpviewer_keywords:
- CDynamicParameterAccessor class
ms.assetid: 5f22626e-e80d-491f-8b3b-cedc50331960
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5eaea3f682fc31c825849ba4d3b5b48166f085ef
ms.sourcegitcommit: 8ae12a602244a5853e941e5e8806e3545d876844
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2018
---
# <a name="cdynamicparameteraccessor-class"></a>CDynamicParameterAccessor (classe)

Simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ma Ottiene le informazioni sui parametri da impostare chiamando il [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
class CDynamicParameterAccessor : public CDynamicAccessor
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-cdynamicparameteraccessor.md)|Costruttore.|
|[GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md)|Recupera i dati del parametro dal buffer.|
|[GetParamCount](../../data/oledb/cdynamicparameteraccessor-getparamcount.md)|Recupera il numero di parametri nella funzione di accesso.|
|[GetParamIO](../../data/oledb/cdynamicparameteraccessor-getparamio.md)|Determina se il parametro specificato è un parametro di input o output.|
|[GetParamLength](../../data/oledb/cdynamicparameteraccessor-getparamlength.md)|Recupera la lunghezza del parametro specificato archiviato nel buffer.|
|[GetParamName](../../data/oledb/cdynamicparameteraccessor-getparamname.md)|Recupera il nome di un parametro specificato.|
|[GetParamStatus](../../data/oledb/cdynamicparameteraccessor-getparamstatus.md)|Recupera lo stato del parametro specificato archiviato nel buffer.|
|[GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md)|Recupera i dati string del parametro specificato archiviato nel buffer.|
|[GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md)|Recupera il tipo di dati di un parametro specificato.|
|[SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md)|Imposta il buffer usando i dati del parametro.|
|[SetParamLength](../../data/oledb/cdynamicparameteraccessor-setparamlength.md)|Imposta la lunghezza del parametro specificato archiviato nel buffer.|
|[SetParamStatus](../../data/oledb/cdynamicparameteraccessor-setparamstatus.md)|Imposta lo stato del parametro specificato archiviato nel buffer.|
|[SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md)|Imposta i dati string del parametro specificato archiviato nel buffer.|

## <a name="remarks"></a>Note

Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.

Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Per ottenere i dati dei parametri dal buffer, usare [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) e [GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).

Per un esempio che illustra l'utilizzo di questa classe per eseguire una stored procedure SQL Server e recuperare i valori dei parametri di output, vedere il [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) codice di esempio di [VCSamples Microsoft](https://github.com/Microsoft/VCSamples) repository in GitHub.

## <a name="requirements"></a>Requisiti

**Intestazione**: atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)  
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)  
[Classe CAccessor](../../data/oledb/caccessor-class.md)  
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)  
[Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)  
