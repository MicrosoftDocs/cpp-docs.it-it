---
title: 'CDataSource:: Openfromfilename | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDataSource::OpenFromFileName
- ATL::CDataSource::OpenFromFileName
- OpenFromFileName
- CDataSource.OpenFromFileName
- ATL.CDataSource.OpenFromFileName
dev_langs:
- C++
helpviewer_keywords:
- OpenFromFileName method
ms.assetid: c4226de6-59da-4368-9c15-c5afab86f68b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6dfa5411373ab4a5c80c493ad876926620c4f9a5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090770"
---
# <a name="cdatasourceopenfromfilename"></a>CDataSource::OpenFromFileName
Apre un'origine dati da un file specificato dal nome file fornito dall'utente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT OpenFromFileName(LPCOLESTR szFileName) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `szFileName`  
 [in] Nome di un file, in genere un file di connessione all'origine dati (UDL).  
  
 Per ulteriori informazioni sui file di collegamento dati (file con estensione udl), vedere [Introduzione all'API di collegamento dati](https://msdn.microsoft.com/en-us/library/ms718102.aspx) in Windows SDK.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via. Per altre informazioni, vedere "Servizi OLE DB" in riferimento all'OLE DB Programmer indirizzo [ http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true ](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)