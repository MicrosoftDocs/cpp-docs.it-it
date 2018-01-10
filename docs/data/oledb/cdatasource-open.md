---
title: 'CDataSource:: Open | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDataSource::Open
- ATL.CDataSource.Open
- CDataSource::Open
- CDataSource.Open
dev_langs: C++
helpviewer_keywords: Open method
ms.assetid: a6d28bd1-799a-48ed-8993-5f82d1705b77
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3f2215b84600e2691f6b3aeb0407c5c6b96ebd00
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdatasourceopen"></a>CDataSource::Open
Apre una connessione a un'origine dati usando un **CLSID**, **ProgID**, o `CEnumerator` moniker o richiede all'utente la finestra di dialogo indicatore di posizione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Open(  
   const CLSID& clsid,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(  
   const CLSID& clsid,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0   
) throw( );  
HRESULT Open(  
   LPCTSTR szProgID,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(  
   LPCTSTR szProgID,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0   
) throw( );  
HRESULT Open(  
   const CEnumerator& enumerator,  
   DBPROPSET* pPropSet = NULL,  
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(  
   const CEnumerator& enumerator,  
   LPCTSTR pName,  
   LPCTSTR pUserName = NULL,  
   LPCTSTR pPassword = NULL,  
   long nInitMode = 0   
) throw( );  
HRESULT Open(  
   HWND hWnd = GetActiveWindow( ),  
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_WIZARDSHEET   
) throw( );  
HRESULT Open(   
   LPCWSTR szProgID,   
   DBPROPSET* pPropSet = NULL,   
   ULONG nPropertySets = 1   
) throw( );  
HRESULT Open(   
   LPCSTR szProgID,   
   LPCTSTR pName,   
   LPCTSTR pUserName = NULL,   
   LPCTSTR pPassword = NULL,   
   long nInitMode = 0   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `clsid`  
 [in] Il **CLSID** del provider di dati.  
  
 *pPropSet*  
 [in] Un puntatore a una matrice di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) strutture contenenti le proprietà e valori da impostare. Vedere [set di proprietà e i gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx) nel *di riferimento per programmatori OLE DB* in Windows SDK.  
  
 *nPropertySets*  
 [in] Il numero di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) strutture passato il *pPropSet* argomento.  
  
 *pName*  
 [in] Nome del database a cui connettersi.  
  
 *pUserName*  
 [in] Nome dell'utente.  
  
 *pPassword*  
 [in] Password dell'utente.  
  
 `nInitMode`  
 [in] Modalità di inizializzazione del database. Vedere [le proprietà di inizializzazione](https://msdn.microsoft.com/en-us/library/ms723127.aspx)nel *riferimento per programmatori OLE DB* in Windows SDK per un elenco delle modalità di inizializzazione valide. Se `nInitMode` è zero, nessuna modalità di inizializzazione è inclusa nel set di proprietà usato per aprire la connessione.  
  
 `szProgID`  
 [in] Identificatore di un programma.  
  
 `enumerator`  
 [in] Oggetto [CEnumerator](../../data/oledb/cenumerator-class.md) oggetto utilizzato per ottenere un moniker per l'apertura della connessione quando il chiamante non specifica un **CLSID**.  
  
 `hWnd`  
 [in] Handle per la finestra che deve essere l'elemento padre della finestra di dialogo. Se si usa l'overload della funzione che usa il parametro `hWnd`, verranno chiamati automaticamente i componenti del servizio. Per informazioni, vedere la sezione Note.  
  
 `dwPromptOptions`  
 [in] Determina lo stile della finestra di dialogo del localizzatore da visualizzare. Per i possibili valori, vedere Msdasc.h.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 L'overload del metodo che usa il parametro `hWnd` apre un oggetto origine dati con i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità di Componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per ulteriori informazioni, vedere "Servizi OLE DB" nel riferimento di OLE DB Programmer in [http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
 Gli overload del metodo che non usano il parametro `hWnd` aprono un oggetto origine dati senza usare i componenti del servizio in oledb32.dll. Oggetto [CDataSource](../../data/oledb/cdatasource-class.md) oggetto aperto con questi overload della funzione sarà in grado di utilizzare tutte le funzionalità dei componenti del servizio.  
  
## <a name="example"></a>Esempio  
 Il codice seguente mostra come aprire un'origine dati Jet 4.0 con modelli OLE DB. L'origine dati Jet deve essere considerata un'origine dati OLE DB. Tuttavia, la chiamata a **aprire** necessari due set di proprietà: uno per **DBPROPSET_DBINIT** e l'altro per **DBPROPSET_JETOLEDB_DBINIT**, in modo che è possibile impostare  **DBPROP_JETOLEDB_DATABASEPASSWORD**.  
  
 [!code-cpp[NVC_OLEDB_Consumer#7](../../data/oledb/codesnippet/cpp/cdatasource-open_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)