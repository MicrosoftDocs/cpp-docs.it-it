---
title: "Supporto dei bookmark nel provider | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "segnalibri, OLE DB"
  - "IRowsetLocate (classe)"
  - "IRowsetLocate (classe), supporto dei provider per i segnalibri"
  - "modelli del provider OLE DB, segnalibri"
  - "provider OLE DB, supporto per segnalibro"
ms.assetid: 1b14ccff-4f76-462e-96ab-1aada815c377
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto dei bookmark nel provider
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio illustrato in questo argomento viene aggiunta l'interfaccia `IRowsetLocate` alla classe `CMyProviderRowset`.  In genere si inizia dall'aggiunta di un'interfaccia a un oggetto COM esistente.  In seguito è possibile eseguire il test aggiungendo ulteriori chiamate dai modelli consumer.  Nell'esempio viene illustrato come eseguire le seguenti operazioni:  
  
-   Aggiungere un'interfaccia a un provider.  
  
-   Determinare in modo dinamico le colonne da restituire al consumer.  
  
-   Aggiungere il supporto per i bookmark.  
  
 L'interfaccia `IRowsetLocate` eredita dall'interfaccia `IRowset`.  Per aggiungere l'interfaccia `IRowsetLocate`, ereditare `CMyProviderRowset` da [IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md).  
  
 L'aggiunta dell'interfaccia `IRowsetLocate` presenta delle differenze rispetto all'aggiunta della maggior parte delle interfacce.  Per allineare le VTABLE, i modelli provider OLE DB dispongono di un parametro di modello per la gestione dell'interfaccia derivata.  Nel seguente codice è illustrato il nuovo elenco di ereditarietà:  
  
```  
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
// CMyProviderRowset  
class CMyProviderRowset : public CRowsetImpl< CMyProviderRowset,   
      CTextData, CMyProviderCommand, CAtlArray<CTextData>,   
      CSimpleRow,   
          IRowsetLocateImpl<CMyProviderRowset, IRowsetLocate> >  
```  
  
 Vengono aggiunti i parametri quarto, quinto e sesto.  In questo esempio vengono utilizzati i valori predefiniti per il quarto e il quinto parametro, mentre come sesto parametro viene specificato `IRowsetLocateImpl`.  `IRowsetLocateImpl` è una classe modello OLE DB che accetta due parametri di modello che associano l'interfaccia `IRowsetLocate` alla classe `CMyProviderRowset`.  Per aggiungere la maggior parte delle interfacce, è possibile evitare questo passaggio e passare direttamente al successivo.  Solo le interfacce `IRowsetLocate` e `IRowsetScroll` devono essere gestite in questo modo.  
  
 Sarà quindi necessario comunicare a `CMyProviderRowset` di chiamare `QueryInterface` per l'interfaccia `IRowsetLocate`.  Aggiungere la riga `COM_INTERFACE_ENTRY(IRowsetLocate)` alla mappa.  La mappa dell'interfaccia di `CMyProviderRowset` sarà rappresentata dal codice riportato di seguito:  
  
```  
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
typedef CRowsetImpl< CMyProviderRowset, CTextData, CMyProviderCommand, CAtlArray<CTextData>, CSimpleRow, IRowsetLocateImpl<CMyProviderRowset, IRowsetLocate> > _RowsetBaseClass;  
  
BEGIN_COM_MAP(CMyProviderRowset)  
   COM_INTERFACE_ENTRY(IRowsetLocate)  
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)  
END_COM_MAP()  
```  
  
 È inoltre necessario associare la mappa alla classe `CRowsetImpl`.  Aggiungere la macro COM\_INTERFACE\_ENTRY\_CHAIN per associare la mappa di `CRowsetImpl`.  Creare inoltre un typedef con nome `RowsetBaseClass` costituito dalle informazioni sull'ereditarietà.  Questo typedef è arbitrario e può essere ignorato.  
  
 Gestire infine la chiamata a **IColumnsInfo::GetColumnsInfo**.  Per questa operazione, in genere, si utilizzano le macro PROVIDER\_COLUMN\_ENTRY.  È tuttavia possibile che un consumer richieda l'utilizzo di bookmark.  È necessario essere in grado di modificare le colonne restituite dal provider in base all'eventuale richiesta di un bookmark da parte del consumer.  
  
 Per gestire la chiamata a **IColumnsInfo::GetColumnsInfo** eliminare la mappa **PROVIDER\_COLUMN** nella classe `CTextData`.  La macro PROVIDER\_COLUMN\_MAP definisce una funzione `GetColumnInfo`.  È necessario definire una funzione `GetColumnInfo` personalizzata.  La dichiarazione della funzione sarà analoga alla seguente:  
  
