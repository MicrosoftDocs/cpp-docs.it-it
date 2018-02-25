---
title: Supporto dei bookmark nel provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- IRowsetLocate class, provider support for bookmarks
- OLE DB provider templates, bookmarks
- bookmarks, OLE DB
- IRowsetLocate class
- OLE DB providers, bookmark support
ms.assetid: 1b14ccff-4f76-462e-96ab-1aada815c377
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 39720b271834a585eff3ef3893154462bcdf7424
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="provider-support-for-bookmarks"></a>Supporto dei bookmark nel provider
Nell'esempio di questo argomento viene aggiunto il `IRowsetLocate` interfaccia per la `CMyProviderRowset` classe. Nella quasi totalità dei casi, si avvia tramite l'aggiunta di un'interfaccia a un oggetto COM esistente. È quindi possibile testare aggiungendo ulteriori chiamate dai modelli consumer. Nell'esempio viene illustrato come:  
  
-   Aggiungere un'interfaccia a un provider.  
  
-   Consente di determinare in modo dinamico le colonne da restituire al consumer.  
  
-   Aggiungere supporto per segnalibro.  
  
 L'interfaccia `IRowsetLocate` eredita dall'interfaccia `IRowset`. Per aggiungere il `IRowsetLocate` interfaccia, ereditata `CMyProviderRowset` da [IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md).  
  
 Aggiunta di `IRowsetLocate` interfaccia è leggermente diversa dalla maggior parte delle interfacce. Per allineare le vtable, OLE DB modelli del provider hanno un parametro di modello per gestire l'interfaccia derivata. Il codice seguente viene illustrato il nuovo elenco di ereditarietà:  
  
```cpp
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
// CMyProviderRowset  
class CMyProviderRowset : public CRowsetImpl< CMyProviderRowset,   
      CTextData, CMyProviderCommand, CAtlArray<CTextData>,   
      CSimpleRow,   
          IRowsetLocateImpl<CMyProviderRowset, IRowsetLocate>>  
```  
  
 Il quarto, quinto e sesto vengono aggiunti i parametri. In questo esempio Usa le impostazioni predefinite per il quarto e quinto parametro specifica ma `IRowsetLocateImpl` come sesto parametro. `IRowsetLocateImpl` è una classe di modelli OLE DB che accetta due parametri: questi collegare il `IRowsetLocate` interfaccia per il `CMyProviderRowset` classe. Per aggiungere la maggior parte delle interfacce, è possibile ignorare questo passaggio e passare a quella successiva. Solo il `IRowsetLocate` e `IRowsetScroll` interfacce devono essere gestiti in questo modo.  
  
 È quindi necessario specificare il `CMyProviderRowset` chiamare `QueryInterface` per il `IRowsetLocate` interfaccia. Aggiungere la riga `COM_INTERFACE_ENTRY(IRowsetLocate)` alla mappa. La mappa dell'interfaccia per `CMyProviderRowset` dovrebbe essere visualizzata come illustrato nel codice seguente:  
  
```cpp
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
typedef CRowsetImpl< CMyProviderRowset, CTextData, CMyProviderCommand, CAtlArray<CTextData>, CSimpleRow, IRowsetLocateImpl<CMyProviderRowset, IRowsetLocate>> _RowsetBaseClass;  
  
BEGIN_COM_MAP(CMyProviderRowset)  
   COM_INTERFACE_ENTRY(IRowsetLocate)  
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)  
END_COM_MAP()  
```  
  
 È inoltre necessario associare la mappa di `CRowsetImpl` classe. Aggiungere la macro COM_INTERFACE_ENTRY_CHAIN per associare il `CRowsetImpl` mappa. Inoltre, creare un typedef chiamato `RowsetBaseClass` che include le informazioni di ereditarietà. Questo typedef è arbitrario e può essere ignorato.  
  
 Infine, gestire il **IColumnsInfo::** chiamare. Utilizzare le macro PROVIDER_COLUMN_ENTRY in genere per eseguire questa operazione. Tuttavia, un utente desidera utilizzare i segnalibri È necessario essere in grado di modificare le colonne con che il provider restituisce a seconda se il consumer richiede un segnalibro.  
  
 Per gestire il **IColumnsInfo::** chiamare, eliminare il **PROVIDER_COLUMN** eseguire il mapping di `CTextData` classe. La macro PROVIDER_COLUMN_MAP definisce una funzione `GetColumnInfo`. È necessario definire la propria `GetColumnInfo` (funzione). La dichiarazione di funzione dovrebbe essere simile al seguente:  
  
