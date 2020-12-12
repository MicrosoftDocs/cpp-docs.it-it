---
description: 'Altre informazioni su: determinazione dinamica delle colonne restituite al consumer'
title: Determinazione dinamica delle colonne restituite al consumer
ms.date: 10/26/2018
helpviewer_keywords:
- bookmarks [C++], dynamically determining columns
- dynamically determining columns [C++]
ms.assetid: 58522b7a-894e-4b7d-a605-f80e900a7f5f
ms.openlocfilehash: fd70164edff5b9267e01a891a143920ac4e60a35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287567"
---
# <a name="dynamically-determining-columns-returned-to-the-consumer"></a>Determinazione dinamica delle colonne restituite al consumer

Le macro PROVIDER_COLUMN_ENTRY in genere gestiscono la `IColumnsInfo::GetColumnsInfo` chiamata. Tuttavia, poiché un consumer può scegliere di utilizzare i segnalibri, il provider deve essere in grado di modificare le colonne restituite a seconda che il consumer chieda un segnalibro.

Per gestire la `IColumnsInfo::GetColumnsInfo` chiamata, eliminare la PROVIDER_COLUMN_MAP, che definisce una funzione `GetColumnInfo` , dal `CCustomWindowsFile` record utente in RS. h *personalizzato* e sostituirla con la definizione per la propria `GetColumnInfo` funzione:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.H
class CCustomWindowsFile
{
public:
   DWORD dwBookmark;
   static const int iSize = 256;
   TCHAR szCommand[iSize];
   TCHAR szText[iSize];
   TCHAR szCommand2[iSize];
   TCHAR szText2[iSize];
  
   static ATLCOLUMNINFO* GetColumnInfo(void* pThis, ULONG* pcCols);
   bool operator==(const CCustomWindowsFile& am)
   {
      return (lstrcmpi(szCommand, am.szCommand) == 0);
   }
};
```

Implementare quindi la `GetColumnInfo` funzione in RS. cpp *personalizzato*, come illustrato nel codice seguente.

`GetColumnInfo` Verifica innanzitutto se la proprietà OLE DB `DBPROP_BOOKMARKS` è impostata. Per ottenere la proprietà, `GetColumnInfo` utilizza un puntatore ( `pRowset` ) nell'oggetto set di righe. Il `pThis` puntatore rappresenta la classe che ha creato il set di righe, ovvero la classe in cui è archiviato il mapping delle proprietà. `GetColumnInfo` Cast il `pThis` puntatore a un `RCustomRowset` puntatore.

Per verificare la presenza della `DBPROP_BOOKMARKS` proprietà, `GetColumnInfo` utilizza l' `IRowsetInfo` interfaccia, che è possibile ottenere chiamando `QueryInterface` sull' `pRowset` interfaccia. In alternativa, è possibile usare invece un metodo [CComQIPtr](../../atl/reference/ccomqiptr-class.md) di ATL.

```cpp
////////////////////////////////////////////////////////////////////
// CustomRS.cpp
ATLCOLUMNINFO* CCustomWindowsFile::GetColumnInfo(void* pThis, ULONG* pcCols)
{
   static ATLCOLUMNINFO _rgColumns[5];
   ULONG ulCols = 0;
  
   // Check the property flag for bookmarks; if it is set, set the zero
   // ordinal entry in the column map with the bookmark information.
   CCustomRowset* pRowset = (CCustomRowset*) pThis;
   CComQIPtr<IRowsetInfo, &IID_IRowsetInfo> spRowsetProps = pRowset;
  
   CDBPropIDSet set(DBPROPSET_ROWSET);
   set.AddPropertyID(DBPROP_BOOKMARKS);
   DBPROPSET* pPropSet = NULL;
   ULONG ulPropSet = 0;
   HRESULT hr;
  
   if (spRowsetProps)
      hr = spRowsetProps->GetProperties(1, &set, &ulPropSet, &pPropSet);
  
   if (pPropSet)
   {
      CComVariant var = pPropSet->rgProperties[0].vValue;
      CoTaskMemFree(pPropSet->rgProperties);
      CoTaskMemFree(pPropSet);
  
      if (SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE))
      {
         ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD),
         DBTYPE_BYTES, 0, 0, GUID_NULL, CCustomWindowsFile, dwBookmark,
         DBCOLUMNFLAGS_ISBOOKMARK)
         ulCols++;
      }
   }
  
   // Next, set the other columns up.
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Command"), 1, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szCommand)
   ulCols++;
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Text"), 2, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szText)
   ulCols++;
  
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Command2"), 3, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szCommand2)
   ulCols++;
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Text2"), 4, 256, DBTYPE_STR, 0xFF, 0xFF,
      GUID_NULL, CCustomWindowsFile, szText2)
   ulCols++;
  
   if (pcCols != NULL)
      *pcCols = ulCols;
  
   return _rgColumns;
}
```

In questo esempio viene utilizzata una matrice statica per conservare le informazioni sulla colonna. Se il consumer non desidera la colonna del segnalibro, una voce nella matrice non viene utilizzata. Per gestire le informazioni, è necessario creare due macro di matrice: ADD_COLUMN_ENTRY e ADD_COLUMN_ENTRY_EX. ADD_COLUMN_ENTRY_EX accetta un parametro aggiuntivo, *Flags*, necessario se si designa una colonna bookmark.

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

Nella `GetColumnInfo` funzione, la macro del segnalibro viene usata come segue:

```cpp
ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD),
   DBTYPE_BYTES, 0, 0, GUID_NULL, CAgentMan, dwBookmark,
   DBCOLUMNFLAGS_ISBOOKMARK)
```

È ora possibile compilare ed eseguire il provider migliorato. Per testare il provider, modificare il consumer di test come descritto in [implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md). Eseguire il consumer di test con il provider e verificare che il consumer di test recuperi le stringhe corrette dal provider.

## <a name="see-also"></a>Vedi anche

[Miglioramento del provider di Read-Only semplice](../../data/oledb/enhancing-the-simple-read-only-provider.md)<br/>