```  
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
  
 Implementare quindi la funzione `GetColumnInfo` nel file MyProviderRS.cpp come segue:  
  
```  
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
  
 `GetColumnInfo` verifica innanzitutto se è impostata una proprietà denominata **DBPROP\_IRowsetLocate**.  OLE DB dispone di proprietà per ciascuna delle interfacce facoltative dell'oggetto Rowset.  Per utilizzare una delle interfacce facoltative, il consumer imposterà una proprietà su true.  Il provider potrà quindi controllare la proprietà ed eseguire operazioni particolari in base a essa.  
  
 Nell'implementazione operata è possibile ottenere la proprietà utilizzando il puntatore all'oggetto Command.  Il puntatore `pThis` rappresenta la classe dell'oggetto Rowset o dell'oggetto Command.  Poiché vengono utilizzati modelli, è necessario passare tale puntatore come puntatore `void`. In caso contrario, non sarà possibile compilare il codice.  
  
 Specificare una matrice statica per l'inserimento delle informazioni sulle colonne.  Se il consumer non utilizza la colonna del bookmark, una voce della matrice resterà inutilizzata.  È possibile allocare la matrice in modo dinamico, ma in questo caso è necessario verificare che venga eliminata correttamente.  Nell'esempio vengono definite e utilizzate le macro ADD\_COLUMN\_ENTRY e ADD\_COLUMN\_ENTRY\_EX per inserire le informazioni nella matrice.  È possibile aggiungere le macro al file MyProviderRS.H file come illustrato nel codice riportato di seguito:  
  
```  
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
  
 Per eseguire il test del codice nel consumer, è necessario apportare alcune modifiche al gestore `OnRun`.  La prima modifica consiste nell'inserimento di codice per l'aggiunta di una proprietà all'insieme di proprietà.  La proprietà **DBPROP\_IRowsetLocate** viene impostata su true per comunicare al provider che si desidera utilizzare la colonna del bookmark.  Il codice del gestore `OnRun` avrà il seguente aspetto:  
  
```  
//////////////////////////////////////////////////////////////////////  
// TestProv Consumer Application in TestProvDlg.cpp  
  
void CTestProvDlg::OnRun()   
{  
   CCommand<CAccessor<CProvider> > table;  
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
  
 Il ciclo while contiene il codice per la chiamata al metodo `Compare` nell'interfaccia `IRowsetLocate`.  Il risultato sarà sempre positivo poiché il confronto viene eseguito tra bookmark identici.  Memorizzare inoltre un bookmark in una variabile temporanea in modo da poterlo utilizzare al termine del ciclo while per chiamare la funzione `MoveToBookmark` nei modelli consumer.  La funzione `MoveToBookmark` chiama il metodo `GetRowsAt` in `IRowsetLocate`.  
  
 È inoltre necessario aggiornare il record utente nel consumer.  Aggiungere una voce nella classe per la gestione di un bookmark e una voce in **COLUMN\_MAP**:  
  
```  
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
  
 Dopo aver aggiornato il codice, sarà possibile compilare ed eseguire il provider con l'interfaccia `IRowsetLocate`.  
  
## Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)