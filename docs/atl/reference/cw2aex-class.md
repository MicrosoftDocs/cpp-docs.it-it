---
title: Classe CW2AEX | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CW2AEX<t_nBufferLength>
- CW2AEX
- ATL.CW2AEX<t_nBufferLength>
- ATL::CW2AEX
- ATL.CW2AEX
dev_langs:
- C++
helpviewer_keywords:
- CW2AEX class
ms.assetid: 44dc2cf5-dd30-440b-a9b9-b21b43f49843
caps.latest.revision: 21
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
ms.openlocfilehash: 8bf433224396f54b81fb5310ec29dfed213c6855
ms.lasthandoff: 02/24/2017

---
# <a name="cw2aex-class"></a>Classe CW2AEX
Questa classe viene utilizzata per le macro di conversione di stringhe `CT2AEX`, `CW2TEX`, `CW2CTEX`, e `CT2CAEX`e il typedef **CW2A**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<int t_nBufferLength = 128>  
class CW2AEX
```  
  
#### <a name="parameters"></a>Parametri  
 `t_nBufferLength`  
 Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è 128 byte.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2AEX::CW2AEX](#cw2aex)|Costruttore.|  
|[CW2AEX:: ~ CW2AEX](#dtor)|Distruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2AEX::operator LPSTR](#operator_lpstr)|Operatore di conversione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2AEX::m_psz](#m_psz)|Il membro dati che archivia la stringa di origine.|  
|[CW2AEX::m_szBuffer](#m_szbuffer)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## <a name="remarks"></a>Note  
 A meno che non è necessaria la funzionalità aggiuntiva, utilizzare `CT2AEX`, `CW2TEX`, `CW2CTEX`, `CT2CAEX`, o **CW2A** nel codice.  
  
 Questa classe contiene un buffer statico di dimensione fissa viene utilizzato per archiviare il risultato della conversione. Se il risultato è troppo grande per il buffer statico, la classe alloca memoria con `malloc`, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza del testo macro di conversione disponibili nelle versioni precedenti di ATL, questa classe è sicura per l'uso nei cicli e che non sarà un overflow dello stack.  
  
 Se la classe tenta di allocare memoria nell'heap di ha esito negativo, verrà eseguita una chiamata `AtlThrow` con un argomento di **E_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione. Se si desidera ignorare il comportamento per una conversione specifica, specificare la tabella codici come secondo parametro per il costruttore della classe.  
  
 In questa classe si basano le seguenti macro:  
  
- `CT2AEX`  
  
- `CW2TEX`  
  
- `CW2CTEX`  
  
- `CT2CAEX`  
  
 La seguente dichiarazione typedef è basato sulla classe:  
  
- **CW2A**  
  
 Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## <a name="example"></a>Esempio  
 Vedere [macro di conversione di stringhe MFC e ATL](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) per un esempio dell'utilizzo di queste macro di conversione di stringhe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlconv. h  
  
##  <a name="a-namecw2aexa--cw2aexcw2aex"></a><a name="cw2aex"></a>CW2AEX::CW2AEX  
 Costruttore.  
  
```
CW2AEX(LPCWSTR psz, UINT nCodePage) throw(...);  
CW2AEX(LPCWSTR psz) throw(...);
```  
  
### <a name="parameters"></a>Parametri  
 `psz`  
 La stringa di testo da convertire.  
  
 `nCodePage`  
 La tabella codici utilizzata per eseguire la conversione. Vedere la descrizione del parametro pagina codice per il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] funzione [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072) per ulteriori dettagli.  
  
### <a name="remarks"></a>Note  
 Consente di allocare il buffer utilizzato nel processo di conversione.  
  
##  <a name="a-namedtora--cw2aexcw2aex"></a><a name="dtor"></a>CW2AEX:: ~ CW2AEX  
 Distruttore.  
  
```
~CW2AEX() throw();
```  
  
### <a name="remarks"></a>Note  
 Consente di liberare il buffer allocato.  
  
##  <a name="a-namempsza--cw2aexmpsz"></a><a name="m_psz"></a>CW2AEX::m_psz  
 Il membro dati che archivia la stringa di origine.  
  
```
LPSTR m_psz;
```  
  
##  <a name="a-namemszbuffera--cw2aexmszbuffer"></a><a name="m_szbuffer"></a>CW2AEX::m_szBuffer  
 Il buffer statico, utilizzato per archiviare la stringa convertita.  
  
```
char m_szBuffer[t_nBufferLength];
```  
  
##  <a name="a-nameoperatorlpstra--cw2aexoperator-lpstr"></a><a name="operator_lpstr"></a>CW2AEX::operator LPSTR  
 Operatore di conversione.  
  
```  
operator LPSTR() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la stringa di testo come tipo **LPSTR.**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

