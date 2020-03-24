---
title: Supporto dei bookmark nel provider
ms.date: 11/04/2016
helpviewer_keywords:
- IRowsetLocate class, provider support for bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- IRowsetLocate class
- OLE DB providers, bookmark support
ms.assetid: 1b14ccff-4f76-462e-96ab-1aada815c377
ms.openlocfilehash: e8ea949653c7e62f39ab9d1b181c419cf51fe3cb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209833"
---
# <a name="provider-support-for-bookmarks"></a>Supporto dei bookmark nel provider

Nell'esempio riportato in questo argomento viene aggiunta l'interfaccia `IRowsetLocate` alla classe `CCustomRowset`. In quasi tutti i casi, si inizia aggiungendo un'interfaccia a un oggetto COM esistente. È quindi possibile testarlo aggiungendo altre chiamate dai modelli consumer. L'esempio illustra come eseguire le operazioni seguenti:

- Aggiungere un'interfaccia a un provider.

- Determinare in modo dinamico le colonne da restituire al consumer.

- Aggiungere il supporto per i segnalibri.

L'interfaccia `IRowsetLocate` eredita dall'interfaccia `IRowset` . Per aggiungere l'interfaccia `IRowsetLocate`, ereditare `CCustomRowset` da [IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md).

L'aggiunta dell'interfaccia `IRowsetLocate` è leggermente diversa dalla maggior parte delle interfacce. Per rendere la riga vtable, i modelli di provider OLE DB hanno un parametro di modello per gestire l'interfaccia derivata. Il codice seguente mostra il nuovo elenco di ereditarietà:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

// CCustomRowset
class CCustomRowset : public CRowsetImpl< CCustomRowset,
      CTextData, CCustomCommand, CAtlArray<CTextData>,
      CSimpleRow,
          IRowsetLocateImpl<CCustomRowset, IRowsetLocate>>
```

Sono stati aggiunti il quarto, il quinto e il sesto parametro. In questo esempio vengono usate le impostazioni predefinite per il quarto e il quinto parametro, ma si specifica `IRowsetLocateImpl` come sesto parametro. `IRowsetLocateImpl` è una classe modello OLE DB che accetta due parametri di modello: questi consentono di associare l'interfaccia `IRowsetLocate` alla classe `CCustomRowset`. Per aggiungere la maggior parte delle interfacce, è possibile ignorare questo passaggio e passare a quello successivo. In questo modo è necessario gestire solo le interfacce `IRowsetLocate` e `IRowsetScroll`.

È quindi necessario indicare all'`CCustomRowset` di chiamare `QueryInterface` per l'interfaccia `IRowsetLocate`. Aggiungere la riga `COM_INTERFACE_ENTRY(IRowsetLocate)` alla mappa. La mappa dell'interfaccia per `CCustomRowset` dovrebbe apparire come illustrato nel codice seguente:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

typedef CRowsetImpl< CCustomRowset, CTextData, CCustomCommand, CAtlArray<CTextData>, CSimpleRow, IRowsetLocateImpl<CCustomRowset, IRowsetLocate>> _RowsetBaseClass;

BEGIN_COM_MAP(CCustomRowset)
   COM_INTERFACE_ENTRY(IRowsetLocate)
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)
END_COM_MAP()
```

È anche necessario associare la mappa alla classe `CRowsetImpl`. Aggiungere nella macro COM_INTERFACE_ENTRY_CHAIN per eseguire l'hook nella mappa `CRowsetImpl`. Inoltre, creare un typedef denominato `RowsetBaseClass` costituito dalle informazioni sull'ereditarietà. Questo typedef è arbitrario e può essere ignorato.

Infine, gestire la chiamata `IColumnsInfo::GetColumnsInfo`. Per eseguire questa operazione, in genere si usano le macro PROVIDER_COLUMN_ENTRY. Tuttavia, un consumer potrebbe voler usare i segnalibri. È necessario essere in grado di modificare le colonne restituite dal provider a seconda che il consumer chieda un segnalibro.

Per gestire la chiamata `IColumnsInfo::GetColumnsInfo`, eliminare la mappa PROVIDER_COLUMN nella classe `CTextData`. La macro PROVIDER_COLUMN_MAP definisce una funzione `GetColumnInfo`. Definire una funzione `GetColumnInfo` personalizzata. La dichiarazione di funzione dovrebbe essere simile alla seguente:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.H

