---
title: Classe CW2WEX | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CW2WEX
- ATL.CW2WEX<t_nBufferLength>
- ATL::CW2WEX
- ATL.CW2WEX
- ATL::CW2WEX<t_nBufferLength>
dev_langs:
- C++
helpviewer_keywords:
- CW2WEX class
ms.assetid: 46262e56-e0d2-41fe-855b-0b67ecc8fcd7
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 9382f8404c1469b3f847500f35ab26499b6579bc
ms.lasthandoff: 02/24/2017

---
# <a name="cw2wex-class"></a>Classe CW2WEX
Questa classe viene utilizzata per le macro di conversione di stringhe `CW2TEX` e `CT2WEX`e il typedef `CW2W`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <int t_nBufferLength = 128>  
class CW2WEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è 128 byte.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2WEX::CW2WEX](#cw2wex)|Costruttore.|  
|[CW2WEX:: ~ CW2WEX](#dtor)|Distruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2WEX::operator LPWSTR](#operator_lpwstr)|Operatore di conversione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2WEX::m_psz](#m_psz)|Il membro dati che archivia la stringa di origine.|  
|[CW2WEX::m_szBuffer](#m_szbuffer)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## <a name="remarks"></a>Note  
 A meno che non è necessaria la funzionalità aggiuntiva, utilizzare `CW2TEX`, `CT2WEX`, o `CW2W` nel codice.  
  
 Questa classe contiene un buffer statico di dimensione fissa viene utilizzato per archiviare il risultato della conversione. Se il risultato è troppo grande per il buffer statico, la classe alloca memoria con `malloc`, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza del testo macro di conversione disponibili nelle versioni precedenti di ATL, questa classe è sicura per l'uso nei cicli e che non sarà un overflow dello stack.  
  
 Se la classe tenta di allocare memoria nell'heap di ha esito negativo, verrà eseguita una chiamata `AtlThrow` con un argomento di **E_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  
  
 In questa classe si basano le seguenti macro:  
  
- `CW2TEX`  
  
- `CT2WEX`  
  
 La seguente dichiarazione typedef è basato sulla classe:  
  
- `CW2W`  
  
 Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="a-namecw2wexa--cw2wexcw2wex"></a><a name="cw2wex"></a>CW2WEX::CW2WEX  
 Costruttore.  
  
```
CW2WEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2WEX( LPCWSTR  psz) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa di testo da convertire.  
  
 `nCodePage`  
 La tabella codici. Non utilizzato in questa classe.  
  
### <a name="remarks"></a>Note  
 Crea il buffer necessaria per la traduzione.  
  
##  <a name="a-namedtora--cw2wexcw2wex"></a><a name="dtor"></a>CW2WEX:: ~ CW2WEX  
 Il distruttore.  
  
```
~CW2WEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="a-namempsza--cw2wexmpsz"></a><a name="m_psz"></a>CW2WEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPWSTR m_psz;
```  
  
##  <a name="a-namemszbuffera--cw2wexmszbuffer"></a><a name="m_szbuffer"></a>CW2WEX::m_szBuffer  
 Il buffer statico, utilizzato per archiviare la stringa convertita.  
  
```
wchar_t m_szBuffer[t_nBufferLength];
```  
  
##  <a name="a-nameoperatorlpwstra--cw2wexoperator-lpwstr"></a><a name="operator_lpwstr"></a>CW2WEX::operator LPWSTR  
 Operatore di cast.  
  
```  
operator LPWSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa di testo come tipo `LPWSTR`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

