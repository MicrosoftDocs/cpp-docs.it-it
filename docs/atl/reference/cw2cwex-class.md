---
title: Classe CW2CWEX | Documenti Microsoft
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
- ATLCONV/ATL::CW2CWEX
- ATLCONV/ATL::CW2CWEX::CW2CWEX
- ATLCONV/ATL::CW2CWEX::m_psz
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 5dca6b31cdd99582e727b634093c3548eef2ecc1
ms.lasthandoff: 03/31/2017

---
# <a name="cw2cwex-class"></a>Classe CW2CWEX
Questa classe viene utilizzata per le macro di conversione di stringhe `CW2CTEX` e `CT2CWEX`e typedef `CW2W`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<int t_nBufferLength = 128>  
class CW2CWEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di conversione. La lunghezza predefinita è di 128 byte.  
  
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
  
 Questa classe è possibile utilizzare nei cicli e non sarà un overflow dello stack. Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  
  
 Le macro seguenti sono basate su questa classe:  
  
- `CW2CTEX`  
  
- `CT2CWEX`  
  
 La seguente dichiarazione typedef è basato su questa classe:  
  
- `CW2W`  
  
 Per una discussione su queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="cw2cwex"></a>CW2CWEX::CW2CWEX  
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
  
##  <a name="dtor"></a>CW2CWEX:: ~ CW2CWEX  
 Distruttore.  
  
```
~CW2CWEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="m_psz"></a>CW2CWEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPCWSTR m_psz;
```  
  
##  <a name="operator_lpcwstr"></a>CW2CWEX::operator LPCWSTR  
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

