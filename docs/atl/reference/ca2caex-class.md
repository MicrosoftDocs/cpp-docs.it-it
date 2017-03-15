---
title: Classe CA2CAEX | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CA2CAEX
- ATL.CA2CAEX<t_nBufferLength>
- ATLCONV/CA2CAEX
- ATL::CA2CAEX<t_nBufferLength>
- ATL::CA2CAEX
- CA2CAEX
dev_langs:
- C++
helpviewer_keywords:
- CA2CAEX class
ms.assetid: 388e7c1d-a144-474c-a182-b15f69a74bd8
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: f104a62144e7fd8ac802c27dfe940a7f96d0e79a
ms.lasthandoff: 02/24/2017

---
# <a name="ca2caex-class"></a>Classe CA2CAEX
Questa classe viene utilizzata da macro di conversione di stringhe `CA2CTEX` e `CT2CAEX`e il typedef **CA2CA**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<int t_nBufferLength = 128>  
class CA2CAEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è 128 byte.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2CAEX::CA2CAEX](#ca2caex)|Costruttore.|  
|[CA2CAEX:: ~ CA2CAEX](#dtor)|Distruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2CAEX::operator LPCSTR](#operator_lpcstr)|Operatore di conversione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2CAEX::m_psz](#m_psz)|Il membro dati che archivia la stringa di origine.|  
  
## <a name="remarks"></a>Note  
 A meno che non è necessaria la funzionalità aggiuntiva, utilizzare `CA2CTEX`, `CT2CAEX`, o **CA2CA** nel codice.  
  
 Questa classe è sicura per l'uso nei cicli e non un overflow dello stack. Per impostazione predefinita, le classi e le macro di conversione ATL useranno la tabella codici ANSI del thread corrente per la conversione.  
  
 In questa classe si basano le seguenti macro:  
  
- `CA2CTEX`  
  
- `CT2CAEX`  
  
 La seguente dichiarazione typedef è basato sulla classe:  
  
- **CA2CA**  
  
 Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="a-nameca2caexa--ca2caexca2caex"></a><a name="ca2caex"></a>CA2CAEX::CA2CAEX  
 Costruttore.  
  
```
CA2CAEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2CAEX(LPCSTR psz) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa di testo da convertire.  
  
 `nCodePage`  
 Non utilizzato in questa classe.  
  
### <a name="remarks"></a>Note  
 Crea il buffer necessaria per la traduzione.  
  
##  <a name="a-namedtora--ca2caexca2caex"></a><a name="dtor"></a>CA2CAEX:: ~ CA2CAEX  
 Distruttore.  
  
```
~CA2CAEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="a-namempsza--ca2caexmpsz"></a><a name="m_psz"></a>CA2CAEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPCSTR m_psz;
```  
  
##  <a name="a-nameoperatorlpcstra--ca2caexoperator-lpcstr"></a><a name="operator_lpcstr"></a>CA2CAEX::operator LPCSTR  
 Operatore di conversione.  
  
```  
operator LPCSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa di testo come tipo `LPCSTR`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

