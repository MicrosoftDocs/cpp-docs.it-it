---
title: "Classe CA2AEX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CA2AEX<t_nBufferLength>"
  - "CA2AEX"
  - "ATL.CA2AEX<t_nBufferLength>"
  - "ATLCONV/CA2AEX"
  - "ATL.CA2AEX"
  - "ATL::CA2AEX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CA2AEX (classe)"
ms.assetid: 57dc65df-d9cf-4a84-99d3-6e031dde3664
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe CA2AEX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene utilizzata da macro per la conversione delle stringhe `CA2TEX` e `CT2AEX`e dal typedef **CA2A**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
int t_nBufferLength= 128  
>  
class CA2AEX  
```  
  
#### Parametri  
 `t_nBufferLength`  
 La dimensione del buffer utilizzato nel processo di conversione.  La lunghezza predefinita è di 128 byte.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2AEX::CA2AEX](../Topic/CA2AEX::CA2AEX.md)|Costruttore.|  
|[CA2AEX::~CA2AEX](../Topic/CA2AEX::~CA2AEX.md)|Il distruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2AEX::operator LPSTR](../Topic/CA2AEX::operator%20LPSTR.md)|Operatore di conversione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2AEX::m\_psz](../Topic/CA2AEX::m_psz.md)|Il membro dati di memorizzare la stringa di origine.|  
|[CA2AEX::m\_szBuffer](../Topic/CA2AEX::m_szBuffer.md)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## Note  
 A meno che aggiuntivo la funzionalità sia necessaria, utilizzare `CA2TEX`, `CT2AEX`, o **CA2A** nel codice.  
  
 Questa classe contiene un buffer statico a dimensione fissa utilizzato per archiviare il risultato della conversione.  Se il risultato è troppo grande per inserire nel buffer statico, la classe alloca memoria utilizzando `malloc`, liberando memoria quando l'oggetto area di validità.  In questo modo, a differenza delle macro di conversione di testo disponibili nelle versioni precedenti di ATL, questa classe è protetta da utilizzare nei cicli e non supererà lo stack.  
  
 Se la classe tenta di allocare memoria nell'heap e i non riesce, chiamerà `AtlThrow` con un argomento **E\_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  
  
 Le macro seguenti sono basate su questa classe:  
  
-   `CA2TEX`  
  
-   `CT2AEX`  
  
 Il typedef seguente è basato sulla classe:  
  
-   **CA2A**  
  
 Per una descrizione di tali macro di conversione di testo, vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
## Esempio  
 Vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md) per un esempio di utilizzo di queste macro per la conversione delle stringhe.  
  
## Requisiti  
 **Header:** atlconv.h  
  
## Vedere anche  
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)