---
title: "Classe CA2WEX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATLCONV/CA2WEX"
  - "ATL.CA2WEX"
  - "ATL.CA2WEX<t_nBufferLength>"
  - "ATL::CA2WEX"
  - "ATL::CA2WEX<t_nBufferLength>"
  - "CA2WEX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CA2WEX (classe)"
ms.assetid: 317d9ffb-e84f-47e8-beda-57e28fb19124
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe CA2WEX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene utilizzata da macro per la conversione delle stringhe `CA2TEX`, `CA2CTEX`, `CT2WEX`e `CT2CWEX`e il typedef **CA2W**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
int t_nBufferLength= 128  
>  
class CA2WEX  
```  
  
#### Parametri  
 `t_nBufferLength`  
 La dimensione del buffer utilizzato nel processo di conversione.  La lunghezza predefinita è di 128 byte.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2WEX::CA2WEX](../Topic/CA2WEX::CA2WEX.md)|Costruttore.|  
|[CA2WEX::~CA2WEX](../Topic/CA2WEX::~CA2WEX.md)|Il distruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2WEX::operator LPWSTR](../Topic/CA2WEX::operator%20LPWSTR.md)|Operatore di conversione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CA2WEX::m\_psz](../Topic/CA2WEX::m_psz.md)|Il membro dati di memorizzare la stringa di origine.|  
|[CA2WEX::m\_szBuffer](../Topic/CA2WEX::m_szBuffer.md)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## Note  
 A meno che aggiuntivo la funzionalità sia necessaria, utilizzare `CA2TEX`, `CA2CTEX`, `CT2WEX`, `CT2CWEX`, o **CA2W** nel codice.  
  
 Questa classe contiene un buffer statico a dimensione fissa utilizzato per archiviare il risultato della conversione.  Se il risultato è troppo grande per inserire nel buffer statico, la classe alloca memoria utilizzando `malloc`, liberando memoria quando l'oggetto area di validità.  In questo modo, a differenza delle macro di conversione di testo disponibili nelle versioni precedenti di ATL, questa classe è protetta da utilizzare nei cicli e non supererà lo stack.  
  
 Se la classe tenta di allocare memoria nell'heap e i non riesce, chiamerà `AtlThrow` con un argomento **E\_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  Se si desidera eseguire l'override di questo comportamento per una specifica conversione, specificare la tabella codici come secondo parametro al costruttore per la classe.  
  
 Le macro seguenti sono basate su questa classe:  
  
-   `CA2TEX`  
  
-   `CA2CTEX`  
  
-   `CT2WEX`  
  
-   `CT2CWEX`  
  
 Il typedef seguente è basato sulla classe:  
  
-   **CA2W**  
  
 Per una descrizione di tali macro di conversione di testo, vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
## Esempio  
 Vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md) per un esempio di utilizzo di queste macro per la conversione delle stringhe.  
  
## Requisiti  
 **Header:** atlconv.h  
  
## Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CW2AEX](../../atl/reference/cw2aex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)