class CTextData
{
   ...
     // NOTE: Be sure you removed the PROVIDER_COLUMN_MAP!
   static ATLCOLUMNINFO* GetColumnInfo(CCustomRowset* pThis,
        ULONG* pcCols);
   static ATLCOLUMNINFO* GetColumnInfo(CCustomCommand* pThis,
        ULONG* pcCols);
...
};
```

Implementare quindi la funzione `GetColumnInfo` nel file *Custom*RS. cpp come indicato di seguito:

```cpp
////////////////////////////////////////////////////////////////////
// CustomRS.cpp

template <class TInterface>
ATLCOLUMNINFO* CommonGetColInfo(IUnknown* pPropsUnk, ULONG* pcCols)
{
   static ATLCOLUMNINFO _rgColumns[5];
   ULONG ulCols = 0;

   CComQIPtr<TInterface> spProps = pPropsUnk;

   CDBPropIDSet set(DBPROPSET_ROWSET);
   set.AddPropertyID(DBPROP_BOOKMARKS);
   DBPROPSET* pPropSet = NULL;
   ULONG ulPropSet = 0;
   HRESULT hr;

   if (spProps)
      hr = spProps->GetProperties(1, &set, &ulPropSet, &pPropSet);

   // Check the property flag for bookmarks, if it is set, set the
// zero ordinal entry in the column map with the bookmark
// information.

   if (pPropSet)
   {
      CComVariant var = pPropSet->rgProperties[0].vValue;
      CoTaskMemFree(pPropSet->rgProperties);
      CoTaskMemFree(pPropSet);

      if ((SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE)))
      {
         ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0,
                     sizeof(DWORD), DBTYPE_BYTES,
            0, 0, GUID_NULL, CAgentMan, dwBookmark,
                        DBCOLUMNFLAGS_ISBOOKMARK)
         ulCols++;
      }
   }

   // Next set the other columns up.
   ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Field1"), 1, 16, DBTYPE_STR,
          0xFF, 0xFF, GUID_NULL, CTextData, szField1)
   ulCols++;
   ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Field2"), 2, 16, DBTYPE_STR,
       0xFF, 0xFF, GUID_NULL, CTextData, szField2)
   ulCols++;

   if (pcCols != NULL)
      *pcCols = ulCols;

   return _rgColumns;
}

ATLCOLUMNINFO* CTextData::GetColumnInfo(CCustomCommand* pThis,
     ULONG* pcCols)
{
   return CommonGetColInfo<ICommandProperties>(pThis->GetUnknown(),
        pcCols);
}

ATLCOLUMNINFO* CAgentMan::GetColumnInfo(RUpdateRowset* pThis, ULONG* pcCols)
{
   return CommonGetColInfo<IRowsetInfo>(pThis->GetUnknown(), pcCols);
}
```

`GetColumnInfo` verifica prima di tutto se è impostata una proprietà denominata `DBPROP_IRowsetLocate`. OLE DB dispone di proprietà per ognuna delle interfacce facoltative disattivate dall'oggetto set di righe. Se il consumer vuole usare una di queste interfacce facoltative, imposta una proprietà su true. Il provider può quindi verificare questa proprietà e intraprendere un'azione speciale basata su di essa.

Nell'implementazione di si ottiene la proprietà utilizzando il puntatore all'oggetto Command. Il puntatore `pThis` rappresenta il set di righe o la classe di comando. Poiché i modelli vengono usati qui, è necessario passarli come puntatore **void** o il codice non viene compilato.

Specificare una matrice statica in cui conservare le informazioni sulla colonna. Se il consumer non desidera la colonna del segnalibro, una voce nella matrice viene sprecata. È possibile allocare questa matrice in modo dinamico, ma è necessario assicurarsi di eliminarla in modo corretto. Questo esempio definisce e usa le macro ADD_COLUMN_ENTRY e ADD_COLUMN_ENTRY_EX per inserire le informazioni nella matrice. È possibile aggiungere le macro alla RS *personalizzata*. File H, come illustrato nel codice seguente:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

#define ADD_COLUMN_ENTRY(ulCols, name, ordinal, colSize, type, precision, scale, guid, dataClass, member) \
   _rgColumns[ulCols].pwszName = (LPOLESTR)name; \
   _rgColumns[ulCols].pTypeInfo = (ITypeInfo*)NULL; \
   _rgColumns[ulCols].iOrdinal = (ULONG)ordinal; \
   _rgColumns[ulCols].dwFlags = 0; \
   _rgColumns[ulCols].ulColumnSize = (ULONG)colSize; \
   _rgColumns[ulCols].wType = (DBTYPE)type; \
   _rgColumns[ulCols].bPrecision = (BYTE)precision; \
   _rgColumns[ulCols].bScale = (BYTE)scale; \
   _rgColumns[ulCols].cbOffset = offsetof(dataClass, member);

#define ADD_COLUMN_ENTRY_EX(ulCols, name, ordinal, colSize, type, precision, scale, guid, dataClass, member, flags) \
   _rgColumns[ulCols].pwszName = (LPOLESTR)name; \
   _rgColumns[ulCols].pTypeInfo = (ITypeInfo*)NULL; \
   _rgColumns[ulCols].iOrdinal = (ULONG)ordinal; \
   _rgColumns[ulCols].dwFlags = flags; \
   _rgColumns[ulCols].ulColumnSize = (ULONG)colSize; \
   _rgColumns[ulCols].wType = (DBTYPE)type; \
   _rgColumns[ulCols].bPrecision = (BYTE)precision; \
   _rgColumns[ulCols].bScale = (BYTE)scale; \
   _rgColumns[ulCols].cbOffset = offsetof(dataClass, member); \
   memset(&(_rgColumns[ulCols].columnid), 0, sizeof(DBID)); \
   _rgColumns[ulCols].columnid.uName.pwszName = (LPOLESTR)name;
```