```cpp
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
  
class CTextData  
{  
   ...  
     // NOTE: Be sure you removed the PROVIDER_COLUMN_MAP!  
   static ATLCOLUMNINFO* GetColumnInfo(CMyProviderRowset* pThis,   
        ULONG* pcCols);  
   static ATLCOLUMNINFO* GetColumnInfo(CMyProviderCommand* pThis,   
        ULONG* pcCols);  
...  
};  
```  
  
 Implementare quindi il `GetColumnInfo` funzione nel file MyProviderRS. cpp, come indicato di seguito:  
  
```cpp
////////////////////////////////////////////////////////////////////  
// MyProviderRS.cpp  
  
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
  
ATLCOLUMNINFO* CTextData::GetColumnInfo(CMyProviderCommand* pThis,   
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
  
 `GetColumnInfo` Controlla prima se una proprietà denominata **DBPROP_IRowsetLocate** è impostata. Proprietà per ognuna delle interfacce facoltative oggetto set di righe OLE DB. Se il consumer deve utilizzare una di queste interfacce facoltative, imposta una proprietà su true. Il provider può quindi controllare questa proprietà e operazioni particolari basati su di esso.  
  
 Nell'implementazione, ottenere la proprietà utilizzando il puntatore all'oggetto del comando. Il `pThis` puntatore rappresenta la classe di rowset o di comando. Perché vengono utilizzati modelli, è necessario passare questo come un `void` puntatore o il codice non viene compilato.  
  
 Specificare una matrice statica per contenere le informazioni di colonna. Se il consumer non desidera che la colonna del segnalibro, risulta sprecata una voce nella matrice. Questa matrice, è possibile allocare in modo dinamico, ma è necessario assicurarsi che venga eliminata correttamente. In questo esempio definisce e utilizza le macro ADD_COLUMN_ENTRY e ADD_COLUMN_ENTRY_EX per inserire le informazioni nella matrice. È possibile aggiungere le macro per il file MyProviderRS. H, come illustrato nel codice seguente:  
  
```cpp
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
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
  
 Per testare il codice del consumer, è necessario apportare alcune modifiche per il `OnRun` gestore. La prima modifica alla funzione è di aggiungere il codice per aggiungere una proprietà per il set di proprietà. Il codice imposta il **DBPROP_IRowsetLocate** proprietà su true, comunicare al provider che si desidera che la colonna del segnalibro. Il `OnRun` il codice di gestore deve essere come segue:  
  
```cpp
//////////////////////////////////////////////////////////////////////  
// TestProv Consumer Application in TestProvDlg.cpp  
  
void CTestProvDlg::OnRun()   
{  
   CCommand<CAccessor<CProvider>> table;  
   CDataSource source;  
   CSession   session;  
  
   if (source.Open("MyProvider.MyProvider.1", NULL, NULL, NULL,   
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
  
 Mentre il ciclo contiene codice per chiamare il `Compare` metodo il `IRowsetLocate` interfaccia. Il risultato sempre positivo in quanto si confrontano gli stessi Bookmark. Inoltre, archiviare un segnalibro in una variabile temporanea in modo che è possibile utilizzarlo dopo il periodo di tempo ciclo al termine di chiamare il `MoveToBookmark` funzione nei modelli consumer. Il `MoveToBookmark` chiamate di funzione di `GetRowsAt` metodo `IRowsetLocate`.  
  
 È anche necessario aggiornare il record utente nel consumer. Aggiungere una voce nella classe per gestire un segnalibro e una voce di **COLUMN_MAP**:  
  
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
  
 Dopo aver aggiornato il codice, deve essere in grado di compilare ed eseguire il provider con il `IRowsetLocate` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)