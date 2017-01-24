---
title: "Classe CW2AEX | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CW2AEX<t_nBufferLength>"
  - "CW2AEX"
  - "ATL.CW2AEX<t_nBufferLength>"
  - "ATL::CW2AEX"
  - "ATL.CW2AEX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CW2AEX (classe)"
ms.assetid: 44dc2cf5-dd30-440b-a9b9-b21b43f49843
caps.latest.revision: 21
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CW2AEX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene utilizzata da macro per la conversione delle stringhe `CT2AEX`, `CW2TEX`, `CW2CTEX`e `CT2CAEX`e il typedef **CW2A**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
int t_nBufferLength= 128  
>  
class CW2AEX  
```  
  
#### Parametri  
 `t_nBufferLength`  
 La dimensione del buffer utilizzato nel processo di conversione.  La lunghezza predefinita è di 128 byte.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2AEX::CW2AEX](../Topic/CW2AEX::CW2AEX.md)|Costruttore.|  
|[CW2AEX::~CW2AEX](../Topic/CW2AEX::~CW2AEX.md)|Il distruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2AEX::operator LPSTR](../Topic/CW2AEX::operator%20LPSTR.md)|Operatore di conversione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CW2AEX::m\_psz](../Topic/CW2AEX::m_psz.md)|Il membro dati di memorizzare la stringa di origine.|  
|[CW2AEX::m\_szBuffer](../Topic/CW2AEX::m_szBuffer.md)|Il buffer statico, utilizzato per archiviare la stringa convertita.|  
  
## Note  
 A meno che aggiuntivo la funzionalità sia necessaria, utilizzare `CT2AEX`, `CW2TEX`, `CW2CTEX`, `CT2CAEX`, o **CW2A** nel codice.  
  
 Questa classe contiene un buffer statico a dimensione fissa utilizzato per archiviare il risultato della conversione.  Se il risultato è troppo grande per inserire nel buffer statico, la classe alloca memoria utilizzando `malloc`, liberando memoria quando l'oggetto area di validità.  In questo modo, a differenza delle macro di conversione di testo disponibili nelle versioni precedenti di ATL, questa classe è protetta da utilizzare nei cicli e non supererà lo stack.  
  
 Se la classe tenta di allocare memoria nell'heap e i non riesce, chiamerà `AtlThrow` con un argomento **E\_OUTOFMEMORY**.  
  
 Per impostazione predefinita, le classi di conversione ATL e le macro utilizzano la tabella codici ANSI del thread corrente per la conversione.  Se si desidera eseguire l'override di questo comportamento per una specifica conversione, specificare la tabella codici come secondo parametro al costruttore per la classe.  
  
 Le macro seguenti sono basate su questa classe:  
  
-   `CT2AEX`  
  
-   `CW2TEX`  
  
-   `CW2CTEX`  
  
-   `CT2CAEX`  
  
 Il typedef seguente è basato sulla classe:  
  
-   **CW2A**  
  
 Per una descrizione di tali macro di conversione di testo, vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
## Esempio  
 Vedere [Macro per la conversione delle stringhe MFC e ATL](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md) per un esempio di utilizzo di queste macro per la conversione delle stringhe.  
  
## Requisiti  
 **Header:** atlconv.h  
  
## Vedere anche  
 [Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
 [Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
 [Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
 [Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
 [Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)