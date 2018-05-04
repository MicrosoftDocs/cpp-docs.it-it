---
title: Classe CFixedStringT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CFixedStringT
- CSTRINGT/ATL::CFixedStringT
- CSTRINGT/ATL::CFixedStringT::CFixedStringT
dev_langs:
- C++
helpviewer_keywords:
- CFixedStringT class
- shared classes, CFixedStringT
ms.assetid: 6d4171ba-3104-493a-a6cc-d515f4ba9a4b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93125d15be32a95d71c763f476fad700dab65a3b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cfixedstringt-class"></a>CFixedStringT (classe)
Questa classe rappresenta un oggetto stringa con un buffer di caratteri predefinito.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class StringType, int t_nChars>
class CFixedStringT : private CFixedStringMgr, public StringType
```  
  
#### <a name="parameters"></a>Parametri  
 `StringType`  
 Utilizzata come classe di base per l'oggetto stringa fissa e può essere qualsiasi `CStringT`-tipo di base. Alcuni esempi includono `CString`, `CStringA`, e `CStringW`.  
  
 *t_nChars*  
 Il numero di caratteri archiviati nel buffer.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFixedStringT::CFixedStringT](#cfixedstringt)|Il costruttore per l'oggetto stringa.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFixedStringT::operator =](#eq)|Assegna un nuovo valore per un `CFixedStringT` oggetto.|  
  
## <a name="remarks"></a>Note  
 Questa classe è un esempio di una classe di stringa personalizzata basata su `CStringT`. Anche se è piuttosto simile, le due classi diversi nell'implementazione. Le differenze principali tra `CFixedStringT` e `CStringT` sono:  
  
-   Il buffer di carattere iniziale viene allocato come parte dell'oggetto e ha dimensioni *t_nChars*. In questo modo il **CFixedString** oggetto occupano un blocco di memoria contigua ai fini delle prestazioni. Tuttavia, se il contenuto di un `CFixedStringT` oggetto superano *t_nChars*, il buffer è allocato in modo dinamico.  
  
-   Il buffer di caratteri per un `CFixedStringT` oggetto è sempre la stessa lunghezza ( *t_nChars*). Non sussiste alcuna limitazione sulla dimensione del buffer per `CStringT` oggetti.  
  
-   Il gestore della memoria per `CFixedStringT` personalizzato in modo che la condivisione di un [CStringData](../../atl-mfc-shared/reference/cstringdata-class.md) oggetto tra due o più `CFixedStringT` objectsis non consentito. `CStringT` gli oggetti non viene applicata questa limitazione.  
  
 Per ulteriori informazioni sulla personalizzazione di `CFixedStringT` e gestione della memoria per oggetti stringa in generale, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlStringMgr`  
  
 `StringType`  
  
 `CFixedStringMgr`  
  
 `CFixedStringT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** CStringT. h  
  
##  <a name="cfixedstringt"></a>  CFixedStringT::CFixedStringT  
 Costruisce un oggetto `CFixedStringT`.  
  
```
CFixedStringT() throw();
explicit CFixedStringT(IAtlStringMgr* pStringMgr) throw();
CFixedStringT(const CFixedStringT<StringType, t_nChars>& str);
CFixedStringT(const StringType& str);
CFixedStringT(const StringType::XCHAR* psz);
explicit CFixedStringT(const StringType::YCHAR* psz);
explicit CFixedStringT(const unsigned char* psz);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 Una stringa con terminazione null deve essere copiato `CFixedStringT` oggetto.  
  
 `str`  
 Un oggetto esistente `CFixedStringT` oggetto deve essere copiato `CFixedStringT` oggetto.  
  
 `pStringMgr`  
 Un puntatore per la gestione della memoria del `CFixedStringT` oggetto. Per ulteriori informazioni su `IAtlStringMgr` e gestione della memoria per `CFixedStringT`, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
### <a name="remarks"></a>Note  
 Poiché i costruttori di copiano i dati di input in nuova risorsa di archiviazione allocato, è necessario essere consapevoli che possono comportare eccezioni di memoria. Si noti che alcuni di questi costruttori fungono da funzioni di conversione.  
  
##  <a name="operator__eq"></a>  CFixedStringT::operator =  
 Reinizializza esistente `CFixedStringT` oggetto con i nuovi dati.  
  
```
CFixedStringT<StringType, t_nChars>& operator=(
  const CFixedStringT<StringType, t_nChars>& str);
CFixedStringT<StringType, t_nChars>& operator=(const char* psz);
CFixedStringT<StringType, t_nChars>& operator=(const wchar_t* psz);
CFixedStringT<StringType, t_nChars>& operator=(const unsigned char* psz);
CFixedStringT<StringType, t_nChars>& operator=(const StringType& str);
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 Una stringa con terminazione null deve essere copiato `CFixedStringT` oggetto.  
  
 `psz`  
 Un oggetto esistente `CFixedStringT` deve essere copiato `CFixedStringT` oggetto.  
  
### <a name="remarks"></a>Note  
 È necessario essere consapevoli che potrebbero verificarsi eccezioni quando si usa l'operatore di assegnazione poiché spesso viene allocata nuova archiviazione per contenere il valore risultante di memoria `CFixedStringT` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CStringT](../../atl-mfc-shared/reference/cstringt-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)




