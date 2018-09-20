---
title: db_source | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.db_source
dev_langs:
- C++
helpviewer_keywords:
- db_source attribute
ms.assetid: 0ec8bbf7-ade2-4899-bf4c-8608b92779bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8faad93ae57e42e0e28bcb697ed300c11e766136
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46376915"
---
# <a name="dbsource"></a>db_source

Crea una connessione a un'origine dati.

## <a name="syntax"></a>Sintassi

```cpp
[ db_source(
   db_source,
   name,
   hresult
) ]
```

### <a name="parameters"></a>Parametri

*db_source*<br/>
La stringa di connessione utilizzata per la connessione all'origine dati. Per il formato della stringa di connessione, vedere [stringhe di connessione e i collegamenti dati](/previous-versions/windows/desktop/ms718376\(v=vs.85\)) il SDK in Microsoft Data Access Components (MDAC).

*name*<br/>
(Facoltativo) Quando si usa **db_source** in una classe *nome* è un'istanza di un oggetto origine dati che contiene la **db_source** attributo applicato (vedere l'esempio 1). Quando si usa **db_source** inline in un'implementazione di metodo *nome* è una variabile (locale al metodo) che può essere utilizzata per accedere ai dati di origine (vedere l'esempio 2). È passare questo *name* per il *source_name* parametro di `db_command` per associare l'origine dati a un comando.

*HRESULT*<br/>
(Facoltativo) Identifica la variabile che riceverà il valore HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

## <a name="remarks"></a>Note

**db_source** crea un' [CDataSource](../data/oledb/cdatasource-class.md) e un [CSession](../data/oledb/csession-class.md) oggetto, che insieme rappresentano una connessione con un'origine dati di OLE DB consumer.

Quando si usa **db_source** in una classe, il `CSession` oggetto diventa un membro della classe.

Quando si usa **db_source** in un metodo, verrà eseguito il codice inserito nell'ambito del metodo e il `CSession` oggetto viene creato come una variabile locale.

**db_source** aggiunge proprietà origine dati a una classe o all'interno di un metodo. Viene usato in combinazione con `db_command` (che accetta il *db_source* *name* parametro come relativo *source_name* parametro).

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore Rinomina la classe \_ *NomeClasse*della funzione di accesso, dove *NomeClasse* è il nome è stato assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.

Per un esempio di questo attributo usato in un'applicazione, vedere gli esempi [AtlAgent](https://github.com/Microsoft/VCSamples) e [MultiRead](https://github.com/Microsoft/VCSamples).

## <a name="example"></a>Esempio

Questo esempio viene chiamato **db_source** in una classe per creare una connessione all'origine dati `ds` utilizzando il database Northwind. `ds` è un handle per l'origine dati, che può essere utilizzato internamente nel `CMyCommand` classe.

```cpp
// db_source_1.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[
  db_source(L"my_connection_string", name="ds"),
  db_command(L"select * from Products")  
]
class CMyCommand {};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, membro, metodo, locale|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](../windows/ole-db-consumer-attributes.md)  
