---
title: Classe CGopherFile | Microsoft Docs
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
ms.openlocfilehash: c6c4f87ffb1538e581320e9d6f36e8d4fbc6fc12
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37335682"
---
# <a name="cgopherfile-class"></a>CGopherFile (classe)
Fornisce la funzionalità per individuare e leggere file in un server gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati perché non funzionano nella piattaforma Windows XP, ma continueranno a funzionare in piattaforme precedenti.  
  
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
 Il servizio gopher non consente agli utenti di scrivere dati in un file gopher, poiché questo servizio funge essenzialmente da un'interfaccia basata su menu per la ricerca di informazioni. Il `CGopherFile` funzioni membro `Write`, `WriteString`, e `Flush` non sono state implementate `CGopherFile`. Chiamare queste funzioni in un `CGopherFile` dell'oggetto, restituisce un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Per altre informazioni su come `CGopherFile` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
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
 *oggetto hFile*  
 Handle per un file HINTERNET.  
  
 *refLocator*  
 Un riferimento a un [CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.  
  
 *pConnection*  
 Un puntatore a un [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) oggetto.  
  
 *hSession*  
 Handle per la sessione corrente di Internet.  
  
 *pstrLocator*  
 Un puntatore a una stringa utilizzata per individuare il server gopher. Visualizzare [sessioni Gopher](cgopherlocator-class.md) per altre informazioni sui localizzatori gopher.  
  
 *dwLocLen*  
 Un valore DWORD contenente il numero di byte in *pstrLocator*.  
  
 *dwContext*  
 Un puntatore all'identificatore di contesto del file in fase di apertura.  
  
### <a name="remarks"></a>Note  
 È necessario un `CGopherFile` oggetto da leggere da un file durante una sessione di Internet gopher.  
  
 È non creare mai un `CGopherFile` direttamente l'oggetto. Chiamare invece [CGopherConnection:: OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) per aprire un file in un server gopher.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CInternetFile](../../mfc/reference/cinternetfile-class.md)   
 [Classe CGopherLocator](../../mfc/reference/cgopherlocator-class.md)   
 [Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)   
 [Classe CGopherConnection](../../mfc/reference/cgopherconnection-class.md)
