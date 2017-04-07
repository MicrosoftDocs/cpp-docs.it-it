---
title: Classe CA2CAEX | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CA2CAEX
- ATLCONV/ATL::CA2CAEX
- ATLCONV/ATL::CA2CAEX::CA2CAEX
- ATLCONV/ATL::CA2CAEX::m_psz
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 9185bc18981898d699aa3f3eeb490c76bf5138fb
ms.lasthandoff: 03/31/2017

---
# <a name="ca2caex-class"></a>Classe CA2CAEX
Questa classe è utilizzata dalla macro di conversione di stringhe `CA2CTEX` e `CT2CAEX`e typedef **CA2CA**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<int t_nBufferLength = 128>  
class CA2CAEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di conversione. La lunghezza predefinita è di 128 byte.  
  
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
  
 Questa classe è possibile utilizzare nei cicli e non sarà un overflow dello stack. Per impostazione predefinita, le classi e le macro di conversione ATL useranno la tabella codici ANSI del thread corrente per la conversione.  
  
 Le macro seguenti sono basate su questa classe:  
  
- `CA2CTEX`  
  
- `CT2CAEX`  
  
 La seguente dichiarazione typedef è basato su questa classe:  
  
- **CA2CA**  
  
 Per una discussione su queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="ca2caex"></a>CA2CAEX::CA2CAEX  
 Costruttore.  
  
```
CA2CAEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2CAEX(LPCSTR psz) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa di testo da convertire.  
  
 `nCodePage`  
 Non utilizzata per questa classe.  
  
### <a name="remarks"></a>Note  
 Crea il buffer necessario per la traduzione.  
  
##  <a name="dtor"></a>CA2CAEX:: ~ CA2CAEX  
 Distruttore.  
  
```
~CA2CAEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="m_psz"></a>CA2CAEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPCSTR m_psz;
```  
  
##  <a name="operator_lpcstr"></a>CA2CAEX::operator LPCSTR  
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

