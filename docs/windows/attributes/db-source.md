---
title: db_source (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.db_source
helpviewer_keywords:
- db_source attribute
ms.assetid: 0ec8bbf7-ade2-4899-bf4c-8608b92779bc
ms.openlocfilehash: f17a4ea183a24f7bf4e88137f4536ca082efdf85
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831385"
---
# <a name="db_source"></a>db_source

Crea una connessione a un'origine dati.

## <a name="syntax"></a>Sintassi

```cpp
[ db_source(db_source, name, hresult) ]
```

### <a name="parameters"></a>Parametri

*db_source*<br/>
Stringa di connessione utilizzata per la connessione all'origine dati. Per il formato della stringa di connessione, vedere la pagina relativa alle [stringhe di connessione e ai collegamenti dati](/previous-versions/windows/desktop/ms718376(v=vs.85)) nell'SDK di Microsoft Data Access Components (MDAC).

*nome*<br/>
Opzionale Quando si usa **db_source** in una classe, il *nome* è un'istanza di un oggetto origine dati a cui è applicato l'attributo **db_source** (vedere l'esempio 1). Quando si usa **db_source** inline in un'implementazione del metodo, il *nome* è una variabile (locale al metodo) che può essere usata per accedere all'origine dati (vedere l'esempio 2). Questo *nome* viene passato al parametro *source_name* di `db_command` per associare l'origine dati a un comando.

*HRESULT*<br/>
(Facoltativo) Identifica la variabile che riceverà l'HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

## <a name="remarks"></a>Osservazioni

**db_source** crea un oggetto [CDataSource](../../data/oledb/cdatasource-class.md) e un oggetto [CSession](../../data/oledb/csession-class.md) che insieme rappresentano una connessione con un'origine dati OLE DB consumer.

Quando si usa **db_source** in una classe, l' `CSession` oggetto diventa un membro della classe.

Quando si usa **db_source** in un metodo, il codice inserito verrà eseguito all'interno dell'ambito del metodo e l' `CSession` oggetto viene creato come variabile locale.

**db_source** aggiunge le proprietà dell'origine dati a una classe o all'interno di un metodo. Viene usato insieme a `db_command` (che accetta il parametro del *db_source* *nome* del db_source come parametro di *source_name* ).

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse*Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse*Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

Per un esempio di questo attributo usato in un'applicazione, vedere [MultiRead](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer).

## <a name="example"></a>Esempio

In questo esempio viene chiamato **db_source** su una classe per creare una connessione all'origine dati `ds` utilizzando il database Northwind. `ds` è un handle per l'origine dati, che può essere utilizzato internamente alla `CMyCommand` classe.

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`** , membro, metodo, locale|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)
