---
title: "CMyProviderWindowsFile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cmyproviderwindowsfile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMyProviderWindowsFile (classe)"
  - "provider OLE DB, file generati dalla procedura guidata"
ms.assetid: 0e9e72ac-1e1e-445f-a7ac-690c20031f9d
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CMyProviderWindowsFile
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con la procedura guidata viene creata una classe che contiene una riga di dati. In questo caso,sarà chiamata `CMyProviderWindowsFile`.  Nel codice di `CMyProviderWindowsFile` riportato di seguito, generato automaticamente durante la procedura guidata, sono elencati tutti i file di una directory tramite la struttura **WIN32\_FIND\_DATA**.  `CMyProviderWindowsFile` eredita dalla struttura **WIN32\_FIND\_DATA**:  
  
```  
/////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
  
class CMyProviderWindowsFile:   
   public WIN32_FIND_DATA  
{  
public:  
BEGIN_PROVIDER_COLUMN_MAP(CMyProviderWindowsFile)  
   PROVIDER_COLUMN_ENTRY("FileAttributes", 1, dwFileAttributes)  
   PROVIDER_COLUMN_ENTRY("FileSizeHigh", 2, nFileSizeHigh)  
   PROVIDER_COLUMN_ENTRY("FileSizeLow", 3, nFileSizeLow)  
   PROVIDER_COLUMN_ENTRY_STR("FileName", 4, cFileName)  
   PROVIDER_COLUMN_ENTRY_STR("AltFileName", 5, cAlternateFileName)  
END_PROVIDER_COLUMN_MAP()  
};  
```  
  
 `CMyProviderWindowsFile` viene definita [classe di record utente](../../data/oledb/user-record.md) poiché contiene anche una mappa con la descrizione delle colonne contenute nel rowset del provider.  In questa mappa è presente una voce per ciascun campo del rowset che utilizza le macro PROVIDER\_COLUMN\_ENTRY.  Le macro associano offset, ordinale e nome colonna a una voce della struttura.  Le voci delle colonne del provider presenti nel codice riportato sopra contengono offset nella struttura **WIN32\_FIND\_DATA**.  Quando il consumer chiama **IRowset::GetData**, i dati vengono trasferiti in un buffer contiguo.  Il programmatore potrà specificare un membro dati, anziché ricorrere a operazioni aritmetiche sui puntatori.  
  
 La classe `CMyProviderRowset` contiene anche il metodo `Execute` che legge effettivamente i dati dall'origine nativa.  Il codice che segue contiene il metodo `Execute` generato dalla procedura guidata.  Per recuperare le informazioni sui file contenuti nella directory e inserirle in istanze della classe `CMyProviderWindowsFile`, la funzione utilizza le API Win32 **FindFirstFile** e `FindNextFile`.  
  
```  
/////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
  
HRESULT Execute(DBPARAMS * pParams, LONG* pcRowsAffected)  
{  
   USES_CONVERSION;  
   BOOL bFound = FALSE;  
   HANDLE hFile;  
   LPTSTR  szDir = (m_strCommandText == _T("")) ? _T("*.*") :  
       OLE2T(m_strCommandText);  
   CMyProviderWindowsFile wf;  
   hFile = FindFirstFile(szDir, &wf);  
   if (hFile == INVALID_HANDLE_VALUE)  
      return DB_E_ERRORSINCOMMAND;  
   LONG cFiles = 1;  
   BOOL bMoreFiles = TRUE;  
   while (bMoreFiles)  
   {  
      if (!m_rgRowData.Add(wf))  
         return E_OUTOFMEMORY;  
      bMoreFiles = FindNextFile(hFile, &wf);  
      cFiles++;  
   }  
   FindClose(hFile);  
   if (pcRowsAffected != NULL)  
      *pcRowsAffected = cFiles;  
   return S_OK;  
}  
```  
  
 La directory in cui eseguire la ricerca è rappresentata da `m_strCommandText` che contiene il testo rappresentato dall'interfaccia `ICommandText` nell'oggetto Command.  Se non viene specificata alcuna directory, verrà utilizzata la directory corrente.  
  
 Il metodo crea una voce per ciascun file, corrispondente a una riga, e la inserisce nel membro dati **m\_rgRowData**.  La classe `CRowsetImpl` definisce il membro dati **m\_rgRowData**.  I dati contenuti in questa matrice rappresentano l'intera tabella e vengono utilizzati in tutti i modelli.  
  
## Vedere anche  
 [File del provider generati tramite procedura guidata](../../data/oledb/provider-wizard-generated-files.md)