Per testare il codice nel consumer, è necessario apportare alcune modifiche al gestore `OnRun`. La prima modifica alla funzione è che si aggiunge codice per aggiungere una proprietà al set di proprietà. Il codice imposta la proprietà `DBPROP_IRowsetLocate` su true, indicando quindi al provider che si desidera la colonna bookmark. Il codice del gestore `OnRun` dovrebbe apparire come segue:

```cpp
//////////////////////////////////////////////////////////////////////
// TestProv Consumer Application in TestProvDlg.cpp

void CTestProvDlg::OnRun()
{
   CCommand<CAccessor<CProvider>> table;
   CDataSource source;
   CSession   session;

   if (source.Open("Custom.Custom.1", NULL, NULL, NULL,
          NULL) != S_OK)
      return;

   if (session.Open(source) != S_OK)
      return;

   CDBPropSet propset(DBPROPSET_ROWSET);
   propset.AddProperty(DBPROP_IRowsetLocate, true);
   if (table.Open(session, _T("c:\\public\\testprf2\\myData.txt"),
          &propset) != S_OK)
      return;

   CBookmark<4> tempBookmark;
   ULONG ulCount=0;
   while (table.MoveNext() == S_OK)
   {

      DBCOMPARE compare;
      if (ulCount == 2)
         tempBookmark = table.bookmark;

HRESULT hr = table.Compare(table.dwBookmark, table.dwBookmark,
                 &compare);
      if (FAILED(hr))
         ATLTRACE(_T("Compare failed: 0x%X\n"), hr);
      else
         _ASSERTE(compare == DBCOMPARE_EQ);

      m_ctlString1.AddString(table.szField1);
      m_ctlString2.AddString(table.szField2);
      ulCount++;
   }

   table.MoveToBookmark(tempBookmark);
   m_ctlString1.AddString(table.szField1);
   m_ctlString2.AddString(table.szField2);
}
```

Il ciclo **while** contiene il codice per chiamare il metodo `Compare` nell'interfaccia `IRowsetLocate`. Il codice necessario passa sempre perché si sta confrontando esattamente gli stessi segnalibri. Archiviare anche un segnalibro in una variabile temporanea per poterlo usare al termine del ciclo **while** per chiamare la funzione `MoveToBookmark` nei modelli consumer. La funzione `MoveToBookmark` chiama il metodo `GetRowsAt` in `IRowsetLocate`.

È anche necessario aggiornare il record utente nel consumer. Aggiungere una voce nella classe per gestire un segnalibro e una voce nel COLUMN_MAP:

```cpp
///////////////////////////////////////////////////////////////////////
// TestProvDlg.cpp

class CProvider
{
// Attributes
public:
   CBookmark<4>    bookmark;  // Add this line
   char   szCommand[16];
   char   szText[256];

   // Binding Maps
BEGIN_ACCESSOR_MAP(CProvider, 1)
   BEGIN_ACCESSOR(0, true)   // auto accessor
      BOOKMARK_ENTRY(bookmark)  // Add this line
      COLUMN_ENTRY(1, szField1)
      COLUMN_ENTRY(2, szField2)
   END_ACCESSOR()
END_ACCESSOR_MAP()
};
```

Una volta aggiornato il codice, dovrebbe essere possibile compilare ed eseguire il provider con l'interfaccia `IRowsetLocate`.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)
