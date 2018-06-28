---
title: CGopherFile (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CGopherFile
- AFXINET/CGopherFile
- AFXINET/CGopherFile::CGopherFile
dev_langs:
- C++
helpviewer_keywords:
- CGopherFile [MFC], CGopherFile
ms.assetid: 3ca9898f-8cdb-4495-bbde-46d40100feda
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 275c35c7654f9a10a83f13482ca6d81b974c0dd6
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37040974"
---
# <a name="cgopherfile-class"></a>CGopherFile (classe)
Fornisce la funzionalità per individuare e leggere file in un server gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati non funzionano nella piattaforma Windows XP, poiché continueranno a funzionare in piattaforme precedenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CGopherFile : public CInternetFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherFile::CGopherFile](#cgopherfile)|Costruisce un oggetto `CGopherFile`.|  
  
## <a name="remarks"></a>Note  
 Il servizio gopher non consente agli utenti di scrivere dati in un file gopher poiché questo servizio funge essenzialmente da un'interfaccia guidato da menu per la ricerca di informazioni. Il `CGopherFile` funzioni membro `Write`, `WriteString`, e `Flush` non sono implementate per `CGopherFile`. Chiamare queste funzioni in un `CGopherFile` dell'oggetto, restituisce un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Per altre informazioni su come `CGopherFile` funziona con le altre classi MFC Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [CStdioFile](../../mfc/reference/cstdiofile-class.md)  
  
 [CInternetFile](../../mfc/reference/cinternetfile-class.md)  
  
 `CGopherFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="cgopherfile"></a>  CGopherFile::CGopherFile  
 Questa funzione membro viene chiamata per costruire un `CGopherFile` oggetto.  
  
```  
CGopherFile(
    HINTERNET hFile,  
    CGopherLocator& refLocator,  
    CGopherConnection* pConnection);

 
CGopherFile(
    HINTERNET hFile,  
    HINTERNET hSession,  
    LPCTSTR pstrLocator,  
    DWORD dwLocLen,  
    DWORD_PTR dwContext);
```  
  
### <a name="parameters"></a>Parametri  
 *hFile*  
 Un handle a un `HINTERNET` file.  
  
 *refLocator*  
 Un riferimento a un [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.  
  
 *pConnection*  
 Un puntatore a un [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) oggetto.  
  
 *hSession*  
 Handle per la sessione corrente di Internet.  
  
 *pstrLocator*  
 Puntatore a una stringa utilizzata per individuare il server gopher. Vedere [sessioni Gopher](cgopherlocator-class.md) per ulteriori informazioni sui localizzatori gopher.  
  
 *dwLocLen*  
 Un valore DWORD che contiene il numero di byte *pstrLocator*.  
  
 *dwContext*  
 Un puntatore all'identificatore di contesto del file aperto.  
  
### <a name="remarks"></a>Note  
 È necessario un `CGopherFile` oggetto da leggere da un file durante una sessione di Internet gopher.  
  
 È non creare mai un `CGopherFile` direttamente l'oggetto. In alternativa, chiamare [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) per aprire un file in un server gopher.  
  
## <a name="see-also"></a>Vedere anche  
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CInternetFile (classe)](../../mfc/reference/cinternetfile-class.md)   
 [Oggetto CGopherLocator (classe)](../../mfc/reference/cgopherlocator-class.md)   
 [Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)   
 [Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
