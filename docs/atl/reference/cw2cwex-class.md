---
title: Classe CW2CWEX | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CW2CWEX
- ATL::CW2CWEX
- ATL.CW2CWEX
- ATL.CW2CWEX<t_nBufferLength>
- ATL::CW2CWEX<t_nBufferLength>
dev_langs:
- C++
helpviewer_keywords:
- CW2CWEX class
ms.assetid: d654b22b-05a6-410f-a0ec-9a2cbbb4cca7
caps.latest.revision: 20
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: a85b67a58553dada36f4472ea0683e18bc775493
ms.lasthandoff: 02/24/2017

---
# <a name="cw2cwex-class"></a>Classe CW2CWEX
Questa classe viene utilizzata per le macro di conversione di stringhe `CW2CTEX` e `CT2CWEX`e il typedef `CW2W`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<int t_nBufferLength = 128>  
class CW2CWEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è 128 byte.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2CWEX::CW2CWEX](#cw2cwex)|Costruttore.|  
|[CW2CWEX:: ~ CW2CWEX](#dtor)|Distruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2CWEX::operator LPCWSTR](#operator_lpcwstr)|Operatore di conversione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2CWEX::m_psz](#m_psz)|Il membro dati che archivia la stringa di origine.|  
  
## <a name="remarks"></a>Note  
 A meno che non è necessaria la funzionalità aggiuntiva, utilizzare `CW2CTEX`, `CT2CWEX`, o `CW2W` nel codice.  
  
 Questa classe è sicura per l'uso nei cicli e non un overflow dello stack. Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  
  
 In questa classe si basano le seguenti macro:  
  
- `CW2CTEX`  
  
- `CT2CWEX`  
  
 La seguente dichiarazione typedef è basato sulla classe:  
  
- `CW2W`  
  
 Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="a-namecw2cwexa--cw2cwexcw2cwex"></a><a name="cw2cwex"></a>CW2CWEX::CW2CWEX  
 Costruttore.  
  
```
CW2CWEX(LPCWSTR psz, UINT nCodePage) throw(...);  
CW2CWEX(LPCWSTR psz) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa di testo da convertire.  
  
 `nCodePage`  
 La tabella codici. Non utilizzato in questa classe.  
  
### <a name="remarks"></a>Note  
 Consente di allocare il buffer utilizzato nel processo di conversione.  
  
##  <a name="a-namedtora--cw2cwexcw2cwex"></a><a name="dtor"></a>CW2CWEX:: ~ CW2CWEX  
 Distruttore.  
  
```
~CW2CWEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="a-namempsza--cw2cwexmpsz"></a><a name="m_psz"></a>CW2CWEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPCWSTR m_psz;
```  
  
##  <a name="a-nameoperatorlpcwstra--cw2cwexoperator-lpcwstr"></a><a name="operator_lpcwstr"></a>CW2CWEX::operator LPCWSTR  
 Operatore di conversione.  
  
```  
operator LPCWSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa di testo come tipo **LPCWSTR.**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

