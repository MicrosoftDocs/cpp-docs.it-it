---
title: Classe di oggetto CGopherLocator | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CGopherLocator
dev_langs:
- C++
helpviewer_keywords:
- gopher locator
- CGopherLocator class
- Internet, gopher searches
ms.assetid: 6fcc015f-5ae6-4959-b936-858634c71019
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: c5c9b862714d046bc81a49dda27fd5fc062b9ba8
ms.lasthandoff: 02/24/2017

---
# <a name="cgopherlocator-class"></a>Oggetto CGopherLocator (classe)
Ottiene un "localizzatore gopher" da un server gopher, determina il tipo di localizzatore e rende disponibili per il localizzatore [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md).  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati in quanto non funzionano nella piattaforma Windows XP, ma continuano a funzionare su piattaforme precedenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CGopherLocator : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherLocator::CGopherLocator](#cgopherlocator)|Costruisce un oggetto `CGopherLocator`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherLocator::GetLocatorType](#getlocatortype)|Analizza un indicatore di posizione gopher e determina i relativi attributi.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherLocator::operator LPCTSTR](#operator_lpctstr)|Si accede direttamente ai caratteri archiviati in un `CGopherLocator` oggetto come una stringa in formato C.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione deve ottenere il localizzatore di un server gopher prima di poter recuperare informazioni da tale server. Una volta ottenuto l'indicatore di posizione, deve considerare l'indicatore di posizione come un token opaco.  
  
 Ogni localizzatore gopher dispone di attributi che determinano il tipo di file o server trovato. Vedere [GetLocatorType](#getlocatortype) per un elenco di tipi di localizzatori gopher.  
  
 Un'applicazione utilizza in genere l'indicatore di posizione per le chiamate a [CGopherFileFind:: FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) per recuperare una parte specifica di informazioni.  
  
 Per ulteriori informazioni su come `CGopherLocator` funziona con le altre classi MFC Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CGopherLocator`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="a-namecgopherlocatora--cgopherlocatorcgopherlocator"></a><a name="cgopherlocator"></a>CGopherLocator::CGopherLocator  
 Questa funzione membro viene chiamata per creare un `CGopherLocator` oggetto.  
  
```  
CGopherLocator(const CGopherLocator& ref);
```  
  
### <a name="parameters"></a>Parametri  
 `ref`  
 Un riferimento a una costante `CGopherLocator` oggetto.  
  
### <a name="remarks"></a>Note  
 Non creare mai un `CGopherLocator` direttamente l'oggetto. Si consiglia di chiamare [CGopherConnection:: CreateLocator](../../mfc/reference/cgopherconnection-class.md#createlocator) per creare e restituire un puntatore a di `CGopherLocator` oggetto.  
  
##  <a name="a-namegetlocatortypea--cgopherlocatorgetlocatortype"></a><a name="getlocatortype"></a>CGopherLocator::GetLocatorType  
 Chiamare questa funzione membro per ottenere il tipo di localizzatore.  
  
```  
BOOL GetLocatorType(DWORD& dwRef) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *dwRef*  
 Un riferimento a un `DWORD` che verrà visualizzato il tipo di localizzatore. Vedere **osservazioni** per una tabella dei tipi di localizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
### <a name="remarks"></a>Note  
 I tipi possibili sono i seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|GOPHER_TYPE_TEXT_FILE|File di testo ASCII.|  
|GOPHER_TYPE_DIRECTORY|Directory del elementi aggiuntivi Gopher.|  
|GOPHER_TYPE_CSO|Un server della Rubrica telefonica CSO.|  
|GOPHER_TYPE_ERROR|Indica una condizione di errore.|  
|GOPHER_TYPE_MAC_BINHEX|Un file Macintosh in formato BINHEX.|  
|GOPHER_TYPE_DOS_ARCHIVE|Un file di archivio di DOS.|  
|GOPHER_TYPE_UNIX_UUENCODED|Un file UUENCODE.|  
|GOPHER_TYPE_INDEX_SERVER|Un server indice.|  
|GOPHER_TYPE_TELNET|Un Server Telnet.|  
|GOPHER_TYPE_BINARY|Un file binario.|  
|GOPHER_TYPE_REDUNDANT|Un server duplicato. Le informazioni contenute all'interno sono un duplicato del server primario. Il server primario è l'ultima voce di directory che non presenta un tipo GOPHER_TYPE_REDUNDANT.|  
|GOPHER_TYPE_TN3270|Un server TN3270.|  
|GOPHER_TYPE_GIF|Un file di grafica GIF.|  
|GOPHER_TYPE_IMAGE|Un file di immagine.|  
|GOPHER_TYPE_BITMAP|Un file bitmap.|  
|GOPHER_TYPE_MOVIE|Un filmato.|  
|GOPHER_TYPE_SOUND|Un file audio.|  
|GOPHER_TYPE_HTML|Documento HTML.|  
|GOPHER_TYPE_PDF|Un file PDF.|  
|GOPHER_TYPE_CALENDAR|Un file di calendario.|  
|GOPHER_TYPE_INLINE|Un file inline.|  
|GOPHER_TYPE_UNKNOWN|Il tipo di elemento è sconosciuto.|  
|GOPHER_TYPE_ASK|Chiedere + elemento.|  
|GOPHER_TYPE_GOPHER_PLUS|Un oggetto Gopher +.|  
  
##  <a name="a-nameoperatorlpctstra--cgopherlocatoroperator-lpctstr"></a><a name="operator_lpctstr"></a>CGopherLocator::operator LPCTSTR  
 Questo operatore di cast utili fornisce un metodo efficiente per accedere alla stringa C con terminazione null contenuta in un `CGopherLocator` oggetto.  
  
```  
operator LPCTSTR () const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai caratteri per i dati della stringa.  
  
### <a name="remarks"></a>Note  
 Caratteri non vengono copiati. viene restituito solo un puntatore.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md)

