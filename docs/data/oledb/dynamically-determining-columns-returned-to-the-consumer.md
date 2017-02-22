---
title: "Determinazione dinamica delle colonne restituite al consumer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "segnalibri [C++], rilevamento dinamico di colonne"
  - "determinazione dinamica di colonne [C++]"
ms.assetid: 58522b7a-894e-4b7d-a605-f80e900a7f5f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Determinazione dinamica delle colonne restituite al consumer
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le macro PROVIDER\_COLUMN\_ENTRY in genere gestiscono la chiamata a **IColumnsInfo::GetColumnsInfo**.  Poiché tuttavia alcuni consumer utilizzano i bookmark, il provider deve essere in grado di modificare le colonne restituite in base all'eventuale richiesta di un bookmark da parte del consumer.  
  
 Per gestire la chiamata a **IColumnsInfo::GetColumnsInfo**, eliminare PROVIDER\_COLUMN\_MAP, che definisce una funzione `GetColumnInfo`, dal record utente `CAgentMan` in MyProviderRS.h e sostituirla con la definizione della funzione personalizzata `GetColumnInfo`:  
  
```  
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
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
  
 Implementare quindi la funzione `GetColumnInfo` in MyProviderRS.cpp, come illustrato nel codice riportato di seguito.  
  
 `GetColumnInfo` controlla in primo luogo se è impostata la proprietà OLE DB **DBPROP\_BOOKMARKS**.  Per ottenere la proprietà, `GetColumnInfo` utilizza un puntatore \(`pRowset`\) all'oggetto Rowset.  Il puntatore `pThis` rappresenta la classe che ha creato il rowset, ovvero la classe in cui è archiviata la mappa delle proprietà.  `GetColumnInfo` esegue il cast del tipo del puntatore `pThis` su un puntatore `RMyProviderRowset`.  
  
 Per controllare la proprietà **DBPROP\_BOOKMARKS**, `GetColumnInfo` utilizza l'interfaccia `IRowsetInfo`, ottenibile chiamando `QueryInterface` sull'interfaccia `pRowset`.  In alternativa è possibile utilizzare un metodo [CComQIPtr](../../atl/reference/ccomqiptr-class.md) ATL.  
  
```  
////////////////////////////////////////////////////////////////////  
// MyProviderRS.cpp  
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
  
 In questo esempio viene utilizzata una matrice statica in cui vengono inserite le informazioni sulle colonne.  Se il consumer non utilizza la colonna del bookmark, una voce della matrice resterà inutilizzata.  Per gestire le informazioni, è necessario creare due macro per la matrice, ovvero ADD\_COLUMN\_ENTRY e ADD\_COLUMN\_ENTRY\_EX.  ADD\_COLUMN\_ENTRY\_EX accetta un parametro supplementare, `flags`, necessario se si imposta una colonna di bookmark.  
  
```  
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
#define ADD_COLUMN_ENTRY(ulCols, name, ordinal, colSize, type, precision,   
scale, guid, dataClass, member) \  
   _rgColumns[ulCols].pwszName = (LPOLESTR)name; \  
   _rgColumns[ulCols].pTypeInfo = (ITypeInfo*)NULL; \  
   _rgColumns[ulCols].iOrdinal = (ULONG)ordinal; \  
   _rgColumns[ulCols].dwFlags = 0; \  
   _rgColumns[ulCols].ulColumnSize = (ULONG)colSize; \  
   _rgColumns[ulCols].wType = (DBTYPE)type; \  
   _rgColumns[ulCols].bPrecision = (BYTE)precision; \  
   _rgColumns[ulCols].bScale = (BYTE)scale; \  
   _rgColumns[ulCols].cbOffset = offsetof(dataClass, member);  
  
#define ADD_COLUMN_ENTRY_EX(ulCols, name, ordinal, colSize, type,   
precision, scale, guid, dataClass, member, flags) \  
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
  
 Nella funzione `GetColumnInfo` la macro per il bookmark è utilizzata come segue:  
  
```  
ADD_COLUMN_ENTRY_EX(ulCols, OLESTR("Bookmark"), 0, sizeof(DWORD),  
   DBTYPE_BYTES, 0, 0, GUID_NULL, CAgentMan, dwBookmark,   
   DBCOLUMNFLAGS_ISBOOKMARK)  
```  
  
 A questo punto è possibile compilare ed eseguire il provider migliorato.  Per eseguire il test del provider, modificare il consumer di test come illustrato in [Implementazione di un consumer semplice](../../data/oledb/implementing-a-simple-consumer.md).  Eseguire il consumer di test con il provider.  Verificare che il consumer di test recuperi le stringhe corrette dal provider quando si fa clic sul pulsante **Run** nella finestra di dialogo **Test Consumer**.  
  
## Vedere anche  
 [Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)