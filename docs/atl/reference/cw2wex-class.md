---
title: "Classe CW2WEX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CW2WEX"
  - "ATL.CW2WEX<t_nBufferLength>"
  - "ATL::CW2WEX"
  - "ATL.CW2WEX"
  - "ATL::CW2WEX<t_nBufferLength>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CW2WEX (classe)"
ms.assetid: 46262e56-e0d2-41fe-855b-0b67ecc8fcd7
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe CW2WEX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene utilizzata da macro per la conversione delle stringhe `CW2TEX` e `CT2WEX`e dal typedef `CW2W`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
int t_nBufferLength= 128  
>  
class CW2WEX  
```  
  
#### Parametri  
 `t_nBufferLength`  
 La dimensione del buffer utilizzato nel processo di conversione.  La lunghezza predefinita è di 128 byte.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2WEX::CW2WEX](../Topic/CW2WEX::CW2WEX.md)|Costruttore.|  
|[CW2WEX::~CW2WEX](../Topic/CW2WEX::~CW2WEX.md)|Il distruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2WEX::operator LPWSTR](../Topic/CW2WEX::operator%20LPWSTR.md)|Operatore di conversione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2WEX::m\_psz](../Topic/CW2WEX::m_psz.md)|Il membro dati di memorizzare la stringa di origine.|  
|[CW2WEX::m\_szBuffer](../Topic/CW2WEX::m_szBuffer.md)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## Note  
 A meno che aggiuntivo la funzionalità sia necessaria, utilizzare `CW2TEX`, `CT2WEX`, o `CW2W` nel codice.  
  
 Questa classe contiene un buffer statico a dimensione fissa utilizzato per archiviare il risultato della conversione.  Se il risultato è troppo grande per inserire nel buffer statico, la classe alloca memoria utilizzando `malloc`, liberando memoria quando l'oggetto area di validità.  In questo modo, a differenza delle macro di conversione di testo disponibili nelle versioni precedenti di ATL, questa classe è protetta da utilizzare nei cicli e non supererà lo stack.  
  
 Se la classe tenta di allocare memoria nell'heap e i non riesce, chiamerà `AtlThrow` con un argomento **E\_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  
  
 Le macro seguenti sono basate su questa classe:  
  
-   `CW2TEX`  
  
-   `CT2WEX`  
  
 Il typedef seguente è basato sulla classe:  
  
-   `CW2W`  
  
 Per una descrizione di tali macro di conversione di testo, vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
## Esempio  
 Vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md) per un esempio di utilizzo di queste macro per la conversione delle stringhe.  
  
## Requisiti  
 **Header:** atlconv.h  
  
## Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)