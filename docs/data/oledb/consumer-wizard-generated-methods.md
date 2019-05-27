---
title: Metodi generati mediante la Creazione guidata consumer
ms.date: 05/09/2019
helpviewer_keywords:
- OLE DB consumers, wizard-generated classes and methods
ms.assetid: d80ee51c-8bb3-4dca-8760-5808e0fb47b4
ms.openlocfilehash: 5d5c7aa680ca6b764e2ee9710e46cf6fa3af1c89
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707720"
---
# <a name="consumer-wizard-generated-methods"></a>Metodi generati mediante la Creazione guidata consumer

::: moniker range="vs-2019"

La Creazione guidata consumer OLE DB ATL non è disponibile in Visual Studio 2019 e versioni successive. È comunque possibile aggiungere la funzionalità manualmente.

::: moniker-end

::: moniker range="<=vs-2017"

La **Creazione guidata consumer OLE DB ATL** e la **Creazione guidata applicazione MFC** generano alcune funzioni di cui è consigliabile tenere conto. Alcuni metodi vengono implementati in modo diverso nei progetti con attributi e di conseguenza esistono alcune limitazioni. Ogni caso viene descritto di seguito. Per informazioni sulla visualizzazione di codice inserito, vedere [Debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).

- `OpenAll` apre l'origine dati o i set di righe e attiva segnalibri se disponibili.

- `CloseAll` chiude tutti i set di righe aperti e rilascia tutte le esecuzioni di comandi.

- Il metodo `OpenRowset` viene chiamato da `OpenAll` per aprire il o i set di righe del consumer.

- `GetRowsetProperties` recupera un puntatore alla proprietà del set di righe impostata con le proprietà che possono essere impostate.

- `OpenDataSource` apre l'origine dati usando la stringa di inizializzazione specificata nella finestra di dialogo **Proprietà di Data Link**.

- `CloseDataSource` chiude l'origine dati in modo appropriato.

## <a name="openall-and-closeall"></a>OpenAll e CloseAll

```cpp
HRESULT OpenAll();

void CloseAll();
```

L'esempio seguente mostra come chiamare `OpenAll` e `CloseAll` quando si esegue più volte lo stesso comando. Confrontare l'esempio di codice in [CCommand::Close](../../data/oledb/ccommand-close.md), che mostra una variazione che chiama `Close` e `ReleaseCommand` invece di `CloseAll`.

```cpp
int main(int argc, char* argv[])
{
   HRESULT hr;

   hr = CoInitialize(NULL);

   CCustOrdersDetail rs;      // Your CCommand-derived class
   rs.m_OrderID = 10248;      // Open order 10248
   hr = rs.OpenAll();         // (Open also executes the command)
   hr = rs.MoveFirst();         // Move to the first row and print it
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );

   // Close the first command execution
   rs.Close();

   rs.m_OrderID = 10249;      // Open order 10249 (a new order)
   hr = rs.Open();            // (Open also executes the command)
   hr = rs.MoveFirst();         // Move to the first row and print it
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );

   // Close the second command execution;
   // Instead of rs.CloseAll() you could call
   // rs.Close() and rs.ReleaseCommand():
   rs.CloseAll();

   CoUninitialize();
   return 0;
}
```

### <a name="remarks"></a>Osservazioni

Se si definisce un metodo `HasBookmark`, il codice `OpenAll` imposta la proprietà `DBPROP_IRowsetLocate`. Assicurarsi di eseguire questa operazione solo se il provider supporta la proprietà.

## <a name="openrowset"></a>OpenRowset

```cpp
// OLE DB Template version:
HRESULT OpenRowset(DBPROPSET* pPropSet = NULL)
// Attribute-injected version:
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand = NULL);
```

`OpenAll` chiama questo metodo per aprire il o i set di righe nel consumer. In genere, non è necessario chiamare `OpenRowset`, a meno che non si voglia usare più origini dati/sessioni/set di righe. Il metodo `OpenRowset` viene dichiarato nel file di intestazione di classe del comando o della tabella:

```cpp
// OLE DB Template version:
HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)
{
   HRESULT hr = Open(m_session, NULL, pPropSet);
   #ifdef _DEBUG
   if(FAILED(hr))
      AtlTraceErrorRecords(hr);
   #endif
   return hr;
}
```

Gli attributi implementano questo metodo in modo diverso. Questa versione accetta un oggetto sessione e una stringa di comando che per impostazione predefinita è la stringa di comando specificata in db_command, ma è possibile passarne una diversa. Se si definisce un metodo `HasBookmark`, il codice `OpenRowset` imposta la proprietà `DBPROP_IRowsetLocate`. Assicurarsi di eseguire questa operazione solo se il provider supporta la proprietà.

```cpp
// Attribute-injected version:
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand=NULL)
{

   DBPROPSET *pPropSet = NULL;
   CDBPropSet propset(DBPROPSET_ROWSET);
   __if_exists(HasBookmark)

   {
      propset.AddProperty(DBPROP_IRowsetLocate, true);
      pPropSet= &propset;
      }
...
}
```

## <a name="getrowsetproperties"></a>GetRowsetProperties

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet);
```

Questo metodo recupera un puntatore al set di proprietà del set di righe. È possibile usare questo puntatore per impostare proprietà come `DBPROP_IRowsetChange`. Il metodo `GetRowsetProperties` viene usato nella classe di record utente nel modo seguente. È possibile modificare questo codice per impostare altre proprietà del set di righe:

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet)
{
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
}
```

### <a name="remarks"></a>Osservazioni

Non è consigliabile definire un metodo `GetRowsetProperties` globale, perché potrebbe entrare in conflitto con quello definito dalla procedura guidata. Questo è un metodo generato dalla procedura guidata che si ottiene con progetti con modelli e con attributi. Gli attributi non inseriscono questo codice.

## <a name="opendatasource-and-closedatasource"></a>OpenDataSource e CloseDataSource

```cpp
HRESULT OpenDataSource();

void CloseDataSource();
```

### <a name="remarks"></a>Osservazioni

La procedura guidata definisce i metodi `OpenDataSource` e `CloseDataSource`. `OpenDataSource` chiama [CDataSource::OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md).

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)