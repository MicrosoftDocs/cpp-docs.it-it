---
title: Classe CA2AEX | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CA2AEX
- ATLCONV/ATL::CA2AEX
- ATLCONV/ATL::CA2AEX::CA2AEX
- ATLCONV/ATL::CA2AEX::m_psz
- ATLCONV/ATL::CA2AEX::m_szBuffer
dev_langs:
- C++
helpviewer_keywords:
- CA2AEX class
ms.assetid: 57dc65df-d9cf-4a84-99d3-6e031dde3664
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
ms.openlocfilehash: 65637b63cf23d2e7433b575e95d3f53a53ed76a1
ms.lasthandoff: 02/24/2017

---
# <a name="ca2aex-class"></a>Classe CA2AEX
Questa classe viene utilizzata per le macro di conversione di stringhe `CA2TEX` e `CT2AEX`e il typedef **CA2A**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <int t_nBufferLength = 128>
class CA2AEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è 128 byte.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2AEX::CA2AEX](#ca2aex)|Costruttore.|  
|[CA2AEX:: ~ CA2AEX](#dtor)|Distruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2AEX::operator LPSTR](#operator_lpstr)|Operatore di conversione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2AEX::m_psz](#m_psz)|Il membro dati che archivia la stringa di origine.|  
|[CA2AEX::m_szBuffer](#m_szbuffer)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## <a name="remarks"></a>Note  
 A meno che non è necessaria la funzionalità aggiuntiva, utilizzare `CA2TEX`, `CT2AEX`, o **CA2A** nel codice.  
  
 Questa classe contiene un buffer statico di dimensione fissa viene utilizzato per archiviare il risultato della conversione. Se il risultato è troppo grande per il buffer statico, la classe alloca memoria con `malloc`, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza del testo macro di conversione disponibili nelle versioni precedenti di ATL, questa classe è sicura per l'uso nei cicli e che non sarà un overflow dello stack.  
  
 Se la classe tenta di allocare memoria nell'heap di ha esito negativo, verrà eseguita una chiamata `AtlThrow` con un argomento di **E_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  
  
 In questa classe si basano le seguenti macro:  
  
- `CA2TEX`  
  
- `CT2AEX`  
  
 La seguente dichiarazione typedef è basato sulla classe:  
  
- **CA2A**  
  
 Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="ca2aex"></a>CA2AEX::CA2AEX  
 Costruttore.  
  
```
CA2AEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2AEX(LPCSTR psz) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa di testo da convertire.  
  
 `nCodePage`  
 Non utilizzato in questa classe.  
  
### <a name="remarks"></a>Note  
 Crea il buffer necessaria per la traduzione.  
  
##  <a name="dtor"></a>CA2AEX:: ~ CA2AEX  
 Distruttore.  
  
```
~CA2AEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="m_psz"></a>CA2AEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPSTR m_psz;
```  
  
##  <a name="m_szbuffer"></a>CA2AEX::m_szBuffer  
 Il buffer statico, utilizzato per archiviare la stringa convertita.  
  
```
char m_szBuffer[ t_nBufferLength];
```  
  
##  <a name="operator_lpstr"></a>CA2AEX::operator LPSTR  
 Operatore di conversione.  
  
```
operator LPSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa di testo come tipo **LPSTR**.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
