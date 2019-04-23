---
title: Metodi generati mediante la Creazione guidata consumer
ms.date: 11/04/2016
helpviewer_keywords:
- OpenAll method
- attribute-injected classes and methods
- wizard-generated classes and methods
- OLE DB consumers, wizard-generated classes and methods
- methods [C++], OLE DB Consumer Wizard-generated
- CloseDataSource method
- consumer wizard-generated classes and methods
- OpenDataSource method
- CloseAll method
- OpenRowset method
- GetRowsetProperties method
ms.assetid: d80ee51c-8bb3-4dca-8760-5808e0fb47b4
ms.openlocfilehash: 60ca0af25a0556c4a3d42d91ba3b0c52daa5f530
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59034241"
---
# <a name="consumer-wizard-generated-methods"></a>Metodi generati mediante la Creazione guidata consumer

Il **Creazione guidata Consumer OLE DB ATL** e il **Creazione guidata applicazione MFC** generare alcune funzioni di cui è necessario essere consapevoli. Alcuni metodi sono implementati in modo diverso nei progetti con gli attributi, quindi esistono alcune limitazioni; ogni caso è illustrato più avanti. Per informazioni sulla visualizzazione di codice inserito, vedere [Debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).

- `OpenAll` l'origine dati, set di righe, aperta e attiva i segnalibri se disponibili.

- `CloseAll` Chiude tutti i set di righe e rilascia tutte le esecuzioni di comandi.

- `OpenRowset` viene chiamato da `OpenAll` per aprire i set di righe o un set di righe del consumer.

- `GetRowsetProperties` Recupera un puntatore alla proprietà del set di righe impostato con le proprietà che possono essere impostati.

- `OpenDataSource` Apre l'origine dati utilizzando la stringa di inizializzazione specificato nella **proprietà di Data Link** nella finestra di dialogo.

- `CloseDataSource` Chiude l'origine dati in modo appropriato.

## <a name="openall-and-closeall"></a>OpenAll e CloseAll

```cpp
HRESULT OpenAll();

void CloseAll();
```

Nell'esempio seguente viene illustrato come è possibile richiamare `OpenAll` e `CloseAll` quando si esegue più volte lo stesso comando. Confrontare l'esempio di codice nel [CCommand](../../data/oledb/ccommand-close.md), che viene illustrata una variante che chiama `Close` e `ReleaseCommand` invece di `CloseAll`.

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

### <a name="remarks"></a>Note

Se si definisce una `HasBookmark` metodo, il `OpenAll` codice imposta il `DBPROP_IRowsetLocate` proprietà; assicurarsi eseguire questa operazione solo se il provider supporta tale proprietà.

## <a name="openrowset"></a>OpenRowset

```cpp
// OLE DB Template version:
HRESULT OpenRowset(DBPROPSET* pPropSet = NULL)
// Attribute-injected version:
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand = NULL);
```

`OpenAll` chiama questo metodo per aprire il set di righe o di un set di righe del consumer. In genere, non è necessario chiamare `OpenRowset` a meno che non si desidera lavorare con più origini dati, le sessioni/rowset. `OpenRowset` viene dichiarata nel file di intestazione classe di comando o di tabella:

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

Gli attributi implementano questo metodo in modo diverso. Questa versione accetta un oggetto sessione e una stringa di comando che per impostazione predefinita la stringa di comando specificata nella db_command, sebbene sia possibile passare uno diverso. Se si definisce una `HasBookmark` metodo, il `OpenRowset` codice imposta il `DBPROP_IRowsetLocate` proprietà; assicurarsi eseguire questa operazione solo se il provider supporta tale proprietà.

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

Questo metodo recupera un puntatore al set di proprietà del set di righe. è possibile utilizzare questo puntatore per impostare proprietà quali `DBPROP_IRowsetChange`. `GetRowsetProperties` viene usato come indicato di seguito nella classe di record utente. È possibile modificare il codice seguente per impostare le proprietà del set di righe aggiuntive:

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet)
{
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
}
```

### <a name="remarks"></a>Note

È consigliabile non definire globale `GetRowsetProperties` (metodo) potrebbe essere in conflitto con quello definito dalla procedura guidata. Si tratta di un metodo generato dalla procedura guidata che si ottiene con i progetti di modelli e con attributi. gli attributi non inseriscono il codice.

## <a name="opendatasource-and-closedatasource"></a>OpenDataSource e CloseDataSource

```cpp
HRESULT OpenDataSource();

void CloseDataSource();
```

### <a name="remarks"></a>Note

La procedura guidata definisce i metodi `OpenDataSource` e `CloseDataSource`; `OpenDataSource` chiamate [CDataSource:: OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un consumer OLE DB tramite la procedura guidata](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)