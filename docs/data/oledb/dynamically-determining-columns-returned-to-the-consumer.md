---
title: Determinazione dinamica delle colonne restituite al consumer
ms.date: 10/26/2018
helpviewer_keywords:
- bookmarks [C++], dynamically determining columns
- dynamically determining columns [C++]
ms.assetid: 58522b7a-894e-4b7d-a605-f80e900a7f5f
ms.openlocfilehash: 0d01fdac1a64bee62bd7227f4efac8650ff635b8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428380"
---
# <a name="dynamically-determining-columns-returned-to-the-consumer"></a>Determinazione dinamica delle colonne restituite al consumer

Le macro PROVIDER_COLUMN_ENTRY gestiscono in genere il `IColumnsInfo::GetColumnsInfo` chiamare. Tuttavia, poiché un consumer potrebbe scegliere di usare i segnalibri, il provider deve essere in grado di modificare le colonne restituite a seconda del fatto che il consumer richiede un segnalibro.

Per gestire il `IColumnsInfo::GetColumnsInfo` chiamare, PROVIDER_COLUMN_MAP, che definisce una funzione di eliminazione `GetColumnInfo`, dal `CAgentMan` utente record nel CustomRS.h e sostituirla con la definizione per il proprio `GetColumnInfo` funzione:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.H
class CAgentMan
{
public:
   DWORD dwBookmark;
   TCHAR szCommand[256];
   TCHAR szText[256];
   TCHAR szCommand2[256];
   TCHAR szText2[256];
  
   static ATLCOLUMNINFO* GetColumnInfo(void* pThis, ULONG* pcCols);
   bool operator==(const CAgentMan& am)
   {
      return (lstrcmpi(szCommand, am.szCommand) == 0);
   }
};
```

Successivamente, implementare il `GetColumnInfo` funzionare *personalizzata*RS.cpp, come illustrato nel codice seguente.

`GetColumnInfo` verifica innanzitutto se la proprietà OLE DB `DBPROP_BOOKMARKS` è impostata. Per ottenere la proprietà `GetColumnInfo` un indicatore di misura (`pRowset`) all'oggetto set di righe. Il `pThis` puntatore rappresenta la classe che ha creato il set di righe, ovvero la classe in cui è archiviato il mapping di proprietà. `GetColumnInfo` typecast il `pThis` puntatore a un `RCustomRowset` puntatore.

Per verificare la presenza di `DBPROP_BOOKMARKS` proprietà, `GetColumnInfo` Usa il `IRowsetInfo` interfaccia, che è possibile ottenere tramite una chiamata `QueryInterface` sul `pRowset` interfaccia. In alternativa, è possibile usare un ATL [CComQIPtr](../../atl/reference/ccomqiptr-class.md) metodo invece.

```cpp
////////////////////////////////////////////////////////////////////
// CustomRS.cpp
ATLCOLUMNINFO* CAgentMan::GetColumnInfo(void* pThis, ULONG* pcCols)
{
   static ATLCOLUMNINFO _rgColumns[5];
   ULONG ulCols = 0;
  
   // Check the property flag for bookmarks; if it is set, set the zero 
   // ordinal entry in the column map with the bookmark information.
   CAgentRowset* pRowset = (CAgentRowset*) pThis;
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
         DBTYPE_BYTES, 0, 0, GUID_NULL, CAgentMan, dwBookmark, 
         DBCOLUMNFLAGS_ISBOOKMARK)
         ulCols++;
      }
   }
  
   // Next, set the other columns up.
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Command"), 1, 256, DBTYPE_STR, 0xFF, 0xFF, 
      GUID_NULL, CAgentMan, szCommand)
   ulCols++;
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Text"), 2, 256, DBTYPE_STR, 0xFF, 0xFF, 
      GUID_NULL, CAgentMan, szText)
   ulCols++;
  
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Command2"), 3, 256, DBTYPE_STR, 0xFF, 0xFF, 
      GUID_NULL, CAgentMan, szCommand2)
   ulCols++;
   ADD_COLUMN_ENTRY(ulCols, OLESTR("Text2"), 4, 256, DBTYPE_STR, 0xFF, 0xFF, 
      GUID_NULL, CAgentMan, szText2)
   ulCols++;
  
   if (pcCols != NULL)
      *pcCols = ulCols;
  
   return _rgColumns;
}
```

Questo esempio Usa una matrice statica per contenere le informazioni di colonna. Se il consumer non desidera che la colonna del segnalibro, una voce nella matrice è inutilizzata. Per gestire le informazioni, è possibile creare due macro di matrice: ADD_COLUMN_ENTRY e ADD_COLUMN_ENTRY_EX. ADD_COLUMN_ENTRY_EX accetta un parametro aggiuntivo, *flag*, che è necessario se si imposta una colonna del segnalibro.

```cpp
ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD),
   DBTYPE_BYTES, 0, 0, GUID_NULL, CAgentMan, dwBookmark,
   DBCOLUMNFLAGS_ISBOOKMARK)
```

È ora possibile compilare ed eseguire il provider migliorato. Per testare il provider, modificare l'utente di test come descritto nella [implementazione di un Consumer semplice](../../data/oledb/implementing-a-simple-consumer.md). Eseguire il consumer di test con il provider. Verificare che il consumer di test consente di recuperare le stringhe corrette dal provider quando si fa clic il **eseguiti** pulsante nel **Test Consumer** nella finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)<br/>
